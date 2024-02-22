package;

import flixel.FlxSprite;

class HeartPoof extends FlxSprite
{

	public function new(x, y)
	{
		super(x, y);

		loadGraphic(AssetPaths.heartpoofb__png, true, 20*Main.SCALE, 18*Main.SCALE);
        animation.add("blink", [10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 10, false);
        animation.play("blink");
	}

	override function update(elapsed:Float)
	{   
		super.update(elapsed);

        if (animation.finished) exists = false;
    }
}
