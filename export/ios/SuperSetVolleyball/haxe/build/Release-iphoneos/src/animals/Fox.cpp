#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_animals_Fox
#include <animals/Fox.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace animals{

Void Fox_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_PUSH("Fox::new","animals/Fox.hx",6);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(7)
	super::__construct(X,Y);
	HX_STACK_LINE(9)
	this->loadGraphic(HX_CSTRING("assets/fox.png"),true,true,(int)40,(int)30,null(),null());
	HX_STACK_LINE(10)
	this->animation->add(HX_CSTRING("sit"),Array_obj< int >::__new().Add((int)13),null(),null());
	HX_STACK_LINE(11)
	this->animation->add(HX_CSTRING("idleside"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(12)
	this->animation->add(HX_CSTRING("idledown"),Array_obj< int >::__new().Add((int)3),null(),null());
	HX_STACK_LINE(13)
	this->animation->add(HX_CSTRING("idleup"),Array_obj< int >::__new().Add((int)8),null(),null());
	HX_STACK_LINE(14)
	this->animation->add(HX_CSTRING("runside"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)0),(int)12,null());
	HX_STACK_LINE(15)
	this->animation->add(HX_CSTRING("rundown"),Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)6).Add((int)7),(int)12,null());
	HX_STACK_LINE(16)
	this->animation->add(HX_CSTRING("runup"),Array_obj< int >::__new().Add((int)9).Add((int)10).Add((int)11).Add((int)12),(int)12,null());
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		_g->set_y((_g->y + (this->get_height() * 0.5)));
	}
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		_g->set_x((_g->x + (((this->get_width() * 0.5) - (int)10))));
	}
	HX_STACK_LINE(20)
	this->set_width((int)20);
	HX_STACK_LINE(21)
	this->set_height((int)12);
	HX_STACK_LINE(23)
	this->animation->play(HX_CSTRING("sit"),null(),null());
}
;
	return null();
}

Fox_obj::~Fox_obj() { }

Dynamic Fox_obj::__CreateEmpty() { return  new Fox_obj; }
hx::ObjectPtr< Fox_obj > Fox_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Fox_obj > result = new Fox_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Fox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fox_obj > result = new Fox_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Fox_obj::Fox_obj()
{
}

void Fox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fox);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Fox_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Fox_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Fox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Fox_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fox_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fox_obj::__mClass,"__mClass");
};

Class Fox_obj::__mClass;

void Fox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("animals.Fox"), hx::TCanCast< Fox_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Fox_obj::__boot()
{
}

} // end namespace animals
