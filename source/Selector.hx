package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxRandom;

class BGFlake extends FlxSprite
{
	private var selectedFlake:Flake;
    private var onFlake:Bool;

	public function new()
	{
		super(x, y);

		loadGraphic(AssetPaths.selectbox__png, false, 160, 144);

        onFlake = false;
	}

	override function update(elapsed:Float)
	{
        if (onFlake) {
            var flakeCoords:Array<Float> = selectedFlake.returnCoordinatesForCenterSelector();
        }
        

		super.update(elapsed);
	}
}
