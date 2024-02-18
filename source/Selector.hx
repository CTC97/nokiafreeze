package;

import flixel.FlxSprite;

class Selector extends FlxSprite
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
            x = flakeCoords[0];
            y = flakeCoords[1];
        } else {
            x = y = 0;
        }
        
		super.update(elapsed);
	}

    public function setSelectedFlake(flake:Flake) {
        selectedFlake = flake;
        onFlake = true;
    }

    public function getSelectedFlake() {
        return selectedFlake;
    }
}
