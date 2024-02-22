package;

import flixel.FlxSprite;

class HeartDrain extends FlxSprite
{

	public function new(x, y)
	{
		super(x, y);

		loadGraphic(AssetPaths.heartdrain__png, true, 5*Main.SCALE, 15*Main.SCALE);
        animation.add("blink", [0, 1, 2], 5, false);
        animation.play("blink");
	}

	override function update(elapsed:Float)
	{   
		super.update(elapsed);

        if (animation.finished) exists = false;
    }
}
