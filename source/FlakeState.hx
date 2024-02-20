package;

import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;

class FlakeState extends FlxState
{

    private var maxBgFlakes:Int;
	private var bgFlakeCount:Int;

	private var bgFlakes:FlxTypedGroup<BGFlake>;
    
	override public function create()
	{
		super.create();
	}

    override public function update(elapsed:Float) {
        super.update(elapsed);
    }

	public function decreaseBGFlakes()
	{
		bgFlakeCount--;
	}
}
