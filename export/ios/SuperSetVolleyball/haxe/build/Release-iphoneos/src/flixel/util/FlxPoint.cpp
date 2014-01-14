#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
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
namespace flixel{
namespace util{

Void FlxPoint_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_PUSH("FlxPoint::new","flixel/util/FlxPoint.hx",8);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(23)
	this->y = (int)0;
	HX_STACK_LINE(13)
	this->x = (int)0;
	HX_STACK_LINE(37)
	this->set_x(X);
	HX_STACK_LINE(38)
	this->set_y(Y);
}
;
	return null();
}

FlxPoint_obj::~FlxPoint_obj() { }

Dynamic FlxPoint_obj::__CreateEmpty() { return  new FlxPoint_obj; }
hx::ObjectPtr< FlxPoint_obj > FlxPoint_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic FlxPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxPoint_obj::destroy( ){
{
		HX_STACK_PUSH("FlxPoint::destroy","flixel/util/FlxPoint.hx",149);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,destroy,(void))

Float FlxPoint_obj::distanceTo( ::flixel::util::FlxPoint AnotherPoint){
	HX_STACK_PUSH("FlxPoint::distanceTo","flixel/util/FlxPoint.hx",145);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AnotherPoint,"AnotherPoint");
	struct _Function_1_1{
		inline static Float Block( ::flixel::util::FlxPoint_obj *__this,::flixel::util::FlxPoint &AnotherPoint){
			HX_STACK_PUSH("*::closure","flixel/util/FlxPoint.hx",146);
			{
				HX_STACK_LINE(146)
				Float dx = (__this->x - AnotherPoint->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(146)
				Float dy = (__this->y - AnotherPoint->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(146)
				return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
			}
			return null();
		}
	};
	HX_STACK_LINE(145)
	return _Function_1_1::Block(this,AnotherPoint);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,distanceTo,return )

bool FlxPoint_obj::inFlxRect( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxPoint::inFlxRect","flixel/util/FlxPoint.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(134)
	return ::flixel::util::FlxMath_obj::pointInFlxRect(this->x,this->y,Rect);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,inFlxRect,return )

bool FlxPoint_obj::inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight){
	HX_STACK_PUSH("FlxPoint::inCoords","flixel/util/FlxPoint.hx",123);
	HX_STACK_THIS(this);
	HX_STACK_ARG(RectX,"RectX");
	HX_STACK_ARG(RectY,"RectY");
	HX_STACK_ARG(RectWidth,"RectWidth");
	HX_STACK_ARG(RectHeight,"RectHeight");
	HX_STACK_LINE(123)
	return ::flixel::util::FlxMath_obj::pointInCoordinates(this->x,this->y,RectX,RectY,RectWidth,RectHeight);
}


HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_obj,inCoords,return )

::String FlxPoint_obj::toString( ){
	HX_STACK_PUSH("FlxPoint::toString","flixel/util/FlxPoint.hx",109);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::String Block( ::flixel::util::FlxPoint_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/util/FlxPoint.hx",110);
			{
				HX_STACK_LINE(110)
				::String s = ::Type_obj::getClassName(::Type_obj::getClass(__this));		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(110)
				if (((s != null()))){
					HX_STACK_LINE(110)
					s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
					HX_STACK_LINE(110)
					s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
				}
				HX_STACK_LINE(110)
				return s;
			}
			return null();
		}
	};
	HX_STACK_LINE(109)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,toString,return )

::flash::geom::Point FlxPoint_obj::copyToFlash( ::flash::geom::Point FlashPoint){
	HX_STACK_PUSH("FlxPoint::copyToFlash","flixel/util/FlxPoint.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashPoint,"FlashPoint");
	HX_STACK_LINE(100)
	FlashPoint->x = this->x;
	HX_STACK_LINE(101)
	FlashPoint->y = this->y;
	HX_STACK_LINE(102)
	return FlashPoint;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyToFlash,return )

::flixel::util::FlxPoint FlxPoint_obj::copyFromFlash( ::flash::geom::Point FlashPoint){
	HX_STACK_PUSH("FlxPoint::copyFromFlash","flixel/util/FlxPoint.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashPoint,"FlashPoint");
	HX_STACK_LINE(88)
	this->set_x(FlashPoint->x);
	HX_STACK_LINE(89)
	this->set_y(FlashPoint->y);
	HX_STACK_LINE(90)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFromFlash,return )

::flixel::util::FlxPoint FlxPoint_obj::copyTo( ::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxPoint::copyTo","flixel/util/FlxPoint.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(72)
	if (((point == null()))){
		HX_STACK_LINE(73)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(76)
	point->set_x(this->x);
	HX_STACK_LINE(77)
	point->set_y(this->y);
	HX_STACK_LINE(78)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyTo,return )

::flixel::util::FlxPoint FlxPoint_obj::copyFrom( ::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxPoint::copyFrom","flixel/util/FlxPoint.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(60)
	this->set_x(point->x);
	HX_STACK_LINE(61)
	this->set_y(point->y);
	HX_STACK_LINE(62)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFrom,return )

::flixel::util::FlxPoint FlxPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxPoint::set","flixel/util/FlxPoint.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(48)
		this->set_x(X);
		HX_STACK_LINE(49)
		this->set_y(Y);
		HX_STACK_LINE(50)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,set,return )

Float FlxPoint_obj::set_y( Float Value){
	HX_STACK_PUSH("FlxPoint::set_y","flixel/util/FlxPoint.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(26)
	return this->y = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_y,return )

Float FlxPoint_obj::set_x( Float Value){
	HX_STACK_PUSH("FlxPoint::set_x","flixel/util/FlxPoint.hx",16);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(16)
	return this->x = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_x,return )


FlxPoint_obj::FlxPoint_obj()
{
}

void FlxPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPoint);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void FlxPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic FlxPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inCoords") ) { return inCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inFlxRect") ) { return inFlxRect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceTo") ) { return distanceTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("distanceTo"),
	HX_CSTRING("inFlxRect"),
	HX_CSTRING("inCoords"),
	HX_CSTRING("toString"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("set"),
	HX_CSTRING("set_y"),
	HX_CSTRING("y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
};

Class FlxPoint_obj::__mClass;

void FlxPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPoint"), hx::TCanCast< FlxPoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxPoint_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
