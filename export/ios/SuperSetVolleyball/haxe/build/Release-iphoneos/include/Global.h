#ifndef INCLUDED_Global
#define INCLUDED_Global

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Global)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Global_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Global_obj OBJ_;
		Global_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Global_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Global_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Global"); }

		static bool ini;
		static ::flixel::util::FlxPoint zeroPoint;
		static ::String music;
		static bool ballLeft;
		static bool mouseEnabled;
		static int firstTouchId;
		static int secondTouchId;
		static bool moveTouched;
		static ::flixel::util::FlxPoint firstTouch;
		static ::flixel::util::FlxPoint firstTouchTo;
		static Float gameZoom;
		static ::flixel::group::FlxGroup game;
		static ::flixel::tile::FlxTilemap cMap;
		static Array< int > waterTiles;
		static Array< int > waterEdges;
		static Array< int > groundSetA;
		static ::flixel::util::FlxPoint move;
		static bool UIopen;
		static Array< ::String > levels;
		static int playerAtouching;
		static ::flixel::util::FlxPoint ballLast;
		static ::flixel::util::FlxPoint ballNow;
		static Void levelStart( );
		static Dynamic levelStart_dyn();

};


#endif /* INCLUDED_Global */ 
