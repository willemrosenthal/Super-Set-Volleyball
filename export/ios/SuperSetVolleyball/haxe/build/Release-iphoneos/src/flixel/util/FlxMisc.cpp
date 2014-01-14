#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
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
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
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
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMisc
#include <flixel/util/FlxMisc.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
namespace flixel{
namespace util{

Void FlxMisc_obj::__construct()
{
	return null();
}

FlxMisc_obj::~FlxMisc_obj() { }

Dynamic FlxMisc_obj::__CreateEmpty() { return  new FlxMisc_obj; }
hx::ObjectPtr< FlxMisc_obj > FlxMisc_obj::__new()
{  hx::ObjectPtr< FlxMisc_obj > result = new FlxMisc_obj();
	result->__construct();
	return result;}

Dynamic FlxMisc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMisc_obj > result = new FlxMisc_obj();
	result->__construct();
	return result;}

Void FlxMisc_obj::openURL( ::String URL){
{
		HX_STACK_PUSH("FlxMisc::openURL","flixel/util/FlxMisc.hx",21);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_LINE(21)
		::flash::Lib_obj::getURL(::flash::net::URLRequest_obj::__new(URL),HX_CSTRING("_blank"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMisc_obj,openURL,(void))

Dynamic FlxMisc_obj::deepCopy( Dynamic v){
	HX_STACK_PUSH("FlxMisc::deepCopy","flixel/util/FlxMisc.hx",44);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(45)
	if ((!(::Reflect_obj::isObject(v)))){
		HX_STACK_LINE(46)
		return v;
	}
	else{
		HX_STACK_LINE(49)
		if ((::Std_obj::is(v,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(51)
			Dynamic r = ::Type_obj::createInstance(::Type_obj::getClass(v),Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(54)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = v->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				while(((_g1 < _g))){
					HX_STACK_LINE(54)
					int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
					HX_STACK_LINE(55)
					r->__Field(HX_CSTRING("push"),true)(::flixel::util::FlxMisc_obj::deepCopy(v->__GetItem(ii)));
				}
			}
			HX_STACK_LINE(57)
			return r;
		}
		else{
			HX_STACK_LINE(59)
			if (((::Type_obj::getClass(v) == null()))){
				struct _Function_4_1{
					inline static Dynamic Block( ){
						HX_STACK_PUSH("*::closure","flixel/util/FlxMisc.hx",61);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(61)
				Dynamic obj = _Function_4_1::Block();		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(62)
				{
					HX_STACK_LINE(62)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::String > _g1 = ::Reflect_obj::fields(v);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(62)
					while(((_g < _g1->length))){
						HX_STACK_LINE(62)
						::String ff = _g1->__get(_g);		HX_STACK_VAR(ff,"ff");
						HX_STACK_LINE(62)
						++(_g);
						HX_STACK_LINE(63)
						if (((obj != null()))){
							HX_STACK_LINE(63)
							obj->__SetField(ff,::flixel::util::FlxMisc_obj::deepCopy(::Reflect_obj::field(v,ff)),false);
						}
					}
				}
				HX_STACK_LINE(64)
				return obj;
			}
			else{
				HX_STACK_LINE(68)
				Dynamic obj = ::Type_obj::createEmptyInstance(::Type_obj::getClass(v));		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::String > _g1 = ::Reflect_obj::fields(v);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(69)
					while(((_g < _g1->length))){
						HX_STACK_LINE(69)
						::String ff = _g1->__get(_g);		HX_STACK_VAR(ff,"ff");
						HX_STACK_LINE(69)
						++(_g);
						HX_STACK_LINE(70)
						if (((obj != null()))){
							HX_STACK_LINE(70)
							obj->__SetField(ff,::flixel::util::FlxMisc_obj::deepCopy(::Reflect_obj::field(v,ff)),false);
						}
					}
				}
				HX_STACK_LINE(71)
				return obj;
			}
		}
	}
	HX_STACK_LINE(73)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMisc_obj,deepCopy,return )

int FlxMisc_obj::get_mouseIndex( ){
	HX_STACK_PUSH("FlxMisc::get_mouseIndex","flixel/util/FlxMisc.hx",82);
	HX_STACK_LINE(83)
	int mouseIndex = (int)-1;		HX_STACK_VAR(mouseIndex,"mouseIndex");
	HX_STACK_LINE(85)
	try{
		HX_STACK_LINE(86)
		mouseIndex = (::flixel::FlxG_obj::camera->_flashSprite->get_parent()->get_numChildren() - (int)4);
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Error >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Error e = __e;{
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(94)
	return mouseIndex;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMisc_obj,get_mouseIndex,return )

::flash::display::Sprite FlxMisc_obj::get_gameContainer( ){
	HX_STACK_PUSH("FlxMisc::get_gameContainer","flixel/util/FlxMisc.hx",103);
	HX_STACK_LINE(103)
	return hx::TCast< flash::display::Sprite >::cast(::flixel::FlxG_obj::camera->_flashSprite->get_parent());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMisc_obj,get_gameContainer,return )


FlxMisc_obj::FlxMisc_obj()
{
}

void FlxMisc_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMisc);
	HX_MARK_END_CLASS();
}

void FlxMisc_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxMisc_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { return openURL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deepCopy") ) { return deepCopy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseIndex") ) { return get_mouseIndex(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gameContainer") ) { return get_gameContainer(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_mouseIndex") ) { return get_mouseIndex_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_gameContainer") ) { return get_gameContainer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMisc_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMisc_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("openURL"),
	HX_CSTRING("deepCopy"),
	HX_CSTRING("get_mouseIndex"),
	HX_CSTRING("get_gameContainer"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMisc_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMisc_obj::__mClass,"__mClass");
};

Class FlxMisc_obj::__mClass;

void FlxMisc_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxMisc"), hx::TCanCast< FlxMisc_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMisc_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
