package;

import flixel.FlxSprite;

class MenuFlake extends FlxSprite
{

	public function new(x, y)
	{
		super(x, y);

		loadGraphic(AssetPaths.menuflake__png, true, 128, 112);
        animation.add("blink", [0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1], 2, false);
        animation.play("blink");
	}

	override function update(elapsed:Float)
	{
        animation.play("blink");
        
		super.update(elapsed);
    }
}
