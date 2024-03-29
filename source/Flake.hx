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

    private var belowScreen = false;

    private var characteristicVal:String;

	public function new(?speedCieling=80, ?speedFloor = 40, ?targetBase:Int = -1, ?targetSpine:Int = -1, ?targetCharVal:Int = -1)
	{
		super();

        flakeWidth = 96;
        flakeHeight = 96;

		random = new FlxRandom();

        // MODERATE THIS BASED ON PLAY STATE SCORE

        updateToggleLength = Std.int(random.int(speedFloor, speedCieling) / 12); // need to play around with this to get rid of glitchy overlaps

        xBase = random.int(26, 45) * Main.SCALE;
        //trace("SPAWNING AT ", xBase);
        while((Math.abs(Main.lastFlakeSpawnX - xBase) < Main.SCALE * 8)){
            xBase = random.int(26, 45) * Main.SCALE;
        }
        yBase = Main.SCALE * -16;
       // yBase = 0;
        //xBase = 0;
        Main.lastFlakeSpawnX = xBase;

        angle = Main.VALID_ROTATIONS[random.int(0, 3)];

        flakeIndex = random.int(0, Main.BASEFLAKES.length-1);
        if (targetBase != -1 && random.bool(25)) flakeIndex = targetBase;
        
        flakeBase = new FlxSprite(xBase, yBase);
        flakeBase.loadGraphic(Main.BASEFLAKES[flakeIndex], true, flakeWidth, flakeHeight);

        var blinkArray:Array<Int> = [];
        for (i in 0...2) {
            for (i in 0...random.int(3, 7)) {blinkArray.push(0);}
            blinkArray.push(1);
        }
       // trace(blinkArray);

        flakeBase.animation.add("blink", blinkArray, 4, true);
        
        //flakeBase.angle = angle;
        add(flakeBase);
        flakeBase.animation.play("blink");

        
        spineIndex = Std.int(Math.pow(random.int(0, Main.SPINES.length-1), 3) % Main.SPINES.length);
        if (targetSpine != -1 && random.bool(50) ) spineIndex = targetSpine;

        spineDimensions = Main.SPINE_SIZES[spineIndex];
        spines = new FlxSprite((xBase + (flakeWidth/2)) - ((spineDimensions[0])/2), (yBase + (flakeHeight/2)) - ((spineDimensions[1])/2));
        spines.loadGraphic(Main.SPINES[spineIndex], false, spineDimensions[0], spineDimensions[1]);
        //spines.angle = angle;
        add(spines);

        //spines = new FlxSprite();

        updateToggle = 0;

        
       
        var charValInt = random.int(0, 4);
        while((flakeIndex == targetBase) && (spineIndex == targetSpine) && (charValInt == targetCharVal)) {
            charValInt = random.int(0, 4);
        }
        characteristicVal = Std.string(charValInt);
       // trace('added at $xBase, $yBase');
	}

	public function updateFlake(elapsed) {
        // xBase++;
		// flakeBase.x = xBase;
        updateToggle++;
        if (updateToggle >= updateToggleLength) {
            flakeBase.y += Main.SCALE;
            flakeBase.update(elapsed);
            spines.y += Main.SCALE;
            spines.update(elapsed);
            updateToggle = 0;
        }
        
        /*updateToggle = 0;

        updateToggle++;*/

        if (flakeBase.y >= (Main.SCALE * 48) + Main.SCALE * 8) {
            flakeBase.kill();
            spines.kill();
            flakeBase.exists = false;
            spines.exists = false;
            belowScreen = true;
            //trace("KILLING FLAKE");
        }
	}

    public function getSprites() {
        return [flakeIndex, spineIndex];
    }

    public function getSpine() {
        return spineIndex;
    }

    public function getBase() {
        return flakeIndex;
    }

    public function getBelowScreen() {
		return belowScreen;
	}

    public function returnCoordinatesForCenterSelector() {
        return [(spines.x + spineDimensions[0] / 2) - 80, (spines.y + spineDimensions[1] / 2) - 72];
    }

    public function getSpineDimensions() {
        return spineDimensions;
    }

    public function getX() {
        return flakeBase.x;
    }

    public function getY() {
        return flakeBase.y;
    }

    public function getCharacteristicVal() {
        return characteristicVal;
    }

    public function getGenetics() {
        return [flakeIndex, spineIndex, Std.parseInt(characteristicVal)];
    }
}
