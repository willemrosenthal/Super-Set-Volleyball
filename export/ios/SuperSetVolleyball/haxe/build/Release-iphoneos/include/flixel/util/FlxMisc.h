#ifndef INCLUDED_flixel_util_FlxMisc
#define INCLUDED_flixel_util_FlxMisc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flixel,util,FlxMisc)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxMisc_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMisc_obj OBJ_;
		FlxMisc_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxMisc_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxMisc_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxMisc"); }

		static Void openURL( ::String URL);
		static Dynamic openURL_dyn();

		static Dynamic deepCopy( Dynamic v);
		static Dynamic deepCopy_dyn();

		static int get_mouseIndex( );
		static Dynamic get_mouseIndex_dyn();

		static ::flash::display::Sprite get_gameContainer( );
		static Dynamic get_gameContainer_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxMisc */ 
