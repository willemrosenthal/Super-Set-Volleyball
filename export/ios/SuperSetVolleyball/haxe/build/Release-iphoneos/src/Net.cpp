#include <hxcpp.h>

#ifndef INCLUDED_Net
#include <Net.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif

Void Net_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Net::new","Net.hx",10);
{
	HX_STACK_LINE(11)
	super::__construct(X,Y,null());
	HX_STACK_LINE(12)
	this->loadGraphic(HX_CSTRING("assets/net.png"),false,false,(int)30,(int)240,null(),null());
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::Net _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(14)
		_g->set_y((_g->y - this->get_height()));
	}
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::Net _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		_g->set_x((_g->x - (this->get_width() * 0.5)));
	}
	HX_STACK_LINE(16)
	this->set_moves(false);
	HX_STACK_LINE(17)
	this->set_immovable(true);
}
;
	return null();
}

Net_obj::~Net_obj() { }

Dynamic Net_obj::__CreateEmpty() { return  new Net_obj; }
hx::ObjectPtr< Net_obj > Net_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Net_obj > result = new Net_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Net_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Net_obj > result = new Net_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Net_obj::Net_obj()
{
}

void Net_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Net);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Net_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Net_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Net_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Net_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Net_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Net_obj::__mClass,"__mClass");
};

Class Net_obj::__mClass;

void Net_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Net"), hx::TCanCast< Net_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Net_obj::__boot()
{
}

