#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_PlayerA
#include <PlayerA.h>
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
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void PlayerA_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("PlayerA::new","PlayerA.hx",7);
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
	this->maxSpeed = (int)660;
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
	this->animation->play(HX_CSTRING("jump"),null(),null());
	HX_STACK_LINE(38)
	this->set_width(((this->get_width() * this->scale->x) * (int)3));
	HX_STACK_LINE(39)
	this->set_height(((this->get_height() * this->scale->y) * (int)2));
	HX_STACK_LINE(40)
	this->offset->set_x((this->get_width() * -0.25));
	HX_STACK_LINE(41)
	this->offset->set_y((this->get_height() * -0.15));
	HX_STACK_LINE(43)
	this->scale->set_x((int)2);
	HX_STACK_LINE(44)
	this->scale->set_y((int)2);
	HX_STACK_LINE(46)
	this->acceleration->set_y((int)1000);
	HX_STACK_LINE(51)
	this->set_moves(true);
}
;
	return null();
}

PlayerA_obj::~PlayerA_obj() { }

Dynamic PlayerA_obj::__CreateEmpty() { return  new PlayerA_obj; }
hx::ObjectPtr< PlayerA_obj > PlayerA_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< PlayerA_obj > result = new PlayerA_obj();
	result->__construct(X,Y);
	return result;}

Dynamic PlayerA_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerA_obj > result = new PlayerA_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PlayerA_obj::addVelocity( Float xSpeed,Float ySpeed){
{
		HX_STACK_PUSH("PlayerA::addVelocity","PlayerA.hx",179);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xSpeed,"xSpeed");
		HX_STACK_ARG(ySpeed,"ySpeed");
		HX_STACK_LINE(180)
		this->velocity->set_x((xSpeed * this->speedMulti));
		HX_STACK_LINE(182)
		if (((ySpeed > (int)0))){
			HX_STACK_LINE(183)
			this->velocity->set_y(((ySpeed * this->speedMulti) * (int)2));
		}
		else{
			HX_STACK_LINE(184)
			this->velocity->set_y((ySpeed * this->speedMulti));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayerA_obj,addVelocity,(void))

Void PlayerA_obj::jump( ){
{
		HX_STACK_PUSH("PlayerA::jump","PlayerA.hx",149);
		HX_STACK_THIS(this);
		HX_STACK_LINE(150)
		this->xDif = (this->mouseA->x - this->mouseB->x);
		HX_STACK_LINE(151)
		this->yDif = (this->mouseA->y - this->mouseB->y);
		HX_STACK_LINE(153)
		this->hyp = ::Math_obj::sqrt((::Math_obj::abs((this->xDif * this->xDif)) + ::Math_obj::abs((this->yDif * this->yDif))));
		HX_STACK_LINE(164)
		if (((this->hyp < this->ignoreRange))){
			HX_STACK_LINE(165)
			return null();
		}
		HX_STACK_LINE(167)
		if (((bool((this->xDif == (int)0)) || bool((this->yDif == (int)0))))){
			HX_STACK_LINE(168)
			this->xSpeed = (((this->maxSpeed + this->maxSpeedMod)) * (int)-1);
			HX_STACK_LINE(169)
			this->ySpeed = (((this->maxSpeed + this->maxSpeedMod)) * (int)-1);
			HX_STACK_LINE(170)
			this->addVelocity(this->xSpeed,this->ySpeed);
			HX_STACK_LINE(171)
			return null();
		}
		HX_STACK_LINE(174)
		this->xSpeed = ((this->xDif * ((Float(((this->maxSpeed + this->maxSpeedMod))) / Float(this->hyp)))) * (int)-1);
		HX_STACK_LINE(175)
		this->ySpeed = ((this->yDif * ((Float(((this->maxSpeed + this->maxSpeedMod))) / Float(this->hyp)))) * (int)-1);
		HX_STACK_LINE(176)
		this->addVelocity(this->xSpeed,this->ySpeed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerA_obj,jump,(void))

Void PlayerA_obj::slowDown( ){
{
		HX_STACK_PUSH("PlayerA::slowDown","PlayerA.hx",133);
		HX_STACK_THIS(this);
		HX_STACK_LINE(134)
		if ((this->jumping)){
			HX_STACK_LINE(135)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(135)
			_g->set_x((_g->x * 0.97));
		}
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			_g->set_y((_g->y * 0.97));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerA_obj,slowDown,(void))

Void PlayerA_obj::fingerControls( ){
{
		HX_STACK_PUSH("PlayerA::fingerControls","PlayerA.hx",119);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","PlayerA.hx",120);
				{
					HX_STACK_LINE(120)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(120)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(120)
		if (((bool((bool(_Function_1_1::Block()) && bool(!(this->mouseDown)))) && bool(this->pressRightSide())))){
			HX_STACK_LINE(121)
			this->mouseDown = true;
			HX_STACK_LINE(122)
			this->mouseA->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(123)
			this->mouseA->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","PlayerA.hx",125);
				{
					HX_STACK_LINE(125)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(125)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(125)
		if (((bool(_Function_1_2::Block()) && bool(this->pressRightSide())))){
			HX_STACK_LINE(126)
			this->mouseDown = false;
			HX_STACK_LINE(127)
			this->mouseB->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(128)
			this->mouseB->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
			HX_STACK_LINE(129)
			this->jump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerA_obj,fingerControls,(void))

bool PlayerA_obj::pressRightSide( ){
	HX_STACK_PUSH("PlayerA::pressRightSide","PlayerA.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_LINE(114)
	if (((::flixel::FlxG_obj::game->get_stage()->get_mouseX() < (::flixel::FlxG_obj::game->get_stage()->get_width() * 0.5)))){
		HX_STACK_LINE(115)
		return true;
	}
	HX_STACK_LINE(116)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerA_obj,pressRightSide,return )

Void PlayerA_obj::spike( ){
{
		HX_STACK_PUSH("PlayerA::spike","PlayerA.hx",99);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","PlayerA.hx",100);
				{
					HX_STACK_LINE(100)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(100)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(100)
		if (((bool(_Function_1_1::Block()) && bool(!(this->mouseDown))))){
			HX_STACK_LINE(101)
			this->mouseDown = true;
			HX_STACK_LINE(102)
			this->mouseA->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(103)
			this->mouseA->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","PlayerA.hx",105);
				{
					HX_STACK_LINE(105)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(105)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(105)
		if ((_Function_1_2::Block())){
			HX_STACK_LINE(106)
			this->animation->play(HX_CSTRING("hit"),null(),null());
			HX_STACK_LINE(107)
			this->mouseB->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(108)
			this->mouseB->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
			HX_STACK_LINE(109)
			this->spiking = (int)10;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerA_obj,spike,(void))

Void PlayerA_obj::update( ){
{
		HX_STACK_PUSH("PlayerA::update","PlayerA.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_LINE(57)
		this->super::update();
		HX_STACK_LINE(59)
		if (((this->spiking > (int)0))){
			HX_STACK_LINE(60)
			(this->spiking)--;
		}
		HX_STACK_LINE(63)
		if (((::Math_obj::abs(this->velocity->x) < (int)8))){
			HX_STACK_LINE(64)
			this->velocity->set_x((int)0);
		}
		HX_STACK_LINE(65)
		if (((::Math_obj::abs(this->velocity->y) < (int)8))){
			HX_STACK_LINE(66)
			this->velocity->set_y((int)0);
		}
		HX_STACK_LINE(68)
		if (((bool((this->x < ::flixel::FlxG_obj::worldBounds->x)) && bool((this->velocity->x < (int)0))))){
			HX_STACK_LINE(69)
			this->velocity->set_x((int)0);
			HX_STACK_LINE(70)
			this->set_x(::flixel::FlxG_obj::worldBounds->x);
		}
		HX_STACK_LINE(73)
		if (((bool((this->x > ((::flixel::FlxG_obj::worldBounds->x + (::flixel::FlxG_obj::worldBounds->width * 0.5)) - (this->get_width() * 0.75)))) && bool((this->velocity->x > (int)0))))){
			HX_STACK_LINE(74)
			this->velocity->set_x((int)0);
			HX_STACK_LINE(75)
			this->set_x(((::flixel::FlxG_obj::worldBounds->x + (::flixel::FlxG_obj::worldBounds->width * 0.5)) - (this->get_width() * 0.75)));
		}
		HX_STACK_LINE(78)
		if (((bool((this->y > ((::flixel::FlxG_obj::worldBounds->y + ::flixel::FlxG_obj::worldBounds->height) - (this->get_height() * 0.9)))) && bool((this->velocity->y > (int)0))))){
			HX_STACK_LINE(79)
			this->velocity->set_y((int)0);
			HX_STACK_LINE(80)
			this->velocity->set_x((int)0);
			HX_STACK_LINE(81)
			this->set_y((::flixel::FlxG_obj::height - (this->get_height() * 0.9)));
			HX_STACK_LINE(82)
			if (((this->spiking == (int)0))){
				HX_STACK_LINE(83)
				this->animation->play(HX_CSTRING("stand"),null(),null());
			}
			HX_STACK_LINE(84)
			this->jumping = false;
		}
		HX_STACK_LINE(86)
		if (((this->velocity->y < (int)0))){
			HX_STACK_LINE(87)
			if (((this->spiking == (int)0))){
				HX_STACK_LINE(88)
				this->animation->play(HX_CSTRING("jump"),null(),null());
			}
			HX_STACK_LINE(89)
			this->jumping = true;
		}
		HX_STACK_LINE(92)
		if (((bool((::Global_obj::playerAtouching > (int)0)) && bool(::Global_obj::ballLeft)))){
			HX_STACK_LINE(93)
			this->spike();
		}
		else{
			HX_STACK_LINE(94)
			this->fingerControls();
		}
		HX_STACK_LINE(95)
		this->slowDown();
	}
return null();
}



PlayerA_obj::PlayerA_obj()
{
}

void PlayerA_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerA);
	HX_MARK_MEMBER_NAME(ySpeed,"ySpeed");
	HX_MARK_MEMBER_NAME(xSpeed,"xSpeed");
	HX_MARK_MEMBER_NAME(hyp,"hyp");
	HX_MARK_MEMBER_NAME(yDif,"yDif");
	HX_MARK_MEMBER_NAME(xDif,"xDif");
	HX_MARK_MEMBER_NAME(bhyp,"bhyp");
	HX_MARK_MEMBER_NAME(byDif,"byDif");
	HX_MARK_MEMBER_NAME(bxDif,"bxDif");
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

void PlayerA_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ySpeed,"ySpeed");
	HX_VISIT_MEMBER_NAME(xSpeed,"xSpeed");
	HX_VISIT_MEMBER_NAME(hyp,"hyp");
	HX_VISIT_MEMBER_NAME(yDif,"yDif");
	HX_VISIT_MEMBER_NAME(xDif,"xDif");
	HX_VISIT_MEMBER_NAME(bhyp,"bhyp");
	HX_VISIT_MEMBER_NAME(byDif,"byDif");
	HX_VISIT_MEMBER_NAME(bxDif,"bxDif");
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

Dynamic PlayerA_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hyp") ) { return hyp; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		if (HX_FIELD_EQ(inName,"yDif") ) { return yDif; }
		if (HX_FIELD_EQ(inName,"xDif") ) { return xDif; }
		if (HX_FIELD_EQ(inName,"bhyp") ) { return bhyp; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"byDif") ) { return byDif; }
		if (HX_FIELD_EQ(inName,"bxDif") ) { return bxDif; }
		if (HX_FIELD_EQ(inName,"spike") ) { return spike_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ySpeed") ) { return ySpeed; }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { return xSpeed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseB") ) { return mouseB; }
		if (HX_FIELD_EQ(inName,"mouseA") ) { return mouseA; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spiking") ) { return spiking; }
		if (HX_FIELD_EQ(inName,"jumping") ) { return jumping; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"slowDown") ) { return slowDown_dyn(); }
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

Dynamic PlayerA_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hyp") ) { hyp=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"yDif") ) { yDif=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xDif") ) { xDif=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bhyp") ) { bhyp=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"byDif") ) { byDif=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bxDif") ) { bxDif=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ySpeed") ) { ySpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { xSpeed=inValue.Cast< Float >(); return inValue; }
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

void PlayerA_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ySpeed"));
	outFields->push(HX_CSTRING("xSpeed"));
	outFields->push(HX_CSTRING("hyp"));
	outFields->push(HX_CSTRING("yDif"));
	outFields->push(HX_CSTRING("xDif"));
	outFields->push(HX_CSTRING("bhyp"));
	outFields->push(HX_CSTRING("byDif"));
	outFields->push(HX_CSTRING("bxDif"));
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
	HX_CSTRING("addVelocity"),
	HX_CSTRING("jump"),
	HX_CSTRING("ySpeed"),
	HX_CSTRING("xSpeed"),
	HX_CSTRING("hyp"),
	HX_CSTRING("yDif"),
	HX_CSTRING("xDif"),
	HX_CSTRING("bhyp"),
	HX_CSTRING("byDif"),
	HX_CSTRING("bxDif"),
	HX_CSTRING("slowDown"),
	HX_CSTRING("fingerControls"),
	HX_CSTRING("pressRightSide"),
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
	HX_MARK_MEMBER_NAME(PlayerA_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerA_obj::__mClass,"__mClass");
};

Class PlayerA_obj::__mClass;

void PlayerA_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayerA"), hx::TCanCast< PlayerA_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlayerA_obj::__boot()
{
}

