package;

import flixel.FlxSprite;

class CharacteristicBar extends FlxSprite
{
	private var value:String;

	public function new(x, y)
	{
		super(x, y);

		loadGraphic(AssetPaths.characteristicbar__png, true, 160, 48);
        animation.add("0", [0], 1, false);
        animation.add("1", [1], 1, false);
        animation.add("2", [2], 1, false);
        animation.add("3", [3], 1, false);
        animation.add("4", [4], 1, false);
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
