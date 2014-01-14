#include <hxcpp.h>

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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_system_System
#include <flash/system/System.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
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
#ifndef INCLUDED_flixel_system_FlxList
#include <flixel/system/FlxList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Stats
#include <flixel/system/debug/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Stats_obj::__construct(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{
HX_STACK_PUSH("Stats::new","flixel/system/debug/Stats.hx",16);
bool Resizable = __o_Resizable.Default(true);
{
	HX_STACK_LINE(43)
	this->_drawCallsMarker = (int)0;
	HX_STACK_LINE(39)
	this->_flashMarker = (int)0;
	HX_STACK_LINE(36)
	this->_activeObjectMarker = (int)0;
	HX_STACK_LINE(33)
	this->_visibleObjectMarker = (int)0;
	HX_STACK_LINE(30)
	this->_drawMarker = (int)0;
	HX_STACK_LINE(27)
	this->_updateMarker = (int)0;
	HX_STACK_LINE(24)
	this->_updateTimer = (int)0;
	HX_STACK_LINE(23)
	this->_lastTime = (int)0;
	HX_STACK_LINE(57)
	super::__construct(Title,IconPath,Width,Height,Resizable,Bounds);
	HX_STACK_LINE(63)
	this->resize((int)100,(int)118);
	HX_STACK_LINE(66)
	::flash::text::TextField leftText = this->createTextField(::flash::text::TextFormatAlign_obj::LEFT,(int)14211288);		HX_STACK_VAR(leftText,"leftText");
	HX_STACK_LINE(67)
	leftText->set_text(((((((HX_CSTRING("FPS: \n") + HX_CSTRING("Mem: \n")) + HX_CSTRING("U: \n")) + HX_CSTRING("D: \n")) + HX_CSTRING("DrawTiles: \n")) + HX_CSTRING("QuadTrees: \n")) + HX_CSTRING("Lists \n")));
	HX_STACK_LINE(68)
	this->_text = this->createTextField(::flash::text::TextFormatAlign_obj::RIGHT,(int)16777215);
	HX_STACK_LINE(70)
	this->_update = Array_obj< int >::__new();
	HX_STACK_LINE(71)
	this->_draw = Array_obj< int >::__new();
	HX_STACK_LINE(72)
	this->_flash = Array_obj< Float >::__new();
	HX_STACK_LINE(73)
	this->_activeObject = Array_obj< int >::__new();
	HX_STACK_LINE(74)
	this->_visibleObject = Array_obj< int >::__new();
	HX_STACK_LINE(77)
	this->_drawCalls = Array_obj< int >::__new();
}
;
	return null();
}

Stats_obj::~Stats_obj() { }

Dynamic Stats_obj::__CreateEmpty() { return  new Stats_obj; }
hx::ObjectPtr< Stats_obj > Stats_obj::__new(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{  hx::ObjectPtr< Stats_obj > result = new Stats_obj();
	result->__construct(Title,IconPath,Width,Height,__o_Resizable,Bounds);
	return result;}

Dynamic Stats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stats_obj > result = new Stats_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Stats_obj::drawCalls( int Drawcalls){
{
		HX_STACK_PUSH("Stats::drawCalls","flixel/system/debug/Stats.hx",271);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Drawcalls,"Drawcalls");
		HX_STACK_LINE(271)
		this->_drawCalls[(this->_drawCallsMarker)++] = Drawcalls;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,drawCalls,(void))

Void Stats_obj::visibleObjects( int Count){
{
		HX_STACK_PUSH("Stats::visibleObjects","flixel/system/debug/Stats.hx",261);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Count,"Count");
		HX_STACK_LINE(261)
		this->_visibleObject[(this->_visibleObjectMarker)++] = Count;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,visibleObjects,(void))

Void Stats_obj::activeObjects( int Count){
{
		HX_STACK_PUSH("Stats::activeObjects","flixel/system/debug/Stats.hx",252);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Count,"Count");
		HX_STACK_LINE(252)
		this->_activeObject[(this->_activeObjectMarker)++] = Count;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,activeObjects,(void))

Void Stats_obj::flash( int Time){
{
		HX_STACK_PUSH("Stats::flash","flixel/system/debug/Stats.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Time,"Time");
		HX_STACK_LINE(243)
		this->_flash[(this->_flashMarker)++] = Time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flash,(void))

Void Stats_obj::flixelDraw( int Time){
{
		HX_STACK_PUSH("Stats::flixelDraw","flixel/system/debug/Stats.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Time,"Time");
		HX_STACK_LINE(234)
		this->_draw[(this->_drawMarker)++] = Time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelDraw,(void))

Void Stats_obj::flixelUpdate( int Time){
{
		HX_STACK_PUSH("Stats::flixelUpdate","flixel/system/debug/Stats.hx",225);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Time,"Time");
		HX_STACK_LINE(225)
		this->_update[(this->_updateMarker)++] = Time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelUpdate,(void))

Void Stats_obj::update( ){
{
		HX_STACK_PUSH("Stats::update","flixel/system/debug/Stats.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_LINE(130)
		int time = ::flixel::FlxG_obj::game->ticks;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(131)
		int elapsed = (time - this->_lastTime);		HX_STACK_VAR(elapsed,"elapsed");
		HX_STACK_LINE(132)
		this->_lastTime = ::flixel::FlxG_obj::game->ticks;
		HX_STACK_LINE(134)
		if (((elapsed > (int)500))){
			HX_STACK_LINE(135)
			elapsed = (int)500;
		}
		HX_STACK_LINE(138)
		this->_lastTime = time;
		HX_STACK_LINE(140)
		hx::AddEq(this->_updateTimer,elapsed);
		HX_STACK_LINE(142)
		if (((this->_updateTimer > (int)500))){
			HX_STACK_LINE(144)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(145)
			::String output = HX_CSTRING("");		HX_STACK_VAR(output,"output");
			HX_STACK_LINE(147)
			Float flashPlayerFramerate = (int)0;		HX_STACK_VAR(flashPlayerFramerate,"flashPlayerFramerate");
			HX_STACK_LINE(148)
			i = (int)0;
			HX_STACK_LINE(149)
			while(((i < this->_flashMarker))){
				HX_STACK_LINE(150)
				hx::AddEq(flashPlayerFramerate,this->_flash->__get((i)++));
			}
			HX_STACK_LINE(153)
			hx::DivEq(flashPlayerFramerate,this->_flashMarker);
			HX_STACK_LINE(155)
			int updateTime = (int)0;		HX_STACK_VAR(updateTime,"updateTime");
			HX_STACK_LINE(156)
			i = (int)0;
			HX_STACK_LINE(157)
			while(((i < this->_updateMarker))){
				HX_STACK_LINE(158)
				hx::AddEq(updateTime,this->_update->__get((i)++));
			}
			HX_STACK_LINE(162)
			int activeCount = (int)0;		HX_STACK_VAR(activeCount,"activeCount");
			HX_STACK_LINE(163)
			i = (int)0;
			HX_STACK_LINE(164)
			while(((i < this->_activeObjectMarker))){
				HX_STACK_LINE(165)
				hx::AddEq(activeCount,this->_activeObject->__get((i)++));
			}
			HX_STACK_LINE(168)
			activeCount = ::Std_obj::_int((Float(activeCount) / Float(this->_activeObjectMarker)));
			HX_STACK_LINE(170)
			int drawTime = (int)0;		HX_STACK_VAR(drawTime,"drawTime");
			HX_STACK_LINE(171)
			i = (int)0;
			HX_STACK_LINE(172)
			while(((i < this->_drawMarker))){
				HX_STACK_LINE(173)
				hx::AddEq(drawTime,this->_draw->__get((i)++));
			}
			HX_STACK_LINE(177)
			int visibleCount = (int)0;		HX_STACK_VAR(visibleCount,"visibleCount");
			HX_STACK_LINE(178)
			i = (int)0;
			HX_STACK_LINE(179)
			while(((i < this->_visibleObjectMarker))){
				HX_STACK_LINE(180)
				hx::AddEq(visibleCount,this->_visibleObject->__get((i)++));
			}
			HX_STACK_LINE(183)
			visibleCount = ::Std_obj::_int((Float(visibleCount) / Float(this->_visibleObjectMarker)));
			HX_STACK_LINE(186)
			int drawCallsCount = (int)0;		HX_STACK_VAR(drawCallsCount,"drawCallsCount");
			HX_STACK_LINE(187)
			i = (int)0;
			HX_STACK_LINE(188)
			while(((i < this->_drawCallsMarker))){
				HX_STACK_LINE(189)
				hx::AddEq(drawCallsCount,this->_drawCalls->__get((i)++));
			}
			HX_STACK_LINE(192)
			drawCallsCount = ::Std_obj::_int((Float(drawCallsCount) / Float(this->_drawCallsMarker)));
			HX_STACK_LINE(195)
			hx::AddEq(output,(((::Std_obj::_int((Float((int)1) / Float(((Float(flashPlayerFramerate) / Float((int)1000)))))) + HX_CSTRING(" / ")) + ::flixel::FlxG_obj::get_flashFramerate()) + HX_CSTRING(" \n")));
			HX_STACK_LINE(196)
			hx::AddEq(output,(((Float(::Math_obj::round(((::flash::system::System_obj::get_totalMemory() * 0.000000954) * (int)100))) / Float((int)100)) + HX_CSTRING(" MB")) + HX_CSTRING(" \n")));
			HX_STACK_LINE(197)
			hx::AddEq(output,((((activeCount + HX_CSTRING(" (")) + ::Std_obj::_int((Float(updateTime) / Float(this->_updateMarker)))) + HX_CSTRING("ms)")) + HX_CSTRING(" \n")));
			HX_STACK_LINE(198)
			hx::AddEq(output,((((visibleCount + HX_CSTRING(" (")) + ::Std_obj::_int((Float(drawTime) / Float(this->_drawMarker)))) + HX_CSTRING("ms)")) + HX_CSTRING(" \n")));
			HX_STACK_LINE(200)
			hx::AddEq(output,(::Std_obj::string(drawCallsCount) + HX_CSTRING(" \n")));
			HX_STACK_LINE(202)
			hx::AddEq(output,(::Std_obj::string(::flixel::system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES) + HX_CSTRING(" \n")));
			HX_STACK_LINE(203)
			hx::AddEq(output,(::Std_obj::string(::flixel::system::FlxList_obj::_NUM_CACHED_FLX_LIST) + HX_CSTRING(" \n")));
			HX_STACK_LINE(205)
			this->_text->set_text(output);
			HX_STACK_LINE(206)
			this->_text->set_selectable(false);
			HX_STACK_LINE(208)
			this->_updateMarker = (int)0;
			HX_STACK_LINE(209)
			this->_drawMarker = (int)0;
			HX_STACK_LINE(210)
			this->_flashMarker = (int)0;
			HX_STACK_LINE(211)
			this->_activeObjectMarker = (int)0;
			HX_STACK_LINE(212)
			this->_visibleObjectMarker = (int)0;
			HX_STACK_LINE(214)
			this->_drawCallsMarker = (int)0;
			HX_STACK_LINE(216)
			hx::SubEq(this->_updateTimer,(int)500);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,update,(void))

Void Stats_obj::destroy( ){
{
		HX_STACK_PUSH("Stats::destroy","flixel/system/debug/Stats.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_LINE(106)
		if (((this->_text != null()))){
			HX_STACK_LINE(107)
			this->removeChild(this->_text);
		}
		HX_STACK_LINE(110)
		this->_text = null();
		HX_STACK_LINE(111)
		this->_update = null();
		HX_STACK_LINE(112)
		this->_draw = null();
		HX_STACK_LINE(113)
		this->_flash = null();
		HX_STACK_LINE(114)
		this->_activeObject = null();
		HX_STACK_LINE(115)
		this->_visibleObject = null();
		HX_STACK_LINE(118)
		this->_drawCalls = null();
		HX_STACK_LINE(121)
		this->super::destroy();
	}
return null();
}


::flash::text::TextField Stats_obj::createTextField( Dynamic Alignment,int Color){
	HX_STACK_PUSH("Stats::createTextField","flixel/system/debug/Stats.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(88)
	::flash::text::TextField text = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(89)
	text->set_width((int)96);
	HX_STACK_LINE(90)
	text->set_x((int)2);
	HX_STACK_LINE(91)
	text->set_y((int)15);
	HX_STACK_LINE(92)
	text->set_multiline(true);
	HX_STACK_LINE(93)
	text->set_wordWrap(true);
	HX_STACK_LINE(94)
	text->set_selectable(true);
	HX_STACK_LINE(95)
	text->set_embedFonts(true);
	HX_STACK_LINE(96)
	text->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEBUGGER,(int)12,Color,false,false,false,null(),null(),Alignment,null(),null(),null(),null()));
	HX_STACK_LINE(97)
	this->addChild(text);
	HX_STACK_LINE(98)
	return text;
}


HX_DEFINE_DYNAMIC_FUNC2(Stats_obj,createTextField,return )


Stats_obj::Stats_obj()
{
}

void Stats_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stats);
	HX_MARK_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	HX_MARK_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_MARK_MEMBER_NAME(_flashMarker,"_flashMarker");
	HX_MARK_MEMBER_NAME(_flash,"_flash");
	HX_MARK_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_MARK_MEMBER_NAME(_activeObject,"_activeObject");
	HX_MARK_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_MARK_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_MARK_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_MARK_MEMBER_NAME(_draw,"_draw");
	HX_MARK_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_MARK_MEMBER_NAME(_lastTime,"_lastTime");
	HX_MARK_MEMBER_NAME(_text,"_text");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stats_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	HX_VISIT_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_VISIT_MEMBER_NAME(_flashMarker,"_flashMarker");
	HX_VISIT_MEMBER_NAME(_flash,"_flash");
	HX_VISIT_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_VISIT_MEMBER_NAME(_activeObject,"_activeObject");
	HX_VISIT_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_VISIT_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_VISIT_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_VISIT_MEMBER_NAME(_draw,"_draw");
	HX_VISIT_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_VISIT_MEMBER_NAME(_lastTime,"_lastTime");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Stats_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"_draw") ) { return _draw; }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_flash") ) { return _flash; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCalls") ) { return drawCalls_dyn(); }
		if (HX_FIELD_EQ(inName,"_lastTime") ) { return _lastTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flixelDraw") ) { return flixelDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { return _drawCalls; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { return _drawMarker; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"flixelUpdate") ) { return flixelUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashMarker") ) { return _flashMarker; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { return _updateTimer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return activeObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { return _activeObject; }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { return _updateMarker; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"visibleObjects") ) { return visibleObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { return _visibleObject; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { return createTextField_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { return _drawCallsMarker; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { return _activeObjectMarker; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { return _visibleObjectMarker; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stats_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { _draw=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flash") ) { _flash=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_lastTime") ) { _lastTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { _drawCalls=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { _drawMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_flashMarker") ) { _flashMarker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { _updateTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_activeObject") ) { _activeObject=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { _updateMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { _visibleObject=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { _drawCallsMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { _activeObjectMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { _visibleObjectMarker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_drawCallsMarker"));
	outFields->push(HX_CSTRING("_drawCalls"));
	outFields->push(HX_CSTRING("_flashMarker"));
	outFields->push(HX_CSTRING("_flash"));
	outFields->push(HX_CSTRING("_activeObjectMarker"));
	outFields->push(HX_CSTRING("_activeObject"));
	outFields->push(HX_CSTRING("_visibleObjectMarker"));
	outFields->push(HX_CSTRING("_visibleObject"));
	outFields->push(HX_CSTRING("_drawMarker"));
	outFields->push(HX_CSTRING("_draw"));
	outFields->push(HX_CSTRING("_updateMarker"));
	outFields->push(HX_CSTRING("_update"));
	outFields->push(HX_CSTRING("_updateTimer"));
	outFields->push(HX_CSTRING("_lastTime"));
	outFields->push(HX_CSTRING("_text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawCalls"),
	HX_CSTRING("visibleObjects"),
	HX_CSTRING("activeObjects"),
	HX_CSTRING("flash"),
	HX_CSTRING("flixelDraw"),
	HX_CSTRING("flixelUpdate"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("createTextField"),
	HX_CSTRING("_drawCallsMarker"),
	HX_CSTRING("_drawCalls"),
	HX_CSTRING("_flashMarker"),
	HX_CSTRING("_flash"),
	HX_CSTRING("_activeObjectMarker"),
	HX_CSTRING("_activeObject"),
	HX_CSTRING("_visibleObjectMarker"),
	HX_CSTRING("_visibleObject"),
	HX_CSTRING("_drawMarker"),
	HX_CSTRING("_draw"),
	HX_CSTRING("_updateMarker"),
	HX_CSTRING("_update"),
	HX_CSTRING("_updateTimer"),
	HX_CSTRING("_lastTime"),
	HX_CSTRING("_text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
};

Class Stats_obj::__mClass;

void Stats_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Stats"), hx::TCanCast< Stats_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stats_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
