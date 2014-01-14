#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_animals_Bird
#include <animals/Bird.h>
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

Void Bird_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_PUSH("Bird::new","animals/Bird.hx",5);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(6)
	super::__construct(X,Y);
	HX_STACK_LINE(8)
	this->followDistance = (int)18;
	HX_STACK_LINE(10)
	this->loadGraphic(HX_CSTRING("assets/summer/bird.png"),true,true,(int)13,(int)16,null(),null());
	HX_STACK_LINE(11)
	this->animation->add(HX_CSTRING("sit"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(12)
	this->animation->add(HX_CSTRING("idleside"),Array_obj< int >::__new().Add((int)9),null(),null());
	HX_STACK_LINE(13)
	this->animation->add(HX_CSTRING("idledown"),Array_obj< int >::__new().Add((int)10),null(),null());
	HX_STACK_LINE(14)
	this->animation->add(HX_CSTRING("idleup"),Array_obj< int >::__new().Add((int)11),null(),null());
	HX_STACK_LINE(15)
	this->animation->add(HX_CSTRING("runside"),Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)1),(int)16,null());
	HX_STACK_LINE(16)
	this->animation->add(HX_CSTRING("rundown"),Array_obj< int >::__new().Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)5).Add((int)5).Add((int)4),(int)16,null());
	HX_STACK_LINE(17)
	this->animation->add(HX_CSTRING("runup"),Array_obj< int >::__new().Add((int)6).Add((int)6).Add((int)7).Add((int)7).Add((int)8).Add((int)8).Add((int)7),(int)16,null());
	HX_STACK_LINE(20)
	this->animation->add(HX_CSTRING("idlesides"),Array_obj< int >::__new().Add((int)12),null(),null());
	HX_STACK_LINE(21)
	this->animation->add(HX_CSTRING("idledowns"),Array_obj< int >::__new().Add((int)13),null(),null());
	HX_STACK_LINE(22)
	this->animation->add(HX_CSTRING("idleups"),Array_obj< int >::__new().Add((int)14),null(),null());
	HX_STACK_LINE(23)
	this->animation->add(HX_CSTRING("runsides"),Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)1),(int)16,null());
	HX_STACK_LINE(24)
	this->animation->add(HX_CSTRING("rundowns"),Array_obj< int >::__new().Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)5).Add((int)5).Add((int)4),(int)16,null());
	HX_STACK_LINE(25)
	this->animation->add(HX_CSTRING("runups"),Array_obj< int >::__new().Add((int)6).Add((int)6).Add((int)7).Add((int)7).Add((int)8).Add((int)8).Add((int)7),(int)16,null());
	HX_STACK_LINE(28)
	this->swimming = true;
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		_g->set_y((_g->y + this->get_height()));
	}
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		_g->set_x((_g->x + (this->get_width() * 0.5)));
	}
	HX_STACK_LINE(33)
	this->set_width((int)6);
	HX_STACK_LINE(34)
	this->set_height((int)6);
	HX_STACK_LINE(36)
	if (((::Math_obj::random() < 0.5))){
		HX_STACK_LINE(37)
		this->animation->play(HX_CSTRING("idleside"),null(),null());
		HX_STACK_LINE(38)
		this->afacing = HX_CSTRING("side");
	}
	else{
		HX_STACK_LINE(41)
		this->animation->play(HX_CSTRING("idledown"),null(),null());
		HX_STACK_LINE(42)
		this->afacing = HX_CSTRING("down");
	}
}
;
	return null();
}

Bird_obj::~Bird_obj() { }

Dynamic Bird_obj::__CreateEmpty() { return  new Bird_obj; }
hx::ObjectPtr< Bird_obj > Bird_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Bird_obj > result = new Bird_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Bird_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bird_obj > result = new Bird_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Bird_obj::Bird_obj()
{
}

void Bird_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bird);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bird_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Bird_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Bird_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Bird_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bird_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bird_obj::__mClass,"__mClass");
};

Class Bird_obj::__mClass;

void Bird_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("animals.Bird"), hx::TCanCast< Bird_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Bird_obj::__boot()
{
}

} // end namespace animals
