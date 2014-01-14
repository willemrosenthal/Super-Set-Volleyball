#ifndef INCLUDED_flixel_system__FlxAssets_FontDebugger
#define INCLUDED_flixel_system__FlxAssets_FontDebugger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/text/Font.h>
HX_DECLARE_CLASS2(flash,text,Font)
HX_DECLARE_CLASS2(flash,text,FontStyle)
HX_DECLARE_CLASS2(flash,text,FontType)
HX_DECLARE_CLASS3(flixel,system,_FlxAssets,FontDebugger)
namespace flixel{
namespace system{
namespace _FlxAssets{


class HXCPP_CLASS_ATTRIBUTES  FontDebugger_obj : public ::flash::text::Font_obj{
	public:
		typedef ::flash::text::Font_obj super;
		typedef FontDebugger_obj OBJ_;
		FontDebugger_obj();
		Void __construct(::String __o_filename,::flash::text::FontStyle style,::flash::text::FontType type);

	public:
		static hx::ObjectPtr< FontDebugger_obj > __new(::String __o_filename,::flash::text::FontStyle style,::flash::text::FontType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FontDebugger_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FontDebugger"); }

		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace _FlxAssets

#endif /* INCLUDED_flixel_system__FlxAssets_FontDebugger */ 
