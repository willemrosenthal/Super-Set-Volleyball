#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_animals_Bee
#include <animals/Bee.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace animals{

Void Bee_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_PUSH("Bee::new","animals/Bee.hx",5);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(6)
	super::__construct(X,Y);
	HX_STACK_LINE(8)
	this->followDistance = (int)14;
	HX_STACK_LINE(10)
	this->loadGraphic(HX_CSTRING("assets/spring/bee2.png"),true,true,(int)9,(int)18,null(),null());
	HX_STACK_LINE(11)
	this->animation->add(HX_CSTRING("idleside"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)1),(int)6,null());
	HX_STACK_LINE(12)
	this->animation->add(HX_CSTRING("idledown"),Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)5).Add((int)4),(int)6,null());
	HX_STACK_LINE(13)
	this->animation->add(HX_CSTRING("idleup"),Array_obj< int >::__new().Add((int)6).Add((int)7).Add((int)8).Add((int)7),(int)6,null());
	HX_STACK_LINE(14)
	this->animation->add(HX_CSTRING("runside"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)1),(int)12,null());
	HX_STACK_LINE(15)
	this->animation->add(HX_CSTRING("rundown"),Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)5).Add((int)4),(int)12,null());
	HX_STACK_LINE(16)
	this->animation->add(HX_CSTRING("runup"),Array_obj< int >::__new().Add((int)6).Add((int)7).Add((int)8).Add((int)7),(int)12,null());
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		_g->set_y((_g->y + this->get_height()));
	}
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		_g->set_x((_g->x + (this->get_width() * 0.5)));
	}
	HX_STACK_LINE(20)
	this->set_width((int)4);
	HX_STACK_LINE(21)
	this->set_height((int)9);
	HX_STACK_LINE(23)
	if (((::Math_obj::random() < 0.5))){
		HX_STACK_LINE(24)
		this->animation->play(HX_CSTRING("idleside"),null(),null());
	}
	else{
		HX_STACK_LINE(25)
		this->animation->play(HX_CSTRING("idledown"),null(),null());
	}
}
;
	return null();
}

Bee_obj::~Bee_obj() { }

Dynamic Bee_obj::__CreateEmpty() { return  new Bee_obj; }
hx::ObjectPtr< Bee_obj > Bee_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Bee_obj > result = new Bee_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Bee_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bee_obj > result = new Bee_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Bee_obj::Bee_obj()
{
}

void Bee_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bee);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bee_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Bee_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Bee_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Bee_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bee_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bee_obj::__mClass,"__mClass");
};

Class Bee_obj::__mClass;

void Bee_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("animals.Bee"), hx::TCanCast< Bee_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Bee_obj::__boot()
{
}

} // end namespace animals
