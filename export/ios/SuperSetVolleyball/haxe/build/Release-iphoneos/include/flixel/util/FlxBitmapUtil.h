#ifndef INCLUDED_flixel_util_FlxBitmapUtil
#define INCLUDED_flixel_util_FlxBitmapUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flixel,util,FlxBitmapUtil)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxBitmapUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBitmapUtil_obj OBJ_;
		FlxBitmapUtil_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxBitmapUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxBitmapUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxBitmapUtil"); }

		static Dynamic compare( ::flash::display::BitmapData Bitmap1,::flash::display::BitmapData Bitmap2);
		static Dynamic compare_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxBitmapUtil */ 
