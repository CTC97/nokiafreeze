package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxRandom;
import flixel.text.FlxText;

class Menu extends FlakeState
{
	private var bg:FlxSprite;
    private var menuOverlay:FlxSprite;

    private var menuSelector:FlxSprite;

	//private var bgFlakes:FlxTypedGroup<BGFlake>;

	private var random:FlxRandom;

    private var onPlay:Bool;
    private var moveSelector:Bool;
    private var select:Bool;

	override public function create()
	{
		// BG is 672 x 384 - 800% scaling of required dimensions (84x48)
        onPlay = true;
        select = false;

        random = new FlxRandom();

		bg = new FlxSprite(0, 0).loadGraphic(AssetPaths.menubg__png, false, 672, 384);
		add(bg);

        maxBgFlakes = 8;
		bgFlakeCount = 0;

        bgFlakes = new FlxTypedGroup<BGFlake>();
		add(bgFlakes);

        menuOverlay = new FlxSprite(0, 0).loadGraphic(AssetPaths.menuoverlay__png, false, 672, 384);
        add(menuOverlay);

        menuSelector = new FlxSprite(224, 252).loadGraphic(AssetPaths.menuselector__png, true, 16, 16);
        menuSelector.animation.add("blink", [0, 1], 2, true);
        add(menuSelector);

		super.create();
	}

    override public function update(elapsed:Float) {
        super.update(elapsed);

        if (bgFlakeCount < maxBgFlakes)
        {
            bgFlakeCount++;
            //bgFlakes.add(new BGFlake(this, random.int(22, 61) * Main.SCALE, -1 * random.int(0, 60) * Main.SCALE));
            bgFlakes.add(new BGFlake(this, random.int(0, 83) * Main.SCALE, -1 * random.int(0, 60) * Main.SCALE));
        }

        menuSelector.animation.play("blink");
        moveSelector = FlxG.keys.justPressed.UP || FlxG.keys.justPressed.DOWN || FlxG.keys.justPressed.LEFT || FlxG.keys.justPressed.RIGHT;

        select = FlxG.keys.justPressed.ENTER || FlxG.keys.justPressed.SPACE;

        if (moveSelector) {
            menuSelector.animation.play("blink");
            if (onPlay) menuSelector.y = 298;
            else menuSelector.y = 252;

            onPlay = !onPlay;
        }

        if (select && onPlay) FlxG.switchState(new PlayState());
    }

}
