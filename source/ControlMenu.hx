package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxRandom;
import flixel.text.FlxText;

class ControlMenu extends FlakeState
{
	private var bg:FlxSprite;
    private var controlOverlay:FlxSprite;

	private var random:FlxRandom;
    private var back:Bool;

    private var backBlink:FlxSprite;

    private var poofs:FlxTypedGroup<HeartPoof>;

	override public function create()
	{
        random = new FlxRandom();

		bg = new FlxSprite(0, 0).loadGraphic(AssetPaths.menubg__png, false, 672, 384);
		add(bg);

        maxBgFlakes = 8;
		bgFlakeCount = 0;

        bgFlakes = new FlxTypedGroup<BGFlake>();
		add(bgFlakes);

        poofs = new FlxTypedGroup<HeartPoof>();
        add(poofs);

        controlOverlay = new FlxSprite(0, 0).loadGraphic(AssetPaths.controloverlay__png, false, 672, 384);
        add(controlOverlay);

        backBlink = new FlxSprite(1*Main.SCALE, 38*Main.SCALE);
        backBlink.loadGraphic(AssetPaths.backblink__png, true, 72, 72);
        backBlink.animation.add("blink", [0, 1], 2, false);
        add(backBlink);

		super.create();
	}

    override public function update(elapsed:Float) {
        super.update(elapsed);

        backBlink.animation.play("blink");

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

        back = FlxG.keys.justPressed.LEFT;

        if (back) FlxG.switchState(new Menu());

    }

    

}
