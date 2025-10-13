package;

import states.WarningDevStates;

import flixel.graphics.FlxGraphic;
import flixel.FlxG;
import flixel.FlxGame;
import flixel.FlxState;
import openfl.Assets;
import openfl.Lib;
import openfl.display.FPS;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.display.StageScaleMode;
import openfl.display.StageQuality;
import openfl.filters.BitmapFilter;
import openfl.filters.ColorMatrixFilter;

// crash handler stuff
#if CRASH_HANDLER
import lime.app.Application;
import openfl.events.UncaughtErrorEvent;
import haxe.CallStack;
import haxe.io.Path;
import Discord.DiscordClient;
import sys.FileSystem;
import sys.io.File;
import sys.io.Process;
#end

using StringTools;

class Main extends Sprite

{
	var initialState:Class<FlxState> = WarningDevStates;
	var gameWidth:Int = 1280;
	var gameHeight:Int = 720;
	var zoom:Float = -1;
	var framerate:Int = 60; // How many frames per second the game should run at.
	var skipSplash:Bool = true;
	var startFullscreen:Bool = false;
	public static var fpsVar:FPS;

	public static function main():Void
	{
		Lib.current.addChild(new Main());
	}

	public function new()
	{
		super();

		if (stage != null)
		{
			init();
		}
		else
		{
			addEventListener(Event.ADDED_TO_STAGE, init);
		}
	}

	private function init(?E:Event):Void
	{
		if (hasEventListener(Event.ADDED_TO_STAGE))
		{
			removeEventListener(Event.ADDED_TO_STAGE, init);
		}

		setupGame();
	}

	private function setupGame():Void
	{
		var stageWidth:Int = Lib.current.stage.stageWidth;
		var stageHeight:Int = Lib.current.stage.stageHeight;

		if (zoom == -1)
		{
			var ratioX:Float = stageWidth / gameWidth;
			var ratioY:Float = stageHeight / gameHeight;
			zoom = Std.int(Math.min(ratioX, ratioY));
			gameWidth = Math.ceil(stageWidth / zoom);
			gameHeight = Math.ceil(stageHeight / zoom);
		}

		ClientPrefs.loadDefaultKeys();
		var game = new FlxGame(gameWidth, gameHeight, initialState, zoom, framerate, framerate, skipSplash, startFullscreen);
		addChild(game);

		// 🎨 Qualité visuelle améliorée
		Lib.current.stage.quality = StageQuality.BEST;
		FlxG.camera.bgColor = 0xff000000; // fond violet sombre
		Lib.current.stage.align = "tl";
		Lib.current.stage.scaleMode = StageScaleMode.NO_SCALE;

		// ✨ Effets globaux (optionnels)
		// Lib.current.filters = [getScanlineFilter()]; // décommente pour un effet CRT rétro

		// 💻 FPS affiché avec style
		#if !mobile
		fpsVar = new FPS(10, 3, 0xFF00FFFF); // cyan flashy
		addChild(fpsVar);
		if (fpsVar != null) fpsVar.visible = ClientPrefs.showFPS;
		#end

		#if html5
		FlxG.autoPause = false;
		FlxG.mouse.visible = false;
		#end

		#if CRASH_HANDLER
		Lib.current.loaderInfo.uncaughtErrorEvents.addEventListener(UncaughtErrorEvent.UNCAUGHT_ERROR, onCrash);
		#end
	}

	// 🌈 Optionnel : filtre scanlines CRT
	private function getScanlineFilter():BitmapFilter
	{
		var matrix:Array<Float> = [
			1, 0, 0, 0, -30,
			0, 1, 0, 0, -30,
			0, 0, 1, 0, -30,
			0, 0, 0, 1, 0
		];
		return new ColorMatrixFilter(matrix);
	}

	#if CRASH_HANDLER
	function onCrash(e:UncaughtErrorEvent):Void
	{
		var errMsg:String = "";
		var path:String;
		var callStack:Array<StackItem> = CallStack.exceptionStack(true);
		var dateNow:String = Date.now().toString();

		dateNow = dateNow.replace(" ", "_");
		dateNow = dateNow.replace(":", "'");

		path = "./crash/" + "PsychEngine_" + dateNow + ".txt";

		for (stackItem in callStack)
		{
			switch (stackItem)
			{
				case FilePos(s, file, line, column):
					errMsg += file + " (line " + line + ")\n";
				default:
					Sys.println(stackItem);
			}
		}

		errMsg += "\nUncaught Error: " + e.error + "\nSi cette erreur s'est produite, vérifie les logs ou le Debug Build.\n\n> Crash Handler écrit par: sqirra-rng";

		if (!FileSystem.exists("./crash/"))
			FileSystem.createDirectory("./crash/");

		File.saveContent(path, errMsg + "\n");

		Sys.println(errMsg);
		Sys.println("Crash dump sauvegardé dans " + Path.normalize(path));

		Application.current.window.alert(errMsg, "Paff le loup!");
		DiscordClient.shutdown();
		Sys.exit(1);
	}
	#end
}
