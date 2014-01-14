package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class PlayerA extends FlxSprite
{

    public var stickToScreen = false;
    public var friction:Float = -0.8;

    public var maxSpeed:Float = 660;
    public var maxSpeedMod:Float = 0;
    public var speedMulti:Float =  2;

	private var mouseDown:Bool = false;
    private var mouseA:FlxPoint;
    private var mouseB:FlxPoint;
    private var ignoreRange:Float = 10;

    private var jumping:Bool = false;
    public var spiking:Int = 0;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		mouseA = new FlxPoint();
		mouseB = new FlxPoint();

		loadGraphic("assets/red_player.png", true, true, 61,82);
		animation.add("stand", [0]);
		animation.add("jump", [1]);
		animation.add("hit", [2]);

        animation.play("jump");

		width = width * scale.x * 3;
		height = height * scale.y * 2;
		offset.x = width * -0.25;
		offset.y = height * -0.15;

		scale.x = 2;
		scale.y = 2;

		acceleration.y = 1000;
        //acceleration.x = -50;
        //maxVelocity.y = 500;
        //maxVelocity.x = 500;

        moves = true;
	}


	override public function update():Void
	{
		super.update();

		if (spiking > 0)
		    spiking --;


        if (Math.abs(velocity.x) < 8)
            velocity.x = 0;
        if (Math.abs(velocity.y) < 8)
            velocity.y = 0;

        if (x < FlxG.worldBounds.x && velocity.x < 0) {
            velocity.x = 0;
            x = FlxG.worldBounds.x;
            }

        if (x > FlxG.worldBounds.x + (FlxG.worldBounds.width * 0.5) - width * 0.75 && velocity.x > 0) {
            velocity.x = 0;
            x = FlxG.worldBounds.x + (FlxG.worldBounds.width * 0.5) - width * 0.75;
            }

        if (y > FlxG.worldBounds.y + FlxG.worldBounds.height - height * 0.9 && velocity.y > 0) {
            velocity.y = 0;
            velocity.x = 0;
            y = FlxG.height - height * 0.9;
            if (spiking == 0)
                animation.play("stand");
            jumping = false;
            }
        if (velocity.y < 0) {
            if (spiking == 0)
                animation.play("jump");
            jumping = true;
            }

        if (Global.playerAtouching > 0 && Global.ballLeft)
            spike();
        else {fingerControls();}
        slowDown();
	}


	private function spike():Void {
	    if (FlxG.mouse.justPressed && !mouseDown) {
    	    mouseDown = true;
    	    mouseA.x = FlxG.stage.mouseX;
    	    mouseA.y = FlxG.stage.mouseY;
    	    }
    	if (FlxG.mouse.justReleased) {
    		animation.play("hit");
    	    mouseB.x = FlxG.stage.mouseX;
    	    mouseB.y = FlxG.stage.mouseY;
    		spiking = 10;
    		}
	}

	private function pressRightSide():Bool {
	    if (FlxG.stage.mouseX < FlxG.stage.width * 0.5)
	        return true;
	    return false;
	}

	private function fingerControls():Void {
	    if (FlxG.mouse.justPressed && !mouseDown && pressRightSide()) {
    	    mouseDown = true;
    	    mouseA.x = FlxG.stage.mouseX;
    	    mouseA.y = FlxG.stage.mouseY;
    	    }
    	if (FlxG.mouse.justReleased && pressRightSide()) {
    		mouseDown = false;
    	    mouseB.x = FlxG.stage.mouseX;
    	    mouseB.y = FlxG.stage.mouseY;
    		jump();
    		}
	}

	private function slowDown():Void {
         if (jumping)
            velocity.x *= 0.97;
            velocity.y *= 0.97;

	}


    private var xDif:Float;
    private var yDif:Float;
    private var hyp:Float;
    private var xSpeed:Float;
    private var ySpeed:Float;
	private function jump():Void {
		xDif = mouseA.x - mouseB.x;
		yDif = mouseA.y - mouseB.y;

		hyp = Math.sqrt(Math.abs(xDif*xDif) + Math.abs(yDif*yDif));

		if (hyp < ignoreRange)
			return;

		if (xDif==0 || yDif==0) {
			xSpeed = (maxSpeed + maxSpeedMod) * -1;
			ySpeed = (maxSpeed + maxSpeedMod) * -1;
			addVelocity(xSpeed,ySpeed);
			return;
		}

		xSpeed = xDif * ((maxSpeed + maxSpeedMod)/hyp) * -1;
		ySpeed = yDif * ((maxSpeed + maxSpeedMod)/hyp) * -1;
		addVelocity(xSpeed,ySpeed);
	}

	private function addVelocity(xSpeed:Float, ySpeed:Float):Void {
	    velocity.x = xSpeed * speedMulti;

	    if (ySpeed > 0)
	        velocity.y = ySpeed * speedMulti * 2;
	    else {velocity.y = ySpeed * speedMulti;}

	    /*
	    if ((velocity.x > 0 && xSpeed > 0) || (velocity.x < 0 && xSpeed < 0))
	       velocity.x +=  xSpeed;
	    else {velocity.x = xSpeed;}
	    if ((velocity.y > 0 && ySpeed > 0) || (velocity.y < 0 && ySpeed < 0))
	       velocity.y +=  ySpeed;
	    else {velocity.y = ySpeed;}
	    */
	}
}