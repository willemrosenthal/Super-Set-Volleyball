#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_animals_Skunk
#include <animals/Skunk.h>
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

Void Skunk_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_PUSH("Skunk::new","animals/Skunk.hx",5);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(6)
	super::__construct(X,Y);
	HX_STACK_LINE(8)
	this->followDistance = (int)18;
	HX_STACK_LINE(10)
	this->loadGraphic(HX_CSTRING("assets/fall/skunk.png"),true,true,(int)29,(int)23,null(),null());
	HX_STACK_LINE(11)
	this->animation->add(HX_CSTRING("idleside"),Array_obj< int >::__new().Add((int)0).Add((int)3),(int)2,null());
	HX_STACK_LINE(12)
	this->animation->add(HX_CSTRING("idledown"),Array_obj< int >::__new().Add((int)4).Add((int)7),(int)2,null());
	HX_STACK_LINE(13)
	this->animation->add(HX_CSTRING("idleup"),Array_obj< int >::__new().Add((int)8).Add((int)11),(int)2,null());
	HX_STACK_LINE(14)
	this->animation->add(HX_CSTRING("runside"),Array_obj< int >::__new().Add((int)1).Add((int)2),(int)6,null());
	HX_STACK_LINE(15)
	this->animation->add(HX_CSTRING("rundown"),Array_obj< int >::__new().Add((int)5).Add((int)6),(int)6,null());
	HX_STACK_LINE(16)
	this->animation->add(HX_CSTRING("runup"),Array_obj< int >::__new().Add((int)9).Add((int)10),(int)6,null());
	HX_STACK_LINE(19)
	this->animation->add(HX_CSTRING("idlesides"),Array_obj< int >::__new().Add((int)12).Add((int)13),(int)2,null());
	HX_STACK_LINE(20)
	this->animation->add(HX_CSTRING("idledowns"),Array_obj< int >::__new().Add((int)14).Add((int)15),(int)2,null());
	HX_STACK_LINE(21)
	this->animation->add(HX_CSTRING("idleups"),Array_obj< int >::__new().Add((int)16).Add((int)17),(int)2,null());
	HX_STACK_LINE(22)
	this->animation->add(HX_CSTRING("runsides"),Array_obj< int >::__new().Add((int)12).Add((int)13),(int)6,null());
	HX_STACK_LINE(23)
	this->animation->add(HX_CSTRING("rundowns"),Array_obj< int >::__new().Add((int)14).Add((int)15),(int)6,null());
	HX_STACK_LINE(24)
	this->animation->add(HX_CSTRING("runups"),Array_obj< int >::__new().Add((int)16).Add((int)17),(int)6,null());
	HX_STACK_LINE(27)
	this->swimming = true;
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		_g->set_y((_g->y + (this->get_height() * 0.78)));
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::flixel::util::FlxPoint _g = this->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		_g->set_x((_g->x + (this->get_width() * 0.5)));
	}
	HX_STACK_LINE(35)
	this->set_width((int)12);
	HX_STACK_LINE(36)
	this->set_height((int)6);
	HX_STACK_LINE(39)
	if (((::Math_obj::random() < 0.5))){
		HX_STACK_LINE(40)
		this->animation->play(HX_CSTRING("idleside"),null(),null());
		HX_STACK_LINE(41)
		this->afacing = HX_CSTRING("side");
	}
	else{
		HX_STACK_LINE(44)
		this->animation->play(HX_CSTRING("idledown"),null(),null());
		HX_STACK_LINE(45)
		this->afacing = HX_CSTRING("down");
	}
}
;
	return null();
}

Skunk_obj::~Skunk_obj() { }

Dynamic Skunk_obj::__CreateEmpty() { return  new Skunk_obj; }
hx::ObjectPtr< Skunk_obj > Skunk_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Skunk_obj > result = new Skunk_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Skunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Skunk_obj > result = new Skunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Skunk_obj::Skunk_obj()
{
}

void Skunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Skunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Skunk_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Skunk_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Skunk_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Skunk_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Skunk_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Skunk_obj::__mClass,"__mClass");
};

Class Skunk_obj::__mClass;

void Skunk_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("animals.Skunk"), hx::TCanCast< Skunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Skunk_obj::__boot()
{
}

} // end namespace animals
