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
	private var flakeCount:Int;

	private var bgFlakes:FlxTypedGroup<BGFlake>;

	private var random:FlxRandom;

	private var flakes:FlxTypedGroup<Flake>;

	private var flakeCooldown:Int;
	private var flakeCooldownSet:Int;

	private var hud:HUD;

	private var targetFlake:Array<Int>;

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
		flakeCount = 0;

		random = new FlxRandom();

		flakes.add(new Flake());

		flakeCooldown = flakeCooldownSet = 20;

		hud = new HUD();
		add(hud);

		//targetFlake == [1, 1];
		hud.displayTargetFlake(1, 1);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		trace(bgFlakes.length);

		if (flakeCooldown <= 0) {
			flakeCooldown = flakeCooldownSet;
			flakes.add(new Flake());
		}
		flakeCooldown--;

		if (flakeCount < maxBgFlakes)
		{
			flakeCount++;
			bgFlakes.add(new BGFlake(this, random.int(0, 84) * Main.SCALE, -1 * random.int(0, 60) * Main.SCALE));
		}

		for (flake in flakes) {
			flake.updateFlake();
		}
	}

	// private function removeDeadBGFlakes()
	// {
	// 	trace('list: ', bgFlakes);
	// 	for (i in bgFlakes.length - 1...0)
	// 	{
	// 		var tempFlake:BGFlake = bgFlakes.members[i];
	// 		trace(tempFlake);
	// 		trace(tempFlake.pretty_print());
	// 		if (!tempFlake.exists)
	// 		{
	// 			bgFlakes.remove(tempFlake, true);
	// 		}
	// 	}
	// }

	public function decreaseBGFlakes()
	{
		flakeCount--;
	}
}
