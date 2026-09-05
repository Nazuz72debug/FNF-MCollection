import flixel.FlxG;

class WeekbUnlock
{
	public static inline var HIDDEN_WEEK_NAME:String = "weekb";
	public static var CONDITION_SONGS:Array<String> = ["how-to-play", "metal-reflection"];
	public static inline var THRESHOLD:Float = 0.9;

	public static function isUnlocked(diffCount:Int):Bool
	{
		// Si déjà débloquée définitivement, on ne recalcule plus rien du tout
		if(FlxG.save.data.weekbUnlocked == true)
			return true;

		var total:Float = 0;

		for (song in CONDITION_SONGS)
		{
			var best:Float = 0;
			for (diff in 0...diffCount)
			{
				var rating:Float = Highscore.getRating(song, diff);
				if (rating > best)
					best = rating;
			}
			total += best;
		}

		var meetsCondition:Bool = (total / CONDITION_SONGS.length) >= THRESHOLD;

		// Dès que la condition est remplie une fois, on grave le déblocage définitivement
		if(meetsCondition)
		{
			FlxG.save.data.weekbUnlocked = true;
			FlxG.save.flush();
		}

		return meetsCondition;
	}
}