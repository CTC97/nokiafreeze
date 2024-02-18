package;

import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.system.FlxAssets;

class HUD extends FlxTypedGroup<FlxSprite>
{
	private var targetBox:FlxSprite;
    private var selectBox:FlxSprite;

    private var targetFlakeBase:FlxSprite;
    private var targetFlakeSpine:FlxSprite;

    private var selectedFlakeBase:FlxSprite;
    private var selectedFlakeSpine:FlxSprite;

    private var shownSelected:Bool;

    private var selector:Selector;



	public function new(s:Selector)
	{
		super();

        selector = s;

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
        targetFlakeSpine = new FlxSprite(targetBox.x + 2*Main.SCALE, targetBox.y + 2*Main.SCALE);
    
        shownSelected = false;
    }

    public function displayTargetFlake(base, spine) {
        targetFlakeBase.loadGraphic(Main.BASEFLAKES[base]);
        targetFlakeSpine.loadGraphic(Main.SPINES[spine]);

        add(targetFlakeBase);
        add(targetFlakeSpine);
    }

    public function displaySelectedFlake(base, spine) {
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
}
