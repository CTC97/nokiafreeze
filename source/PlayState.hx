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

	override public function create()
	{
		// BG is 672 x 384 - 800% scaling of required dimensions (84x48)
		bg = new FlxSprite(0, 0).loadGraphic(AssetPaths.bigbg__png, false, 672, 384);
		add(bg);

		maxBgFlakes = 64;
		flakeCount = 0;

		bgFlakes = new FlxTypedGroup<BGFlake>();
		add(bgFlakes);

		random = new FlxRandom();

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		trace(bgFlakes.length);

		if (flakeCount < maxBgFlakes)
		{
			flakeCount++;
			bgFlakes.add(new BGFlake(this, random.int(0, 84) * Main.SCALE, -1 * random.int(0, 20) * Main.SCALE));
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
