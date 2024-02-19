package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxRandom;
import flixel.text.FlxText;

class PlayState extends FlxState
{
	private var bg:FlxSprite;

	private var maxBgFlakes:Int;
	private var bgFlakeCount:Int;

	private var bgFlakes:FlxTypedGroup<BGFlake>;

	private var random:FlxRandom;

	private var flakes:FlxTypedGroup<Flake>;

	private var flakeCooldown:Int;
	private var flakeCooldownSet:Int;

	private var hud:HUD;

	private var targetFlake:Flake;

	private var elapsedCount:Float;

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

	private var spawnedTarget:Bool = false;

	override public function create()
	{
		// BG is 672 x 384 - 800% scaling of required dimensions (84x48)
		bg = new FlxSprite(0, 0).loadGraphic(AssetPaths.bigbginverted__png, false, 672, 384);
		add(bg);

		bgFlakes = new FlxTypedGroup<BGFlake>();
		add(bgFlakes);

		flakes = new FlxTypedGroup<Flake>();
		add(flakes);

		maxBgFlakes = 10;
		bgFlakeCount = 0;

		random = new FlxRandom();

		targetFlake = new Flake();
		selector = new Selector();
		hud = new HUD(selector, targetFlake);
		add(hud);
		add(selector);

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

		flakes.add(new Flake());

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
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
		&& checkGenetics(targetFlake.getGenetics(), selector.getSelectedFlake().getGenetics())) {
			trace("HIT");
			moveSelector("up");
			newTarget();
			score += 1;
			scoreText.text = 'Score: $score';
		} else if (e) {
			life -= 1;
			lifeText.text = 'LIFE: $life';
		}
		
		hud.updateCharacteristicBox(targetFlake, selector.getSelectedFlake());

		elapsedCount += elapsed;

		if (elapsedCount > 1) {

			var spawnTarget:Int = random.int(0, 8);
			if (!spawnedTarget && spawnTarget == 4) {
				flakes.add(targetFlake);
				spawnedTarget = true;
				trace("ADDING TARGET NOW!");
			} else {
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


		if (bgFlakeCount < maxBgFlakes)
		{
			bgFlakeCount++;
			bgFlakes.add(new BGFlake(this, random.int(22, 61) * Main.SCALE, -1 * random.int(0, 60) * Main.SCALE));
		}

		for (flake in flakes) {
			flake.updateFlake(elapsed);
			//trace(flakes.length);
			if (flake.getBelowScreen() == true) {
				if (checkGenetics(flake.getGenetics(), targetFlake.getGenetics())) {
					trace("NEGATIVE!!!");
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

	public function decreaseBGFlakes()
	{
		bgFlakeCount--;
	}

	private function moveSelector(direction:String) {
		//trace("MOVE SELECTOR ", direction);

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

	private function checkGenetics(target:Array<Int>, selected:Array<Int>) {
		//trace(target, selected);
		for (i in 0...target.length) {
			if (target[i] != selected[i]) return false;
		}
		return true;
	}
}
