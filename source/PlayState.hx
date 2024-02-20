package;

import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxRandom;
import flixel.text.FlxText;

class PlayState extends FlakeState
{
	private var bg:FlxSprite;

	//private var maxBgFlakes:Int;
	//private var bgFlakeCount:Int;

	//private var bgFlakes:FlxTypedGroup<BGFlake>;

	private var random:FlxRandom;

	private var flakes:FlxTypedGroup<Flake>;

	private var flakeCooldown:Int;
	private var flakeCooldownSet:Int;

	private var hud:HUD;

	private var targetFlake:Flake;

	private var elapsedCount:Float;
	private var elapsedLimit:Float;

	private var selector:Selector;

	private var up:Bool = false;
    private var down:Bool = false;
    private var left:Bool = false;
    private var right:Bool = false;
	private var e:Bool = false;

	private var score:Int;
	private var scoreText:FlxText;

	private var life:Int;
	private var lifeText:FlxText;

	private var gameOver:Bool;
	private var gameOverSprite:FlxSprite;

	private var spawnedTarget:Bool = false;
	private var elapsedSinceTargetSpawn:Int;

	override public function create()
	{
		Main.defineSounds();
		// BG is 672 x 384 - 800% scaling of required dimensions (84x48)
		bg = new FlxSprite(0, 0).loadGraphic(AssetPaths.bigbginverted__png, false, 672, 384);
		add(bg);

		gameOverSprite = new FlxSprite(0, 0).loadGraphic(AssetPaths.gameover__png, false, 672, 384);

		elapsedLimit = 1.5;

		bgFlakes = new FlxTypedGroup<BGFlake>();
		add(bgFlakes);

		flakes = new FlxTypedGroup<Flake>();
		add(flakes);

		maxBgFlakes = 16;
		bgFlakeCount = 0;

		random = new FlxRandom();

		targetFlake = new Flake();
		selector = new Selector();
		hud = new HUD(selector, targetFlake);
		add(selector);
		add(hud);

		hud.displayTargetFlake(targetFlake);

		elapsedCount = 0;

		score = 0;
		scoreText = new FlxText(8, 8, 160, 'SCORE: $score', 16, true);
		scoreText.color = Main.TEXT_COLOR;
		add(scoreText);

		life = 3;
		lifeText = new FlxText(8, 32, 160, 'LIFE: $life', 16, true);
		lifeText.color = Main.TEXT_COLOR;
		add(lifeText);

		var firstFlake:Flake = new Flake();
		flakes.add(firstFlake);
		selector.setSelectedFlake(firstFlake);
		hud.displaySelectedFlake(selector.getSelectedFlake());

		elapsedSinceTargetSpawn = 0;

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		
		if (life <= 0 && !gameOver) {
			gameOver = true;
			add(gameOverSprite);
		}

		if (bgFlakeCount < maxBgFlakes)
		{
			bgFlakeCount++;
			//bgFlakes.add(new BGFlake(this, random.int(22, 61) * Main.SCALE, -1 * random.int(0, 60) * Main.SCALE));
			bgFlakes.add(new BGFlake(this, random.int(0, 83) * Main.SCALE, -1 * random.int(0, 60) * Main.SCALE));
		}

		if (gameOver) {
			if (FlxG.keys.justPressed.LEFT) FlxG.switchState(new Menu());
			if (FlxG.keys.justPressed.RIGHT) FlxG.switchState(new PlayState());
			return;
		}
		//trace(elapsed, elapsedCount);

		manageInput();

		// if (flakes.length == 1) {
		// 	flakes.add(new Flake());
		// }

		e = FlxG.keys.justPressed.SPACE;

		/*if (e) {
			trace(selector.getSelectedFlake().getGenetics(), " | ", targetFlake.getGenetics(), " | ", selector.getSelectedFlake().getGenetics() == targetFlake.getGenetics(), " | ");

		}*/

		if (selector.getSelectedFlake() != null 
		&& targetFlake != null 
		&& e 
		&& checkGenetics(targetFlake.getGenetics(), selector.getSelectedFlake().getGenetics(), true)) {
			Main.hitSound.play();
			trace("HIT");
			moveSelector("up");
			newTarget();
			score += 1;
			var loveQuip:Int = random.int(0, 4);
			scoreText.text = 'SCORE: $score';
		} else if (e) {
			Main.missSound.play();
			life -= 1;
			lifeText.text = 'LIFE: $life';
		}
		
		hud.updateCharacteristicBox(targetFlake, selector.getSelectedFlake());

		elapsedCount += elapsed;

		if (score > 3) elapsedLimit = 1.2;
		if (score > 6) elapsedLimit = 1;
		if (score > 9) elapsedLimit = 0.8;
		if (score > 12) elapsedLimit = 0.5;
		if (score > 15) elapsedLimit = 0.2;

		if (elapsedCount > elapsedLimit) {
			trace("HERE");
			// use this to change difficulty
			var spawnTarget:Int = random.int(0, 4);
			if (elapsedSinceTargetSpawn >= 5) {
				spawnTarget = 4;
				elapsedSinceTargetSpawn = 0;
			}
			if (!spawnedTarget && spawnTarget == 4) {
				flakes.add(targetFlake);
				spawnedTarget = true;
				trace("ADDING TARGET NOW!");

				if (!selector.getOnFlake()) {
					selector.setSelectedFlake(targetFlake);
					hud.displaySelectedFlake(selector.getSelectedFlake());
				}
			} else {
				elapsedSinceTargetSpawn += 1;
				var tempFlake:Flake = new Flake();

				if (!selector.getOnFlake()) {
					selector.setSelectedFlake(tempFlake);
					hud.displaySelectedFlake(selector.getSelectedFlake());
				}

				flakes.add(tempFlake);
			}
			elapsedCount = 0;
		}
		//flakeCooldown--;

		for (flake in flakes) {
			flake.updateFlake(elapsed);
			//trace(flakes.length);
			if (flake.getBelowScreen() == true) {
				if (checkGenetics(flake.getGenetics(), targetFlake.getGenetics())) {
					trace("NEGATIVE!!!");
					Main.missSound.play();
					life -= 1;
					lifeText.text = 'LIFE: $life';
					newTarget();
				}
				flakes.remove(flake, true);
				//trace('removed -> ', flakes.length);
			}
		}

		if (selector.y > 48 * Main.SCALE) moveSelector("up");
	}

	private function newTarget() {
		spawnedTarget = false;
		flakes.remove(targetFlake);
		targetFlake = new Flake();
		hud.displayTargetFlake(targetFlake);
	}

	private function manageInput() {
		up = FlxG.keys.justPressed.UP;
		down = FlxG.keys.justPressed.DOWN;
		left = FlxG.keys.justPressed.LEFT;
		right = FlxG.keys.justPressed.RIGHT;

		if (up) moveSelector("up");
		if (down) moveSelector("down");
		if (left) moveSelector("left");
		if (right) moveSelector("right");
	}

	private function moveSelector(direction:String) {
		//trace("MOVE SELECTOR ", direction);
		trace("PLAYING");
		Main.moveSound.play(true);

		if (flakes.length > 1) {
			var selectedFlake:Flake = selector.getSelectedFlake();
			var closestFlake:Flake = null;
			var closestDistance:Float = Math.POSITIVE_INFINITY;

			var found:Bool = false;

			//trace('entering loop');
			for (flake in flakes) {
				var validCheck:Bool = false;

				validCheck = (direction == "up" && flake.getY() < selectedFlake.getY()) || 
					(direction == "down" && flake.getY() > selectedFlake.getY()) ||
					(direction == "left" && flake.getX() < selectedFlake.getX()) || 
					(direction == "right" && flake.getX() > selectedFlake.getX());

				if (validCheck) {
					//trace('valid Check!');

					// var distance:Float = Math.POSITIVE_INFINITY;
					// if (direction == "up" || direction == "down") distance = Math.abs(flake.getY() - selectedFlake.getY());
					// if (direction == "right" || direction == "left") distance = Math.abs(flake.getX() - selectedFlake.getX());

					var distance:Float = Math.sqrt(Math.pow((flake.getX() - selectedFlake.getX()), 2) + Math.pow((flake.getY() - selectedFlake.getY()), 2));
					if (distance < closestDistance) {
						closestFlake = flake; 
						closestDistance = distance;
					}

					found = true;
				} else continue;
			}

			if (found) {
				//trace('found valid sprite at ', closestFlake.getX(), closestFlake.getY()); 
				selector.setSelectedFlake(closestFlake);
				hud.displaySelectedFlake(selector.getSelectedFlake());
			}
		}
	}

	private function checkGenetics(target:Array<Int>, selected:Array<Int>, ?onPlayerCheck:Bool=false) {
		//trace(target, selected);
		for (i in 0...target.length) {
			if (target[i] != selected[i]) {
				if (onPlayerCheck) {
					Main.missSound.play();
					if (i == 0 || i == 1) hud.addQuipBubble("2");
					else if (target[i] < selected[i]) hud.addQuipBubble("1");
					else if (target[i] > selected[i]) hud.addQuipBubble("0");
				}
				return false;
			}
		}
		return true;
	}

}
