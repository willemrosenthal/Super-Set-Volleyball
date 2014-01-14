#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_tile_FlxTileAnimation
#include <flixel/addons/tile/FlxTileAnimation.h>
#endif
namespace flixel{
namespace addons{
namespace tile{

Void FlxTileAnimation_obj::__construct(::String Name,Array< int > Frames,hx::Null< Float >  __o_FrameRate,hx::Null< bool >  __o_Looped,Dynamic FramesData)
{
HX_STACK_PUSH("FlxTileAnimation::new","flixel/addons/tile/FlxTileAnimation.hx",35);
Float FrameRate = __o_FrameRate.Default(0);
bool Looped = __o_Looped.Default(true);
{
	HX_STACK_LINE(36)
	this->name = Name;
	HX_STACK_LINE(37)
	this->set_frameRate(FrameRate);
	HX_STACK_LINE(38)
	this->frames = Frames;
	HX_STACK_LINE(39)
	this->looped = Looped;
	HX_STACK_LINE(40)
	this->framesData = FramesData;
}
;
	return null();
}

FlxTileAnimation_obj::~FlxTileAnimation_obj() { }

Dynamic FlxTileAnimation_obj::__CreateEmpty() { return  new FlxTileAnimation_obj; }
hx::ObjectPtr< FlxTileAnimation_obj > FlxTileAnimation_obj::__new(::String Name,Array< int > Frames,hx::Null< Float >  __o_FrameRate,hx::Null< bool >  __o_Looped,Dynamic FramesData)
{  hx::ObjectPtr< FlxTileAnimation_obj > result = new FlxTileAnimation_obj();
	result->__construct(Name,Frames,__o_FrameRate,__o_Looped,FramesData);
	return result;}

Dynamic FlxTileAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileAnimation_obj > result = new FlxTileAnimation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Float FlxTileAnimation_obj::set_frameRate( Float value){
	HX_STACK_PUSH("FlxTileAnimation::set_frameRate","flixel/addons/tile/FlxTileAnimation.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(59)
	this->delay = (int)0;
	HX_STACK_LINE(60)
	this->frameRate = value;
	HX_STACK_LINE(61)
	if (((value > (int)0))){
		HX_STACK_LINE(62)
		this->delay = (Float(1.0) / Float(value));
	}
	HX_STACK_LINE(65)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTileAnimation_obj,set_frameRate,return )

Void FlxTileAnimation_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTileAnimation::destroy","flixel/addons/tile/FlxTileAnimation.hx",47);
		HX_STACK_THIS(this);
		HX_STACK_LINE(48)
		this->frames = null();
		HX_STACK_LINE(49)
		this->framesData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileAnimation_obj,destroy,(void))


FlxTileAnimation_obj::FlxTileAnimation_obj()
{
}

void FlxTileAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileAnimation);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(framesData,"framesData");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void FlxTileAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(framesData,"framesData");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic FlxTileAnimation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"looped") ) { return looped; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesData") ) { return framesData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTileAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp) return set_frameRate(inValue);frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesData") ) { framesData=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("framesData"));
	outFields->push(HX_CSTRING("looped"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("delay"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_frameRate"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("destroy"),
	HX_CSTRING("framesData"),
	HX_CSTRING("looped"),
	HX_CSTRING("frames"),
	HX_CSTRING("delay"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileAnimation_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileAnimation_obj::__mClass,"__mClass");
};

Class FlxTileAnimation_obj::__mClass;

void FlxTileAnimation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.tile.FlxTileAnimation"), hx::TCanCast< FlxTileAnimation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTileAnimation_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace tile
