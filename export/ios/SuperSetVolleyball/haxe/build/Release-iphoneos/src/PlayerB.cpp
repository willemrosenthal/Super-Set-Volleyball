#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_PlayerB
#include <PlayerB.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void PlayerB_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("PlayerB::new","PlayerB.hx",8);
{
	HX_STACK_LINE(26)
	this->slide = (int)0;
	HX_STACK_LINE(25)
	this->spiking = (int)0;
	HX_STACK_LINE(24)
	this->jumping = false;
	HX_STACK_LINE(22)
	this->ignoreRange = (int)10;
	HX_STACK_LINE(19)
	this->mouseDown = false;
	HX_STACK_LINE(17)
	this->maxSlide = (int)28;
	HX_STACK_LINE(16)
	this->speedMulti = (int)2;
	HX_STACK_LINE(15)
	this->maxSpeedMod = (int)0;
	HX_STACK_LINE(14)
	this->maxSpeed = (int)660;
	HX_STACK_LINE(12)
	this->friction = -0.8;
	HX_STACK_LINE(11)
	this->stickToScreen = false;
	HX_STACK_LINE(30)
	super::__construct(X,Y,null());
	HX_STACK_LINE(31)
	this->mouseA = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(32)
	this->mouseB = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(34)
	this->loadGraphic(HX_CSTRING("assets/blue_player.png"),true,true,(int)61,(int)82,null(),null());
	HX_STACK_LINE(35)
	this->animation->add(HX_CSTRING("stand"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(36)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)1),null(),null());
	HX_STACK_LINE(37)
	this->animation->add(HX_CSTRING("hit"),Array_obj< int >::__new().Add((int)2),null(),null());
	HX_STACK_LINE(38)
	this->animation->add(HX_CSTRING("slide"),Array_obj< int >::__new().Add((int)3),null(),null());
	HX_STACK_LINE(40)
	this->animation->play(HX_CSTRING("jump"),null(),null());
	HX_STACK_LINE(43)
	this->set_width(((this->get_width() * this->scale->x) * (int)3));
	HX_STACK_LINE(44)
	this->set_height(((this->get_height() * this->scale->y) * (int)2));
	HX_STACK_LINE(45)
	this->offset->set_x((this->get_width() * -0.43));
	HX_STACK_LINE(46)
	this->offset->set_y((this->get_height() * -0.15));
	HX_STACK_LINE(48)
	this->set_facing((int)1);
	HX_STACK_LINE(50)
	this->scale->set_x((int)2);
	HX_STACK_LINE(51)
	this->scale->set_y((int)2);
	HX_STACK_LINE(53)
	this->acceleration->set_y((int)1000);
	HX_STACK_LINE(58)
	this->set_moves(true);
}
;
	return null();
}

PlayerB_obj::~PlayerB_obj() { }

Dynamic PlayerB_obj::__CreateEmpty() { return  new PlayerB_obj; }
hx::ObjectPtr< PlayerB_obj > PlayerB_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< PlayerB_obj > result = new PlayerB_obj();
	result->__construct(X,Y);
	return result;}

Dynamic PlayerB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerB_obj > result = new PlayerB_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PlayerB_obj::addVelocity( Float xSpeed,Float ySpeed){
{
		HX_STACK_PUSH("PlayerB::addVelocity","PlayerB.hx",179);
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
		HX_STACK_LINE(186)
		if (((bool(!(this->jumping)) && bool((ySpeed > (int)0))))){
			HX_STACK_LINE(187)
			this->velocity->set_y((int)0);
			HX_STACK_LINE(189)
			this->slide = ::Std_obj::_int((this->maxSlide * ::Math_obj::abs(((Float(xSpeed) / Float(this->maxSpeed)) + this->maxSpeedMod))));
			HX_STACK_LINE(190)
			this->animation->play(HX_CSTRING("slide"),null(),null());
		}
		HX_STACK_LINE(193)
		::haxe::Log_obj::trace(xSpeed,hx::SourceInfo(HX_CSTRING("PlayerB.hx"),193,HX_CSTRING("PlayerB"),HX_CSTRING("addVelocity")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayerB_obj,addVelocity,(void))

Void PlayerB_obj::jump( ){
{
		HX_STACK_PUSH("PlayerB::jump","PlayerB.hx",158);
		HX_STACK_THIS(this);
		HX_STACK_LINE(159)
		this->xDif = (this->mouseA->x - this->mouseB->x);
		HX_STACK_LINE(160)
		this->yDif = (this->mouseA->y - this->mouseB->y);
		HX_STACK_LINE(162)
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


HX_DEFINE_DYNAMIC_FUNC0(PlayerB_obj,jump,(void))

Void PlayerB_obj::slowDown( ){
{
		HX_STACK_PUSH("PlayerB::slowDown","PlayerB.hx",145);
		HX_STACK_THIS(this);
		HX_STACK_LINE(146)
		if ((this->jumping)){
			HX_STACK_LINE(147)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			_g->set_x((_g->x * 0.97));
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			_g->set_y((_g->y * 0.97));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerB_obj,slowDown,(void))

Void PlayerB_obj::fingerControls( ){
{
		HX_STACK_PUSH("PlayerB::fingerControls","PlayerB.hx",131);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","PlayerB.hx",132);
				{
					HX_STACK_LINE(132)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(132)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(132)
		if (((bool((bool(_Function_1_1::Block()) && bool(!(this->mouseDown)))) && bool(this->pressRightSide())))){
			HX_STACK_LINE(133)
			this->mouseDown = true;
			HX_STACK_LINE(134)
			this->mouseA->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(135)
			this->mouseA->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","PlayerB.hx",137);
				{
					HX_STACK_LINE(137)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(137)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(137)
		if (((bool(_Function_1_2::Block()) && bool(this->pressRightSide())))){
			HX_STACK_LINE(138)
			this->mouseDown = false;
			HX_STACK_LINE(139)
			this->mouseB->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(140)
			this->mouseB->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
			HX_STACK_LINE(141)
			this->jump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerB_obj,fingerControls,(void))

bool PlayerB_obj::pressRightSide( ){
	HX_STACK_PUSH("PlayerB::pressRightSide","PlayerB.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_LINE(126)
	if (((::flixel::FlxG_obj::game->get_stage()->get_mouseX() > (::flixel::FlxG_obj::game->get_stage()->get_width() * 0.5)))){
		HX_STACK_LINE(127)
		return true;
	}
	HX_STACK_LINE(128)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerB_obj,pressRightSide,return )

Void PlayerB_obj::spike( ){
{
		HX_STACK_PUSH("PlayerB::spike","PlayerB.hx",111);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","PlayerB.hx",112);
				{
					HX_STACK_LINE(112)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(112)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(112)
		if (((bool(_Function_1_1::Block()) && bool(!(this->mouseDown))))){
			HX_STACK_LINE(113)
			this->mouseDown = true;
			HX_STACK_LINE(114)
			this->mouseA->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(115)
			this->mouseA->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_PUSH("*::closure","PlayerB.hx",117);
				{
					HX_STACK_LINE(117)
					::flixel::system::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(117)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(117)
		if ((_Function_1_2::Block())){
			HX_STACK_LINE(118)
			this->animation->play(HX_CSTRING("hit"),null(),null());
			HX_STACK_LINE(119)
			this->mouseB->set_x(::flixel::FlxG_obj::game->get_stage()->get_mouseX());
			HX_STACK_LINE(120)
			this->mouseB->set_y(::flixel::FlxG_obj::game->get_stage()->get_mouseY());
			HX_STACK_LINE(121)
			this->spiking = (int)10;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerB_obj,spike,(void))

Void PlayerB_obj::update( ){
{
		HX_STACK_PUSH("PlayerB::update","PlayerB.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_LINE(64)
		this->super::update();
		HX_STACK_LINE(66)
		if (((this->spiking > (int)0))){
			HX_STACK_LINE(67)
			(this->spiking)--;
		}
		HX_STACK_LINE(68)
		if (((this->slide > (int)0))){
			HX_STACK_LINE(69)
			(this->slide)--;
		}
		HX_STACK_LINE(72)
		if (((::Math_obj::abs(this->velocity->x) < (int)8))){
			HX_STACK_LINE(73)
			this->velocity->set_x((int)0);
		}
		HX_STACK_LINE(74)
		if (((::Math_obj::abs(this->velocity->y) < (int)8))){
			HX_STACK_LINE(75)
			this->velocity->set_y((int)0);
		}
		HX_STACK_LINE(77)
		if (((bool((this->x > ((::flixel::FlxG_obj::worldBounds->x + ::flixel::FlxG_obj::worldBounds->width) - this->get_width()))) && bool((this->velocity->x > (int)0))))){
			HX_STACK_LINE(78)
			this->velocity->set_x((int)0);
			HX_STACK_LINE(79)
			this->set_x(((::flixel::FlxG_obj::worldBounds->x + ::flixel::FlxG_obj::worldBounds->width) - this->get_width()));
		}
		HX_STACK_LINE(82)
		if (((bool((this->x < ((::flixel::FlxG_obj::worldBounds->x + (::flixel::FlxG_obj::worldBounds->width * 0.5)) - (this->get_width() * 0.23)))) && bool((this->velocity->x < (int)0))))){
			HX_STACK_LINE(83)
			this->velocity->set_x((int)0);
			HX_STACK_LINE(84)
			this->set_x(((::flixel::FlxG_obj::worldBounds->x + (::flixel::FlxG_obj::worldBounds->width * 0.5)) - (this->get_width() * 0.23)));
		}
		HX_STACK_LINE(87)
		if (((bool((this->y > ((::flixel::FlxG_obj::worldBounds->y + ::flixel::FlxG_obj::worldBounds->height) - (this->get_height() * 0.9)))) && bool((this->velocity->y > (int)0))))){
			HX_STACK_LINE(88)
			this->set_y((::flixel::FlxG_obj::height - (this->get_height() * 0.9)));
			HX_STACK_LINE(90)
			if (((this->slide == (int)0))){
				HX_STACK_LINE(91)
				this->velocity->set_y((int)0);
				HX_STACK_LINE(92)
				this->velocity->set_x((int)0);
				HX_STACK_LINE(93)
				if (((this->spiking == (int)0))){
					HX_STACK_LINE(94)
					this->animation->play(HX_CSTRING("stand"),null(),null());
				}
				HX_STACK_LINE(95)
				this->jumping = false;
			}
		}
		HX_STACK_LINE(98)
		if (((this->velocity->y < (int)0))){
			HX_STACK_LINE(99)
			if (((this->spiking == (int)0))){
				HX_STACK_LINE(100)
				this->animation->play(HX_CSTRING("jump"),null(),null());
			}
			HX_STACK_LINE(101)
			this->jumping = true;
		}
		HX_STACK_LINE(104)
		if (((bool((::Global_obj::playerAtouching > (int)0)) && bool(!(::Global_obj::ballLeft))))){
			HX_STACK_LINE(105)
			this->spike();
		}
		else{
			HX_STACK_LINE(106)
			this->fingerControls();
		}
		HX_STACK_LINE(107)
		this->slowDown();
	}
return null();
}



PlayerB_obj::PlayerB_obj()
{
}

void PlayerB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerB);
	HX_MARK_MEMBER_NAME(ySpeed,"ySpeed");
	HX_MARK_MEMBER_NAME(xSpeed,"xSpeed");
	HX_MARK_MEMBER_NAME(hyp,"hyp");
	HX_MARK_MEMBER_NAME(yDif,"yDif");
	HX_MARK_MEMBER_NAME(xDif,"xDif");
	HX_MARK_MEMBER_NAME(slide,"slide");
	HX_MARK_MEMBER_NAME(spiking,"spiking");
	HX_MARK_MEMBER_NAME(jumping,"jumping");
	HX_MARK_MEMBER_NAME(ignoreRange,"ignoreRange");
	HX_MARK_MEMBER_NAME(mouseB,"mouseB");
	HX_MARK_MEMBER_NAME(mouseA,"mouseA");
	HX_MARK_MEMBER_NAME(mouseDown,"mouseDown");
	HX_MARK_MEMBER_NAME(maxSlide,"maxSlide");
	HX_MARK_MEMBER_NAME(speedMulti,"speedMulti");
	HX_MARK_MEMBER_NAME(maxSpeedMod,"maxSpeedMod");
	HX_MARK_MEMBER_NAME(maxSpeed,"maxSpeed");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(stickToScreen,"stickToScreen");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ySpeed,"ySpeed");
	HX_VISIT_MEMBER_NAME(xSpeed,"xSpeed");
	HX_VISIT_MEMBER_NAME(hyp,"hyp");
	HX_VISIT_MEMBER_NAME(yDif,"yDif");
	HX_VISIT_MEMBER_NAME(xDif,"xDif");
	HX_VISIT_MEMBER_NAME(slide,"slide");
	HX_VISIT_MEMBER_NAME(spiking,"spiking");
	HX_VISIT_MEMBER_NAME(jumping,"jumping");
	HX_VISIT_MEMBER_NAME(ignoreRange,"ignoreRange");
	HX_VISIT_MEMBER_NAME(mouseB,"mouseB");
	HX_VISIT_MEMBER_NAME(mouseA,"mouseA");
	HX_VISIT_MEMBER_NAME(mouseDown,"mouseDown");
	HX_VISIT_MEMBER_NAME(maxSlide,"maxSlide");
	HX_VISIT_MEMBER_NAME(speedMulti,"speedMulti");
	HX_VISIT_MEMBER_NAME(maxSpeedMod,"maxSpeedMod");
	HX_VISIT_MEMBER_NAME(maxSpeed,"maxSpeed");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(stickToScreen,"stickToScreen");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlayerB_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hyp") ) { return hyp; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		if (HX_FIELD_EQ(inName,"yDif") ) { return yDif; }
		if (HX_FIELD_EQ(inName,"xDif") ) { return xDif; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"spike") ) { return spike_dyn(); }
		if (HX_FIELD_EQ(inName,"slide") ) { return slide; }
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
		if (HX_FIELD_EQ(inName,"maxSlide") ) { return maxSlide; }
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

Dynamic PlayerB_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hyp") ) { hyp=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"yDif") ) { yDif=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xDif") ) { xDif=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slide") ) { slide=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"maxSlide") ) { maxSlide=inValue.Cast< Float >(); return inValue; }
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

void PlayerB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ySpeed"));
	outFields->push(HX_CSTRING("xSpeed"));
	outFields->push(HX_CSTRING("hyp"));
	outFields->push(HX_CSTRING("yDif"));
	outFields->push(HX_CSTRING("xDif"));
	outFields->push(HX_CSTRING("slide"));
	outFields->push(HX_CSTRING("spiking"));
	outFields->push(HX_CSTRING("jumping"));
	outFields->push(HX_CSTRING("ignoreRange"));
	outFields->push(HX_CSTRING("mouseB"));
	outFields->push(HX_CSTRING("mouseA"));
	outFields->push(HX_CSTRING("mouseDown"));
	outFields->push(HX_CSTRING("maxSlide"));
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
	HX_CSTRING("slowDown"),
	HX_CSTRING("fingerControls"),
	HX_CSTRING("pressRightSide"),
	HX_CSTRING("spike"),
	HX_CSTRING("update"),
	HX_CSTRING("slide"),
	HX_CSTRING("spiking"),
	HX_CSTRING("jumping"),
	HX_CSTRING("ignoreRange"),
	HX_CSTRING("mouseB"),
	HX_CSTRING("mouseA"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("maxSlide"),
	HX_CSTRING("speedMulti"),
	HX_CSTRING("maxSpeedMod"),
	HX_CSTRING("maxSpeed"),
	HX_CSTRING("friction"),
	HX_CSTRING("stickToScreen"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerB_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerB_obj::__mClass,"__mClass");
};

Class PlayerB_obj::__mClass;

void PlayerB_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayerB"), hx::TCanCast< PlayerB_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlayerB_obj::__boot()
{
}

