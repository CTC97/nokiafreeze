package;

import flixel.FlxG;
import flixel.FlxGame;
import flixel.system.FlxAssets;
import openfl.display.Sprite;

class Main extends Sprite
{
	public static var SCALE:Int = 8;
	public static var BASEFLAKES:Array<FlxGraphicAsset> = [
		AssetPaths.flakebaseone__png,
		AssetPaths.flakebasetwo__png,
		AssetPaths.flakebasethree__png,
		AssetPaths.flakebasefour__png,
		AssetPaths.flakebasefive__png,
		AssetPaths.flakebasesix__png,
		AssetPaths.flakebaseseven__png,
		AssetPaths.flakebaseeight__png,
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

	public function new()
	{
		super();
		addChild(new FlxGame(0, 0, PlayState, true));
		FlxG.mouse.visible = false;

		for (asset in SPINES)
		{
			trace('w: $Std.int(asset.width), h: $asset.height');
		}
	}
}
