#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_animals_Turtle
#include <animals/Turtle.h>
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

Void Turtle_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_PUSH("Turtle::new","animals/Turtle.hx",5);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(6)
	super::__construct(X,Y);
	HX_STACK_LINE(8)
	this->followDistance = (int)14;
	HX_STACK_LINE(10)
	this->loadGraphic(HX_CSTRING("assets/fall/turtle.png"),true,true,(int)18,(int)10,null(),null());
	HX_STACK_LINE(11)
	this->animation->add(HX_CSTRING("idleside"),Array_obj< int >::__new().Add((int)12).Add((int)13).Add((int)14).Add((int)14).Add((int)13).Add((int)14).Add((int)14).Add((int)13).Add((int)12),(int)5,null());
	HX_STACK_LINE(12)
	this->animation->add(HX_CSTRING("idledown"),Array_obj< int >::__new().Add((int)15).Add((int)16).Add((int)17).Add((int)17).Add((int)16).Add((int)17).Add((int)17).Add((int)16).Add((int)15),(int)5,null());
	HX_STACK_LINE(13)
	this->animation->add(HX_CSTRING("idleup"),Array_obj< int >::__new().Add((int)18).Add((int)19).Add((int)20).Add((int)20).Add((int)19).Add((int)20).Add((int)20).Add((int)19).Add((int)18),(int)5,null());
	HX_STACK_LINE(14)
	this->animation->add(HX_CSTRING("runside"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3),(int)7,null());
	HX_STACK_LINE(15)
	this->animation->add(HX_CSTRING("rundown"),Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)6).Add((int)7),(int)7,null());
	HX_STACK_LINE(16)
	this->animation->add(HX_CSTRING("runup"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)7,null());
	HX_STACK_LINE(19)
	this->animation->add(HX_CSTRING("idlesides"),Array_obj< int >::__new().Add((int)21),null(),null());
	HX_STACK_LINE(20)
	this->animation->add(HX_CSTRING("idledowns"),Array_obj< int >::__new().Add((int)23),null(),null());
	HX_STACK_LINE(21)
	this->animation->add(HX_CSTRING("idleups"),Array_obj< int >::__new().Add((int)25),null(),null());
	HX_STACK_LINE(22)
	this->animation->add(HX_CSTRING("runsides"),Array_obj< int >::__new().Add((int)21).Add((int)22),(int)3,null());
	HX_STACK_LINE(23)
	this->animation->add(HX_CSTRING("rundowns"),Array_obj< int >::__new().Add((int)23).Add((int)24),(int)3,null());
	HX_STACK_LINE(24)
	this->animation->add(HX_CSTRING("runups"),Array_obj< int >::__new().Add((int)25).Add((int)26),(int)3,null());
	HX_STACK_LINE(27)
	this->swimming = true;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		_g->set_y((_g->y + this->get_height()));
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		_g->set_x((_g->x + (this->get_width() * 0.5)));
	}
	HX_STACK_LINE(35)
	if (((::Math_obj::random() < 0.5))){
		HX_STACK_LINE(36)
		this->animation->play(HX_CSTRING("idleside"),null(),null());
		HX_STACK_LINE(37)
		this->afacing = HX_CSTRING("side");
	}
	else{
		HX_STACK_LINE(40)
		this->animation->play(HX_CSTRING("idledown"),null(),null());
		HX_STACK_LINE(41)
		this->afacing = HX_CSTRING("down");
	}
}
;
	return null();
}

Turtle_obj::~Turtle_obj() { }

Dynamic Turtle_obj::__CreateEmpty() { return  new Turtle_obj; }
hx::ObjectPtr< Turtle_obj > Turtle_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Turtle_obj > result = new Turtle_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Turtle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Turtle_obj > result = new Turtle_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Turtle_obj::Turtle_obj()
{
}

void Turtle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Turtle);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Turtle_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Turtle_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Turtle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Turtle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Turtle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Turtle_obj::__mClass,"__mClass");
};

Class Turtle_obj::__mClass;

void Turtle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("animals.Turtle"), hx::TCanCast< Turtle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Turtle_obj::__boot()
{
}

} // end namespace animals
