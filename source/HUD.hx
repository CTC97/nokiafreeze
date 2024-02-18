package;

import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.system.FlxAssets;

class HUD extends FlxTypedGroup<FlxSprite>
{
	private var targetBox:FlxSprite;
    private var selectBox:FlxSprite;

    private var targetFlake:Flake;
    private var targetFlakeBase:FlxSprite;
    private var targetFlakeSpine:FlxSprite;

    private var selectedFlakeBase:FlxSprite;
    private var selectedFlakeSpine:FlxSprite;

    private var shownSelected:Bool;

    private var selector:Selector;

    private var targetCharBox:CharacteristicBar;
    private var selectedCharBox:CharacteristicBar;

	public function new(s:Selector, f:Flake)
	{
		super();

        selector = s;
        targetFlake = f;

        targetBox = new FlxSprite(Main.SCALE, Main.SCALE * (48 - 1) - (18 * Main.SCALE));
        targetBox.loadGraphic(AssetPaths.uibox__png, false, 20 * Main.SCALE, 18 * Main.SCALE);
        add(targetBox);        

        selectBox = new FlxSprite((Main.SCALE * (84 - 1)) - (20 * Main.SCALE), Main.SCALE * (48 - 1) - (18 * Main.SCALE));
        selectBox.loadGraphic(AssetPaths.uibox__png, false, 20 * Main.SCALE, 18 * Main.SCALE);
        add(selectBox);   

        /*
                i = x + .5(L - a)
                j = y + .5(H - b)
        */

        targetFlakeBase = new FlxSprite(targetBox.x + 0.5*(20 * Main.SCALE - 96), targetBox.y + 0.5*(18 * Main.SCALE - 96));
        targetFlakeSpine = new FlxSprite(targetBox.x + 0.5*(20 * Main.SCALE - targetFlake.getSpineDimensions()[0]), targetBox.y + 0.5*(18 * Main.SCALE - targetFlake.getSpineDimensions()[1]));

        targetCharBox = new CharacteristicBar(Main.SCALE, Main.SCALE * (48) - (18 * Main.SCALE) - 64);
        add(targetCharBox);

        selectedCharBox = new CharacteristicBar((Main.SCALE * (84 - 1)) - (20 * Main.SCALE),  Main.SCALE * (48) - (18 * Main.SCALE) - 64);
        add(selectedCharBox);

        shownSelected = false;
    }

    public function displayTargetFlake(flake:Flake) {
        targetFlake = flake;

        var sprites:Array<Int> = flake.getSprites();
        var base:Int = sprites[0];
        var spine:Int = sprites[1];

        targetFlakeBase.loadGraphic(Main.BASEFLAKES[base]);
        targetFlakeSpine.loadGraphic(Main.SPINES[spine]);

        add(targetFlakeBase);
        add(targetFlakeSpine);
    }

    public function displaySelectedFlake(flake:Flake) {
        var sprites:Array<Int> = flake.getSprites();
        var base:Int = sprites[0];
        var spine:Int = sprites[1];

        if (shownSelected) {
            remove(selectedFlakeBase);
            remove(selectedFlakeSpine);
        }
        shownSelected = true;
        selectedFlakeBase = new FlxSprite(selectBox.x + 0.5*(20 * Main.SCALE - 96), selectBox.y + 0.5*(18 * Main.SCALE - 96));
        selectedFlakeBase.loadGraphic(Main.BASEFLAKES[base]);

        selectedFlakeSpine = new FlxSprite(selectBox.x + 0.5*(20 * Main.SCALE - selector.getSelectedFlake().getSpineDimensions()[0]), selectBox.y + 0.5*(18 * Main.SCALE - selector.getSelectedFlake().getSpineDimensions()[1]));
        selectedFlakeSpine.loadGraphic(Main.SPINES[spine]);

        add(selectedFlakeBase);
        add(selectedFlakeSpine);
    }

    public function updateCharacteristicBox(targetFlake:Flake, selectedFlake:Flake) {
        targetCharBox.setValue(targetFlake.getCharacteristicVal());
        if (selector.getOnFlake()) selectedCharBox.setValue(selectedFlake.getCharacteristicVal());
    }
}
