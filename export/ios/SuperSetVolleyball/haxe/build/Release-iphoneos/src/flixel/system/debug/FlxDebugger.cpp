#include <hxcpp.h>

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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldAutoSize
#include <flash/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_BmpLog
#include <flixel/system/debug/BmpLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ButtonAlignment
#include <flixel/system/debug/ButtonAlignment.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Console
#include <flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerLayout
#include <flixel/system/debug/DebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Log
#include <flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Stats
#include <flixel/system/debug/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
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
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void FlxDebugger_obj::__construct(Float Width,Float Height)
{
HX_STACK_PUSH("FlxDebugger::new","flixel/system/debug/FlxDebugger.hx",32);
{
	HX_STACK_LINE(70)
	this->hasMouse = false;
	HX_STACK_LINE(109)
	super::__construct();
	HX_STACK_LINE(110)
	this->set_visible(false);
	HX_STACK_LINE(111)
	this->_layout = ::flixel::system::debug::DebuggerLayout_obj::STANDARD;
	HX_STACK_LINE(112)
	this->_screen = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(114)
	this->_topBar = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(115)
	this->_topBar->get_graphics()->beginFill((int)0,(Float((int)170) / Float((int)255)));
	HX_STACK_LINE(116)
	this->_topBar->get_graphics()->drawRect((int)0,(int)0,::flixel::FlxG_obj::game->get_stage()->get_stageWidth(),(int)20);
	HX_STACK_LINE(117)
	this->_topBar->get_graphics()->endFill();
	HX_STACK_LINE(118)
	this->addChild(this->_topBar);
	HX_STACK_LINE(120)
	::flash::text::TextField txt = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(txt,"txt");
	HX_STACK_LINE(121)
	txt->set_height((int)20);
	HX_STACK_LINE(122)
	txt->set_selectable(false);
	HX_STACK_LINE(123)
	txt->set_y((int)-9);
	HX_STACK_LINE(124)
	txt->set_multiline(false);
	HX_STACK_LINE(125)
	txt->set_embedFonts(true);
	HX_STACK_LINE(126)
	::flash::text::TextFormat format = ::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEBUGGER,(int)12,(int)-1,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(127)
	txt->set_defaultTextFormat(format);
	HX_STACK_LINE(128)
	txt->set_autoSize(::flash::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(129)
	txt->set_text(((((::flixel::FlxG_obj::LIBRARY_NAME + HX_CSTRING(" v")) + ::flixel::FlxG_obj::LIBRARY_MAJOR_VERSION) + HX_CSTRING(".")) + ::flixel::FlxG_obj::LIBRARY_MINOR_VERSION));
	HX_STACK_LINE(131)
	this->_leftButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(132)
	this->_rightButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(133)
	this->_middleButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(135)
	this->log = ::flixel::system::debug::Log_obj::__new(HX_CSTRING("log"),HX_CSTRING("flixel/img/debugger/buttons/logDebug.png"),(int)0,(int)0,true,null());
	HX_STACK_LINE(136)
	this->addChild(this->log);
	HX_STACK_LINE(138)
	this->watch = ::flixel::system::debug::Watch_obj::__new(HX_CSTRING("watch"),HX_CSTRING("flixel/img/debugger/buttons/watchDebug.png"),(int)0,(int)0,true,null());
	HX_STACK_LINE(139)
	this->addChild(this->watch);
	HX_STACK_LINE(141)
	this->console = ::flixel::system::debug::Console_obj::__new(HX_CSTRING("console"),HX_CSTRING("flixel/img/debugger/buttons/console.png"),(int)0,(int)0,false,null());
	HX_STACK_LINE(142)
	this->addChild(this->console);
	HX_STACK_LINE(144)
	this->stats = ::flixel::system::debug::Stats_obj::__new(HX_CSTRING("stats"),HX_CSTRING("flixel/img/debugger/buttons/statsDebug.png"),(int)0,(int)0,false,null());
	HX_STACK_LINE(145)
	this->addChild(this->stats);
	HX_STACK_LINE(152)
	this->vcr = ::flixel::system::debug::VCR_obj::__new(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(154)
	this->addButton(::flixel::system::debug::ButtonAlignment_obj::LEFT,HX_CSTRING("flixel/img/debugger/flixel.png"),this->openHomepage_dyn(),null(),null());
	HX_STACK_LINE(155)
	this->addButton(::flixel::system::debug::ButtonAlignment_obj::LEFT,null(),this->openHomepage_dyn(),null(),null())->addChild(txt);
	HX_STACK_LINE(157)
	this->addButton(::flixel::system::debug::ButtonAlignment_obj::RIGHT,HX_CSTRING("flixel/img/debugger/buttons/logDebug.png"),this->log->toggleVisibility_dyn(),true,null())->set_toggled(!(this->log->get_visible()));
	HX_STACK_LINE(158)
	this->addButton(::flixel::system::debug::ButtonAlignment_obj::RIGHT,HX_CSTRING("flixel/img/debugger/buttons/watchDebug.png"),this->watch->toggleVisibility_dyn(),true,null())->set_toggled(!(this->watch->get_visible()));
	HX_STACK_LINE(159)
	this->addButton(::flixel::system::debug::ButtonAlignment_obj::RIGHT,HX_CSTRING("flixel/img/debugger/buttons/console.png"),this->console->toggleVisibility_dyn(),true,null())->set_toggled(!(this->console->get_visible()));
	HX_STACK_LINE(160)
	this->addButton(::flixel::system::debug::ButtonAlignment_obj::RIGHT,HX_CSTRING("flixel/img/debugger/buttons/statsDebug.png"),this->stats->toggleVisibility_dyn(),true,null())->set_toggled(!(this->stats->get_visible()));
	HX_STACK_LINE(161)
	this->addButton(::flixel::system::debug::ButtonAlignment_obj::RIGHT,HX_CSTRING("flixel/img/debugger/buttons/visualDebug.png"),this->toggleVisualDebug_dyn(),true,null())->set_toggled(!(::flixel::FlxG_obj::debugger->visualDebug));
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		this->_screen->x = Width;
		HX_STACK_LINE(167)
		this->_screen->y = Height;
		HX_STACK_LINE(167)
		this->_screenBounds = ::flash::geom::Rectangle_obj::__new((int)2,21.,(this->_screen->x - (int)4),((this->_screen->y - (int)4) - (int)20));
		HX_STACK_LINE(167)
		this->stats->updateBounds(this->_screenBounds);
		HX_STACK_LINE(167)
		this->log->updateBounds(this->_screenBounds);
		HX_STACK_LINE(167)
		this->watch->updateBounds(this->_screenBounds);
		HX_STACK_LINE(167)
		this->console->updateBounds(this->_screenBounds);
		HX_STACK_LINE(167)
		if (((this->bmpLog != null()))){
			HX_STACK_LINE(167)
			this->bmpLog->updateBounds(this->_screenBounds);
		}
		HX_STACK_LINE(167)
		this->_topBar->set_width(::flixel::FlxG_obj::game->get_stage()->get_stageWidth());
		HX_STACK_LINE(167)
		this->resetButtonLayout();
		HX_STACK_LINE(167)
		this->resetLayout();
	}
	HX_STACK_LINE(169)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null(),null(),null());
	HX_STACK_LINE(170)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null(),null(),null());
}
;
	return null();
}

FlxDebugger_obj::~FlxDebugger_obj() { }

Dynamic FlxDebugger_obj::__CreateEmpty() { return  new FlxDebugger_obj; }
hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new(Float Width,Float Height)
{  hx::ObjectPtr< FlxDebugger_obj > result = new FlxDebugger_obj();
	result->__construct(Width,Height);
	return result;}

Dynamic FlxDebugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDebugger_obj > result = new FlxDebugger_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxDebugger_obj::openHomepage( ){
{
		HX_STACK_PUSH("FlxDebugger::openHomepage","flixel/system/debug/FlxDebugger.hx",430);
		HX_STACK_THIS(this);
		HX_STACK_LINE(430)
		::flash::Lib_obj::getURL(::flash::net::URLRequest_obj::__new(HX_CSTRING("http://www.haxeflixel.com")),HX_CSTRING("_blank"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,openHomepage,(void))

Void FlxDebugger_obj::toggleVisualDebug( ){
{
		HX_STACK_PUSH("FlxDebugger::toggleVisualDebug","flixel/system/debug/FlxDebugger.hx",425);
		HX_STACK_THIS(this);
		HX_STACK_LINE(425)
		::flixel::FlxG_obj::debugger->visualDebug = !(::flixel::FlxG_obj::debugger->visualDebug);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,toggleVisualDebug,(void))

::flixel::system::ui::FlxSystemButton FlxDebugger_obj::addButton( ::flixel::system::debug::ButtonAlignment Position,::String IconPath,Dynamic DownHandler,hx::Null< bool >  __o_ToggleMode,hx::Null< bool >  __o_UpdateLayout){
bool ToggleMode = __o_ToggleMode.Default(false);
bool UpdateLayout = __o_UpdateLayout.Default(false);
	HX_STACK_PUSH("FlxDebugger::addButton","flixel/system/debug/FlxDebugger.hx",398);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Position,"Position");
	HX_STACK_ARG(IconPath,"IconPath");
	HX_STACK_ARG(DownHandler,"DownHandler");
	HX_STACK_ARG(ToggleMode,"ToggleMode");
	HX_STACK_ARG(UpdateLayout,"UpdateLayout");
{
		HX_STACK_LINE(399)
		::flixel::system::ui::FlxSystemButton button = ::flixel::system::ui::FlxSystemButton_obj::__new(IconPath,DownHandler,ToggleMode);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(401)
		Array< ::Dynamic > array;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(402)
		{
			::flixel::system::debug::ButtonAlignment _switch_1 = (Position);
			switch((_switch_1)->GetIndex()){
				case 0: {
					HX_STACK_LINE(404)
					array = this->_leftButtons;
				}
				;break;
				case 1: {
					HX_STACK_LINE(406)
					array = this->_middleButtons;
				}
				;break;
				case 2: {
					HX_STACK_LINE(408)
					array = this->_rightButtons;
				}
				;break;
			}
		}
		HX_STACK_LINE(412)
		button->set_y((10. - (Float(button->get_height()) / Float((int)2))));
		HX_STACK_LINE(413)
		array->push(button);
		HX_STACK_LINE(414)
		this->addChild(button);
		HX_STACK_LINE(416)
		if ((UpdateLayout)){
			HX_STACK_LINE(417)
			this->resetButtonLayout();
		}
		HX_STACK_LINE(421)
		return button;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxDebugger_obj,addButton,return )

Void FlxDebugger_obj::resetButtonLayout( ){
{
		HX_STACK_PUSH("FlxDebugger::resetButtonLayout","flixel/system/debug/FlxDebugger.hx",379);
		HX_STACK_THIS(this);
		HX_STACK_LINE(380)
		this->hAlignSprites(this->_leftButtons,(int)10,true,(int)10);
		HX_STACK_LINE(382)
		Float offset = ((::flixel::FlxG_obj::game->get_stage()->get_stageWidth() * .5) - (this->hAlignSprites(this->_middleButtons,(int)10,false,null()) * .5));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(383)
		this->hAlignSprites(this->_middleButtons,(int)10,true,offset);
		HX_STACK_LINE(385)
		Float offset1 = (::flixel::FlxG_obj::game->get_stage()->get_stageWidth() - this->hAlignSprites(this->_rightButtons,(int)10,false,null()));		HX_STACK_VAR(offset1,"offset1");
		HX_STACK_LINE(386)
		this->hAlignSprites(this->_rightButtons,(int)10,true,offset1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetButtonLayout,(void))

Float FlxDebugger_obj::hAlignSprites( Dynamic Sprites,hx::Null< Float >  __o_Padding,hx::Null< bool >  __o_Set,hx::Null< Float >  __o_LeftOffset){
Float Padding = __o_Padding.Default(0);
bool Set = __o_Set.Default(true);
Float LeftOffset = __o_LeftOffset.Default(0);
	HX_STACK_PUSH("FlxDebugger::hAlignSprites","flixel/system/debug/FlxDebugger.hx",359);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Sprites,"Sprites");
	HX_STACK_ARG(Padding,"Padding");
	HX_STACK_ARG(Set,"Set");
	HX_STACK_ARG(LeftOffset,"LeftOffset");
{
		HX_STACK_LINE(360)
		Float width = (int)0;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(361)
		Float last = LeftOffset;		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = Sprites->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(363)
			while(((_g1 < _g))){
				HX_STACK_LINE(363)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(365)
				::flash::display::Sprite o = Sprites->__GetItem(i);		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(366)
				hx::AddEq(width,(o->get_width() + Padding));
				HX_STACK_LINE(367)
				if ((Set)){
					HX_STACK_LINE(368)
					o->set_x(last);
				}
				HX_STACK_LINE(369)
				last = ((o->get_x() + o->get_width()) + Padding);
			}
		}
		HX_STACK_LINE(372)
		return width;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxDebugger_obj,hAlignSprites,return )

Void FlxDebugger_obj::onResize( Float Width,Float Height){
{
		HX_STACK_PUSH("FlxDebugger::onResize","flixel/system/debug/FlxDebugger.hx",339);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(340)
		this->_screen->x = Width;
		HX_STACK_LINE(341)
		this->_screen->y = Height;
		HX_STACK_LINE(342)
		this->_screenBounds = ::flash::geom::Rectangle_obj::__new((int)2,21.,(this->_screen->x - (int)4),((this->_screen->y - (int)4) - (int)20));
		HX_STACK_LINE(343)
		this->stats->updateBounds(this->_screenBounds);
		HX_STACK_LINE(344)
		this->log->updateBounds(this->_screenBounds);
		HX_STACK_LINE(345)
		this->watch->updateBounds(this->_screenBounds);
		HX_STACK_LINE(346)
		this->console->updateBounds(this->_screenBounds);
		HX_STACK_LINE(347)
		if (((this->bmpLog != null()))){
			HX_STACK_LINE(347)
			this->bmpLog->updateBounds(this->_screenBounds);
		}
		HX_STACK_LINE(350)
		this->_topBar->set_width(::flixel::FlxG_obj::game->get_stage()->get_stageWidth());
		HX_STACK_LINE(351)
		this->resetButtonLayout();
		HX_STACK_LINE(352)
		this->resetLayout();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,onResize,(void))

Void FlxDebugger_obj::resetLayout( ){
{
		HX_STACK_PUSH("FlxDebugger::resetLayout","flixel/system/debug/FlxDebugger.hx",280);
		HX_STACK_THIS(this);
		HX_STACK_LINE(281)
		::flixel::system::debug::FlxDebugger _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(281)
		{
			::flixel::system::debug::DebuggerLayout _switch_2 = (_g->_layout);
			switch((_switch_2)->GetIndex()){
				case 1: {
					HX_STACK_LINE(284)
					this->log->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
					HX_STACK_LINE(285)
					this->log->reposition((int)0,this->_screen->y);
					HX_STACK_LINE(286)
					this->console->resize(((Float(this->_screen->x) / Float((int)2)) - (int)8),(int)35);
					HX_STACK_LINE(287)
					this->console->reposition(((this->log->get_x() + this->log->get_width()) + (int)2),this->_screen->y);
					HX_STACK_LINE(288)
					this->watch->resize((Float(this->_screen->x) / Float((int)4)),(int)68);
					HX_STACK_LINE(289)
					this->watch->reposition(this->_screen->x,this->_screen->y);
					HX_STACK_LINE(290)
					this->stats->reposition(this->_screen->x,(int)0);
				}
				;break;
				case 2: {
					HX_STACK_LINE(292)
					this->console->resize((this->_screen->x - (int)4),(int)35);
					HX_STACK_LINE(293)
					this->console->reposition((int)2,this->_screen->y);
					HX_STACK_LINE(294)
					this->log->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)2)));
					HX_STACK_LINE(295)
					this->log->reposition((int)0,(((this->_screen->y - this->log->get_height()) - this->console->get_height()) - 3.));
					HX_STACK_LINE(296)
					this->watch->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)2)));
					HX_STACK_LINE(297)
					this->watch->reposition(this->_screen->x,(((this->_screen->y - this->watch->get_height()) - this->console->get_height()) - 3.));
					HX_STACK_LINE(298)
					this->stats->reposition(this->_screen->x,(int)0);
				}
				;break;
				case 3: {
					HX_STACK_LINE(300)
					this->console->resize((this->_screen->x - (int)4),(int)35);
					HX_STACK_LINE(301)
					this->console->reposition((int)0,(int)0);
					HX_STACK_LINE(302)
					this->log->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
					HX_STACK_LINE(303)
					this->log->reposition((int)0,((this->console->get_height() + (int)2) + (int)15));
					HX_STACK_LINE(304)
					this->watch->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
					HX_STACK_LINE(305)
					this->watch->reposition(this->_screen->x,((this->console->get_height() + (int)2) + (int)15));
					HX_STACK_LINE(306)
					this->stats->reposition(this->_screen->x,this->_screen->y);
				}
				;break;
				case 4: {
					HX_STACK_LINE(308)
					this->console->resize((this->_screen->x - (int)4),(int)35);
					HX_STACK_LINE(309)
					this->console->reposition((int)2,this->_screen->y);
					HX_STACK_LINE(310)
					this->log->resize((Float(this->_screen->x) / Float((int)3)),(((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - (Float(this->console->get_height()) / Float((int)2))) - (int)2));
					HX_STACK_LINE(311)
					this->log->reposition((int)0,(int)0);
					HX_STACK_LINE(312)
					this->watch->resize((Float(this->_screen->x) / Float((int)3)),((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - (Float(this->console->get_height()) / Float((int)2))));
					HX_STACK_LINE(313)
					this->watch->reposition((int)0,((this->log->get_y() + this->log->get_height()) + (int)2));
					HX_STACK_LINE(314)
					this->stats->reposition(this->_screen->x,(int)0);
				}
				;break;
				case 5: {
					HX_STACK_LINE(316)
					this->console->resize((this->_screen->x - (int)4),(int)35);
					HX_STACK_LINE(317)
					this->console->reposition((int)2,this->_screen->y);
					HX_STACK_LINE(318)
					this->log->resize((Float(this->_screen->x) / Float((int)3)),(((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - (Float(this->console->get_height()) / Float((int)2))) - (int)2));
					HX_STACK_LINE(319)
					this->log->reposition(this->_screen->x,(int)0);
					HX_STACK_LINE(320)
					this->watch->resize((Float(this->_screen->x) / Float((int)3)),((Float((((this->_screen->y - (int)15) - 5.))) / Float((int)2)) - (Float(this->console->get_height()) / Float((int)2))));
					HX_STACK_LINE(321)
					this->watch->reposition(this->_screen->x,((this->log->get_y() + this->log->get_height()) + (int)2));
					HX_STACK_LINE(322)
					this->stats->reposition((int)0,(int)0);
				}
				;break;
				case 0: {
					HX_STACK_LINE(324)
					this->console->resize((this->_screen->x - (int)4),(int)35);
					HX_STACK_LINE(325)
					this->console->reposition((int)2,this->_screen->y);
					HX_STACK_LINE(326)
					this->log->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
					HX_STACK_LINE(327)
					this->log->reposition((int)0,(((this->_screen->y - this->log->get_height()) - this->console->get_height()) - 3.));
					HX_STACK_LINE(328)
					this->watch->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
					HX_STACK_LINE(329)
					this->watch->reposition(this->_screen->x,(((this->_screen->y - this->watch->get_height()) - this->console->get_height()) - 3.));
					HX_STACK_LINE(330)
					this->stats->reposition(this->_screen->x,(int)0);
					HX_STACK_LINE(331)
					if (((this->bmpLog != null()))){
						HX_STACK_LINE(332)
						this->bmpLog->resize((Float(((this->_screen->x - (int)6))) / Float((int)2)),(Float(this->_screen->y) / Float((int)4)));
						HX_STACK_LINE(333)
						this->bmpLog->reposition(this->_screen->x,((((this->_screen->y - this->watch->get_height()) - this->bmpLog->get_height()) - this->console->get_height()) - 3.));
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetLayout,(void))

Void FlxDebugger_obj::setLayout( ::flixel::system::debug::DebuggerLayout Layout){
{
		HX_STACK_PUSH("FlxDebugger::setLayout","flixel/system/debug/FlxDebugger.hx",270);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Layout,"Layout");
		HX_STACK_LINE(271)
		this->_layout = Layout;
		HX_STACK_LINE(272)
		this->resetLayout();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,setLayout,(void))

Void FlxDebugger_obj::onMouseOut( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxDebugger::onMouseOut","flixel/system/debug/FlxDebugger.hx",253);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(254)
		this->hasMouse = false;
		HX_STACK_LINE(257)
		if ((!(::flixel::FlxG_obj::vcr->paused))){
			HX_STACK_LINE(258)
			::flixel::FlxG_obj::mouse->set_useSystemCursor(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOut,(void))

Void FlxDebugger_obj::onMouseOver( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxDebugger::onMouseOver","flixel/system/debug/FlxDebugger.hx",241);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(242)
		this->hasMouse = true;
		HX_STACK_LINE(244)
		::flixel::FlxG_obj::mouse->set_useSystemCursor(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOver,(void))

Void FlxDebugger_obj::destroy( ){
{
		HX_STACK_PUSH("FlxDebugger::destroy","flixel/system/debug/FlxDebugger.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_LINE(178)
		this->_screen = null();
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_rightButtons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(180)
			while(((_g < _g1->length))){
				HX_STACK_LINE(180)
				::flixel::system::ui::FlxSystemButton o = _g1->__get(_g).StaticCast< ::flixel::system::ui::FlxSystemButton >();		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(180)
				++(_g);
				HX_STACK_LINE(182)
				o->destroy();
			}
		}
		HX_STACK_LINE(184)
		this->_rightButtons = null();
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_leftButtons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(186)
			while(((_g < _g1->length))){
				HX_STACK_LINE(186)
				::flixel::system::ui::FlxSystemButton o = _g1->__get(_g).StaticCast< ::flixel::system::ui::FlxSystemButton >();		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(186)
				++(_g);
				HX_STACK_LINE(188)
				o->destroy();
			}
		}
		HX_STACK_LINE(190)
		this->_leftButtons = null();
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_middleButtons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(192)
			while(((_g < _g1->length))){
				HX_STACK_LINE(192)
				::flixel::system::ui::FlxSystemButton o = _g1->__get(_g).StaticCast< ::flixel::system::ui::FlxSystemButton >();		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(192)
				++(_g);
				HX_STACK_LINE(194)
				o->destroy();
			}
		}
		HX_STACK_LINE(196)
		this->_middleButtons = null();
		HX_STACK_LINE(198)
		this->removeChild(this->_topBar);
		HX_STACK_LINE(199)
		this->_topBar = null();
		HX_STACK_LINE(201)
		if (((this->bmpLog != null()))){
			HX_STACK_LINE(203)
			this->removeChild(this->bmpLog);
			HX_STACK_LINE(204)
			this->bmpLog->destroy();
			HX_STACK_LINE(205)
			this->bmpLog = null();
		}
		HX_STACK_LINE(207)
		if (((this->log != null()))){
			HX_STACK_LINE(209)
			this->removeChild(this->log);
			HX_STACK_LINE(210)
			this->log->destroy();
			HX_STACK_LINE(211)
			this->log = null();
		}
		HX_STACK_LINE(213)
		if (((this->watch != null()))){
			HX_STACK_LINE(215)
			this->removeChild(this->watch);
			HX_STACK_LINE(216)
			this->watch->destroy();
			HX_STACK_LINE(217)
			this->watch = null();
		}
		HX_STACK_LINE(219)
		if (((this->stats != null()))){
			HX_STACK_LINE(221)
			this->removeChild(this->stats);
			HX_STACK_LINE(222)
			this->stats->destroy();
			HX_STACK_LINE(223)
			this->stats = null();
		}
		HX_STACK_LINE(225)
		if (((this->console != null()))){
			HX_STACK_LINE(227)
			this->removeChild(this->console);
			HX_STACK_LINE(228)
			this->console->destroy();
			HX_STACK_LINE(229)
			this->console = null();
		}
		HX_STACK_LINE(232)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null());
		HX_STACK_LINE(233)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,destroy,(void))


FlxDebugger_obj::FlxDebugger_obj()
{
}

void FlxDebugger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDebugger);
	HX_MARK_MEMBER_NAME(_topBar,"_topBar");
	HX_MARK_MEMBER_NAME(_rightButtons,"_rightButtons");
	HX_MARK_MEMBER_NAME(_leftButtons,"_leftButtons");
	HX_MARK_MEMBER_NAME(_middleButtons,"_middleButtons");
	HX_MARK_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(hasMouse,"hasMouse");
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_MEMBER_NAME(vcr,"vcr");
	HX_MARK_MEMBER_NAME(watch,"watch");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(bmpLog,"bmpLog");
	HX_MARK_MEMBER_NAME(stats,"stats");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDebugger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_topBar,"_topBar");
	HX_VISIT_MEMBER_NAME(_rightButtons,"_rightButtons");
	HX_VISIT_MEMBER_NAME(_leftButtons,"_leftButtons");
	HX_VISIT_MEMBER_NAME(_middleButtons,"_middleButtons");
	HX_VISIT_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(hasMouse,"hasMouse");
	HX_VISIT_MEMBER_NAME(console,"console");
	HX_VISIT_MEMBER_NAME(vcr,"vcr");
	HX_VISIT_MEMBER_NAME(watch,"watch");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(bmpLog,"bmpLog");
	HX_VISIT_MEMBER_NAME(stats,"stats");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDebugger_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vcr") ) { return vcr; }
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bmpLog") ) { return bmpLog; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_topBar") ) { return _topBar; }
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"_layout") ) { return _layout; }
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"hasMouse") ) { return hasMouse; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addButton") ) { return addButton_dyn(); }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openHomepage") ) { return openHomepage_dyn(); }
		if (HX_FIELD_EQ(inName,"_leftButtons") ) { return _leftButtons; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hAlignSprites") ) { return hAlignSprites_dyn(); }
		if (HX_FIELD_EQ(inName,"_rightButtons") ) { return _rightButtons; }
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { return _screenBounds; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middleButtons") ) { return _middleButtons; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"toggleVisualDebug") ) { return toggleVisualDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"resetButtonLayout") ) { return resetButtonLayout_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDebugger_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast< ::flixel::system::debug::VCR >(); return inValue; }
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::flixel::system::debug::Log >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< ::flixel::system::debug::Watch >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::flixel::system::debug::Stats >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bmpLog") ) { bmpLog=inValue.Cast< ::flixel::system::debug::BmpLog >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_topBar") ) { _topBar=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast< ::flixel::system::debug::DebuggerLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::flixel::system::debug::Console >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { hasMouse=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_leftButtons") ) { _leftButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_rightButtons") ) { _rightButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { _screenBounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middleButtons") ) { _middleButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDebugger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_topBar"));
	outFields->push(HX_CSTRING("_rightButtons"));
	outFields->push(HX_CSTRING("_leftButtons"));
	outFields->push(HX_CSTRING("_middleButtons"));
	outFields->push(HX_CSTRING("_screenBounds"));
	outFields->push(HX_CSTRING("_screen"));
	outFields->push(HX_CSTRING("_layout"));
	outFields->push(HX_CSTRING("hasMouse"));
	outFields->push(HX_CSTRING("console"));
	outFields->push(HX_CSTRING("vcr"));
	outFields->push(HX_CSTRING("watch"));
	outFields->push(HX_CSTRING("log"));
	outFields->push(HX_CSTRING("bmpLog"));
	outFields->push(HX_CSTRING("stats"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("openHomepage"),
	HX_CSTRING("toggleVisualDebug"),
	HX_CSTRING("addButton"),
	HX_CSTRING("resetButtonLayout"),
	HX_CSTRING("hAlignSprites"),
	HX_CSTRING("onResize"),
	HX_CSTRING("resetLayout"),
	HX_CSTRING("setLayout"),
	HX_CSTRING("onMouseOut"),
	HX_CSTRING("onMouseOver"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_topBar"),
	HX_CSTRING("_rightButtons"),
	HX_CSTRING("_leftButtons"),
	HX_CSTRING("_middleButtons"),
	HX_CSTRING("_screenBounds"),
	HX_CSTRING("_screen"),
	HX_CSTRING("_layout"),
	HX_CSTRING("hasMouse"),
	HX_CSTRING("console"),
	HX_CSTRING("vcr"),
	HX_CSTRING("watch"),
	HX_CSTRING("log"),
	HX_CSTRING("bmpLog"),
	HX_CSTRING("stats"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
};

Class FlxDebugger_obj::__mClass;

void FlxDebugger_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.FlxDebugger"), hx::TCanCast< FlxDebugger_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxDebugger_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
