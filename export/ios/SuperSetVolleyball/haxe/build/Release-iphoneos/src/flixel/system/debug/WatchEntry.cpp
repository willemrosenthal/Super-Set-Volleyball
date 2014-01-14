#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
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
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldType
#include <flash/text/TextFieldType.h>
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
#ifndef INCLUDED_flixel_system_debug_WatchEntry
#include <flixel/system/debug/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyboard
#include <flixel/system/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void WatchEntry_obj::__construct(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom)
{
HX_STACK_PUSH("WatchEntry::new","flixel/system/debug/WatchEntry.hx",18);
{
	HX_STACK_LINE(55)
	this->quickWatch = false;
	HX_STACK_LINE(70)
	this->editing = false;
	HX_STACK_LINE(72)
	if (((bool((bool((Obj == null())) && bool((Field == null())))) && bool((Custom != null()))))){
		HX_STACK_LINE(73)
		this->quickWatch = true;
	}
	HX_STACK_LINE(75)
	this->custom = Custom;
	HX_STACK_LINE(78)
	if ((!(this->quickWatch))){
		HX_STACK_LINE(80)
		this->object = Obj;
		HX_STACK_LINE(81)
		this->field = Field;
		HX_STACK_LINE(83)
		Array< ::String > tempArr = this->field.split(HX_CSTRING("."));		HX_STACK_VAR(tempArr,"tempArr");
		HX_STACK_LINE(84)
		int l = tempArr->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(85)
		Dynamic tempObj = this->object;		HX_STACK_VAR(tempObj,"tempObj");
		HX_STACK_LINE(86)
		::String tempVarName = HX_CSTRING("");		HX_STACK_VAR(tempVarName,"tempVarName");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			while(((_g < l))){
				HX_STACK_LINE(87)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(89)
				tempVarName = tempArr->__get(i);
				HX_STACK_LINE(91)
				try{
					HX_STACK_LINE(92)
					if (((tempObj == null()))){
						HX_STACK_LINE(93)
						Dynamic();
					}
					else{
						HX_STACK_LINE(93)
						tempObj->__Field(tempVarName,true);
					}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(97)
							::flixel::FlxG_obj::log->error(((((HX_CSTRING("Watch: ") + ::Std_obj::string(tempObj)) + HX_CSTRING(" does not have a field '")) + tempVarName) + HX_CSTRING("'")));
							HX_STACK_LINE(98)
							tempVarName = null();
							HX_STACK_LINE(99)
							break;
						}
					}
				}
				HX_STACK_LINE(102)
				if (((i < (l - (int)1)))){
					HX_STACK_LINE(103)
					tempObj = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );
				}
			}
		}
		HX_STACK_LINE(108)
		this->object = tempObj;
		HX_STACK_LINE(109)
		this->field = tempVarName;
	}
	HX_STACK_LINE(112)
	::String fontName = ::flixel::system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(fontName,"fontName");
	HX_STACK_LINE(114)
	int color = (int)16777215;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(115)
	if ((this->quickWatch)){
		HX_STACK_LINE(116)
		color = (int)32768;
	}
	HX_STACK_LINE(118)
	this->_whiteText = ::flash::text::TextFormat_obj::__new(fontName,(int)12,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(119)
	this->_blackText = ::flash::text::TextFormat_obj::__new(fontName,(int)12,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(121)
	this->nameDisplay = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(122)
	this->nameDisplay->set_y(Y);
	HX_STACK_LINE(123)
	this->nameDisplay->set_multiline(false);
	HX_STACK_LINE(124)
	this->nameDisplay->set_selectable(true);
	HX_STACK_LINE(125)
	this->nameDisplay->set_embedFonts(true);
	HX_STACK_LINE(126)
	this->nameDisplay->set_defaultTextFormat(this->_whiteText);
	HX_STACK_LINE(128)
	this->valueDisplay = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(129)
	this->valueDisplay->set_y(Y);
	HX_STACK_LINE(130)
	this->valueDisplay->set_height((int)20);
	HX_STACK_LINE(131)
	this->valueDisplay->set_multiline(false);
	HX_STACK_LINE(132)
	this->valueDisplay->set_selectable(true);
	HX_STACK_LINE(133)
	this->valueDisplay->doubleClickEnabled = true;
	HX_STACK_LINE(135)
	if ((!(this->quickWatch))){
		HX_STACK_LINE(137)
		this->valueDisplay->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
		HX_STACK_LINE(138)
		this->valueDisplay->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(140)
	this->valueDisplay->set_background(false);
	HX_STACK_LINE(141)
	this->valueDisplay->set_backgroundColor((int)16777215);
	HX_STACK_LINE(142)
	this->valueDisplay->set_embedFonts(true);
	HX_STACK_LINE(143)
	this->valueDisplay->set_defaultTextFormat(this->_whiteText);
	HX_STACK_LINE(145)
	this->updateWidth(NameWidth,ValueWidth);
}
;
	return null();
}

WatchEntry_obj::~WatchEntry_obj() { }

Dynamic WatchEntry_obj::__CreateEmpty() { return  new WatchEntry_obj; }
hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__new(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom)
{  hx::ObjectPtr< WatchEntry_obj > result = new WatchEntry_obj();
	result->__construct(Y,NameWidth,ValueWidth,Obj,Field,Custom);
	return result;}

Dynamic WatchEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WatchEntry_obj > result = new WatchEntry_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void WatchEntry_obj::doneEditing( ){
{
		HX_STACK_PUSH("WatchEntry::doneEditing","flixel/system/debug/WatchEntry.hx",293);
		HX_STACK_THIS(this);
		HX_STACK_LINE(294)
		this->valueDisplay->set_type(::flash::text::TextFieldType_obj::DYNAMIC);
		HX_STACK_LINE(295)
		this->valueDisplay->setTextFormat(this->_whiteText,null(),null());
		HX_STACK_LINE(296)
		this->valueDisplay->set_defaultTextFormat(this->_whiteText);
		HX_STACK_LINE(297)
		this->valueDisplay->set_background(false);
		HX_STACK_LINE(298)
		this->editing = false;
		HX_STACK_LINE(300)
		::flixel::FlxG_obj::keyboard->enabled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,doneEditing,(void))

Void WatchEntry_obj::submit( ){
{
		HX_STACK_PUSH("WatchEntry::submit","flixel/system/debug/WatchEntry.hx",265);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::system::debug::WatchEntry_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/debug/WatchEntry.hx",266);
				{
					HX_STACK_LINE(266)
					Dynamic o = __this->object;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(266)
					return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(__this->field,true)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(266)
		Dynamic property = _Function_1_1::Block(this);		HX_STACK_VAR(property,"property");
		HX_STACK_LINE(269)
		if ((::Std_obj::is(property,hx::ClassOf< ::flixel::util::FlxPoint >()))){
			HX_STACK_LINE(270)
			::String xString = this->valueDisplay->get_text().split(HX_CSTRING(" |"))->__get((int)0);		HX_STACK_VAR(xString,"xString");
			HX_STACK_LINE(271)
			xString = xString.substring((int)3,xString.length);
			HX_STACK_LINE(272)
			Float xValue = ::Std_obj::parseFloat(xString);		HX_STACK_VAR(xValue,"xValue");
			HX_STACK_LINE(274)
			::String yString = this->valueDisplay->get_text().split(HX_CSTRING("| "))->__get((int)1);		HX_STACK_VAR(yString,"yString");
			HX_STACK_LINE(275)
			yString = yString.substring((int)3,yString.length);
			HX_STACK_LINE(276)
			Float yValue = ::Std_obj::parseFloat(yString);		HX_STACK_VAR(yValue,"yValue");
			HX_STACK_LINE(278)
			if ((!(::Math_obj::isNaN(xValue)))){
				HX_STACK_LINE(279)
				if (((property != null()))){
					HX_STACK_LINE(279)
					property->__SetField(HX_CSTRING("x"),xValue,false);
				}
			}
			HX_STACK_LINE(280)
			if ((!(::Math_obj::isNaN(yValue)))){
				HX_STACK_LINE(281)
				if (((property != null()))){
					HX_STACK_LINE(281)
					property->__SetField(HX_CSTRING("y"),yValue,false);
				}
			}
		}
		else{
			HX_STACK_LINE(284)
			Dynamic o = this->object;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(284)
			if (((o != null()))){
				HX_STACK_LINE(284)
				o->__SetField(this->field,this->valueDisplay->get_text(),true);
			}
		}
		HX_STACK_LINE(286)
		this->doneEditing();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,submit,(void))

Void WatchEntry_obj::cancel( ){
{
		HX_STACK_PUSH("WatchEntry::cancel","flixel/system/debug/WatchEntry.hx",256);
		HX_STACK_THIS(this);
		HX_STACK_LINE(257)
		this->valueDisplay->set_text(this->oldValue->toString());
		HX_STACK_LINE(258)
		this->doneEditing();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,cancel,(void))

Void WatchEntry_obj::onKeyUp( ::flash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("WatchEntry::onKeyUp","flixel/system/debug/WatchEntry.hx",238);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(238)
		if (((bool((bool((FlashEvent->keyCode == (int)13)) || bool((FlashEvent->keyCode == (int)9)))) || bool((FlashEvent->keyCode == (int)27))))){
			HX_STACK_LINE(240)
			if (((FlashEvent->keyCode == (int)27))){
				HX_STACK_LINE(242)
				this->cancel();
			}
			else{
				HX_STACK_LINE(246)
				this->submit();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onKeyUp,(void))

Void WatchEntry_obj::onMouseUp( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("WatchEntry::onMouseUp","flixel/system/debug/WatchEntry.hx",221);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(222)
		this->editing = true;
		HX_STACK_LINE(224)
		::flixel::FlxG_obj::keyboard->enabled = false;
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::system::debug::WatchEntry_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/debug/WatchEntry.hx",226);
				{
					HX_STACK_LINE(226)
					Dynamic o = __this->object;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(226)
					return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(__this->field,true)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(226)
		this->oldValue = _Function_1_1::Block(this);
		HX_STACK_LINE(227)
		this->valueDisplay->set_type(::flash::text::TextFieldType_obj::INPUT);
		HX_STACK_LINE(228)
		this->valueDisplay->setTextFormat(this->_blackText,null(),null());
		HX_STACK_LINE(229)
		this->valueDisplay->set_background(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onMouseUp,(void))

bool WatchEntry_obj::updateValue( ){
	HX_STACK_PUSH("WatchEntry::updateValue","flixel/system/debug/WatchEntry.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_LINE(202)
	if (((bool(this->editing) || bool(this->quickWatch)))){
		HX_STACK_LINE(203)
		return false;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::system::debug::WatchEntry_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/system/debug/WatchEntry.hx",205);
			{
				HX_STACK_LINE(205)
				Dynamic o = __this->object;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(205)
				return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(__this->field,true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(205)
	Dynamic property = _Function_1_1::Block(this);		HX_STACK_VAR(property,"property");
	HX_STACK_LINE(207)
	if ((::Std_obj::is(property,hx::ClassOf< ::flixel::util::FlxPoint >()))){
		struct _Function_2_1{
			inline static ::String Block( Dynamic &property){
				HX_STACK_PUSH("*::closure","flixel/system/debug/WatchEntry.hx",208);
				{
					HX_STACK_LINE(208)
					::flixel::util::FlxPoint Point = property;		HX_STACK_VAR(Point,"Point");
					int Precision = ::flixel::FlxG_obj::debugger->pointPrecision;		HX_STACK_VAR(Precision,"Precision");
					HX_STACK_LINE(208)
					::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
					HX_STACK_LINE(208)
					if (((Point != null()))){
						HX_STACK_LINE(208)
						Float xValue = ::flixel::util::FlxMath_obj::roundDecimal(Point->x,Precision);		HX_STACK_VAR(xValue,"xValue");
						HX_STACK_LINE(208)
						Float yValue = ::flixel::util::FlxMath_obj::roundDecimal(Point->y,Precision);		HX_STACK_VAR(yValue,"yValue");
						HX_STACK_LINE(208)
						string = (((HX_CSTRING("x: ") + xValue) + HX_CSTRING(" | y: ")) + yValue);
					}
					HX_STACK_LINE(208)
					return string;
				}
				return null();
			}
		};
		HX_STACK_LINE(208)
		this->valueDisplay->set_text(_Function_2_1::Block(property));
	}
	else{
		HX_STACK_LINE(210)
		this->valueDisplay->set_text(::Std_obj::string(property));
	}
	HX_STACK_LINE(212)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateValue,return )

Void WatchEntry_obj::updateWidth( Float NameWidth,Float ValueWidth){
{
		HX_STACK_PUSH("WatchEntry::updateWidth","flixel/system/debug/WatchEntry.hx",179);
		HX_STACK_THIS(this);
		HX_STACK_ARG(NameWidth,"NameWidth");
		HX_STACK_ARG(ValueWidth,"ValueWidth");
		HX_STACK_LINE(180)
		this->nameDisplay->set_width(NameWidth);
		HX_STACK_LINE(181)
		this->valueDisplay->set_width(ValueWidth);
		HX_STACK_LINE(182)
		if (((this->custom != null()))){
			HX_STACK_LINE(183)
			this->nameDisplay->set_text(this->custom);
		}
		else{
			HX_STACK_LINE(186)
			if (((this->field != null()))){
				HX_STACK_LINE(188)
				this->nameDisplay->set_text(HX_CSTRING(""));
				HX_STACK_LINE(189)
				if (((NameWidth > (int)120))){
					struct _Function_4_1{
						inline static ::String Block( ::flixel::system::debug::WatchEntry_obj *__this,Float &NameWidth){
							HX_STACK_PUSH("*::closure","flixel/system/debug/WatchEntry.hx",190);
							{
								HX_STACK_LINE(190)
								::String s = ::Type_obj::getClassName(::Type_obj::getClass(__this->object));		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(190)
								if (((s != null()))){
									HX_STACK_LINE(190)
									s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
									HX_STACK_LINE(190)
									if (((NameWidth < (int)240))){
										HX_STACK_LINE(190)
										s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
									}
								}
								HX_STACK_LINE(190)
								return s;
							}
							return null();
						}
					};
					HX_STACK_LINE(190)
					this->nameDisplay->appendText((_Function_4_1::Block(this,NameWidth) + HX_CSTRING(".")));
				}
				HX_STACK_LINE(192)
				this->nameDisplay->appendText(this->field);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchEntry_obj,updateWidth,(void))

Void WatchEntry_obj::setY( Float Y){
{
		HX_STACK_PUSH("WatchEntry::setY","flixel/system/debug/WatchEntry.hx",170);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(171)
		this->nameDisplay->set_y(Y);
		HX_STACK_LINE(172)
		this->valueDisplay->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,setY,(void))

Void WatchEntry_obj::destroy( ){
{
		HX_STACK_PUSH("WatchEntry::destroy","flixel/system/debug/WatchEntry.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_LINE(153)
		this->object = null();
		HX_STACK_LINE(154)
		this->oldValue = null();
		HX_STACK_LINE(155)
		this->nameDisplay = null();
		HX_STACK_LINE(156)
		this->field = null();
		HX_STACK_LINE(157)
		this->custom = null();
		HX_STACK_LINE(158)
		if (((this->valueDisplay != null()))){
			HX_STACK_LINE(160)
			this->valueDisplay->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
			HX_STACK_LINE(161)
			this->valueDisplay->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null());
			HX_STACK_LINE(162)
			this->valueDisplay = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,destroy,(void))


WatchEntry_obj::WatchEntry_obj()
{
}

void WatchEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchEntry);
	HX_MARK_MEMBER_NAME(quickWatch,"quickWatch");
	HX_MARK_MEMBER_NAME(_blackText,"_blackText");
	HX_MARK_MEMBER_NAME(_whiteText,"_whiteText");
	HX_MARK_MEMBER_NAME(oldValue,"oldValue");
	HX_MARK_MEMBER_NAME(editing,"editing");
	HX_MARK_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_MARK_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_END_CLASS();
}

void WatchEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(quickWatch,"quickWatch");
	HX_VISIT_MEMBER_NAME(_blackText,"_blackText");
	HX_VISIT_MEMBER_NAME(_whiteText,"_whiteText");
	HX_VISIT_MEMBER_NAME(oldValue,"oldValue");
	HX_VISIT_MEMBER_NAME(editing,"editing");
	HX_VISIT_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_VISIT_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(field,"field");
	HX_VISIT_MEMBER_NAME(object,"object");
}

Dynamic WatchEntry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { return oldValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quickWatch") ) { return quickWatch; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { return _blackText; }
		if (HX_FIELD_EQ(inName,"_whiteText") ) { return _whiteText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doneEditing") ) { return doneEditing_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return updateValue_dyn(); }
		if (HX_FIELD_EQ(inName,"updateWidth") ) { return updateWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { return nameDisplay; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { return valueDisplay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WatchEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { oldValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quickWatch") ) { quickWatch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { _blackText=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_whiteText") ) { _whiteText=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { nameDisplay=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { valueDisplay=inValue.Cast< ::flash::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WatchEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("quickWatch"));
	outFields->push(HX_CSTRING("_blackText"));
	outFields->push(HX_CSTRING("_whiteText"));
	outFields->push(HX_CSTRING("oldValue"));
	outFields->push(HX_CSTRING("editing"));
	outFields->push(HX_CSTRING("valueDisplay"));
	outFields->push(HX_CSTRING("nameDisplay"));
	outFields->push(HX_CSTRING("custom"));
	outFields->push(HX_CSTRING("field"));
	outFields->push(HX_CSTRING("object"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("doneEditing"),
	HX_CSTRING("submit"),
	HX_CSTRING("cancel"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("updateValue"),
	HX_CSTRING("updateWidth"),
	HX_CSTRING("setY"),
	HX_CSTRING("destroy"),
	HX_CSTRING("quickWatch"),
	HX_CSTRING("_blackText"),
	HX_CSTRING("_whiteText"),
	HX_CSTRING("oldValue"),
	HX_CSTRING("editing"),
	HX_CSTRING("valueDisplay"),
	HX_CSTRING("nameDisplay"),
	HX_CSTRING("custom"),
	HX_CSTRING("field"),
	HX_CSTRING("object"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

Class WatchEntry_obj::__mClass;

void WatchEntry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.WatchEntry"), hx::TCanCast< WatchEntry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WatchEntry_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
