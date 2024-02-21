package;

import flixel.tweens.FlxTween;
import flixel.FlxSprite;

class Number extends FlxSprite
{
	private var value:String;

	public function new(x, y, _value)
	{
		super(x, y);

        trace("ADDING QUIP: ", _value);

		loadGraphic(AssetPaths.numbers__png, true, 32, 40);
        animation.add("0", [0], 1, false);
        animation.add("1", [1], 1, false);
        animation.add("2", [2], 1, false);
		animation.add("3", [3], 1, false);
        animation.add("4", [4], 1, false);
        animation.add("5", [5], 1, false);
		animation.add("6", [6], 1, false);
        animation.add("7", [7], 1, false);
        animation.add("8", [8], 1, false);
		animation.add("9", [9], 1, false);
		animation.add("x", [10], 1, false);

        value = _value;


        value = _value;
        animation.play(value);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
        animation.play(value);
	}

	public function setValue(_val:String){
		value = _val;
	}
}
