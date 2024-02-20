package;

import flixel.tweens.FlxTween;
import flixel.FlxSprite;

class QuipBubble extends FlxSprite
{
	private var value:String;

	public function new(x, y, _value)
	{
		super(x, y);

        trace("ADDING QUIP: ", _value);

		loadGraphic(AssetPaths.quips__png, true, 360, 80);
        animation.add("0", [0], 1, false);
        animation.add("1", [1], 1, false);
        animation.add("2", [2], 1, false);
        animation.add("love_0", [3], 1, false);
        animation.add("love_1", [4], 1, false);
        animation.add("love_2", [5], 1, false);
        animation.add("love_3", [6], 1, false);
        animation.add("love_4", [7], 1, false);

        value = _value;


        value = _value;
        animation.play(value);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
        animation.play(value);
	}
}
