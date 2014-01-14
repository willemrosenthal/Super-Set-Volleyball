#ifndef INCLUDED_animals_Bunny
#define INCLUDED_animals_Bunny

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Animal.h>
HX_DECLARE_CLASS0(Animal)
HX_DECLARE_CLASS1(animals,Bunny)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)
namespace animals{


class HXCPP_CLASS_ATTRIBUTES  Bunny_obj : public ::Animal_obj{
	public:
		typedef ::Animal_obj super;
		typedef Bunny_obj OBJ_;
		Bunny_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		static hx::ObjectPtr< Bunny_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Bunny_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Bunny"); }

};

} // end namespace animals

#endif /* INCLUDED_animals_Bunny */ 
