#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Global_obj::__construct()
{
HX_STACK_PUSH("Global::new","Global.hx",60);
{
	HX_STACK_LINE(61)
	::Global_obj::ballLast = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(62)
	::Global_obj::ballNow = ::flixel::util::FlxPoint_obj::__new(null(),null());
}
;
	return null();
}

Global_obj::~Global_obj() { }

Dynamic Global_obj::__CreateEmpty() { return  new Global_obj; }
hx::ObjectPtr< Global_obj > Global_obj::__new()
{  hx::ObjectPtr< Global_obj > result = new Global_obj();
	result->__construct();
	return result;}

Dynamic Global_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Global_obj > result = new Global_obj();
	result->__construct();
	return result;}

bool Global_obj::ini;

::flixel::util::FlxPoint Global_obj::zeroPoint;

::String Global_obj::music;

bool Global_obj::ballLeft;

bool Global_obj::mouseEnabled;

int Global_obj::firstTouchId;

int Global_obj::secondTouchId;

bool Global_obj::moveTouched;

::flixel::util::FlxPoint Global_obj::firstTouch;

::flixel::util::FlxPoint Global_obj::firstTouchTo;

Float Global_obj::gameZoom;

::flixel::group::FlxGroup Global_obj::game;

::flixel::tile::FlxTilemap Global_obj::cMap;

Array< int > Global_obj::waterTiles;

Array< int > Global_obj::waterEdges;

Array< int > Global_obj::groundSetA;

::flixel::util::FlxPoint Global_obj::move;

bool Global_obj::UIopen;

Array< ::String > Global_obj::levels;

int Global_obj::playerAtouching;

::flixel::util::FlxPoint Global_obj::ballLast;

::flixel::util::FlxPoint Global_obj::ballNow;

Void Global_obj::levelStart( ){
{
		HX_STACK_PUSH("Global::levelStart","Global.hx",55);
		HX_STACK_LINE(55)
		::Global_obj::ini = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Global_obj,levelStart,(void))


Global_obj::Global_obj()
{
}

void Global_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Global);
	HX_MARK_END_CLASS();
}

void Global_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Global_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ini") ) { return ini; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"cMap") ) { return cMap; }
		if (HX_FIELD_EQ(inName,"move") ) { return move; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UIopen") ) { return UIopen; }
		if (HX_FIELD_EQ(inName,"levels") ) { return levels; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ballNow") ) { return ballNow; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ballLeft") ) { return ballLeft; }
		if (HX_FIELD_EQ(inName,"gameZoom") ) { return gameZoom; }
		if (HX_FIELD_EQ(inName,"ballLast") ) { return ballLast; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { return zeroPoint; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstTouch") ) { return firstTouch; }
		if (HX_FIELD_EQ(inName,"waterTiles") ) { return waterTiles; }
		if (HX_FIELD_EQ(inName,"waterEdges") ) { return waterEdges; }
		if (HX_FIELD_EQ(inName,"groundSetA") ) { return groundSetA; }
		if (HX_FIELD_EQ(inName,"levelStart") ) { return levelStart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moveTouched") ) { return moveTouched; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return mouseEnabled; }
		if (HX_FIELD_EQ(inName,"firstTouchId") ) { return firstTouchId; }
		if (HX_FIELD_EQ(inName,"firstTouchTo") ) { return firstTouchTo; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"secondTouchId") ) { return secondTouchId; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerAtouching") ) { return playerAtouching; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Global_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ini") ) { ini=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cMap") ) { cMap=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"move") ) { move=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UIopen") ) { UIopen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levels") ) { levels=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ballNow") ) { ballNow=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ballLeft") ) { ballLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameZoom") ) { gameZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballLast") ) { ballLast=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroPoint") ) { zeroPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstTouch") ) { firstTouch=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waterTiles") ) { waterTiles=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waterEdges") ) { waterEdges=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groundSetA") ) { groundSetA=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moveTouched") ) { moveTouched=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { mouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstTouchId") ) { firstTouchId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstTouchTo") ) { firstTouchTo=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"secondTouchId") ) { secondTouchId=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerAtouching") ) { playerAtouching=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Global_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ini"),
	HX_CSTRING("zeroPoint"),
	HX_CSTRING("music"),
	HX_CSTRING("ballLeft"),
	HX_CSTRING("mouseEnabled"),
	HX_CSTRING("firstTouchId"),
	HX_CSTRING("secondTouchId"),
	HX_CSTRING("moveTouched"),
	HX_CSTRING("firstTouch"),
	HX_CSTRING("firstTouchTo"),
	HX_CSTRING("gameZoom"),
	HX_CSTRING("game"),
	HX_CSTRING("cMap"),
	HX_CSTRING("waterTiles"),
	HX_CSTRING("waterEdges"),
	HX_CSTRING("groundSetA"),
	HX_CSTRING("move"),
	HX_CSTRING("UIopen"),
	HX_CSTRING("levels"),
	HX_CSTRING("playerAtouching"),
	HX_CSTRING("ballLast"),
	HX_CSTRING("ballNow"),
	HX_CSTRING("levelStart"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Global_obj::ini,"ini");
	HX_MARK_MEMBER_NAME(Global_obj::zeroPoint,"zeroPoint");
	HX_MARK_MEMBER_NAME(Global_obj::music,"music");
	HX_MARK_MEMBER_NAME(Global_obj::ballLeft,"ballLeft");
	HX_MARK_MEMBER_NAME(Global_obj::mouseEnabled,"mouseEnabled");
	HX_MARK_MEMBER_NAME(Global_obj::firstTouchId,"firstTouchId");
	HX_MARK_MEMBER_NAME(Global_obj::secondTouchId,"secondTouchId");
	HX_MARK_MEMBER_NAME(Global_obj::moveTouched,"moveTouched");
	HX_MARK_MEMBER_NAME(Global_obj::firstTouch,"firstTouch");
	HX_MARK_MEMBER_NAME(Global_obj::firstTouchTo,"firstTouchTo");
	HX_MARK_MEMBER_NAME(Global_obj::gameZoom,"gameZoom");
	HX_MARK_MEMBER_NAME(Global_obj::game,"game");
	HX_MARK_MEMBER_NAME(Global_obj::cMap,"cMap");
	HX_MARK_MEMBER_NAME(Global_obj::waterTiles,"waterTiles");
	HX_MARK_MEMBER_NAME(Global_obj::waterEdges,"waterEdges");
	HX_MARK_MEMBER_NAME(Global_obj::groundSetA,"groundSetA");
	HX_MARK_MEMBER_NAME(Global_obj::move,"move");
	HX_MARK_MEMBER_NAME(Global_obj::UIopen,"UIopen");
	HX_MARK_MEMBER_NAME(Global_obj::levels,"levels");
	HX_MARK_MEMBER_NAME(Global_obj::playerAtouching,"playerAtouching");
	HX_MARK_MEMBER_NAME(Global_obj::ballLast,"ballLast");
	HX_MARK_MEMBER_NAME(Global_obj::ballNow,"ballNow");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Global_obj::ini,"ini");
	HX_VISIT_MEMBER_NAME(Global_obj::zeroPoint,"zeroPoint");
	HX_VISIT_MEMBER_NAME(Global_obj::music,"music");
	HX_VISIT_MEMBER_NAME(Global_obj::ballLeft,"ballLeft");
	HX_VISIT_MEMBER_NAME(Global_obj::mouseEnabled,"mouseEnabled");
	HX_VISIT_MEMBER_NAME(Global_obj::firstTouchId,"firstTouchId");
	HX_VISIT_MEMBER_NAME(Global_obj::secondTouchId,"secondTouchId");
	HX_VISIT_MEMBER_NAME(Global_obj::moveTouched,"moveTouched");
	HX_VISIT_MEMBER_NAME(Global_obj::firstTouch,"firstTouch");
	HX_VISIT_MEMBER_NAME(Global_obj::firstTouchTo,"firstTouchTo");
	HX_VISIT_MEMBER_NAME(Global_obj::gameZoom,"gameZoom");
	HX_VISIT_MEMBER_NAME(Global_obj::game,"game");
	HX_VISIT_MEMBER_NAME(Global_obj::cMap,"cMap");
	HX_VISIT_MEMBER_NAME(Global_obj::waterTiles,"waterTiles");
	HX_VISIT_MEMBER_NAME(Global_obj::waterEdges,"waterEdges");
	HX_VISIT_MEMBER_NAME(Global_obj::groundSetA,"groundSetA");
	HX_VISIT_MEMBER_NAME(Global_obj::move,"move");
	HX_VISIT_MEMBER_NAME(Global_obj::UIopen,"UIopen");
	HX_VISIT_MEMBER_NAME(Global_obj::levels,"levels");
	HX_VISIT_MEMBER_NAME(Global_obj::playerAtouching,"playerAtouching");
	HX_VISIT_MEMBER_NAME(Global_obj::ballLast,"ballLast");
	HX_VISIT_MEMBER_NAME(Global_obj::ballNow,"ballNow");
};

Class Global_obj::__mClass;

void Global_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Global"), hx::TCanCast< Global_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Global_obj::__boot()
{
	music= HX_CSTRING("");
	ballLeft= true;
	firstTouchId= (int)-1;
	secondTouchId= (int)-1;
	waterTiles= Array_obj< int >::__new();
	waterEdges= Array_obj< int >::__new();
	groundSetA= Array_obj< int >::__new();
	move= ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
	UIopen= false;
	levels= Array_obj< ::String >::__new().Add(HX_CSTRING("spring1")).Add(HX_CSTRING("fall1")).Add(HX_CSTRING("summer1"));
	playerAtouching= (int)0;
}

