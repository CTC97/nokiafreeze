package;

import flixel.FlxSprite;

class PauseBlip extends FlxSprite
{

	public function new(x, y)
	{
		super(x, y);

		loadGraphic(AssetPaths.pauseblip__png, true, 26*Main.SCALE, 11*Main.SCALE);
        animation.add("blink", [0, 1], 2, false);
        animation.play("blink");
	}

	override function update(elapsed:Float)
	{
        animation.play("blink");
        
		super.update(elapsed);
    }
}
