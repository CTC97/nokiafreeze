package;

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

	private var targetFlake:Array<Int>;

	private var elapsedCount:Float;

	private var selector:Selector;

	override public function create()
	{
		// BG is 672 x 384 - 800% scaling of required dimensions (84x48)
		bg = new FlxSprite(0, 0).loadGraphic(AssetPaths.bigbginverted__png, false, 672, 384);
		add(bg);

		bgFlakes = new FlxTypedGroup<BGFlake>();
		add(bgFlakes);

		flakes = new FlxTypedGroup<Flake>();
		add(flakes);

		maxBgFlakes = 32;
		bgFlakeCount = 0;

		random = new FlxRandom();

		selector = new Selector();
		hud = new HUD(selector);
		add(hud);
		add(selector);

		hud.displayTargetFlake(1, 1);

		elapsedCount = 0;

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		trace(elapsed, elapsedCount);

		elapsedCount += elapsed;

		if (elapsedCount > 1) {
			var tempFlake:Flake = new Flake();
			selector.setSelectedFlake(tempFlake);
			hud.displaySelectedFlake(selector.getSelectedFlake().getSprites()[0], selector.getSelectedFlake().getSprites()[1]);
			flakes.add(tempFlake);
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
				flakes.remove(flake, true);
				//trace('removed -> ', flakes.length);
			}
		}
	}

	public function decreaseBGFlakes()
	{
		bgFlakeCount--;
	}
}
