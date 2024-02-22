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
    private var menuFlake:MenuFlake;

	//private var bgFlakes:FlxTypedGroup<BGFlake>;

	private var random:FlxRandom;

    private var onPlay:Bool;
    private var moveSelector:Bool;
    private var select:Bool;

    private var poofs:FlxTypedGroup<HeartPoof>;

	override public function create()
	{
        Main.defineSounds();

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

        poofs = new FlxTypedGroup<HeartPoof>();
        add(poofs);

        menuOverlay = new FlxSprite(0, 0).loadGraphic(AssetPaths.menuoverlay__png, false, 672, 384);
        add(menuOverlay);

        menuFlake = new MenuFlake(32*Main.SCALE, 2*Main.SCALE);
        add(menuFlake);

        menuSelector = new FlxSprite(31*Main.SCALE, 31*Main.SCALE).loadGraphic(AssetPaths.menuselector__png, true, 16, 16);
        menuSelector.animation.add("blink", [0, 1], 2, true);
        add(menuSelector);

		super.create();
	}

    override public function update(elapsed:Float) {
        super.update(elapsed);

        if (random.bool(4)) {
            poofs.add(new HeartPoof(random.int(-4, 84-14) * Main.SCALE, random.int(0, 48-18) * Main.SCALE)); 
            Main.playTwinkle();
        }

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
            Main.playMenuMove();
            onPlay = !onPlay;
            menuSelector.animation.play("blink");
            if (onPlay) menuSelector.y = 31*Main.SCALE;
            else menuSelector.y = 38*Main.SCALE;
        }

        if (select && onPlay) FlxG.switchState(new PlayState());
        else if (select && !onPlay) FlxG.switchState(new ControlMenu());
    }

    

}
