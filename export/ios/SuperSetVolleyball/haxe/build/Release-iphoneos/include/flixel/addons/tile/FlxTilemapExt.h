#ifndef INCLUDED_flixel_addons_tile_FlxTilemapExt
#define INCLUDED_flixel_addons_tile_FlxTilemapExt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tile/FlxTilemap.h>
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTileSpecial)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTilemapExt)
HX_DECLARE_CLASS2(flixel,tile,FlxTile)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapBuffer)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace addons{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxTilemapExt_obj : public ::flixel::tile::FlxTilemap_obj{
	public:
		typedef ::flixel::tile::FlxTilemap_obj super;
		typedef FlxTilemapExt_obj OBJ_;
		FlxTilemapExt_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxTilemapExt_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTilemapExt_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTilemapExt"); }

		virtual bool checkArrays( int TileIndex);
		Dynamic checkArrays_dyn();

		virtual Void setSlopeProperties( );
		Dynamic setSlopeProperties_dyn();

		virtual Void solveCollisionSlopeCeilRight( ::flixel::FlxObject Slope,::flixel::FlxObject Obj);
		Dynamic solveCollisionSlopeCeilRight_dyn();

		virtual Void solveCollisionSlopeCeilLeft( ::flixel::FlxObject Slope,::flixel::FlxObject Obj);
		Dynamic solveCollisionSlopeCeilLeft_dyn();

		virtual Void solveCollisionSlopeFloorRight( ::flixel::FlxObject Slope,::flixel::FlxObject Object);
		Dynamic solveCollisionSlopeFloorRight_dyn();

		virtual Void solveCollisionSlopeFloorLeft( ::flixel::FlxObject Slope,::flixel::FlxObject Object);
		Dynamic solveCollisionSlopeFloorLeft_dyn();

		virtual Void onCollideCeilSlope( ::flixel::FlxObject Slope,::flixel::FlxObject Object);
		Dynamic onCollideCeilSlope_dyn();

		virtual Void onCollideFloorSlope( ::flixel::FlxObject Slope,::flixel::FlxObject Object);
		Dynamic onCollideFloorSlope_dyn();

		virtual Void fixSlopePoint( ::flixel::tile::FlxTile Slope);
		Dynamic fixSlopePoint_dyn();

		virtual Void setSlopes( Array< int > LeftFloorSlopes,Array< int > RightFloorSlopes,Array< int > LeftCeilSlopes,Array< int > RightCeilSlopes);
		Dynamic setSlopes_dyn();

		virtual Void setClouds( Array< int > Clouds);
		Dynamic setClouds_dyn();

		virtual bool overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  FlipCallbackParams,::flixel::util::FlxPoint Position);

		virtual Void draw( );

		virtual ::flash::geom::Rectangle getRectangleFromTileset( int id);
		Dynamic getRectangleFromTileset_dyn();

		virtual Void setSpecialTiles( Array< ::Dynamic > tiles);
		Dynamic setSpecialTiles_dyn();

		virtual Void drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera);

		virtual Void update( );

		virtual Void destroy( );

		virtual Float set_alpha( Float alpha);
		Dynamic set_alpha_dyn();

		Float alpha;
		Array< ::Dynamic > _specialTiles;
		::flash::geom::Matrix MATRIX;
		Array< int > _slopeCeilRight;
		Array< int > _slopeCeilLeft;
		Array< int > _slopeFloorRight;
		Array< int > _slopeFloorLeft;
		::flixel::util::FlxPoint _objPoint;
		::flixel::util::FlxPoint _slopePoint;
		int _snapping;
};

} // end namespace flixel
} // end namespace addons
} // end namespace tile

#endif /* INCLUDED_flixel_addons_tile_FlxTilemapExt */ 
