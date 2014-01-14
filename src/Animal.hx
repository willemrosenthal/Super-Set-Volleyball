package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;
import flixel.effects.particles.FlxEmitter;

class Animal extends FlxSprite
{

	public var velocityMax:Float = 100;
	public var vx:Float = 50;
	public var vy:Float = 80;

	public var followDistance:Int = 23;
	public var pickedUp:Bool = false;
	public var inParade:Bool = false;
	public var linePlace:Int; // place in line (line number)
	public var fd:Int; // what point in the parade array to use as x,y

	public var wander:Bool = true;
	private var wTimer:Int = 0;
	private var wTimerMax:Int = 10;

	public var musicOn:Bool = true;
	public var music:FlxEmitter;

    public var swimming:Bool = false;
    public var sink:Bool = false;

	private var lastPos:FlxPoint;

	private var goTo:FlxPoint;
	private var afacing:String = "sit";
	private var still = true;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		lastPos = new FlxPoint(X,Y);
		emitter();
	}

	public function joinParade():Void {
		//pickedUp = true;
		//ln = Global.linePlace[linePlace];

	}

	private var moveDifX:Float;
	private var moveDifY:Float;
	override public function update():Void {
		super.update();

		if (pickedUp) {
		    x = Global.paradeX[fd];
		    y = Global.paradeY[fd];

            if (musicOn)  {
                music.x = x - music.width * 0.5;
                music.y = y - music.height * 0.5 - height * 2;
            }
		}
        else if(wander)
            {
            wTimer ++;
            if (wTimer == wTimerMax)
                {
                wTimer = 0;
                wTimerMax = Math.round(Math.random() * 100 + 50);
                if (Math.random() < 0.5)
                    {
                    acceleration.x = 0;
                    acceleration.y = 0;
                    velocity.x = 0;
                    velocity.y = 0;
                    }
                else
                    {
                    velocity.x = Calcs.plusOrMinus(20) * Math.round(Math.random());
                    velocity.y = Calcs.plusOrMinus(19.5) * Math.round(Math.random());
                    }
                }
            if (x > FlxG.worldBounds.width - 5 && velocity.x > 0)
                velocity.x *= -1;
            if (x < 5 && velocity.x < 0)
                velocity.x *= -1;
            if (y > FlxG.worldBounds.height - 5 && velocity.y > 0)
                velocity.y *= -1;
            if (y < 10 && velocity.y < 0)
                velocity.y *= -1;

             }

		moveDifX = x - lastPos.x;
		moveDifY = y - lastPos.y;


        if (moveDifX == 0 && moveDifY == 0)
            still = true;
        else still = false;

		if (swimming)
		    swimCheck();

        if (!sink) {
            if (Math.abs(moveDifX) > Math.abs(moveDifY)) {
                if (moveDifX < 0)
                    facing = FlxObject.RIGHT;
                if (moveDifX > 0)
                    facing = FlxObject.LEFT;
                animation.play("runside");
                afacing = "side";
            }
            else if (Math.abs(moveDifX) < Math.abs(moveDifY) && moveDifY > 0) {
                animation.play("rundown");
                afacing = "down";
            }
            else if (Math.abs(moveDifX) < Math.abs(moveDifY) && moveDifY < 0) {
                animation.play("runup");
                afacing = "up";
            }
            else if (afacing == "side" && still) animation.play("idleside");
            else if (afacing == "down" && still) animation.play("idledown");
            else if (afacing == "up" && still) animation.play("idleup");
        }


		lastPos.x = x;
		lastPos.y = y;

		//goTo = new FlxPoint(Global.paradeX[Global.linePlace[ln]],Global.paradeY[Global.linePlace[ln]])


		// get to your position in line.
		//if (pickedUp == true && inParade == false){
	}

    var loc:Int;
    private function swimCheck():Void {
        if (Global.waterTiles.length == 0)
            return;
        loc = Global.cMap.getTile(Math.floor(x/16),Math.floor(y/16));

        for (t in Global.waterTiles) {
            if( t == loc ) {
                sink = true;
                break;
            }
            sink = false;
        }
        if (!sink) {
            if (loc == Global.waterEdges[0]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) > 0.5 && Math.abs(Math.floor(y/16) - (y/16)) > 0.5)
                sink = true;
            }
            if (loc == Global.waterEdges[1]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) < 0.5 && Math.abs(Math.floor(y/16) - (y/16)) > 0.5)
                sink = true;
            }
            if (loc == Global.waterEdges[2]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) > 0.4 && Math.abs(Math.floor(y/16) - (y/16)) < 0.6)
                sink = true;
            }
            if (loc == Global.waterEdges[3]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) < 0.6 && Math.abs(Math.floor(y/16) - (y/16)) < 0.5)
                sink = true;
            }
        }
        if (sink) {
            if (Math.abs(moveDifX) > Math.abs(moveDifY)) {
                if (moveDifX < 0)
                    facing = FlxObject.RIGHT;
                if (moveDifX > 0)
                    facing = FlxObject.LEFT;
                animation.play("runsides");
                afacing = "side";
        	}
        	else if (Math.abs(moveDifX) < Math.abs(moveDifY) && moveDifY > 0) {
        		animation.play("rundowns");
        		afacing = "down";
        	}
        	else if (Math.abs(moveDifX) < Math.abs(moveDifY) && moveDifY < 0) {
        		animation.play("runups");
        		afacing = "up";
        	}
        	else if (afacing == "side" && still) animation.play("idlesides");
        	else if (afacing == "down" && still) animation.play("idledowns");
        	else if (afacing == "up" && still) animation.play("idleups");

        }
    }


    private function emitter():Void {
    	 music = new FlxEmitter(x,y);
         music.setSize(5,5);
         music.setXSpeed(-20,20);
         music.setYSpeed(-35,-75);
         music.gravity = 0;
         music.setRotation(0,0);
         music.bounce = 0;
         music.makeParticles("assets/music.png",4,0,true,0);
         if (Math.random() < 0.5)
            music.setColor(0xffff00,0x00ffff);
         else
            music.setColor(0x00ffff,0xff00ff);
         //music.setAlpha(0.5, 0.5, 1, 1);
         Global.game.add(music);
     }
}