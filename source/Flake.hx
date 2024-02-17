package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxRandom;
import flixel.system.FlxAssets;

class Flake extends FlxTypedGroup<FlxSprite>
{
	private var flakeBase:FlxSprite;
	private var spines:FlxSprite;

	private var random:FlxRandom;

    private var xBase:Int;
	private var yBase:Int;

    private var updateToggle:Int;

    private var spineIndex:Int;
    private var spineDimensions:Array<Int>;

    private var flakeWidth:Int;
    private var flakeHeight:Int;

    private var updateToggleLength:Int;

    private var angle:Int;

    private var flakeIndex:Int;

	public function new(?fIndex = -1, ?sIndex = -1)
	{
		super();

        flakeWidth = 96;
        flakeHeight = 96;

		random = new FlxRandom();
        updateToggleLength = Std.int(random.int(40, 80) / 8); // need to play around with this to get rid of glitchy overlaps

        xBase = random.int(1, 70) * Main.SCALE;
        while((Math.abs(Main.lastFlakeSpawnX - xBase) < Main.SCALE * 16)){
            xBase = random.int(1, 70) * Main.SCALE;
        }
        yBase = Main.SCALE * -15;
        Main.lastFlakeSpawnX = xBase;

        angle = Main.VALID_ROTATIONS[random.int(0, 3)];

        if (fIndex == -1) flakeIndex = random.int(0, Main.BASEFLAKES.length-1);
        else flakeIndex = fIndex;
        
        flakeBase = new FlxSprite(xBase, yBase);
        flakeBase.loadGraphic(Main.BASEFLAKES[flakeIndex], false, flakeWidth, flakeHeight);
        flakeBase.angle = angle;
        add(flakeBase);

        
        if (sIndex == -1) spineIndex = Std.int(Math.pow(random.int(0, Main.SPINES.length-1), 3) % Main.SPINES.length);
        else spineIndex = sIndex;
       
        spineDimensions = Main.SPINE_SIZES[spineIndex];
        spines = new FlxSprite((xBase + (flakeWidth/2)) - ((spineDimensions[0])/2), (yBase + (flakeHeight/2)) - ((spineDimensions[1])/2));
        spines.loadGraphic(Main.SPINES[spineIndex], false, spineDimensions[0], spineDimensions[1]);
        spines.angle = angle;
        add(spines);

        //spines = new FlxSprite();

        updateToggle = 0;
	}

	public function updateFlake() {
        // xBase++;
		// flakeBase.x = xBase;
        if (updateToggle >= updateToggleLength) {
            flakeBase.y += Main.SCALE;
            spines.y += Main.SCALE;
            updateToggle = 0;
        }

        updateToggle++;

        if (flakeBase.y >= (Main.SCALE * 48) + Main.SCALE * 20) {
            flakeBase.kill();
            spines.kill();
            flakeBase.exists = false;
            spines.exists = false;
        }
	}

    public function getSprites() {
        return [flakeIndex, spineIndex];
    }
}
