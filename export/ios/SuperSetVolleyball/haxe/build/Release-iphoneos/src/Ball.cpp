#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouseButton
#include <flixel/system/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Ball_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Ball::new","Ball.hx",7);
{
	HX_STACK_LINE(22)
	this->justHit = (int)0;
	HX_STACK_LINE(20)
	this->ignoreRange = (int)10;
	HX_STACK_LINE(17)
	this->mouseDown = false;
	HX_STACK_LINE(15)
	this->speedMulti = (int)3;
	HX_STACK_LINE(14)
	this->maxSpeedMod = (int)0;
	HX_STACK_LINE(13)
	this->maxSpeed = (int)1000;
	HX_STACK_LINE(11)
	this->friction = -0.87;
	HX_STACK_LINE(10)
	this->stickToScreen = false;
	HX_STACK_LINE(26)
	super::__construct(X,Y,null());
	HX_STACK_LINE(27)
	this->mouseA = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(28)
	this->mouseB = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(30)
	this->loadGraphic(HX_CSTRING("assets/ball.png"),false,false,(int)32,(int)32,null(),null());
	HX_STACK_LINE(32)
	this->acceleration->set_y((int)600);
	HX_STACK_LINE(37)
	this->set_moves(true);
	HX_STACK_LINE(39)
	::Global_obj::ballLast = ::flixel::util::FlxPoint_obj::__new(this->x,this->y);
	HX_STACK_LINE(40)
	::Global_obj::ballNow = ::flixel::util::FlxPoint_obj::__new(this->x,this->y);
}
;
	return null();
}

Ball_obj::~Ball_obj() { }

Dynamic Ball_obj::__CreateEmpty() { return  new Ball_obj; }
hx::ObjectPtr< Ball_obj > Ball_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Ball_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Ball_obj::addVelocity( Float xSpeed,Float ySpeed){
{
		HX_STACK_PUSH("Ball::addVelocity","Ball.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xSpeed,"xSpeed");
		HX_STACK_ARG(ySpeed,"ySpeed");
		HX_STACK_LINE(140)
		this->velocity->set_x((xSpeed * this->speedMulti));
		HX_STACK_LINE(142)
		if (((ySpeed > (int)0))){
			HX_STACK_LINE(143)
			this->velocity->set_y(((ySpeed * this->speedMulti) * (int)2));
		}
		else{
			HX_STACK_LINE(144)
			this->velocity->set_y((ySpeed * this->speedMulti));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Ball_obj,addVelocity,(void))

Void Ball_obj::throwBall( ){
{
		HX_STACK_PUSH("Ball::throwBall","Ball.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_LINE(112)
		this->xDif = (this->mouseA->x - this->mouseB->x);
		HX_STACK_LINE(113)
		this->yDif = (this->mouseA->y - this->mouseB->y);
		HX_STACK_LINE(115)
		this->hyp = ::Math_obj::sqrt((::Math_obj::abs((this->xDif * this->xDif)) + ::Math_obj::abs((this->yDif * this->yDif))));
		HX_STACK_LINE(117)
		if (((this->hyp < this->ignoreRange))){
			HX_STACK_LINE(118)
			return null();
		}
		HX_STACK_LINE(120)
		if (((bool((this->xDif == (int)0)) || bool((this->yDif == (int)0))))){
			HX_STACK_LINE(121)
			this->xSpeed = (this->xDif * (int)-1);
			HX_STACK_LINE(122)
			this->ySpeed = (this->yDif * (int)-1);
			HX_STACK_LINE(123)
			this->addVelocity(this->xSpeed,this->ySpeed);
			HX_STACK_LINE(124)
			return null();
		}
		HX_STACK_LINE(127)
		if (((::Math_obj::abs(this->hyp) < (this->maxSpeed + this->maxSpeedMod)))){
			HX_STACK_LINE(128)
			this->xSpeed = ((Float(this->hyp) / Float(((this->maxSpeed + this->maxSpeedMod)))) * (((this->xDif * ((Float(((this->maxSpeed + this->maxSpeedMod))) / Float(this->hyp)))) * (int)-1)));
			HX_STACK_LINE(129)
			this->ySpeed = ((Float(this->hyp) / Float(((this->maxSpeed + this->maxSpeedMod)))) * (((this->yDif * ((Float(((this->maxSpeed + this->maxSpeedMod))) / Float(this->hyp)))) * (int)-1)));
			HX_STACK_LINE(130)
			this->addVelocity(this->xSpeed,this->ySpeed);
			HX_STACK_LINE(131)
			return null();
		}
		HX_STACK_LINE(134)
		this->xSpeed = ((this->xDif * ((Float(((this->maxSpeed + this->maxSpeedMod))) / Float(this->hyp)))) * (int)-1);
		HX_STACK_LINE(135)
		this->ySpeed = ((this->yDif * ((Float(((this->maxSpeed + this->maxSpeedMod))) / Float(this->hyp)))) * (int)-1);
		HX_STACK_LINE(136)
		this->addVelocity(this->xSpeed,this->ySpeed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,throwBall,(void))

Void Ball_obj::fingerControls( ){
{
		HX_STACK_PUSH("Ball::fingerControls","Ball.hx",90);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","Ball.hx",91);
				{
					HX_STACK_LINE(91)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(91)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(91)
		if (((bool((bool(_Function_1_1::Block()) && bool(!(this->mouseDown)))) && bool(this->pressRightSide())))){
			HX_STACK_LINE(92)
			this->mouseDown = true;
			HX_STACK_LINE(93)
			this->mouseA->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(94)
			this->mouseA->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","Ball.hx",96);
				{
					HX_STACK_LINE(96)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(96)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(96)
		if (((bool(_Function_1_2::Block()) && bool(this->pressRightSide())))){
			HX_STACK_LINE(97)
			this->mouseDown = false;
			HX_STACK_LINE(98)
			this->mouseB->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(99)
			this->mouseB->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
			HX_STACK_LINE(100)
			this->throwBall();
		}
		HX_STACK_LINE(102)
		this->justHit = (int)8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,fingerControls,(void))

bool Ball_obj::pressRightSide( ){
	HX_STACK_PUSH("Ball::pressRightSide","Ball.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(83)
	if (((bool(::Global_obj::ballLeft) && bool((::flixel::FlxG_obj::game->get_stage()->get_mouseX() < (::flixel::FlxG_obj::game->get_stage()->get_width() * 0.5)))))){
		HX_STACK_LINE(84)
		return true;
	}
	HX_STACK_LINE(85)
	if (((bool(!(::Global_obj::ballLeft)) && bool((::flixel::FlxG_obj::game->get_stage()->get_mouseX() > (::flixel::FlxG_obj::game->get_stage()->get_width() * 0.5)))))){
		HX_STACK_LINE(86)
		return true;
	}
	HX_STACK_LINE(87)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,pressRightSide,return )

Void Ball_obj::update( ){
{
		HX_STACK_PUSH("Ball::update","Ball.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		this->super::update();
		HX_STACK_LINE(48)
		if (((this->justHit > (int)0))){
			HX_STACK_LINE(49)
			(this->justHit)--;
		}
		HX_STACK_LINE(51)
		if (((::Math_obj::abs(this->velocity->x) < (int)8))){
			HX_STACK_LINE(52)
			this->velocity->set_x((int)0);
		}
		HX_STACK_LINE(53)
		if (((::Math_obj::abs(this->velocity->y) < (int)8))){
			HX_STACK_LINE(54)
			this->velocity->set_y((int)0);
		}
		HX_STACK_LINE(56)
		if (((bool((this->x < ::flixel::FlxG_obj::worldBounds->x)) && bool((this->velocity->x < (int)0))))){
			HX_STACK_LINE(57)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			_g->set_x((_g->x * this->friction));
		}
		HX_STACK_LINE(59)
		if (((bool((this->x > ((::flixel::FlxG_obj::worldBounds->x + ::flixel::FlxG_obj::worldBounds->width) - this->get_width()))) && bool((this->velocity->x > (int)0))))){
			HX_STACK_LINE(60)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			_g->set_x((_g->x * this->friction));
		}
		HX_STACK_LINE(62)
		if (((bool((this->y < ::flixel::FlxG_obj::worldBounds->y)) && bool((this->velocity->y < (int)0))))){
			HX_STACK_LINE(63)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			_g->set_y((_g->y * this->friction));
		}
		HX_STACK_LINE(65)
		if (((bool((this->y > ((::flixel::FlxG_obj::worldBounds->y + ::flixel::FlxG_obj::worldBounds->height) - this->get_height()))) && bool((this->velocity->y > (int)0))))){
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(66)
				_g->set_y((_g->y * this->friction));
			}
			HX_STACK_LINE(67)
			this->set_y((::flixel::FlxG_obj::height - this->get_height()));
		}
		HX_STACK_LINE(70)
		if (((::Global_obj::playerAtouching > (int)0))){
			HX_STACK_LINE(71)
			this->fingerControls();
		}
		HX_STACK_LINE(73)
		if (((this->x < ((::flixel::FlxG_obj::worldBounds->x + (::flixel::FlxG_obj::worldBounds->width * 0.5)) - (this->get_width() * 0.5))))){
			HX_STACK_LINE(74)
			::Global_obj::ballLeft = true;
		}
		else{
			HX_STACK_LINE(75)
			::Global_obj::ballLeft = false;
		}
		HX_STACK_LINE(77)
		::Global_obj::ballLast = ::Global_obj::ballNow;
		HX_STACK_LINE(78)
		::Global_obj::ballNow = ::flixel::util::FlxPoint_obj::__new(this->x,this->y);
	}
return null();
}



Ball_obj::Ball_obj()
{
}

void Ball_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ball);
	HX_MARK_MEMBER_NAME(ySpeed,"ySpeed");
	HX_MARK_MEMBER_NAME(xSpeed,"xSpeed");
	HX_MARK_MEMBER_NAME(hyp,"hyp");
	HX_MARK_MEMBER_NAME(yDif,"yDif");
	HX_MARK_MEMBER_NAME(xDif,"xDif");
	HX_MARK_MEMBER_NAME(justHit,"justHit");
	HX_MARK_MEMBER_NAME(ignoreRange,"ignoreRange");
	HX_MARK_MEMBER_NAME(mouseB,"mouseB");
	HX_MARK_MEMBER_NAME(mouseA,"mouseA");
	HX_MARK_MEMBER_NAME(mouseDown,"mouseDown");
	HX_MARK_MEMBER_NAME(speedMulti,"speedMulti");
	HX_MARK_MEMBER_NAME(maxSpeedMod,"maxSpeedMod");
	HX_MARK_MEMBER_NAME(maxSpeed,"maxSpeed");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(stickToScreen,"stickToScreen");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ball_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ySpeed,"ySpeed");
	HX_VISIT_MEMBER_NAME(xSpeed,"xSpeed");
	HX_VISIT_MEMBER_NAME(hyp,"hyp");
	HX_VISIT_MEMBER_NAME(yDif,"yDif");
	HX_VISIT_MEMBER_NAME(xDif,"xDif");
	HX_VISIT_MEMBER_NAME(justHit,"justHit");
	HX_VISIT_MEMBER_NAME(ignoreRange,"ignoreRange");
	HX_VISIT_MEMBER_NAME(mouseB,"mouseB");
	HX_VISIT_MEMBER_NAME(mouseA,"mouseA");
	HX_VISIT_MEMBER_NAME(mouseDown,"mouseDown");
	HX_VISIT_MEMBER_NAME(speedMulti,"speedMulti");
	HX_VISIT_MEMBER_NAME(maxSpeedMod,"maxSpeedMod");
	HX_VISIT_MEMBER_NAME(maxSpeed,"maxSpeed");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(stickToScreen,"stickToScreen");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Ball_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hyp") ) { return hyp; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"yDif") ) { return yDif; }
		if (HX_FIELD_EQ(inName,"xDif") ) { return xDif; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ySpeed") ) { return ySpeed; }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { return xSpeed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseB") ) { return mouseB; }
		if (HX_FIELD_EQ(inName,"mouseA") ) { return mouseA; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"justHit") ) { return justHit; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxSpeed") ) { return maxSpeed; }
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"throwBall") ) { return throwBall_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"speedMulti") ) { return speedMulti; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addVelocity") ) { return addVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"ignoreRange") ) { return ignoreRange; }
		if (HX_FIELD_EQ(inName,"maxSpeedMod") ) { return maxSpeedMod; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stickToScreen") ) { return stickToScreen; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fingerControls") ) { return fingerControls_dyn(); }
		if (HX_FIELD_EQ(inName,"pressRightSide") ) { return pressRightSide_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ball_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hyp") ) { hyp=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"yDif") ) { yDif=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xDif") ) { xDif=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ySpeed") ) { ySpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { xSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseB") ) { mouseB=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseA") ) { mouseA=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"justHit") ) { justHit=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxSpeed") ) { maxSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { mouseDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"speedMulti") ) { speedMulti=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ignoreRange") ) { ignoreRange=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSpeedMod") ) { maxSpeedMod=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stickToScreen") ) { stickToScreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ball_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ySpeed"));
	outFields->push(HX_CSTRING("xSpeed"));
	outFields->push(HX_CSTRING("hyp"));
	outFields->push(HX_CSTRING("yDif"));
	outFields->push(HX_CSTRING("xDif"));
	outFields->push(HX_CSTRING("justHit"));
	outFields->push(HX_CSTRING("ignoreRange"));
	outFields->push(HX_CSTRING("mouseB"));
	outFields->push(HX_CSTRING("mouseA"));
	outFields->push(HX_CSTRING("mouseDown"));
	outFields->push(HX_CSTRING("speedMulti"));
	outFields->push(HX_CSTRING("maxSpeedMod"));
	outFields->push(HX_CSTRING("maxSpeed"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("stickToScreen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("addVelocity"),
	HX_CSTRING("throwBall"),
	HX_CSTRING("ySpeed"),
	HX_CSTRING("xSpeed"),
	HX_CSTRING("hyp"),
	HX_CSTRING("yDif"),
	HX_CSTRING("xDif"),
	HX_CSTRING("fingerControls"),
	HX_CSTRING("pressRightSide"),
	HX_CSTRING("update"),
	HX_CSTRING("justHit"),
	HX_CSTRING("ignoreRange"),
	HX_CSTRING("mouseB"),
	HX_CSTRING("mouseA"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("speedMulti"),
	HX_CSTRING("maxSpeedMod"),
	HX_CSTRING("maxSpeed"),
	HX_CSTRING("friction"),
	HX_CSTRING("stickToScreen"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

Class Ball_obj::__mClass;

void Ball_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Ball"), hx::TCanCast< Ball_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Ball_obj::__boot()
{
}

