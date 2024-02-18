package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxRandom;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;

class BGFlake extends FlxSprite
{
	private var xSpawn:Int;
	private var ySpawn:Int;
	private var xSpeed:Int;
	private var ySpeed:Int;
	private var xDir:Bool;
	private var random:FlxRandom;
	private var playState:PlayState;

	private var updateToggle:Int;
	private var lateralWiggleToggle:Bool;

	public function new(ps:PlayState, x:Int, y:Int)
	{
		super(x, y);

		loadGraphic(AssetPaths.bgflake_inverted__png, false, Main.SCALE, Main.SCALE);

		random = new FlxRandom();

		xSpeed = ySpeed = 1;
		// ySpeed = random.int(1, 2);
		xDir = random.bool();

		playState = ps;

		updateToggle = 0;
		lateralWiggleToggle = false;

		if (xDir)
		{
			xSpeed = -1 * xSpeed;
		}

		//trace(pretty_print());
	}

	override function update(elapsed:Float)
	{
		// slow down update speed for these snowflakes
		updateToggle++;

		if (updateToggle >= 2)
		{
			updateToggle = 0;
			// lateralWiggleToggle = !lateralWiggleToggle;
			// // x += 8 * xSpeed;
			// if (lateralWiggleToggle)
			// 	x -= 16;
			// else
			// 	x += 16;

			y += Main.SCALE * ySpeed;

			if (x > (84 * Main.SCALE) || x < 0 || y > (48 * Main.SCALE))
			{
				kill();
				exists = false;
				playState.decreaseBGFlakes();
			}
		}

		super.update(elapsed);
	}

	public function pretty_print()
	{
		return 'xSpawn: $xSpawn, ySpawn: $ySpawn, xDir: $xDir, xSpeed: $xSpeed, ySpeed: $ySpeed';
	}
}
