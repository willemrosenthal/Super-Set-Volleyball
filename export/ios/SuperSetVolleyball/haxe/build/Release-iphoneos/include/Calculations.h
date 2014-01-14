#ifndef INCLUDED_Calculations
#define INCLUDED_Calculations

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Calculations)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Calculations_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Calculations_obj OBJ_;
		Calculations_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Calculations_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Calculations_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Calculations"); }

		static Float plusOrMinus( hx::Null< Float >  Value);
		static Dynamic plusOrMinus_dyn();

		static ::flixel::util::FlxPoint lineIntersect( ::flixel::util::FlxPoint p1,::flixel::util::FlxPoint p2,::flixel::util::FlxPoint p3,::flixel::util::FlxPoint p4);
		static Dynamic lineIntersect_dyn();

};


#endif /* INCLUDED_Calculations */ 
