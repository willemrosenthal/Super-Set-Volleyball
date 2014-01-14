#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_animals_Monkey
#include <animals/Monkey.h>
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

Void Monkey_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_PUSH("Monkey::new","animals/Monkey.hx",5);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(6)
	super::__construct(X,Y);
	HX_STACK_LINE(8)
	this->followDistance = (int)18;
	HX_STACK_LINE(29)
	this->loadGraphic(HX_CSTRING("assets/summer/small_monkey.png"),true,true,(int)28,(int)19,null(),null());
	HX_STACK_LINE(30)
	this->animation->add(HX_CSTRING("sit"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(31)
	this->animation->add(HX_CSTRING("idleside"),Array_obj< int >::__new().Add((int)16).Add((int)17),(int)2,null());
	HX_STACK_LINE(32)
	this->animation->add(HX_CSTRING("idledown"),Array_obj< int >::__new().Add((int)12).Add((int)13),(int)2,null());
	HX_STACK_LINE(33)
	this->animation->add(HX_CSTRING("idleup"),Array_obj< int >::__new().Add((int)14).Add((int)15),(int)2,null());
	HX_STACK_LINE(34)
	this->animation->add(HX_CSTRING("runside"),Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)3),(int)12,null());
	HX_STACK_LINE(35)
	this->animation->add(HX_CSTRING("rundown"),Array_obj< int >::__new().Add((int)4).Add((int)4).Add((int)5).Add((int)5).Add((int)6).Add((int)6).Add((int)7),(int)12,null());
	HX_STACK_LINE(36)
	this->animation->add(HX_CSTRING("runup"),Array_obj< int >::__new().Add((int)8).Add((int)8).Add((int)9).Add((int)9).Add((int)10).Add((int)11).Add((int)11),(int)12,null());
	HX_STACK_LINE(39)
	this->animation->add(HX_CSTRING("idlesides"),Array_obj< int >::__new().Add((int)18).Add((int)19),(int)2,null());
	HX_STACK_LINE(40)
	this->animation->add(HX_CSTRING("idledowns"),Array_obj< int >::__new().Add((int)20).Add((int)21),(int)2,null());
	HX_STACK_LINE(41)
	this->animation->add(HX_CSTRING("idleups"),Array_obj< int >::__new().Add((int)22).Add((int)23),(int)2,null());
	HX_STACK_LINE(42)
	this->animation->add(HX_CSTRING("runsides"),Array_obj< int >::__new().Add((int)18).Add((int)19),(int)6,null());
	HX_STACK_LINE(43)
	this->animation->add(HX_CSTRING("rundowns"),Array_obj< int >::__new().Add((int)20).Add((int)21),(int)6,null());
	HX_STACK_LINE(44)
	this->animation->add(HX_CSTRING("runups"),Array_obj< int >::__new().Add((int)22).Add((int)23),(int)6,null());
	HX_STACK_LINE(47)
	this->swimming = true;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		_g->set_y((_g->y + this->get_height()));
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		_g->set_x((_g->x + (this->get_width() * 0.5)));
	}
	HX_STACK_LINE(52)
	this->set_width((int)6);
	HX_STACK_LINE(53)
	this->set_height((int)6);
	HX_STACK_LINE(55)
	if (((::Math_obj::random() < 0.5))){
		HX_STACK_LINE(56)
		this->animation->play(HX_CSTRING("idleside"),null(),null());
		HX_STACK_LINE(57)
		this->afacing = HX_CSTRING("side");
	}
	else{
		HX_STACK_LINE(60)
		this->animation->play(HX_CSTRING("idledown"),null(),null());
		HX_STACK_LINE(61)
		this->afacing = HX_CSTRING("down");
	}
}
;
	return null();
}

Monkey_obj::~Monkey_obj() { }

Dynamic Monkey_obj::__CreateEmpty() { return  new Monkey_obj; }
hx::ObjectPtr< Monkey_obj > Monkey_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Monkey_obj > result = new Monkey_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Monkey_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Monkey_obj > result = new Monkey_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Monkey_obj::Monkey_obj()
{
}

void Monkey_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Monkey);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Monkey_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Monkey_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Monkey_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Monkey_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Monkey_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Monkey_obj::__mClass,"__mClass");
};

Class Monkey_obj::__mClass;

void Monkey_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("animals.Monkey"), hx::TCanCast< Monkey_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Monkey_obj::__boot()
{
}

} // end namespace animals
