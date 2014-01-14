#ifndef INCLUDED_flixel_addons_tile_FlxTileAnimation
#define INCLUDED_flixel_addons_tile_FlxTileAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,tile,FlxTileAnimation)
namespace flixel{
namespace addons{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxTileAnimation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTileAnimation_obj OBJ_;
		FlxTileAnimation_obj();
		Void __construct(::String Name,Array< int > Frames,hx::Null< Float >  __o_FrameRate,hx::Null< bool >  __o_Looped,Dynamic FramesData);

	public:
		static hx::ObjectPtr< FlxTileAnimation_obj > __new(::String Name,Array< int > Frames,hx::Null< Float >  __o_FrameRate,hx::Null< bool >  __o_Looped,Dynamic FramesData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTileAnimation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTileAnimation"); }

		virtual Float set_frameRate( Float value);
		Dynamic set_frameRate_dyn();

		Float frameRate;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		Dynamic framesData;
		bool looped;
		Array< int > frames;
		Float delay;
		::String name;
};

} // end namespace flixel
} // end namespace addons
} // end namespace tile

#endif /* INCLUDED_flixel_addons_tile_FlxTileAnimation */ 
