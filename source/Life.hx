package;

import flixel.FlxSprite;

class Life extends FlxSprite
{
	private var value:String;

	public function new(x, y)
	{
		super(x, y);

		loadGraphic(AssetPaths.lifet__png, true, 136, 40);
        animation.add("3", [0], 1, false);
        animation.add("2", [1], 1, false);
        animation.add("1", [2], 1, false);
        animation.add("0", [3], 1, false);
	}

	override function update(elapsed:Float)
	{
        animation.play(value);
        
		super.update(elapsed);
	}

    public function setValue(val:String) {
        value = val;
    }
}
