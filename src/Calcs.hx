package ;
import flixel.util.FlxPoint;
import flixel.FlxG;

class Calcs {

	static public function randomOnScreen(Padding:Float=0,PaddingY:Float=0):FlxPoint
	{
		var pos:FlxPoint = new FlxPoint((FlxG.width - Padding) * Math.random() + Padding * 0.5, (FlxG.height - PaddingY) * Math.random() + PaddingY * 0.5);
		return pos;
	}

	static public function plusOrMinus(Value:Float=1):Float
	{
		return ((Math.round(Math.random()) * 2) - 1) * Value;
	}

	public function new() {
	}
}
