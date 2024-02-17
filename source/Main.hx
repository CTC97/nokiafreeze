package;

import flixel.FlxG;
import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	public static var SCALE:Int = 8;

	public function new()
	{
		super();
		addChild(new FlxGame(0, 0, PlayState, true));
		FlxG.mouse.visible = false;
	}
}
