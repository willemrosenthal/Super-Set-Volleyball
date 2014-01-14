#ifndef INCLUDED_flixel_addons_tile_FlxTileSpecial
#define INCLUDED_flixel_addons_tile_FlxTileSpecial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxBasic.h>
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTileAnimation)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTileSpecial)
namespace flixel{
namespace addons{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxTileSpecial_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxTileSpecial_obj OBJ_;
		FlxTileSpecial_obj();
		Void __construct(int TilesetId,bool FlipHorizontal,bool FlipVertical,int Rotate);

	public:
		static hx::ObjectPtr< FlxTileSpecial_obj > __new(int TilesetId,bool FlipHorizontal,bool FlipVertical,int Rotate);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTileSpecial_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTileSpecial"); }

		virtual ::flash::geom::Matrix getMatrix( int width,int height);
		Dynamic getMatrix_dyn();

		virtual Array< int > getAnimationTilesId( );
		Dynamic getAnimationTilesId_dyn();

		virtual int getCurrentTileId( );
		Dynamic getCurrentTileId_dyn();

		virtual Void addAnimation( Array< int > tiles,hx::Null< Float >  frameRate,Dynamic framesData);
		Dynamic addAnimation_dyn();

		virtual bool hasAnimation( );
		Dynamic hasAnimation_dyn();

		virtual bool isFlipped( );
		Dynamic isFlipped_dyn();

		virtual bool isSpecial( );
		Dynamic isSpecial_dyn();

		virtual Void update( );

		virtual Void destroy( );

		Float _frameTimer;
		Dynamic _currAnimParam;
		int _currTileId;
		int _lastFrame;
		int _currFrame;
		::flixel::addons::tile::FlxTileAnimation _animation;
		::flash::geom::Matrix _matrix;
		int _tmp_rot;
		bool _tmp_flipV;
		bool _tmp_flipH;
		int rotate;
		bool flipVertically;
		bool flipHorizontally;
		int tileID;
};

} // end namespace flixel
} // end namespace addons
} // end namespace tile

#endif /* INCLUDED_flixel_addons_tile_FlxTileSpecial */ 
