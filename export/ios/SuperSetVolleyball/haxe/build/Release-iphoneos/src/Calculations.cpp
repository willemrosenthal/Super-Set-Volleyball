#include <hxcpp.h>

#ifndef INCLUDED_Calculations
#include <Calculations.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Calculations_obj::__construct()
{
HX_STACK_PUSH("Calculations::new","Calculations.hx",65);
{
}
;
	return null();
}

Calculations_obj::~Calculations_obj() { }

Dynamic Calculations_obj::__CreateEmpty() { return  new Calculations_obj; }
hx::ObjectPtr< Calculations_obj > Calculations_obj::__new()
{  hx::ObjectPtr< Calculations_obj > result = new Calculations_obj();
	result->__construct();
	return result;}

Dynamic Calculations_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Calculations_obj > result = new Calculations_obj();
	result->__construct();
	return result;}

Float Calculations_obj::plusOrMinus( hx::Null< Float >  __o_Value){
Float Value = __o_Value.Default(1);
	HX_STACK_PUSH("Calculations::plusOrMinus","Calculations.hx",8);
	HX_STACK_ARG(Value,"Value");
{
		HX_STACK_LINE(8)
		return ((((::Math_obj::round(::Math_obj::random()) * (int)2) - (int)1)) * Value);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Calculations_obj,plusOrMinus,return )

::flixel::util::FlxPoint Calculations_obj::lineIntersect( ::flixel::util::FlxPoint p1,::flixel::util::FlxPoint p2,::flixel::util::FlxPoint p3,::flixel::util::FlxPoint p4){
	HX_STACK_PUSH("Calculations::lineIntersect","Calculations.hx",13);
	HX_STACK_ARG(p1,"p1");
	HX_STACK_ARG(p2,"p2");
	HX_STACK_ARG(p3,"p3");
	HX_STACK_ARG(p4,"p4");
	HX_STACK_LINE(28)
	Float xD1 = (p2->x - p1->x);		HX_STACK_VAR(xD1,"xD1");
	HX_STACK_LINE(29)
	Float xD2 = (p4->x - p3->x);		HX_STACK_VAR(xD2,"xD2");
	HX_STACK_LINE(30)
	Float yD1 = (p2->y - p1->y);		HX_STACK_VAR(yD1,"yD1");
	HX_STACK_LINE(31)
	Float yD2 = (p4->y - p3->y);		HX_STACK_VAR(yD2,"yD2");
	HX_STACK_LINE(32)
	Float xD3 = (p1->x - p3->x);		HX_STACK_VAR(xD3,"xD3");
	HX_STACK_LINE(33)
	Float yD3 = (p1->y - p3->y);		HX_STACK_VAR(yD3,"yD3");
	HX_STACK_LINE(36)
	Float len1 = ::Math_obj::sqrt(((xD1 * xD1) + (yD1 * yD1)));		HX_STACK_VAR(len1,"len1");
	HX_STACK_LINE(37)
	Float len2 = ::Math_obj::sqrt(((xD2 * xD2) + (yD2 * yD2)));		HX_STACK_VAR(len2,"len2");
	HX_STACK_LINE(40)
	Float dot = ((xD1 * xD2) + (yD1 * yD2));		HX_STACK_VAR(dot,"dot");
	HX_STACK_LINE(41)
	Float deg = (Float(dot) / Float(((len1 * len2))));		HX_STACK_VAR(deg,"deg");
	HX_STACK_LINE(45)
	if (((::Math_obj::abs(deg) == (int)1))){
		HX_STACK_LINE(45)
		return null();
	}
	HX_STACK_LINE(48)
	::flixel::util::FlxPoint pt = ::flixel::util::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(pt,"pt");
	HX_STACK_LINE(49)
	Float div = ((yD2 * xD1) - (xD2 * yD1));		HX_STACK_VAR(div,"div");
	HX_STACK_LINE(50)
	Float ua = (Float((((xD2 * yD3) - (yD2 * xD3)))) / Float(div));		HX_STACK_VAR(ua,"ua");
	HX_STACK_LINE(51)
	Float ub = (Float((((xD1 * yD3) - (yD1 * xD3)))) / Float(div));		HX_STACK_VAR(ub,"ub");
	HX_STACK_LINE(52)
	pt->set_x((p1->x + (ua * xD1)));
	HX_STACK_LINE(53)
	pt->set_y((p1->y + (ua * yD1)));
	HX_STACK_LINE(56)
	if (((bool(((Float(pt->x) / Float((int)2)) != (Float(pt->x) / Float((int)2)))) || bool(((Float(pt->y) / Float((int)2)) != (Float(pt->y) / Float((int)2))))))){
		HX_STACK_LINE(57)
		return null();
	}
	HX_STACK_LINE(61)
	return pt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Calculations_obj,lineIntersect,return )


Calculations_obj::Calculations_obj()
{
}

void Calculations_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Calculations);
	HX_MARK_END_CLASS();
}

void Calculations_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Calculations_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"plusOrMinus") ) { return plusOrMinus_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lineIntersect") ) { return lineIntersect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Calculations_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Calculations_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("plusOrMinus"),
	HX_CSTRING("lineIntersect"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Calculations_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Calculations_obj::__mClass,"__mClass");
};

Class Calculations_obj::__mClass;

void Calculations_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Calculations"), hx::TCanCast< Calculations_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Calculations_obj::__boot()
{
}

