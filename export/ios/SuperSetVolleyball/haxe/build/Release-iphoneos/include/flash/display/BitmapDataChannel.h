#ifndef INCLUDED_flash_display_BitmapDataChannel
#define INCLUDED_flash_display_BitmapDataChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapDataChannel)
namespace flash{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  BitmapDataChannel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapDataChannel_obj OBJ_;
		BitmapDataChannel_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BitmapDataChannel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapDataChannel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapDataChannel"); }

};

} // end namespace flash
} // end namespace display

#endif /* INCLUDED_flash_display_BitmapDataChannel */ 
