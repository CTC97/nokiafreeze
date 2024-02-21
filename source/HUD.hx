package;

import flixel.tweens.FlxTween;
import flixel.math.FlxRandom;
import flixel.text.FlxText;
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

    private var targetLabel:FlxText;
    private var selectedLabel:FlxText;

    private var targetFrostinessLabel:FlxText;
    private var selectedFrostinessLabel:FlxText;

    private var random:FlxRandom;

    private var firstTarget:Bool;

    private var quipBubble:QuipBubble;

    private var labels:FlxSprite;

    private var life:Life;

	public function new(s:Selector, f:Flake)
	{
		super();

        selector = s;
        targetFlake = f;

        random = new FlxRandom();

        firstTarget = true;

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

        targetCharBox = new CharacteristicBar(Main.SCALE, 17*Main.SCALE);
        add(targetCharBox);

        selectedCharBox = new CharacteristicBar((Main.SCALE * (84 - 1)) - (20 * Main.SCALE), 17*Main.SCALE);
        add(selectedCharBox);

        shownSelected = false;

        // targetLabel = new FlxText(8, targetBox.y - 28, 160, "FLAKE:", 16, true);
        // targetLabel.color = Main.TEXT_COLOR;
        // add(targetLabel);

        // selectedLabel = new FlxText((Main.SCALE * 84) - 160 - 8, targetBox.y - 28, 160, "FLAKE:", 16, true);
        // selectedLabel.color = Main.TEXT_COLOR;
        // add(selectedLabel);

        // targetFrostinessLabel = new FlxText(8, 16*Main.SCALE, 160, "FROSTINESS:", 16, true);
        // targetFrostinessLabel.color = Main.TEXT_COLOR;
        // add(targetFrostinessLabel);

        // selectedFrostinessLabel = new FlxText((Main.SCALE * 84) - 160 - 8, 16 * Main.SCALE, 160, "FROSTINESS:", 16, true);
        // selectedFrostinessLabel.color = Main.TEXT_COLOR;
        // add(selectedFrostinessLabel);

        labels = new FlxSprite(2*Main.SCALE, 12*Main.SCALE);
        labels.loadGraphic(AssetPaths.labels__png, false, 632, 128);
        add(labels);

        life = new Life(2*Main.SCALE, 2*Main.SCALE);
        add(life);
    }

    public function displayTargetFlake(flake:Flake) {

        remove(targetFlakeSpine);
        remove(targetFlakeBase);
        
        targetFlake = flake;

        var sprites:Array<Int> = flake.getSprites();
        var base:Int = sprites[0];
        var spine:Int = sprites[1];

        targetFlakeBase.loadGraphic(Main.BASEFLAKES[base], true, 96, 96);
        var blinkArray:Array<Int> = [];
        for (i in 0...2) {
            for (i in 0...random.int(4, 8)) {blinkArray.push(0);}
            blinkArray.push(1);
        }
        targetFlakeBase.animation.add("blink", blinkArray, 4, true);
        targetFlakeBase.animation.play("blink");

        targetFlakeSpine = new FlxSprite(targetBox.x + 0.5*(20 * Main.SCALE - flake.getSpineDimensions()[0]), targetBox.y + 0.5*(18 * Main.SCALE - flake.getSpineDimensions()[1]));
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
        selectedFlakeBase.loadGraphic(Main.BASEFLAKES[base], true, 96, 96);
        var blinkArray:Array<Int> = [];
        for (i in 0...2) {
            for (i in 0...random.int(4, 8)) {blinkArray.push(0);}
            blinkArray.push(1);
        }
        selectedFlakeBase.animation.add("blink", blinkArray, 7, true);
        selectedFlakeBase.animation.play("blink");

        selectedFlakeSpine = new FlxSprite(selectBox.x + 0.5*(20 * Main.SCALE - selector.getSelectedFlake().getSpineDimensions()[0]), selectBox.y + 0.5*(18 * Main.SCALE - selector.getSelectedFlake().getSpineDimensions()[1]));
        selectedFlakeSpine.loadGraphic(Main.SPINES[spine]);

        add(selectedFlakeBase);
        add(selectedFlakeSpine);
    }

    public function updateCharacteristicBox(targetFlake:Flake, selectedFlake:Flake) {
        targetCharBox.setValue(targetFlake.getCharacteristicVal());
        if (selector.getOnFlake()) selectedCharBox.setValue(selectedFlake.getCharacteristicVal());
    }

    public function addQuipBubble(value) {
        quipBubble = new QuipBubble(136, 288, value);
        FlxTween.tween(quipBubble, {
            alpha: 1,
            exists:false,
            alive:false,
        }, 1.4);
        add(quipBubble);
    }

    public function removeQuipBubble() {
        remove(quipBubble);
    }

    public function getQuipBubble() {
        return quipBubble;
    }

    public function setLifeValue(value:String) {
        life.setValue(value);
    }
}
