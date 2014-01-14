#include <hxcpp.h>

#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_flixel_system_debug_BmpLog
#include <flixel/system/debug/BmpLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapUtil
#include <flixel/util/FlxBitmapUtil.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void BmpLog_obj::__construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{
HX_STACK_PUSH("BmpLog::new","flixel/system/debug/BmpLog.hx",36);
bool Resizable = __o_Resizable.Default(true);
{
	HX_STACK_LINE(37)
	super::__construct(Title,null(),Width,Height,Resizable,Bounds);
	HX_STACK_LINE(49)
	this->_bmps = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

BmpLog_obj::~BmpLog_obj() { }

Dynamic BmpLog_obj::__CreateEmpty() { return  new BmpLog_obj; }
hx::ObjectPtr< BmpLog_obj > BmpLog_obj::__new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{  hx::ObjectPtr< BmpLog_obj > result = new BmpLog_obj();
	result->__construct(Title,Width,Height,__o_Resizable,Bounds);
	return result;}

Dynamic BmpLog_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BmpLog_obj > result = new BmpLog_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void BmpLog_obj::updateSize( ){
{
		HX_STACK_PUSH("BmpLog::updateSize","flixel/system/debug/BmpLog.hx",137);
		HX_STACK_THIS(this);
		HX_STACK_LINE(137)
		this->super::updateSize();
	}
return null();
}


Void BmpLog_obj::clear( ){
{
		HX_STACK_PUSH("BmpLog::clear","flixel/system/debug/BmpLog.hx",113);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		if (((this->_bmps != null()))){
			HX_STACK_LINE(115)
			while(((this->_bmps->length > (int)0))){
				HX_STACK_LINE(118)
				::flash::display::Bitmap bmp = this->_bmps->pop().StaticCast< ::flash::display::Bitmap >();		HX_STACK_VAR(bmp,"bmp");
				HX_STACK_LINE(119)
				this->removeChild(bmp);
				HX_STACK_LINE(120)
				if (((bmp != null()))){
					HX_STACK_LINE(122)
					if (((bmp->bitmapData != null()))){
						HX_STACK_LINE(124)
						bmp->bitmapData->dispose();
						HX_STACK_LINE(125)
						bmp->set_bitmapData(null());
					}
					HX_STACK_LINE(127)
					bmp = null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BmpLog_obj,clear,(void))

bool BmpLog_obj::add( ::flash::display::BitmapData Data,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
	HX_STACK_PUSH("BmpLog::add","flixel/system/debug/BmpLog.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(FireOnce,"FireOnce");
{
		HX_STACK_LINE(74)
		if (((Data == null()))){
			HX_STACK_LINE(75)
			return false;
		}
		HX_STACK_LINE(80)
		if ((FireOnce)){
			HX_STACK_LINE(82)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_bmps;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(82)
			while(((_g < _g1->length))){
				HX_STACK_LINE(82)
				::flash::display::Bitmap bmp = _g1->__get(_g).StaticCast< ::flash::display::Bitmap >();		HX_STACK_VAR(bmp,"bmp");
				HX_STACK_LINE(82)
				++(_g);
				HX_STACK_LINE(84)
				if (((bmp->bitmapData != null()))){
					HX_STACK_LINE(85)
					if (((::flixel::util::FlxBitmapUtil_obj::compare(Data,bmp->bitmapData) == (int)0))){
						HX_STACK_LINE(87)
						return false;
					}
				}
			}
		}
		HX_STACK_LINE(95)
		::flash::display::Bitmap bmp = ::flash::display::Bitmap_obj::__new(Data->clone(),null(),null());		HX_STACK_VAR(bmp,"bmp");
		HX_STACK_LINE(96)
		bmp->set_x((int)2);
		HX_STACK_LINE(97)
		if (((this->_bmps->length > (int)0))){
			HX_STACK_LINE(99)
			::flash::display::Bitmap last = this->_bmps->__get((this->_bmps->length - (int)1)).StaticCast< ::flash::display::Bitmap >();		HX_STACK_VAR(last,"last");
			HX_STACK_LINE(100)
			bmp->set_y(((last->get_y() + last->get_height()) + (int)2));
		}
		else{
			HX_STACK_LINE(103)
			bmp->set_y((int)15);
		}
		HX_STACK_LINE(107)
		this->_bmps->push(bmp);
		HX_STACK_LINE(108)
		this->addChild(bmp);
		HX_STACK_LINE(109)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BmpLog_obj,add,return )

Void BmpLog_obj::destroy( ){
{
		HX_STACK_PUSH("BmpLog::destroy","flixel/system/debug/BmpLog.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_LINE(61)
		this->clear();
		HX_STACK_LINE(62)
		this->_bmps = null();
		HX_STACK_LINE(63)
		this->super::destroy();
	}
return null();
}



BmpLog_obj::BmpLog_obj()
{
}

void BmpLog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BmpLog);
	HX_MARK_MEMBER_NAME(_bmps,"_bmps");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BmpLog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bmps,"_bmps");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BmpLog_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"_bmps") ) { return _bmps; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BmpLog_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_bmps") ) { _bmps=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BmpLog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_bmps"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateSize"),
	HX_CSTRING("clear"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_bmps"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BmpLog_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BmpLog_obj::__mClass,"__mClass");
};

Class BmpLog_obj::__mClass;

void BmpLog_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.BmpLog"), hx::TCanCast< BmpLog_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BmpLog_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
