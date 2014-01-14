#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_FocusEvent
#include <flash/events/FocusEvent.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
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
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_mouse_FlxMouse
#include <flixel/system/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{

Void FlxGame_obj::__construct(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{
HX_STACK_PUSH("FlxGame::new","flixel/FlxGame.hx",38);
Float Zoom = __o_Zoom.Default(1);
int GameFramerate = __o_GameFramerate.Default(60);
int FlashFramerate = __o_FlashFramerate.Default(60);
bool SkipSplash = __o_SkipSplash.Default(false);
bool StartFullscreen = __o_StartFullscreen.Default(false);
{
	HX_STACK_LINE(179)
	this->_skipSplash = false;
	HX_STACK_LINE(142)
	this->_lostFocus = false;
	HX_STACK_LINE(133)
	this->_total = (int)0;
	HX_STACK_LINE(80)
	this->requestedReset = true;
	HX_STACK_LINE(76)
	this->requestedState = null();
	HX_STACK_LINE(47)
	this->state = null();
	HX_STACK_LINE(43)
	this->ticks = (int)0;
	HX_STACK_LINE(194)
	super::__construct();
	HX_STACK_LINE(201)
	this->inputContainer = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(204)
	::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),GameSizeX,GameSizeY,Zoom);
	HX_STACK_LINE(206)
	::flixel::FlxG_obj::set_framerate(GameFramerate);
	HX_STACK_LINE(207)
	::flixel::FlxG_obj::set_flashFramerate(FlashFramerate);
	HX_STACK_LINE(208)
	this->_accumulator = this->stepMS;
	HX_STACK_LINE(209)
	this->_skipSplash = SkipSplash;
	HX_STACK_LINE(216)
	this->_iState = InitialState;
	HX_STACK_LINE(218)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null(),null(),null());
}
;
	return null();
}

FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(GameSizeX,GameSizeY,InitialState,__o_Zoom,__o_GameFramerate,__o_FlashFramerate,__o_SkipSplash,__o_StartFullscreen);
	return result;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

Void FlxGame_obj::draw( ){
{
		HX_STACK_PUSH("FlxGame::draw","flixel/FlxGame.hx",700);
		HX_STACK_THIS(this);
		HX_STACK_LINE(710)
		::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(713)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(713)
			while(((_g < _g1->length))){
				HX_STACK_LINE(713)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(713)
				++(_g);
				HX_STACK_LINE(713)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(713)
					continue;
				}
				HX_STACK_LINE(713)
				camera->clearDrawStack();
				HX_STACK_LINE(713)
				camera->_canvas->get_graphics()->clear();
				HX_STACK_LINE(713)
				camera->fill((int(camera->bgColor) & int((int)16777215)),camera->useBgAlphaBlending,(Float(((int((int(camera->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
			}
		}
		HX_STACK_LINE(720)
		{
			HX_STACK_LINE(720)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(720)
			while(((_g < _g1->length))){
				HX_STACK_LINE(720)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(720)
				++(_g);
				HX_STACK_LINE(720)
				if (((bool(plugin->exists) && bool(plugin->visible)))){
					HX_STACK_LINE(720)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(729)
		this->state->draw();
		HX_STACK_LINE(739)
		{
			HX_STACK_LINE(739)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(739)
			while(((_g < _g1->length))){
				HX_STACK_LINE(739)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(739)
				++(_g);
				HX_STACK_LINE(739)
				if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->visible)))){
					HX_STACK_LINE(739)
					camera->render();
				}
			}
		}
		HX_STACK_LINE(749)
		{
			HX_STACK_LINE(749)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(749)
			while(((_g < _g1->length))){
				HX_STACK_LINE(749)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(749)
				++(_g);
				HX_STACK_LINE(749)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(749)
					continue;
				}
				HX_STACK_LINE(749)
				camera->drawFX();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_PUSH("FlxGame::updateInput","flixel/FlxGame.hx",638);
		HX_STACK_THIS(this);
		HX_STACK_LINE(681)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(681)
		while(((_g < _g1->length))){
			HX_STACK_LINE(681)
			::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(681)
			++(_g);
			HX_STACK_LINE(681)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_PUSH("FlxGame::update","flixel/FlxGame.hx",598);
		HX_STACK_THIS(this);
		HX_STACK_LINE(599)
		if (((this->state != this->requestedState))){
			HX_STACK_LINE(600)
			this->switchState();
		}
		HX_STACK_LINE(611)
		if ((::flixel::FlxG_obj::fixedTimestep)){
			HX_STACK_LINE(612)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * this->stepSeconds);
		}
		else{
			HX_STACK_LINE(616)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * ((Float(this->elapsedMS) / Float((int)1000))));
		}
		HX_STACK_LINE(620)
		this->updateInput();
		HX_STACK_LINE(622)
		::flixel::FlxG_obj::sound->updateSounds();
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(623)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(623)
			while(((_g < _g1->length))){
				HX_STACK_LINE(623)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(623)
				++(_g);
				HX_STACK_LINE(623)
				if (((bool(plugin->exists) && bool(plugin->active)))){
					HX_STACK_LINE(623)
					plugin->update();
				}
			}
		}
		HX_STACK_LINE(625)
		this->state->tryUpdate();
		HX_STACK_LINE(627)
		{
			HX_STACK_LINE(627)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(627)
			while(((_g < _g1->length))){
				HX_STACK_LINE(627)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(627)
				++(_g);
				HX_STACK_LINE(627)
				if (((bool((camera != null())) && bool(camera->exists)))){
					HX_STACK_LINE(627)
					if ((camera->active)){
						HX_STACK_LINE(627)
						camera->update();
					}
					HX_STACK_LINE(627)
					if (((camera->target == null()))){
						HX_STACK_LINE(627)
						camera->_flashSprite->set_x((camera->x + camera->_flashOffsetX));
						HX_STACK_LINE(627)
						camera->_flashSprite->set_y((camera->y + camera->_flashOffsetY));
					}
					HX_STACK_LINE(627)
					camera->_flashSprite->set_visible(camera->visible);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_PUSH("FlxGame::step","flixel/FlxGame.hx",539);
		HX_STACK_THIS(this);
		HX_STACK_LINE(541)
		if ((this->requestedReset)){
			HX_STACK_LINE(543)
			{
				HX_STACK_LINE(543)
				if ((this->_skipSplash)){
					HX_STACK_LINE(543)
					this->requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(543)
					this->requestedState = ::flixel::system::FlxSplash_obj::__new(this->_iState);
				}
				HX_STACK_LINE(543)
				::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(544)
			this->requestedReset = false;
		}
		HX_STACK_LINE(582)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_PUSH("FlxGame::switchState","flixel/FlxGame.hx",492);
		HX_STACK_THIS(this);
		HX_STACK_LINE(494)
		::flixel::text::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(495)
		::flixel::FlxG_obj::bitmap->clearCache();
		HX_STACK_LINE(496)
		::flixel::FlxG_obj::cameras->reset(null());
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(497)
			while(((_g < _g1->length))){
				HX_STACK_LINE(497)
				::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(497)
				++(_g);
				HX_STACK_LINE(497)
				input->reset();
			}
		}
		HX_STACK_LINE(498)
		::flixel::FlxG_obj::sound->destroySounds(null());
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(499)
			while(((_g < _g1->length))){
				HX_STACK_LINE(499)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(499)
				++(_g);
				HX_STACK_LINE(499)
				if ((plugin->exists)){
					HX_STACK_LINE(499)
					plugin->onStateSwitch();
				}
			}
		}
		HX_STACK_LINE(510)
		bool mouseVisibility = (bool(::flixel::FlxG_obj::mouse->_updateCursorContainer) || bool(((  (((this->state != null()))) ? bool(this->state->_useMouse) : bool(false) ))));		HX_STACK_VAR(mouseVisibility,"mouseVisibility");
		HX_STACK_LINE(513)
		if (((this->state != null()))){
			HX_STACK_LINE(514)
			this->state->destroy();
		}
		HX_STACK_LINE(519)
		this->state = this->requestedState;
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(522)
			::flixel::FlxState _this = this->state;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(522)
			_this->_useMouse = mouseVisibility;
			HX_STACK_LINE(522)
			_this->updateMouseVisibility();
			HX_STACK_LINE(522)
			mouseVisibility;
		}
		HX_STACK_LINE(525)
		this->state->create();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::requestNewState( ::flixel::FlxState newState){
{
		HX_STACK_PUSH("FlxGame::requestNewState","flixel/FlxGame.hx",478);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newState,"newState");
		HX_STACK_LINE(478)
		this->requestedState = newState;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,requestNewState,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_PUSH("FlxGame::resetGame","flixel/FlxGame.hx",449);
		HX_STACK_THIS(this);
		HX_STACK_LINE(453)
		if ((this->_skipSplash)){
			HX_STACK_LINE(454)
			this->requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(458)
			this->requestedState = ::flixel::system::FlxSplash_obj::__new(this->_iState);
		}
		HX_STACK_LINE(470)
		::flixel::FlxG_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::onEnterFrame( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onEnterFrame","flixel/FlxGame.hx",380);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(381)
		this->ticks = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(382)
		this->elapsedMS = (this->ticks - this->_total);
		HX_STACK_LINE(383)
		this->_total = this->ticks;
		HX_STACK_LINE(392)
		if ((!(this->_lostFocus))){
			HX_STACK_LINE(394)
			if ((::flixel::FlxG_obj::vcr->paused)){
				HX_STACK_LINE(395)
				if ((::flixel::FlxG_obj::vcr->stepRequested)){
					HX_STACK_LINE(397)
					::flixel::FlxG_obj::vcr->stepRequested = false;
				}
				else{
					HX_STACK_LINE(400)
					if (((this->state == this->requestedState))){
						HX_STACK_LINE(401)
						return null();
					}
				}
			}
			HX_STACK_LINE(406)
			if ((::flixel::FlxG_obj::fixedTimestep)){
				HX_STACK_LINE(408)
				hx::AddEq(this->_accumulator,this->elapsedMS);
				HX_STACK_LINE(409)
				if (((this->_accumulator > this->maxAccumulation))){
					HX_STACK_LINE(410)
					this->_accumulator = this->maxAccumulation;
				}
				HX_STACK_LINE(414)
				while(((this->_accumulator > this->stepMS))){
					HX_STACK_LINE(417)
					this->step();
					HX_STACK_LINE(418)
					this->_accumulator = (this->_accumulator - this->stepMS);
				}
			}
			else{
				HX_STACK_LINE(422)
				this->step();
			}
			HX_STACK_LINE(430)
			this->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::onResize( ::flash::events::Event E){
{
		HX_STACK_PUSH("FlxGame::onResize","flixel/FlxGame.hx",355);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(356)
		int width = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(357)
		int height = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(360)
		::flixel::FlxG_obj::bitmap->onContext();
		HX_STACK_LINE(363)
		this->state->onResize(width,height);
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(364)
			while(((_g < _g1->length))){
				HX_STACK_LINE(364)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(364)
				++(_g);
				HX_STACK_LINE(364)
				if ((plugin->exists)){
					HX_STACK_LINE(364)
					plugin->onResize(width,height);
				}
			}
		}
		HX_STACK_LINE(369)
		if ((::flixel::FlxG_obj::autoResize)){
			HX_STACK_LINE(371)
			{
				HX_STACK_LINE(371)
				::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(371)
				_this->set_width(::Math_obj::ceil((Float(width) / Float(::flixel::FlxG_obj::camera->zoom))));
				HX_STACK_LINE(371)
				_this->set_height(::Math_obj::ceil((Float(height) / Float(::flixel::FlxG_obj::camera->zoom))));
			}
			HX_STACK_LINE(371)
			::flixel::FlxG_obj::width = width;
			HX_STACK_LINE(371)
			::flixel::FlxG_obj::height = height;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onResize,(void))

Void FlxGame_obj::onFocusLost( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocusLost","flixel/FlxGame.hx",333);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(334)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(336)
			this->state->onFocusLost();
			HX_STACK_LINE(337)
			return null();
		}
		HX_STACK_LINE(340)
		this->_lostFocus = true;
		HX_STACK_LINE(349)
		this->get_stage()->set_frameRate((int)10);
		HX_STACK_LINE(350)
		::flixel::FlxG_obj::sound->pauseSounds();
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(351)
			while(((_g < _g1->length))){
				HX_STACK_LINE(351)
				::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(351)
				++(_g);
				HX_STACK_LINE(351)
				input->onFocusLost();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onFocus( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocus","flixel/FlxGame.hx",307);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(308)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(310)
			this->state->onFocus();
			HX_STACK_LINE(311)
			return null();
		}
		HX_STACK_LINE(314)
		this->_lostFocus = false;
		HX_STACK_LINE(323)
		this->get_stage()->set_frameRate(this->flashFramerate);
		HX_STACK_LINE(324)
		::flixel::FlxG_obj::sound->resumeSounds();
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(325)
			while(((_g < _g1->length))){
				HX_STACK_LINE(325)
				::flixel::system::input::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::system::input::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(325)
				++(_g);
				HX_STACK_LINE(325)
				input->onFocus();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::create( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::create","flixel/FlxGame.hx",227);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(228)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(229)
			return null();
		}
		HX_STACK_LINE(232)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null());
		HX_STACK_LINE(234)
		this->_total = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(241)
		this->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(242)
		this->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(243)
		this->get_stage()->set_frameRate(this->flashFramerate);
		HX_STACK_LINE(245)
		this->addChild(this->inputContainer);
		HX_STACK_LINE(272)
		this->get_stage()->addEventListener(::flash::events::FocusEvent_obj::FOCUS_OUT,this->onFocusLost_dyn(),null(),null(),null());
		HX_STACK_LINE(273)
		this->get_stage()->addEventListener(::flash::events::FocusEvent_obj::FOCUS_IN,this->onFocus_dyn(),null(),null(),null());
		HX_STACK_LINE(277)
		if ((this->requestedReset)){
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				if ((this->_skipSplash)){
					HX_STACK_LINE(279)
					this->requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(279)
					this->requestedState = ::flixel::system::FlxSplash_obj::__new(this->_iState);
				}
				HX_STACK_LINE(279)
				::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(280)
			this->switchState();
			HX_STACK_LINE(281)
			this->requestedReset = false;
		}
		HX_STACK_LINE(289)
		if (((::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->stepMS))) < ::flixel::FlxG_obj::get_flashFramerate()))){
			HX_STACK_LINE(290)
			::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxG.flashFramerate: The game's framerate shouldn't be smaller than the flash framerate, since it can stop your game from updating."));
		}
		HX_STACK_LINE(295)
		this->get_stage()->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(299)
		this->get_stage()->addEventListener(::flash::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))


FlxGame_obj::FlxGame_obj()
{
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_iState,"_iState");
	HX_MARK_MEMBER_NAME(requestedReset,"requestedReset");
	HX_MARK_MEMBER_NAME(requestedState,"requestedState");
	HX_MARK_MEMBER_NAME(maxAccumulation,"maxAccumulation");
	HX_MARK_MEMBER_NAME(flashFramerate,"flashFramerate");
	HX_MARK_MEMBER_NAME(stepSeconds,"stepSeconds");
	HX_MARK_MEMBER_NAME(stepMS,"stepMS");
	HX_MARK_MEMBER_NAME(elapsedMS,"elapsedMS");
	HX_MARK_MEMBER_NAME(inputContainer,"inputContainer");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(ticks,"ticks");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_iState,"_iState");
	HX_VISIT_MEMBER_NAME(requestedReset,"requestedReset");
	HX_VISIT_MEMBER_NAME(requestedState,"requestedState");
	HX_VISIT_MEMBER_NAME(maxAccumulation,"maxAccumulation");
	HX_VISIT_MEMBER_NAME(flashFramerate,"flashFramerate");
	HX_VISIT_MEMBER_NAME(stepSeconds,"stepSeconds");
	HX_VISIT_MEMBER_NAME(stepMS,"stepMS");
	HX_VISIT_MEMBER_NAME(elapsedMS,"elapsedMS");
	HX_VISIT_MEMBER_NAME(inputContainer,"inputContainer");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(ticks,"ticks");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"ticks") ) { return ticks; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"stepMS") ) { return stepMS; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"_iState") ) { return _iState; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"elapsedMS") ) { return elapsedMS; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { return _skipSplash; }
		if (HX_FIELD_EQ(inName,"stepSeconds") ) { return stepSeconds; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestedReset") ) { return requestedReset; }
		if (HX_FIELD_EQ(inName,"requestedState") ) { return requestedState; }
		if (HX_FIELD_EQ(inName,"flashFramerate") ) { return flashFramerate; }
		if (HX_FIELD_EQ(inName,"inputContainer") ) { return inputContainer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"requestNewState") ) { return requestNewState_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAccumulation") ) { return maxAccumulation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ticks") ) { ticks=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepMS") ) { stepMS=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_iState") ) { _iState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"elapsedMS") ) { elapsedMS=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { _skipSplash=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepSeconds") ) { stepSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestedReset") ) { requestedReset=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"requestedState") ) { requestedState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashFramerate") ) { flashFramerate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputContainer") ) { inputContainer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"maxAccumulation") ) { maxAccumulation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_skipSplash"));
	outFields->push(HX_CSTRING("_lostFocus"));
	outFields->push(HX_CSTRING("_accumulator"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_iState"));
	outFields->push(HX_CSTRING("requestedReset"));
	outFields->push(HX_CSTRING("requestedState"));
	outFields->push(HX_CSTRING("maxAccumulation"));
	outFields->push(HX_CSTRING("flashFramerate"));
	outFields->push(HX_CSTRING("stepSeconds"));
	outFields->push(HX_CSTRING("stepMS"));
	outFields->push(HX_CSTRING("elapsedMS"));
	outFields->push(HX_CSTRING("inputContainer"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("ticks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("updateInput"),
	HX_CSTRING("update"),
	HX_CSTRING("step"),
	HX_CSTRING("switchState"),
	HX_CSTRING("requestNewState"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onResize"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("create"),
	HX_CSTRING("_skipSplash"),
	HX_CSTRING("_lostFocus"),
	HX_CSTRING("_accumulator"),
	HX_CSTRING("_total"),
	HX_CSTRING("_iState"),
	HX_CSTRING("requestedReset"),
	HX_CSTRING("requestedState"),
	HX_CSTRING("maxAccumulation"),
	HX_CSTRING("flashFramerate"),
	HX_CSTRING("stepSeconds"),
	HX_CSTRING("stepMS"),
	HX_CSTRING("elapsedMS"),
	HX_CSTRING("inputContainer"),
	HX_CSTRING("state"),
	HX_CSTRING("ticks"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxGame"), hx::TCanCast< FlxGame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGame_obj::__boot()
{
}

} // end namespace flixel
