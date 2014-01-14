#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Net
#include <Net.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerA
#include <PlayerA.h>
#endif
#ifndef INCLUDED_PlayerB
#include <PlayerB.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void PlayState_obj::__construct(::String __o_Level)
{
HX_STACK_PUSH("PlayState::new","PlayState.hx",37);
::String Level = __o_Level.Default(HX_CSTRING("summer1"));
{
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	this->clearData();
}
;
	return null();
}

PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(::String __o_Level)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(__o_Level);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::netHit( ::Ball ball,::Net net){
{
		HX_STACK_PUSH("PlayState::netHit","PlayState.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ball,"ball");
		HX_STACK_ARG(net,"net");
		HX_STACK_LINE(113)
		if (((bool((ball->x > net->x)) && bool((ball->velocity->x < (int)0))))){
			HX_STACK_LINE(114)
			::flixel::util::FlxPoint _g = ball->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(114)
			_g->set_x((_g->x * -0.8));
		}
		HX_STACK_LINE(115)
		if (((bool((ball->x < net->x)) && bool((ball->velocity->x > (int)0))))){
			HX_STACK_LINE(116)
			::flixel::util::FlxPoint _g = ball->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(116)
			_g->set_x((_g->x * -0.8));
		}
		HX_STACK_LINE(118)
		if (((bool((ball->y < net->y)) && bool((ball->velocity->y > (int)0))))){
			HX_STACK_LINE(119)
			::flixel::util::FlxPoint _g = ball->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			_g->set_y((_g->y * -0.8));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,netHit,(void))

Void PlayState_obj::touchBall( ::Ball ball,::flixel::FlxSprite player){
{
		HX_STACK_PUSH("PlayState::touchBall","PlayState.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ball,"ball");
		HX_STACK_ARG(player,"player");
		HX_STACK_LINE(86)
		if (((bool(!(::Global_obj::ballLeft)) && bool(::Std_obj::is(player,hx::ClassOf< ::PlayerA >()))))){
			HX_STACK_LINE(87)
			return null();
		}
		HX_STACK_LINE(88)
		if (((bool(::Global_obj::ballLeft) && bool(::Std_obj::is(player,hx::ClassOf< ::PlayerB >()))))){
			HX_STACK_LINE(89)
			return null();
		}
		HX_STACK_LINE(90)
		::Global_obj::playerAtouching = (int)2;
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::flixel::util::FlxPoint _g = player->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			_g->set_x((_g->x * 0.9));
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::flixel::util::FlxPoint _g = player->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			_g->set_y((_g->y * 0.9));
		}
		HX_STACK_LINE(94)
		if (((player->velocity->x < ball->velocity->x))){
			HX_STACK_LINE(95)
			::flixel::util::FlxPoint _g = player->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			_g->set_x((_g->x + (int)10));
		}
		HX_STACK_LINE(96)
		if (((player->velocity->x > ball->velocity->x))){
			HX_STACK_LINE(97)
			::flixel::util::FlxPoint _g = player->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(97)
			_g->set_x((_g->x - (int)10));
		}
		HX_STACK_LINE(98)
		if (((player->velocity->y < ball->velocity->y))){
			HX_STACK_LINE(99)
			::flixel::util::FlxPoint _g = player->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			_g->set_y((_g->y + (int)10));
		}
		HX_STACK_LINE(100)
		if (((player->velocity->y > ball->velocity->y))){
			HX_STACK_LINE(101)
			::flixel::util::FlxPoint _g = player->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			_g->set_y((_g->y - (int)10));
		}
		HX_STACK_LINE(103)
		if (((ball->justHit == (int)0))){
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				::flixel::util::FlxPoint _g = ball->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(104)
				_g->set_x((_g->x * 0.9));
			}
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				::flixel::util::FlxPoint _g = ball->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(105)
				_g->set_y((_g->y * 0.9));
			}
		}
		HX_STACK_LINE(107)
		if (((player->velocity->y > (int)800))){
			HX_STACK_LINE(108)
			::flixel::util::FlxPoint _g = ball->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			_g->set_y((_g->y - (int)80));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,touchBall,(void))

Void PlayState_obj::update( ){
{
		HX_STACK_PUSH("PlayState::update","PlayState.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_LINE(77)
		this->super::update();
		HX_STACK_LINE(78)
		::flixel::FlxG_obj::overlap(this->ball,this->player,this->touchBall_dyn(),null());
		HX_STACK_LINE(79)
		::flixel::FlxG_obj::overlap(this->ball,this->player2,this->touchBall_dyn(),null());
		HX_STACK_LINE(80)
		::flixel::FlxG_obj::overlap(this->ball,this->net,this->netHit_dyn(),null());
		HX_STACK_LINE(81)
		if (((::Global_obj::playerAtouching > (int)0))){
			HX_STACK_LINE(82)
			(::Global_obj::playerAtouching)--;
		}
	}
return null();
}


Void PlayState_obj::create( ){
{
		HX_STACK_PUSH("PlayState::create","PlayState.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_LINE(48)
		::flixel::util::FlxRect worldBounds = ::flixel::util::FlxRect_obj::__new(((int)1136 * -0.1),-160.,1363.2,800.);		HX_STACK_VAR(worldBounds,"worldBounds");
		HX_STACK_LINE(50)
		this->player = ::PlayerA_obj::__new((worldBounds->x + (worldBounds->width * 0.25)),(int)200);
		HX_STACK_LINE(51)
		this->add(this->player);
		HX_STACK_LINE(52)
		this->player2 = ::PlayerB_obj::__new((worldBounds->x + (worldBounds->width * 0.75)),(int)200);
		HX_STACK_LINE(53)
		this->add(this->player2);
		HX_STACK_LINE(55)
		this->ball = ::Ball_obj::__new(this->player2->x,(int)180);
		HX_STACK_LINE(56)
		this->add(this->ball);
		HX_STACK_LINE(58)
		this->net = ::Net_obj::__new((worldBounds->x + (worldBounds->width * 0.5)),(worldBounds->y + worldBounds->height));
		HX_STACK_LINE(59)
		this->add(this->net);
		HX_STACK_LINE(61)
		::flixel::FlxG_obj::camera->bounds = worldBounds;
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(62)
			_this->x = worldBounds->x;
			HX_STACK_LINE(62)
			_this->y = worldBounds->y;
			HX_STACK_LINE(62)
			_this->width = worldBounds->width;
			HX_STACK_LINE(62)
			_this->height = worldBounds->height;
			HX_STACK_LINE(62)
			_this;
		}
		HX_STACK_LINE(63)
		::flixel::FlxG_obj::camera->follow(this->ball,(int)1,::flixel::util::FlxPoint_obj::__new(null(),null()),(int)4);
		HX_STACK_LINE(66)
		Float deadWidthPlus = (int)200;		HX_STACK_VAR(deadWidthPlus,"deadWidthPlus");
		HX_STACK_LINE(67)
		Float deadHeightPlus = (int)150;		HX_STACK_VAR(deadHeightPlus,"deadHeightPlus");
		HX_STACK_LINE(68)
		hx::AddEq(::flixel::FlxG_obj::camera->deadzone->x,(deadWidthPlus * -0.5));
		HX_STACK_LINE(69)
		hx::AddEq(::flixel::FlxG_obj::camera->deadzone->y,(deadHeightPlus * -0.5));
		HX_STACK_LINE(70)
		hx::AddEq(::flixel::FlxG_obj::camera->deadzone->width,deadWidthPlus);
		HX_STACK_LINE(71)
		hx::AddEq(::flixel::FlxG_obj::camera->deadzone->height,deadHeightPlus);
	}
return null();
}


Void PlayState_obj::clearData( ){
{
		HX_STACK_PUSH("PlayState::clearData","PlayState.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		::haxe::Log_obj::trace(HX_CSTRING("cleared"),hx::SourceInfo(HX_CSTRING("PlayState.hx"),43,HX_CSTRING("PlayState"),HX_CSTRING("clearData")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,clearData,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(net,"net");
	HX_MARK_MEMBER_NAME(player2,"player2");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(ball,"ball");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(net,"net");
	HX_VISIT_MEMBER_NAME(player2,"player2");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"net") ) { return net; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"netHit") ) { return netHit_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player2") ) { return player2; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"touchBall") ) { return touchBall_dyn(); }
		if (HX_FIELD_EQ(inName,"clearData") ) { return clearData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"net") ) { net=inValue.Cast< ::Net >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::PlayerA >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player2") ) { player2=inValue.Cast< ::PlayerB >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("net"));
	outFields->push(HX_CSTRING("player2"));
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("ball"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("netHit"),
	HX_CSTRING("touchBall"),
	HX_CSTRING("update"),
	HX_CSTRING("create"),
	HX_CSTRING("clearData"),
	HX_CSTRING("net"),
	HX_CSTRING("player2"),
	HX_CSTRING("player"),
	HX_CSTRING("ball"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlayState_obj::__boot()
{
}

