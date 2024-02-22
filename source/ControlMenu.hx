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

	override public function create()
	{
        random = new FlxRandom();

		bg = new FlxSprite(0, 0).loadGraphic(AssetPaths.menubg__png, false, 672, 384);
		add(bg);

        maxBgFlakes = 8;
		bgFlakeCount = 0;

        bgFlakes = new FlxTypedGroup<BGFlake>();
		add(bgFlakes);

        controlOverlay = new FlxSprite(0, 0).loadGraphic(AssetPaths.controloverlay__png, false, 672, 384);
        add(controlOverlay);

        backBlink = new FlxSprite(74*Main.SCALE, 38*Main.SCALE);
        backBlink.loadGraphic(AssetPaths.backblink__png, true, 72, 72);
        backBlink.animation.add("blink", [0, 1], 2, false);
        add(backBlink);

		super.create();
	}

    override public function update(elapsed:Float) {
        super.update(elapsed);

        backBlink.animation.play("blink");

        if (FlxG.sound.music == null) // don't restart the music if it's already playing
        {
            FlxG.sound.playMusic(AssetPaths.theme__ogg, 0.3, true);
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
