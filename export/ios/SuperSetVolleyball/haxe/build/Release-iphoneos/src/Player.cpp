#include <hxcpp.h>

#ifndef INCLUDED_Calculations
#include <Calculations.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Player_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Player::new","Player.hx",7);
{
	HX_STACK_LINE(23)
	this->spiking = (int)0;
	HX_STACK_LINE(22)
	this->jumping = false;
	HX_STACK_LINE(20)
	this->ignoreRange = (int)10;
	HX_STACK_LINE(17)
	this->mouseDown = false;
	HX_STACK_LINE(15)
	this->speedMulti = (int)2;
	HX_STACK_LINE(14)
	this->maxSpeedMod = (int)0;
	HX_STACK_LINE(13)
	this->maxSpeed = (int)500;
	HX_STACK_LINE(11)
	this->friction = -0.8;
	HX_STACK_LINE(10)
	this->stickToScreen = false;
	HX_STACK_LINE(27)
	super::__construct(X,Y,null());
	HX_STACK_LINE(28)
	this->mouseA = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(29)
	this->mouseB = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(31)
	this->loadGraphic(HX_CSTRING("assets/red_player.png"),true,true,(int)61,(int)82,null(),null());
	HX_STACK_LINE(32)
	this->animation->add(HX_CSTRING("stand"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(33)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)1),null(),null());
	HX_STACK_LINE(34)
	this->animation->add(HX_CSTRING("hit"),Array_obj< int >::__new().Add((int)2),null(),null());
	HX_STACK_LINE(36)
	this->set_width(((this->get_width() * this->scale->x) * 2.5));
	HX_STACK_LINE(37)
	this->set_height(((this->get_height() * this->scale->y) * 1.75));
	HX_STACK_LINE(38)
	this->offset->set_x((this->get_width() * -0.15));
	HX_STACK_LINE(39)
	this->offset->set_y((this->get_height() * -0.15));
	HX_STACK_LINE(41)
	this->scale->set_x((int)2);
	HX_STACK_LINE(42)
	this->scale->set_y((int)2);
	HX_STACK_LINE(44)
	this->acceleration->set_y((int)500);
	HX_STACK_LINE(49)
	this->set_moves(true);
}
;
	return null();
}

Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::jump( ){
{
		HX_STACK_PUSH("Player::jump","Player.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_LINE(117)
		this->jumpTo = ::Calculations_obj::lineIntersect(this->mouseA,this->mouseB,::Global_obj::ballLast,::Global_obj::ballNow);
		HX_STACK_LINE(118)
		this->set_x((this->jumpTo->x - (this->get_width() * 0.5)));
		HX_STACK_LINE(119)
		this->set_y((this->jumpTo->y - (this->get_height() * 0.5)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,jump,(void))

Void Player_obj::fingerControls( ){
{
		HX_STACK_PUSH("Player::fingerControls","Player.hx",101);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","Player.hx",102);
				{
					HX_STACK_LINE(102)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(102)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(102)
		if (((bool(_Function_1_1::Block()) && bool(!(this->mouseDown))))){
			HX_STACK_LINE(103)
			this->mouseDown = true;
			HX_STACK_LINE(104)
			this->mouseA->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(105)
			this->mouseA->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","Player.hx",107);
				{
					HX_STACK_LINE(107)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(107)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(107)
		if ((_Function_1_2::Block())){
			HX_STACK_LINE(108)
			this->mouseDown = false;
			HX_STACK_LINE(109)
			this->mouseB->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(110)
			this->mouseB->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
			HX_STACK_LINE(111)
			this->jump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,fingerControls,(void))

Void Player_obj::spike( ){
{
		HX_STACK_PUSH("Player::spike","Player.hx",92);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","Player.hx",93);
				{
					HX_STACK_LINE(93)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(93)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(93)
		if (((bool(_Function_1_1::Block()) && bool(!(this->mouseDown))))){
			HX_STACK_LINE(94)
			this->mouseDown = true;
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","Player.hx",95);
				{
					HX_STACK_LINE(95)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(95)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(95)
		if ((_Function_1_2::Block())){
			HX_STACK_LINE(96)
			this->animation->play(HX_CSTRING("hit"),null(),null());
			HX_STACK_LINE(97)
			this->spiking = (int)10;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,spike,(void))

Void Player_obj::update( ){
{
		HX_STACK_PUSH("Player::update","Player.hx",54);
		HX_STACK_THIS(this);
		HX_STACK_LINE(55)
		this->super::update();
		HX_STACK_LINE(57)
		if (((this->spiking > (int)0))){
			HX_STACK_LINE(58)
			(this->spiking)--;
		}
		HX_STACK_LINE(60)
		if (((::Math_obj::abs(this->velocity->x) < (int)8))){
			HX_STACK_LINE(61)
			this->velocity->set_x((int)0);
		}
		HX_STACK_LINE(62)
		if (((::Math_obj::abs(this->velocity->y) < (int)8))){
			HX_STACK_LINE(63)
			this->velocity->set_y((int)0);
		}
		HX_STACK_LINE(65)
		if (((bool((this->x < (int)0)) && bool((this->velocity->x < (int)0))))){
			HX_STACK_LINE(66)
			this->velocity->set_x((int)0);
		}
		HX_STACK_LINE(68)
		if (((bool((this->x > (::flixel::FlxG_obj::width - (this->get_width() * this->scale->y)))) && bool((this->velocity->x > (int)0))))){
			HX_STACK_LINE(69)
			this->velocity->set_x((int)0);
		}
		HX_STACK_LINE(71)
		if (((bool((this->y > (::flixel::FlxG_obj::height - this->get_height()))) && bool((this->velocity->y > (int)0))))){
			HX_STACK_LINE(72)
			this->velocity->set_y((int)0);
			HX_STACK_LINE(73)
			this->velocity->set_x((int)0);
			HX_STACK_LINE(74)
			this->set_y((::flixel::FlxG_obj::height - this->get_height()));
			HX_STACK_LINE(75)
			if (((this->spiking == (int)0))){
				HX_STACK_LINE(76)
				this->animation->play(HX_CSTRING("stand"),null(),null());
			}
			HX_STACK_LINE(77)
			this->jumping = false;
		}
		HX_STACK_LINE(79)
		if (((this->velocity->y < (int)0))){
			HX_STACK_LINE(80)
			if (((this->spiking == (int)0))){
				HX_STACK_LINE(81)
				this->animation->play(HX_CSTRING("jump"),null(),null());
			}
			HX_STACK_LINE(82)
			this->jumping = true;
		}
		HX_STACK_LINE(85)
		if (((::Global_obj::playerAtouching == (int)0))){
			HX_STACK_LINE(86)
			this->fingerControls();
		}
		HX_STACK_LINE(87)
		if (((::Global_obj::playerAtouching > (int)0))){
			HX_STACK_LINE(88)
			this->spike();
		}
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(jumpTo,"jumpTo");
	HX_MARK_MEMBER_NAME(spiking,"spiking");
	HX_MARK_MEMBER_NAME(jumping,"jumping");
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

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(jumpTo,"jumpTo");
	HX_VISIT_MEMBER_NAME(spiking,"spiking");
	HX_VISIT_MEMBER_NAME(jumping,"jumping");
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

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"spike") ) { return spike_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"jumpTo") ) { return jumpTo; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseB") ) { return mouseB; }
		if (HX_FIELD_EQ(inName,"mouseA") ) { return mouseA; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spiking") ) { return spiking; }
		if (HX_FIELD_EQ(inName,"jumping") ) { return jumping; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxSpeed") ) { return maxSpeed; }
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"speedMulti") ) { return speedMulti; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ignoreRange") ) { return ignoreRange; }
		if (HX_FIELD_EQ(inName,"maxSpeedMod") ) { return maxSpeedMod; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stickToScreen") ) { return stickToScreen; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fingerControls") ) { return fingerControls_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"jumpTo") ) { jumpTo=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseB") ) { mouseB=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseA") ) { mouseA=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spiking") ) { spiking=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumping") ) { jumping=inValue.Cast< bool >(); return inValue; }
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

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("jumpTo"));
	outFields->push(HX_CSTRING("spiking"));
	outFields->push(HX_CSTRING("jumping"));
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
	HX_CSTRING("jump"),
	HX_CSTRING("jumpTo"),
	HX_CSTRING("fingerControls"),
	HX_CSTRING("spike"),
	HX_CSTRING("update"),
	HX_CSTRING("spiking"),
	HX_CSTRING("jumping"),
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
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Player_obj::__boot()
{
}

