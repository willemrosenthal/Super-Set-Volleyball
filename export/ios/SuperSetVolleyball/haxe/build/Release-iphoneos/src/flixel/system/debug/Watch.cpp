#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_WatchEntry
#include <flixel/system/debug/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
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

Void Watch_obj::__construct(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{
HX_STACK_PUSH("Watch::new","flixel/system/debug/Watch.hx",40);
bool Resizable = __o_Resizable.Default(true);
{
	HX_STACK_LINE(41)
	super::__construct(Title,IconPath,Width,Height,Resizable,Bounds);
	HX_STACK_LINE(43)
	this->_names = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(44)
	this->_names->set_x((int)2);
	HX_STACK_LINE(45)
	this->_names->set_y((int)15);
	HX_STACK_LINE(46)
	this->addChild(this->_names);
	HX_STACK_LINE(48)
	this->_values = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(49)
	this->_values->set_x((int)2);
	HX_STACK_LINE(50)
	this->_values->set_y((int)15);
	HX_STACK_LINE(51)
	this->addChild(this->_values);
	HX_STACK_LINE(53)
	this->_watching = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(54)
	this->_quickWatchList = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(56)
	this->editing = false;
	HX_STACK_LINE(58)
	this->removeAll();
}
;
	return null();
}

Watch_obj::~Watch_obj() { }

Dynamic Watch_obj::__CreateEmpty() { return  new Watch_obj; }
hx::ObjectPtr< Watch_obj > Watch_obj::__new(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(Title,IconPath,Width,Height,__o_Resizable,Bounds);
	return result;}

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Watch_obj::updateSize( ){
{
		HX_STACK_PUSH("Watch::updateSize","flixel/system/debug/Watch.hx",289);
		HX_STACK_THIS(this);
		HX_STACK_LINE(290)
		if (((::Std_obj::_int(this->_height) < ((this->_watching->length * (int)15) + (int)17)))){
			HX_STACK_LINE(291)
			this->_height = ((this->_watching->length * (int)15) + (int)17);
		}
		HX_STACK_LINE(295)
		this->super::updateSize();
		HX_STACK_LINE(297)
		this->_values->set_x(((Float(this->_width) / Float((int)2)) + (int)2));
		HX_STACK_LINE(299)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(300)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(301)
		while(((i < l))){
			HX_STACK_LINE(302)
			this->_watching->__get((i)++).StaticCast< ::flixel::system::debug::WatchEntry >()->updateWidth((Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10));
		}
	}
return null();
}


Void Watch_obj::submit( ){
{
		HX_STACK_PUSH("Watch::submit","flixel/system/debug/Watch.hx",269);
		HX_STACK_THIS(this);
		HX_STACK_LINE(270)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(271)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(272)
		::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(273)
		while(((i < l))){
			HX_STACK_LINE(275)
			watchEntry = this->_watching->__get((i)++).StaticCast< ::flixel::system::debug::WatchEntry >();
			HX_STACK_LINE(276)
			if ((watchEntry->editing)){
				HX_STACK_LINE(277)
				watchEntry->submit();
			}
		}
		HX_STACK_LINE(281)
		this->editing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,submit,(void))

Void Watch_obj::update( ){
{
		HX_STACK_PUSH("Watch::update","flixel/system/debug/Watch.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_LINE(252)
		this->editing = false;
		HX_STACK_LINE(253)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(254)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(255)
		while(((i < l))){
			HX_STACK_LINE(256)
			if ((!(this->_watching->__get((i)++).StaticCast< ::flixel::system::debug::WatchEntry >()->updateValue()))){
				HX_STACK_LINE(258)
				this->editing = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,update,(void))

Void Watch_obj::removeAll( ){
{
		HX_STACK_PUSH("Watch::removeAll","flixel/system/debug/Watch.hx",230);
		HX_STACK_THIS(this);
		HX_STACK_LINE(231)
		::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(232)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(233)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(234)
		while(((i < l))){
			HX_STACK_LINE(236)
			watchEntry = this->_watching->pop().StaticCast< ::flixel::system::debug::WatchEntry >();
			HX_STACK_LINE(237)
			this->_names->removeChild(watchEntry->nameDisplay);
			HX_STACK_LINE(238)
			this->_values->removeChild(watchEntry->valueDisplay);
			HX_STACK_LINE(239)
			watchEntry->destroy();
			HX_STACK_LINE(240)
			(i)++;
		}
		HX_STACK_LINE(242)
		this->_watching = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(243)
		this->_quickWatchList = ::haxe::ds::StringMap_obj::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,removeAll,(void))

Void Watch_obj::removeEntry( ::flixel::system::debug::WatchEntry Entry,int Index){
{
		HX_STACK_PUSH("Watch::removeEntry","flixel/system/debug/Watch.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Entry,"Entry");
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(209)
		this->_watching[Index] = this->_watching->__get((this->_watching->length - (int)1)).StaticCast< ::flixel::system::debug::WatchEntry >();
		HX_STACK_LINE(210)
		this->_watching->pop().StaticCast< ::flixel::system::debug::WatchEntry >();
		HX_STACK_LINE(212)
		this->_names->removeChild(Entry->nameDisplay);
		HX_STACK_LINE(213)
		this->_values->removeChild(Entry->valueDisplay);
		HX_STACK_LINE(214)
		Entry->destroy();
		HX_STACK_LINE(217)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(218)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(219)
		while(((i < l))){
			HX_STACK_LINE(221)
			this->_watching->__get(i).StaticCast< ::flixel::system::debug::WatchEntry >()->setY((i * (int)15));
			HX_STACK_LINE(222)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,removeEntry,(void))

Void Watch_obj::remove( Dynamic AnyObject,::String VariableName,::String QuickWatchName){
{
		HX_STACK_PUSH("Watch::remove","flixel/system/debug/Watch.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_ARG(VariableName,"VariableName");
		HX_STACK_ARG(QuickWatchName,"QuickWatchName");
		HX_STACK_LINE(173)
		if (((bool((bool((AnyObject == null())) && bool((VariableName == null())))) && bool((QuickWatchName != null()))))){
			HX_STACK_LINE(175)
			::flixel::system::debug::WatchEntry quickWatch = this->_quickWatchList->get(QuickWatchName);		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(177)
			if (((quickWatch != null()))){
				HX_STACK_LINE(178)
				this->removeEntry(quickWatch,::flixel::util::FlxArrayUtil_obj::indexOf_flixel_system_debug_WatchEntry(this->_watching,quickWatch,null()));
			}
			HX_STACK_LINE(179)
			this->_quickWatchList->remove(QuickWatchName);
			HX_STACK_LINE(182)
			return null();
		}
		HX_STACK_LINE(186)
		::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(188)
		int i = (this->_watching->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(189)
		while(((i >= (int)0))){
			HX_STACK_LINE(191)
			watchEntry = this->_watching->__get(i).StaticCast< ::flixel::system::debug::WatchEntry >();
			HX_STACK_LINE(193)
			if (((bool((watchEntry->object == AnyObject)) && bool(((bool((VariableName == null())) || bool((watchEntry->field == VariableName)))))))){
				HX_STACK_LINE(194)
				this->removeEntry(watchEntry,i);
			}
			HX_STACK_LINE(198)
			(i)--;
		}
		HX_STACK_LINE(200)
		watchEntry = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,remove,(void))

Void Watch_obj::updateQuickWatch( ::String Name,Dynamic NewValue){
{
		HX_STACK_PUSH("Watch::updateQuickWatch","flixel/system/debug/Watch.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Name,"Name");
		HX_STACK_ARG(NewValue,"NewValue");
		HX_STACK_LINE(138)
		if (((this->_quickWatchList->get(Name) == null()))){
			HX_STACK_LINE(140)
			::flixel::system::debug::WatchEntry quickWatch = ::flixel::system::debug::WatchEntry_obj::__new((this->_watching->length * (int)15),(Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10),null(),null(),Name);		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(141)
			this->_names->addChild(quickWatch->nameDisplay);
			HX_STACK_LINE(142)
			this->_values->addChild(quickWatch->valueDisplay);
			HX_STACK_LINE(143)
			this->_watching->push(quickWatch);
			HX_STACK_LINE(144)
			this->_quickWatchList->set(Name,quickWatch);
		}
		HX_STACK_LINE(148)
		::flixel::system::debug::WatchEntry quickWatch = this->_quickWatchList->get(Name);		HX_STACK_VAR(quickWatch,"quickWatch");
		HX_STACK_LINE(150)
		if (((quickWatch != null()))){
			HX_STACK_LINE(152)
			::String text = ::Std_obj::string(NewValue);		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(154)
			if ((::Std_obj::is(NewValue,hx::ClassOf< ::haxe::ds::StringMap >()))){
				struct _Function_3_1{
					inline static ::String Block( Dynamic &NewValue){
						HX_STACK_PUSH("*::closure","flixel/system/debug/Watch.hx",155);
						{
							HX_STACK_LINE(155)
							::haxe::ds::StringMap AnyMap = NewValue;		HX_STACK_VAR(AnyMap,"AnyMap");
							HX_STACK_LINE(155)
							::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
							HX_STACK_LINE(155)
							for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(AnyMap->keys());  __it->hasNext(); ){
								::String key = __it->next();
								{
									HX_STACK_LINE(155)
									hx::AddEq(string,::Std_obj::string(key));
									HX_STACK_LINE(155)
									hx::AddEq(string,HX_CSTRING(", "));
								}
;
							}
							HX_STACK_LINE(155)
							return string.substring((int)0,(string.length - (int)2));
						}
						return null();
					}
				};
				HX_STACK_LINE(155)
				text = _Function_3_1::Block(NewValue);
			}
			else{
				HX_STACK_LINE(156)
				if ((::Std_obj::is(NewValue,hx::ClassOf< ::flixel::util::FlxPoint >()))){
					struct _Function_4_1{
						inline static ::String Block( Dynamic &NewValue){
							HX_STACK_PUSH("*::closure","flixel/system/debug/Watch.hx",157);
							{
								HX_STACK_LINE(157)
								::flixel::util::FlxPoint Point = NewValue;		HX_STACK_VAR(Point,"Point");
								int Precision = ::flixel::FlxG_obj::debugger->pointPrecision;		HX_STACK_VAR(Precision,"Precision");
								HX_STACK_LINE(157)
								::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
								HX_STACK_LINE(157)
								if (((Point != null()))){
									HX_STACK_LINE(157)
									Float xValue = ::flixel::util::FlxMath_obj::roundDecimal(Point->x,Precision);		HX_STACK_VAR(xValue,"xValue");
									HX_STACK_LINE(157)
									Float yValue = ::flixel::util::FlxMath_obj::roundDecimal(Point->y,Precision);		HX_STACK_VAR(yValue,"yValue");
									HX_STACK_LINE(157)
									string = (((HX_CSTRING("x: ") + xValue) + HX_CSTRING(" | y: ")) + yValue);
								}
								HX_STACK_LINE(157)
								return string;
							}
							return null();
						}
					};
					HX_STACK_LINE(157)
					text = _Function_4_1::Block(NewValue);
				}
			}
			HX_STACK_LINE(159)
			quickWatch->valueDisplay->set_text(text);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,updateQuickWatch,(void))

Void Watch_obj::add( Dynamic AnyObject,::String VariableName,::String DisplayName){
{
		HX_STACK_PUSH("Watch::add","flixel/system/debug/Watch.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_ARG(VariableName,"VariableName");
		HX_STACK_ARG(DisplayName,"DisplayName");
		HX_STACK_LINE(100)
		::flixel::system::debug::WatchEntry watchEntry;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(101)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(102)
		int l = this->_watching->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(103)
		while(((i < l))){
			HX_STACK_LINE(105)
			watchEntry = this->_watching->__get((i)++).StaticCast< ::flixel::system::debug::WatchEntry >();
			HX_STACK_LINE(106)
			if (((bool((watchEntry->object == AnyObject)) && bool((watchEntry->field == VariableName))))){
				HX_STACK_LINE(107)
				return null();
			}
		}
		HX_STACK_LINE(113)
		watchEntry = ::flixel::system::debug::WatchEntry_obj::__new((this->_watching->length * (int)15),(Float(this->_width) / Float((int)2)),((Float(this->_width) / Float((int)2)) - (int)10),AnyObject,VariableName,DisplayName);
		HX_STACK_LINE(115)
		if (((watchEntry->field == null()))){
			HX_STACK_LINE(117)
			watchEntry->destroy();
			HX_STACK_LINE(118)
			watchEntry = null();
			HX_STACK_LINE(119)
			return null();
		}
		HX_STACK_LINE(122)
		this->_names->addChild(watchEntry->nameDisplay);
		HX_STACK_LINE(123)
		this->_values->addChild(watchEntry->valueDisplay);
		HX_STACK_LINE(124)
		this->_watching->push(watchEntry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,add,(void))

Void Watch_obj::destroy( ){
{
		HX_STACK_PUSH("Watch::destroy","flixel/system/debug/Watch.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		if (((this->_names != null()))){
			HX_STACK_LINE(67)
			this->removeChild(this->_names);
		}
		HX_STACK_LINE(70)
		this->_names = null();
		HX_STACK_LINE(71)
		if (((this->_values != null()))){
			HX_STACK_LINE(72)
			this->removeChild(this->_values);
		}
		HX_STACK_LINE(75)
		this->_values = null();
		HX_STACK_LINE(76)
		if (((this->_watching != null()))){
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(78)
				while(((_g < _g1->length))){
					HX_STACK_LINE(78)
					::flixel::system::debug::WatchEntry watchEntry = _g1->__get(_g).StaticCast< ::flixel::system::debug::WatchEntry >();		HX_STACK_VAR(watchEntry,"watchEntry");
					HX_STACK_LINE(78)
					++(_g);
					HX_STACK_LINE(80)
					watchEntry->destroy();
				}
			}
			HX_STACK_LINE(82)
			this->_watching = null();
		}
		HX_STACK_LINE(84)
		this->_quickWatchList = null();
		HX_STACK_LINE(86)
		this->super::destroy();
	}
return null();
}



Watch_obj::Watch_obj()
{
}

void Watch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Watch);
	HX_MARK_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	HX_MARK_MEMBER_NAME(_watching,"_watching");
	HX_MARK_MEMBER_NAME(_values,"_values");
	HX_MARK_MEMBER_NAME(_names,"_names");
	HX_MARK_MEMBER_NAME(editing,"editing");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Watch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	HX_VISIT_MEMBER_NAME(_watching,"_watching");
	HX_VISIT_MEMBER_NAME(_values,"_values");
	HX_VISIT_MEMBER_NAME(_names,"_names");
	HX_VISIT_MEMBER_NAME(editing,"editing");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Watch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_names") ) { return _names; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_values") ) { return _values; }
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_watching") ) { return _watching; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeEntry") ) { return removeEntry_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { return _quickWatchList; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateQuickWatch") ) { return updateQuickWatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Watch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_names") ) { _names=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { _values=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_watching") ) { _watching=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { _quickWatchList=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_quickWatchList"));
	outFields->push(HX_CSTRING("_watching"));
	outFields->push(HX_CSTRING("_values"));
	outFields->push(HX_CSTRING("_names"));
	outFields->push(HX_CSTRING("editing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateSize"),
	HX_CSTRING("submit"),
	HX_CSTRING("update"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("removeEntry"),
	HX_CSTRING("remove"),
	HX_CSTRING("updateQuickWatch"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_quickWatchList"),
	HX_CSTRING("_watching"),
	HX_CSTRING("_values"),
	HX_CSTRING("_names"),
	HX_CSTRING("editing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

Class Watch_obj::__mClass;

void Watch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Watch"), hx::TCanCast< Watch_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Watch_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
