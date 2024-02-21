package;

import flixel.tweens.FlxTween;
import flixel.math.FlxRandom;
import flixel.sound.FlxSound;
import flixel.FlxG;
import flixel.FlxGame;
import flixel.system.FlxAssets;
import openfl.display.Sprite;

class Main extends Sprite
{
	public static var SCALE:Int = 8;
	public static var TEXT_COLOR = 0xc7f0d8;
	public static var BASEFLAKES:Array<FlxGraphicAsset> = [
		AssetPaths.flakebasezero__png,
		AssetPaths.flakebaseone__png,
		AssetPaths.flakebasetwo__png,
		//AssetPaths.flakebasethree__png,
		AssetPaths.flakebasefour__png,
		AssetPaths.flakebasefive__png,
		AssetPaths.flakebasesix__png,
		//AssetPaths.flakebaseseven__png,
		//AssetPaths.flakebaseeight__png,
		AssetPaths.flakebasenine__png,
		AssetPaths.flakebaseten__png,
		AssetPaths.flakebaseeleven__png,
		AssetPaths.flakebasetwelve__png,
		AssetPaths.flakebasethirteen__png
	];
	public static var SPINES:Array<FlxGraphicAsset> = [
		AssetPaths.spineone_inverted__png,
		AssetPaths.spinetwo_inverted__png,
		AssetPaths.spinethree_inverted__png,
		AssetPaths.spinefour_inverted__png,
		AssetPaths.spinefive_inverted__png,
		AssetPaths.spinesix_invertedt__png
	];
	public static var SPINE_SIZES:Array<Array<Int>> = [
		[128, 112], [128, 112], [128, 112], [96, 112], [96, 80], [128, 112]
	];

	public static var VALID_ROTATIONS = [0];

	public static var lastFlakeSpawnX:Int = -1;

	public static var moveSound:FlxSound;
	public static var enterSound:FlxSound;
	private static var hitSounds:Array<FlxSound>;
	private static var missSounds:Array<FlxSound>;

	private static var random:FlxRandom;

	private static var nothing:Int;

	public function new()
	{
		super();
		nothing = 0;

		addChild(new FlxGame(0, 0, Menu, true));
		FlxG.mouse.visible = false;

		FlxAssets.FONT_DEFAULT = "assets/nokiafc22.ttf";

		random = new FlxRandom();

		defineSounds();
	}

	public static function defineSounds() {
		moveSound = FlxG.sound.load(AssetPaths.move__wav);
		enterSound = FlxG.sound.load(AssetPaths.enter__wav);
		//missSound = FlxG.sound.load(AssetPaths.miss__wav);
		//hitSound = FlxG.sound.load(AssetPaths.success__wav);

		hitSounds = [FlxG.sound.load(AssetPaths.success__wav), FlxG.sound.load(AssetPaths.win1__wav)];
		missSounds = [FlxG.sound.load(AssetPaths.miss__wav), FlxG.sound.load(AssetPaths.miss2__wav)];
	} 

	public static function playSounds(type:String, ?missType:String = "!") {
		trace("SOUND PLAYING", type, missType);
		if (type == "hit") {
			hitSounds[random.int(0, 1)].play();
		} else if (type == "miss" && missType != "!") {
			if (missType == "wrong") missSounds[0].play();
			if (missType == "miss") missSounds[1].play();
		}
	}
}
