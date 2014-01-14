#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Log
#include <flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Log_obj::__construct(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{
HX_STACK_PUSH("Log::new","flixel/system/debug/Log.hx",33);
bool Resizable = __o_Resizable.Default(true);
{
	HX_STACK_LINE(34)
	super::__construct(Title,IconPath,Width,Height,Resizable,Bounds);
	HX_STACK_LINE(36)
	this->_text = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(37)
	this->_text->set_x((int)2);
	HX_STACK_LINE(38)
	this->_text->set_y((int)15);
	HX_STACK_LINE(39)
	this->_text->set_multiline(true);
	HX_STACK_LINE(40)
	this->_text->set_wordWrap(true);
	HX_STACK_LINE(41)
	this->_text->set_selectable(true);
	HX_STACK_LINE(42)
	this->_text->set_embedFonts(true);
	HX_STACK_LINE(43)
	this->_text->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEBUGGER,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(44)
	this->addChild(this->_text);
	HX_STACK_LINE(46)
	this->_lines = Array_obj< ::String >::__new();
	HX_STACK_LINE(48)
	::flixel::FlxG_obj::log->set_redirectTraces(true);
}
;
	return null();
}

Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct(Title,IconPath,Width,Height,__o_Resizable,Bounds);
	return result;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Log_obj::updateSize( ){
{
		HX_STACK_PUSH("Log::updateSize","flixel/system/debug/Log.hx",192);
		HX_STACK_THIS(this);
		HX_STACK_LINE(193)
		this->super::updateSize();
		HX_STACK_LINE(195)
		this->_text->set_width((this->_width - (int)10));
		HX_STACK_LINE(196)
		this->_text->set_height((this->_height - (int)15));
	}
return null();
}


Void Log_obj::clear( ){
{
		HX_STACK_PUSH("Log::clear","flixel/system/debug/Log.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_LINE(181)
		this->_text->set_text(HX_CSTRING(""));
		HX_STACK_LINE(182)
		this->_lines->splice((int)0,this->_lines->length);
		HX_STACK_LINE(184)
		this->_text->set_scrollV((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Log_obj,clear,(void))

bool Log_obj::add( Dynamic Data,::flixel::system::debug::LogStyle Style,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
	HX_STACK_PUSH("Log::add","flixel/system/debug/Log.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(FireOnce,"FireOnce");
{
		HX_STACK_LINE(73)
		if (((Data == null()))){
			HX_STACK_LINE(74)
			return false;
		}
		HX_STACK_LINE(78)
		Array< ::String > texts = Array_obj< ::String >::__new();		HX_STACK_VAR(texts,"texts");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = Data->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			while(((_g1 < _g))){
				HX_STACK_LINE(81)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(83)
				if ((::Std_obj::is(Data->__GetItem(i),hx::ClassOf< ::flixel::util::FlxPoint >()))){
					struct _Function_4_1{
						inline static ::String Block( int &i,Dynamic &Data){
							HX_STACK_PUSH("*::closure","flixel/system/debug/Log.hx",85);
							{
								HX_STACK_LINE(85)
								::flixel::util::FlxPoint Point = Data->__GetItem(i);		HX_STACK_VAR(Point,"Point");
								int Precision = ::flixel::FlxG_obj::debugger->pointPrecision;		HX_STACK_VAR(Precision,"Precision");
								HX_STACK_LINE(85)
								::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
								HX_STACK_LINE(85)
								if (((Point != null()))){
									HX_STACK_LINE(85)
									Float xValue = ::flixel::util::FlxMath_obj::roundDecimal(Point->x,Precision);		HX_STACK_VAR(xValue,"xValue");
									HX_STACK_LINE(85)
									Float yValue = ::flixel::util::FlxMath_obj::roundDecimal(Point->y,Precision);		HX_STACK_VAR(yValue,"yValue");
									HX_STACK_LINE(85)
									string = (((HX_CSTRING("x: ") + xValue) + HX_CSTRING(" | y: ")) + yValue);
								}
								HX_STACK_LINE(85)
								return string;
							}
							return null();
						}
					};
					HX_STACK_LINE(84)
					texts[i] = _Function_4_1::Block(i,Data);
				}
				else{
					HX_STACK_LINE(87)
					if ((::Std_obj::is(Data->__GetItem(i),hx::ClassOf< ::haxe::ds::StringMap >()))){
						struct _Function_5_1{
							inline static ::String Block( int &i,Dynamic &Data){
								HX_STACK_PUSH("*::closure","flixel/system/debug/Log.hx",89);
								{
									HX_STACK_LINE(89)
									::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
									HX_STACK_LINE(89)
									for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(Data->__GetItem(i)->__Field(HX_CSTRING("keys"),true)());  __it->hasNext(); ){
										::String key = __it->next();
										{
											HX_STACK_LINE(89)
											hx::AddEq(string,::Std_obj::string(key));
											HX_STACK_LINE(89)
											hx::AddEq(string,HX_CSTRING(", "));
										}
;
									}
									HX_STACK_LINE(89)
									return string.substring((int)0,(string.length - (int)2));
								}
								return null();
							}
						};
						HX_STACK_LINE(88)
						texts[i] = _Function_5_1::Block(i,Data);
					}
					else{
						HX_STACK_LINE(92)
						texts[i] = ::Std_obj::string(Data->__GetItem(i));
					}
				}
				HX_STACK_LINE(97)
				texts[i] = ::StringTools_obj::replace(texts->__get(i),HX_CSTRING("<"),HX_CSTRING(""));
				HX_STACK_LINE(98)
				texts[i] = ::StringTools_obj::replace(texts->__get(i),HX_CSTRING(">"),HX_CSTRING(""));
			}
		}
		HX_STACK_LINE(101)
		::String text = texts->join(HX_CSTRING(" "));		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(105)
		::String prefix = ((((HX_CSTRING("<font size='") + Style->size) + HX_CSTRING("' color='#")) + Style->color) + HX_CSTRING("'>"));		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(106)
		::String suffix = HX_CSTRING("</font>");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(108)
		if ((Style->bold)){
			HX_STACK_LINE(110)
			prefix = (HX_CSTRING("<b>") + prefix);
			HX_STACK_LINE(111)
			suffix = (suffix + HX_CSTRING("</b>"));
		}
		HX_STACK_LINE(113)
		if ((Style->italic)){
			HX_STACK_LINE(115)
			prefix = (HX_CSTRING("<i>") + prefix);
			HX_STACK_LINE(116)
			suffix = (suffix + HX_CSTRING("</i>"));
		}
		HX_STACK_LINE(118)
		if ((Style->underlined)){
			HX_STACK_LINE(120)
			prefix = (HX_CSTRING("<u>") + prefix);
			HX_STACK_LINE(121)
			suffix = (suffix + HX_CSTRING("</u>"));
		}
		HX_STACK_LINE(125)
		text = (((prefix + Style->prefix) + text) + suffix);
		HX_STACK_LINE(131)
		if ((FireOnce)){
			HX_STACK_LINE(133)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = this->_lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			while(((_g < _g1->length))){
				HX_STACK_LINE(133)
				::String line = _g1->__get(_g);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(133)
				++(_g);
				HX_STACK_LINE(135)
				if (((text == line))){
					HX_STACK_LINE(136)
					return false;
				}
			}
		}
		HX_STACK_LINE(143)
		if (((this->_lines->length <= (int)0))){
			HX_STACK_LINE(144)
			this->_text->set_text(HX_CSTRING(""));
		}
		HX_STACK_LINE(148)
		this->_lines->push(text);
		HX_STACK_LINE(150)
		if (((this->_lines->length > ::flixel::system::debug::Log_obj::MAX_LOG_LINES))){
			HX_STACK_LINE(152)
			this->_lines->shift();
			HX_STACK_LINE(153)
			::String newText = HX_CSTRING("");		HX_STACK_VAR(newText,"newText");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_lines->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(154)
				while(((_g1 < _g))){
					HX_STACK_LINE(154)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(156)
					hx::AddEq(newText,(this->_lines->__get(i) + HX_CSTRING("<br>")));
				}
			}
			HX_STACK_LINE(160)
			this->_text->set_htmlText(newText);
		}
		else{
			HX_STACK_LINE(169)
			::flash::text::TextField _g = this->_text;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(169)
			_g->set_htmlText((_g->get_htmlText() + ((text + HX_CSTRING("<br>")))));
		}
		HX_STACK_LINE(175)
		this->_text->set_scrollV(::Std_obj::_int(this->_text->get_maxScrollV()));
		HX_STACK_LINE(176)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Log_obj,add,return )

Void Log_obj::destroy( ){
{
		HX_STACK_PUSH("Log::destroy","flixel/system/debug/Log.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(56)
		if (((this->_text != null()))){
			HX_STACK_LINE(57)
			this->removeChild(this->_text);
		}
		HX_STACK_LINE(60)
		this->_text = null();
		HX_STACK_LINE(61)
		this->_lines = null();
		HX_STACK_LINE(62)
		this->super::destroy();
	}
return null();
}


int Log_obj::MAX_LOG_LINES;


Log_obj::Log_obj()
{
}

void Log_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Log);
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	HX_MARK_MEMBER_NAME(_text,"_text");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Log_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Log_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return _lines; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_LOG_LINES") ) { return MAX_LOG_LINES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Log_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_LOG_LINES") ) { MAX_LOG_LINES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lines"));
	outFields->push(HX_CSTRING("_text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_LOG_LINES"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateSize"),
	HX_CSTRING("clear"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_lines"),
	HX_CSTRING("_text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
};

Class Log_obj::__mClass;

void Log_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Log"), hx::TCanCast< Log_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Log_obj::__boot()
{
	MAX_LOG_LINES= (int)200;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
