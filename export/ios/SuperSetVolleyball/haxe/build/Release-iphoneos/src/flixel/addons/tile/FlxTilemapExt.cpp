#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTileAnimation
#include <flixel/addons/tile/FlxTileAnimation.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTileSpecial
#include <flixel/addons/tile/FlxTileSpecial.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTilemapExt
#include <flixel/addons/tile/FlxTilemapExt.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace addons{
namespace tile{

Void FlxTilemapExt_obj::__construct()
{
HX_STACK_PUSH("FlxTilemapExt::new","flixel/addons/tile/FlxTilemapExt.hx",29);
{
	HX_STACK_LINE(55)
	this->alpha = 1.0;
	HX_STACK_LINE(37)
	this->_snapping = (int)2;
	HX_STACK_LINE(75)
	super::__construct();
	HX_STACK_LINE(77)
	this->_slopePoint = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(78)
	this->_objPoint = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(80)
	this->_slopeFloorLeft = Array_obj< int >::__new();
	HX_STACK_LINE(81)
	this->_slopeFloorRight = Array_obj< int >::__new();
	HX_STACK_LINE(82)
	this->_slopeCeilLeft = Array_obj< int >::__new();
	HX_STACK_LINE(83)
	this->_slopeCeilRight = Array_obj< int >::__new();
	HX_STACK_LINE(86)
	this->_specialTiles = null();
	HX_STACK_LINE(87)
	this->MATRIX = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
}
;
	return null();
}

FlxTilemapExt_obj::~FlxTilemapExt_obj() { }

Dynamic FlxTilemapExt_obj::__CreateEmpty() { return  new FlxTilemapExt_obj; }
hx::ObjectPtr< FlxTilemapExt_obj > FlxTilemapExt_obj::__new()
{  hx::ObjectPtr< FlxTilemapExt_obj > result = new FlxTilemapExt_obj();
	result->__construct();
	return result;}

Dynamic FlxTilemapExt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemapExt_obj > result = new FlxTilemapExt_obj();
	result->__construct();
	return result;}

bool FlxTilemapExt_obj::checkArrays( int TileIndex){
	HX_STACK_PUSH("FlxTilemapExt::checkArrays","flixel/addons/tile/FlxTilemapExt.hx",846);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TileIndex,"TileIndex");
	HX_STACK_LINE(847)
	{
		HX_STACK_LINE(847)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_slopeFloorLeft->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(847)
		while(((_g1 < _g))){
			HX_STACK_LINE(847)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(849)
			if (((this->_slopeFloorLeft->__get(i) == TileIndex))){
				HX_STACK_LINE(850)
				return true;
			}
		}
	}
	HX_STACK_LINE(854)
	{
		HX_STACK_LINE(854)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_slopeFloorRight->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(854)
		while(((_g1 < _g))){
			HX_STACK_LINE(854)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(856)
			if (((this->_slopeFloorRight->__get(i) == TileIndex))){
				HX_STACK_LINE(857)
				return true;
			}
		}
	}
	HX_STACK_LINE(861)
	{
		HX_STACK_LINE(861)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_slopeCeilLeft->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(861)
		while(((_g1 < _g))){
			HX_STACK_LINE(861)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(863)
			if (((this->_slopeCeilLeft->__get(i) == TileIndex))){
				HX_STACK_LINE(864)
				return true;
			}
		}
	}
	HX_STACK_LINE(868)
	{
		HX_STACK_LINE(868)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_slopeCeilRight->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(868)
		while(((_g1 < _g))){
			HX_STACK_LINE(868)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(870)
			if (((this->_slopeCeilRight->__get(i) == TileIndex))){
				HX_STACK_LINE(871)
				return true;
			}
		}
	}
	HX_STACK_LINE(876)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkArrays,return )

Void FlxTilemapExt_obj::setSlopeProperties( ){
{
		HX_STACK_PUSH("FlxTilemapExt::setSlopeProperties","flixel/addons/tile/FlxTilemapExt.hx",820);
		HX_STACK_THIS(this);
		HX_STACK_LINE(821)
		{
			HX_STACK_LINE(821)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_slopeFloorLeft->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(821)
			while(((_g1 < _g))){
				HX_STACK_LINE(821)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(823)
				this->setTileProperties(this->_slopeFloorLeft->__get(i),(int)4112,this->solveCollisionSlopeFloorLeft_dyn(),null(),null());
			}
		}
		HX_STACK_LINE(825)
		{
			HX_STACK_LINE(825)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_slopeFloorRight->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(825)
			while(((_g1 < _g))){
				HX_STACK_LINE(825)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(827)
				this->setTileProperties(this->_slopeFloorRight->__get(i),(int)4097,this->solveCollisionSlopeFloorRight_dyn(),null(),null());
			}
		}
		HX_STACK_LINE(829)
		{
			HX_STACK_LINE(829)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_slopeCeilLeft->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(829)
			while(((_g1 < _g))){
				HX_STACK_LINE(829)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(831)
				this->setTileProperties(this->_slopeCeilLeft->__get(i),(int)272,this->solveCollisionSlopeCeilLeft_dyn(),null(),null());
			}
		}
		HX_STACK_LINE(833)
		{
			HX_STACK_LINE(833)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_slopeCeilRight->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(833)
			while(((_g1 < _g))){
				HX_STACK_LINE(833)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(835)
				this->setTileProperties(this->_slopeCeilRight->__get(i),(int)257,this->solveCollisionSlopeCeilRight_dyn(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapExt_obj,setSlopeProperties,(void))

Void FlxTilemapExt_obj::solveCollisionSlopeCeilRight( ::flixel::FlxObject Slope,::flixel::FlxObject Obj){
{
		HX_STACK_PUSH("FlxTilemapExt::solveCollisionSlopeCeilRight","flixel/addons/tile/FlxTilemapExt.hx",794);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Slope,"Slope");
		HX_STACK_ARG(Obj,"Obj");
		HX_STACK_LINE(796)
		this->_objPoint->set_x(::Math_obj::floor((Obj->x - this->_snapping)));
		HX_STACK_LINE(797)
		this->_objPoint->set_y(::Math_obj::ceil(Obj->y));
		HX_STACK_LINE(801)
		this->_slopePoint->set_x(this->_objPoint->x);
		HX_STACK_LINE(802)
		this->_slopePoint->set_y((Slope->y + (((Slope->x - this->_slopePoint->x) + this->_tileWidth))));
		HX_STACK_LINE(805)
		this->fixSlopePoint(hx::TCast< flixel::tile::FlxTile >::cast(Slope));
		HX_STACK_LINE(808)
		if (((bool((bool((bool((this->_objPoint->x > ((Slope->x - Obj->get_width()) - this->_snapping))) && bool((this->_objPoint->x < ((Slope->x + this->_tileWidth) + this->_snapping))))) && bool((this->_objPoint->y <= this->_slopePoint->y)))) && bool((this->_objPoint->y >= Slope->y))))){
			HX_STACK_LINE(809)
			this->onCollideCeilSlope(Slope,Obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeCeilRight,(void))

Void FlxTilemapExt_obj::solveCollisionSlopeCeilLeft( ::flixel::FlxObject Slope,::flixel::FlxObject Obj){
{
		HX_STACK_PUSH("FlxTilemapExt::solveCollisionSlopeCeilLeft","flixel/addons/tile/FlxTilemapExt.hx",766);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Slope,"Slope");
		HX_STACK_ARG(Obj,"Obj");
		HX_STACK_LINE(768)
		this->_objPoint->set_x(::Math_obj::floor(((Obj->x + Obj->get_width()) + this->_snapping)));
		HX_STACK_LINE(769)
		this->_objPoint->set_y(::Math_obj::ceil(Obj->y));
		HX_STACK_LINE(773)
		this->_slopePoint->set_x(this->_objPoint->x);
		HX_STACK_LINE(774)
		this->_slopePoint->set_y((Slope->y + ((this->_slopePoint->x - Slope->x))));
		HX_STACK_LINE(777)
		this->fixSlopePoint(hx::TCast< flixel::tile::FlxTile >::cast(Slope));
		HX_STACK_LINE(780)
		if (((bool((bool((bool((this->_objPoint->x > (Slope->x + this->_snapping))) && bool((this->_objPoint->x < (((Slope->x + this->_tileWidth) + Obj->get_width()) + this->_snapping))))) && bool((this->_objPoint->y <= this->_slopePoint->y)))) && bool((this->_objPoint->y >= Slope->y))))){
			HX_STACK_LINE(781)
			this->onCollideCeilSlope(Slope,Obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeCeilLeft,(void))

Void FlxTilemapExt_obj::solveCollisionSlopeFloorRight( ::flixel::FlxObject Slope,::flixel::FlxObject Object){
{
		HX_STACK_PUSH("FlxTilemapExt::solveCollisionSlopeFloorRight","flixel/addons/tile/FlxTilemapExt.hx",738);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Slope,"Slope");
		HX_STACK_ARG(Object,"Object");
		HX_STACK_LINE(740)
		this->_objPoint->set_x(::Math_obj::floor((Object->x - this->_snapping)));
		HX_STACK_LINE(741)
		this->_objPoint->set_y(::Math_obj::floor((Object->y + Object->get_height())));
		HX_STACK_LINE(745)
		this->_slopePoint->set_x(this->_objPoint->x);
		HX_STACK_LINE(746)
		this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - (((Slope->x - this->_slopePoint->x) + this->_tileWidth))));
		HX_STACK_LINE(749)
		this->fixSlopePoint(hx::TCast< flixel::tile::FlxTile >::cast(Slope));
		HX_STACK_LINE(752)
		if (((bool((bool((bool((this->_objPoint->x > ((Slope->x - Object->get_width()) - this->_snapping))) && bool((this->_objPoint->x < ((Slope->x + this->_tileWidth) + this->_snapping))))) && bool((this->_objPoint->y >= this->_slopePoint->y)))) && bool((this->_objPoint->y <= (Slope->y + this->_tileHeight)))))){
			HX_STACK_LINE(753)
			this->onCollideFloorSlope(Slope,Object);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeFloorRight,(void))

Void FlxTilemapExt_obj::solveCollisionSlopeFloorLeft( ::flixel::FlxObject Slope,::flixel::FlxObject Object){
{
		HX_STACK_PUSH("FlxTilemapExt::solveCollisionSlopeFloorLeft","flixel/addons/tile/FlxTilemapExt.hx",710);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Slope,"Slope");
		HX_STACK_ARG(Object,"Object");
		HX_STACK_LINE(712)
		this->_objPoint->set_x(::Math_obj::floor(((Object->x + Object->get_width()) + this->_snapping)));
		HX_STACK_LINE(713)
		this->_objPoint->set_y(::Math_obj::floor((Object->y + Object->get_height())));
		HX_STACK_LINE(717)
		this->_slopePoint->set_x(this->_objPoint->x);
		HX_STACK_LINE(718)
		this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - ((this->_slopePoint->x - Slope->x))));
		HX_STACK_LINE(721)
		this->fixSlopePoint(hx::TCast< flixel::tile::FlxTile >::cast(Slope));
		HX_STACK_LINE(724)
		if (((bool((bool((bool((this->_objPoint->x > (Slope->x + this->_snapping))) && bool((this->_objPoint->x < (((Slope->x + this->_tileWidth) + Object->get_width()) + this->_snapping))))) && bool((this->_objPoint->y >= this->_slopePoint->y)))) && bool((this->_objPoint->y <= (Slope->y + this->_tileHeight)))))){
			HX_STACK_LINE(725)
			this->onCollideFloorSlope(Slope,Object);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeFloorLeft,(void))

Void FlxTilemapExt_obj::onCollideCeilSlope( ::flixel::FlxObject Slope,::flixel::FlxObject Object){
{
		HX_STACK_PUSH("FlxTilemapExt::onCollideCeilSlope","flixel/addons/tile/FlxTilemapExt.hx",687);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Slope,"Slope");
		HX_STACK_ARG(Object,"Object");
		HX_STACK_LINE(689)
		Object->touching = (int)256;
		HX_STACK_LINE(692)
		Object->velocity->set_y((int)0);
		HX_STACK_LINE(695)
		Object->set_y(this->_slopePoint->y);
		HX_STACK_LINE(697)
		if (((Object->y > (Slope->y + this->_tileHeight)))){
			HX_STACK_LINE(698)
			Object->set_y((Slope->y + this->_tileHeight));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,onCollideCeilSlope,(void))

Void FlxTilemapExt_obj::onCollideFloorSlope( ::flixel::FlxObject Slope,::flixel::FlxObject Object){
{
		HX_STACK_PUSH("FlxTilemapExt::onCollideFloorSlope","flixel/addons/tile/FlxTilemapExt.hx",664);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Slope,"Slope");
		HX_STACK_ARG(Object,"Object");
		HX_STACK_LINE(666)
		Object->touching = (int)4096;
		HX_STACK_LINE(669)
		Object->velocity->set_y((int)0);
		HX_STACK_LINE(672)
		Object->set_y((this->_slopePoint->y - Object->get_height()));
		HX_STACK_LINE(674)
		if (((Object->y < (Slope->y - Object->get_height())))){
			HX_STACK_LINE(675)
			Object->set_y((Slope->y - Object->get_height()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,onCollideFloorSlope,(void))

Void FlxTilemapExt_obj::fixSlopePoint( ::flixel::tile::FlxTile Slope){
{
		HX_STACK_PUSH("FlxTilemapExt::fixSlopePoint","flixel/addons/tile/FlxTilemapExt.hx",652);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Slope,"Slope");
		struct _Function_1_1{
			inline static Float Block( ::flixel::addons::tile::FlxTilemapExt_obj *__this,::flixel::tile::FlxTile &Slope){
				HX_STACK_PUSH("*::closure","flixel/addons/tile/FlxTilemapExt.hx",653);
				{
					HX_STACK_LINE(653)
					Float Value = __this->_slopePoint->x;		HX_STACK_VAR(Value,"Value");
					Float Min = Slope->x;		HX_STACK_VAR(Min,"Min");
					Float Max = (Slope->x + __this->_tileWidth);		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(653)
					Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(653)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(653)
		this->_slopePoint->set_x(_Function_1_1::Block(this,Slope));
		struct _Function_1_2{
			inline static Float Block( ::flixel::addons::tile::FlxTilemapExt_obj *__this,::flixel::tile::FlxTile &Slope){
				HX_STACK_PUSH("*::closure","flixel/addons/tile/FlxTilemapExt.hx",654);
				{
					HX_STACK_LINE(654)
					Float Value = __this->_slopePoint->y;		HX_STACK_VAR(Value,"Value");
					Float Min = Slope->y;		HX_STACK_VAR(Min,"Min");
					Float Max = (Slope->y + __this->_tileHeight);		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(654)
					Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(654)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(654)
		this->_slopePoint->set_y(_Function_1_2::Block(this,Slope));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,fixSlopePoint,(void))

Void FlxTilemapExt_obj::setSlopes( Array< int > LeftFloorSlopes,Array< int > RightFloorSlopes,Array< int > LeftCeilSlopes,Array< int > RightCeilSlopes){
{
		HX_STACK_PUSH("FlxTilemapExt::setSlopes","flixel/addons/tile/FlxTilemapExt.hx",625);
		HX_STACK_THIS(this);
		HX_STACK_ARG(LeftFloorSlopes,"LeftFloorSlopes");
		HX_STACK_ARG(RightFloorSlopes,"RightFloorSlopes");
		HX_STACK_ARG(LeftCeilSlopes,"LeftCeilSlopes");
		HX_STACK_ARG(RightCeilSlopes,"RightCeilSlopes");
		HX_STACK_LINE(626)
		if (((LeftFloorSlopes != null()))){
			HX_STACK_LINE(627)
			this->_slopeFloorLeft = LeftFloorSlopes;
		}
		HX_STACK_LINE(630)
		if (((RightFloorSlopes != null()))){
			HX_STACK_LINE(631)
			this->_slopeFloorRight = RightFloorSlopes;
		}
		HX_STACK_LINE(634)
		if (((LeftCeilSlopes != null()))){
			HX_STACK_LINE(635)
			this->_slopeCeilLeft = LeftCeilSlopes;
		}
		HX_STACK_LINE(638)
		if (((RightCeilSlopes != null()))){
			HX_STACK_LINE(639)
			this->_slopeCeilRight = RightCeilSlopes;
		}
		HX_STACK_LINE(643)
		this->setSlopeProperties();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapExt_obj,setSlopes,(void))

Void FlxTilemapExt_obj::setClouds( Array< int > Clouds){
{
		HX_STACK_PUSH("FlxTilemapExt::setClouds","flixel/addons/tile/FlxTilemapExt.hx",606);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Clouds,"Clouds");
		HX_STACK_LINE(606)
		if (((Clouds != null()))){
			HX_STACK_LINE(609)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = Clouds->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(609)
			while(((_g1 < _g))){
				HX_STACK_LINE(609)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(611)
				this->setTileProperties(Clouds->__get(i),(int)256,null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,setClouds,(void))

bool FlxTilemapExt_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::util::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_PUSH("FlxTilemapExt::overlapsWithCallback","flixel/addons/tile/FlxTilemapExt.hx",491);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams");
	HX_STACK_ARG(Position,"Position");
{
		HX_STACK_LINE(492)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(494)
		Float X = this->x;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(495)
		Float Y = this->y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(497)
		if (((Position != null()))){
			HX_STACK_LINE(499)
			X = Position->x;
			HX_STACK_LINE(500)
			Y = Position->y;
		}
		HX_STACK_LINE(504)
		int selectionX = ::Math_obj::floor((Float(((Object->x - X))) / Float(this->_tileWidth)));		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(505)
		int selectionY = ::Math_obj::floor((Float(((Object->y - Y))) / Float(this->_tileHeight)));		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(506)
		int selectionWidth = ((selectionX + ::Math_obj::ceil((Float(Object->get_width()) / Float(this->_tileWidth)))) + (int)1);		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(507)
		int selectionHeight = ((selectionY + ::Math_obj::ceil((Float(Object->get_height()) / Float(this->_tileHeight)))) + (int)1);		HX_STACK_VAR(selectionHeight,"selectionHeight");
		HX_STACK_LINE(510)
		if (((selectionX < (int)0))){
			HX_STACK_LINE(511)
			selectionX = (int)0;
		}
		HX_STACK_LINE(514)
		if (((selectionY < (int)0))){
			HX_STACK_LINE(515)
			selectionY = (int)0;
		}
		HX_STACK_LINE(518)
		if (((selectionWidth > this->widthInTiles))){
			HX_STACK_LINE(519)
			selectionWidth = this->widthInTiles;
		}
		HX_STACK_LINE(522)
		if (((selectionHeight > this->heightInTiles))){
			HX_STACK_LINE(523)
			selectionHeight = this->heightInTiles;
		}
		HX_STACK_LINE(528)
		int rowStart = (selectionY * this->widthInTiles);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(529)
		int row = selectionY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(530)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(531)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(532)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(533)
		Float deltaX = (X - this->last->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(534)
		Float deltaY = (Y - this->last->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(536)
		while(((row < selectionHeight))){
			HX_STACK_LINE(538)
			column = selectionX;
			HX_STACK_LINE(540)
			while(((column < selectionWidth))){
				HX_STACK_LINE(542)
				overlapFound = false;
				HX_STACK_LINE(543)
				tile = this->_tileObjects->__get(this->_data->__get((rowStart + column))).StaticCast< ::flixel::tile::FlxTile >();
				HX_STACK_LINE(545)
				if (((tile->allowCollisions != (int)0))){
					HX_STACK_LINE(547)
					tile->set_x((X + (column * this->_tileWidth)));
					HX_STACK_LINE(548)
					tile->set_y((Y + (row * this->_tileHeight)));
					HX_STACK_LINE(549)
					tile->last->set_x((tile->x - deltaX));
					HX_STACK_LINE(550)
					tile->last->set_y((tile->y - deltaY));
					HX_STACK_LINE(552)
					if (((Callback != null()))){
						HX_STACK_LINE(553)
						if ((FlipCallbackParams)){
							HX_STACK_LINE(555)
							overlapFound = Callback(Object,tile).Cast< bool >();
						}
						else{
							HX_STACK_LINE(559)
							overlapFound = Callback(tile,Object).Cast< bool >();
						}
					}
					else{
						HX_STACK_LINE(564)
						overlapFound = (bool((bool((bool(((Object->x + Object->get_width()) > tile->x)) && bool((Object->x < (tile->x + tile->get_width()))))) && bool(((Object->y + Object->get_height()) > tile->y)))) && bool((Object->y < (tile->y + tile->get_height()))));
					}
					HX_STACK_LINE(575)
					if (((bool(overlapFound) || bool((bool(!(overlapFound)) && bool(this->checkArrays(tile->index))))))){
						HX_STACK_LINE(577)
						if (((bool((tile->callbackFunction != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
							HX_STACK_LINE(579)
							tile->mapIndex = (rowStart + column);
							HX_STACK_LINE(580)
							tile->callbackFunction(tile,Object);
						}
						HX_STACK_LINE(582)
						results = true;
					}
				}
				else{
					HX_STACK_LINE(585)
					if (((bool((tile->callbackFunction != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
						HX_STACK_LINE(587)
						tile->mapIndex = (rowStart + column);
						HX_STACK_LINE(588)
						tile->callbackFunction(tile,Object);
					}
				}
				HX_STACK_LINE(590)
				(column)++;
			}
			HX_STACK_LINE(593)
			hx::AddEq(rowStart,this->widthInTiles);
			HX_STACK_LINE(594)
			(row)++;
		}
		HX_STACK_LINE(597)
		return results;
	}
}


Void FlxTilemapExt_obj::draw( ){
{
		HX_STACK_PUSH("FlxTilemapExt::draw","flixel/addons/tile/FlxTilemapExt.hx",419);
		HX_STACK_THIS(this);
		HX_STACK_LINE(420)
		if (((this->cameras == null()))){
			HX_STACK_LINE(421)
			this->cameras = ::flixel::FlxG_obj::cameras->list;
		}
		HX_STACK_LINE(425)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(426)
		::flixel::tile::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(427)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(428)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(430)
		while(((i < l))){
			HX_STACK_LINE(432)
			camera = this->cameras->__get(i).StaticCast< ::flixel::FlxCamera >();
			HX_STACK_LINE(434)
			if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
				HX_STACK_LINE(435)
				continue;
			}
			HX_STACK_LINE(439)
			if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() == null()))){
				HX_STACK_LINE(441)
				this->_buffers[i] = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,null(),null());
				HX_STACK_LINE(442)
				this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->forceComplexRender = this->forceComplexRender;
			}
			HX_STACK_LINE(445)
			buffer = this->_buffers->__get((i)++).StaticCast< ::flixel::tile::FlxTilemapBuffer >();
			HX_STACK_LINE(468)
			this->drawTilemap(buffer,camera);
		}
	}
return null();
}


::flash::geom::Rectangle FlxTilemapExt_obj::getRectangleFromTileset( int id){
	HX_STACK_PUSH("FlxTilemapExt::getRectangleFromTileset","flixel/addons/tile/FlxTilemapExt.hx",393);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(395)
	::flixel::tile::FlxTile tile = this->_tileObjects->__get(id).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(396)
	if (((tile != null()))){
		HX_STACK_LINE(398)
		int rx = (((id - this->_startingIndex)) * ((this->_tileWidth + this->region->spacingX)));		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(399)
		int ry = (int)0;		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(401)
		if (((::Std_obj::_int(rx) >= this->region->width))){
			HX_STACK_LINE(403)
			ry = (::Std_obj::_int((Float(rx) / Float(this->region->width))) * ((this->_tileHeight + this->region->spacingY)));
			HX_STACK_LINE(404)
			hx::ModEq(rx,this->region->width);
		}
		HX_STACK_LINE(407)
		return ::flash::geom::Rectangle_obj::__new((rx + this->region->startX),(ry + this->region->startY),this->_tileWidth,this->_tileHeight);
	}
	HX_STACK_LINE(409)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,getRectangleFromTileset,return )

Void FlxTilemapExt_obj::setSpecialTiles( Array< ::Dynamic > tiles){
{
		HX_STACK_PUSH("FlxTilemapExt::setSpecialTiles","flixel/addons/tile/FlxTilemapExt.hx",346);
		HX_STACK_THIS(this);
		HX_STACK_ARG(tiles,"tiles");
		HX_STACK_LINE(347)
		this->_specialTiles = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(352)
		::flixel::addons::tile::FlxTileSpecial t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = tiles->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(353)
			while(((_g1 < _g))){
				HX_STACK_LINE(353)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(355)
				t = tiles->__get(i).StaticCast< ::flixel::addons::tile::FlxTileSpecial >();
				HX_STACK_LINE(356)
				if (((bool((t != null())) && bool(((bool((bool((bool(t->flipHorizontally) || bool(t->flipVertically))) || bool((t->rotate != (int)0)))) || bool((t->_animation != null())))))))){
					HX_STACK_LINE(357)
					this->_specialTiles[i] = t;
				}
				else{
					HX_STACK_LINE(386)
					this->_specialTiles[i] = null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,setSpecialTiles,(void))

Void FlxTilemapExt_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxTilemapExt::drawTilemap","flixel/addons/tile/FlxTilemapExt.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Buffer,"Buffer");
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(152)
		this->_helperPoint->x = (this->x - (Camera->scroll->x * this->scrollFactor->x));
		HX_STACK_LINE(153)
		this->_helperPoint->y = (this->y - (Camera->scroll->y * this->scrollFactor->y));
		HX_STACK_LINE(155)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(156)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(157)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(160)
		::flixel::system::layer::DrawStackItem drawItem = Camera->getDrawStackItem(this->cachedGraphics,false,(int)0,null());		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(164)
		Array< Float > currDrawData = drawItem->drawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(165)
		int currIndex = drawItem->position;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(169)
		this->_point->set_x(((Camera->scroll->x * this->scrollFactor->x) - this->x));
		HX_STACK_LINE(170)
		this->_point->set_y(((Camera->scroll->y * this->scrollFactor->y) - this->y));
		HX_STACK_LINE(171)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_tileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(172)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_tileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(173)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(174)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(177)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(178)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(181)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(182)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(185)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(186)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(189)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(190)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(194)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(195)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(196)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(197)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(198)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(199)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(200)
		::flixel::addons::tile::FlxTileSpecial special;		HX_STACK_VAR(special,"special");
		HX_STACK_LINE(206)
		bool isSpecial = false;		HX_STACK_VAR(isSpecial,"isSpecial");
		HX_STACK_LINE(208)
		while(((row < screenRows))){
			HX_STACK_LINE(210)
			columnIndex = rowIndex;
			HX_STACK_LINE(211)
			column = (int)0;
			HX_STACK_LINE(212)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(214)
			while(((column < screenColumns))){
				HX_STACK_LINE(274)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(276)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(278)
					if (((this->_specialTiles != null()))){
						HX_STACK_LINE(279)
						special = this->_specialTiles->__get(columnIndex).StaticCast< ::flixel::addons::tile::FlxTileSpecial >();
					}
					else{
						HX_STACK_LINE(283)
						special = null();
					}
					HX_STACK_LINE(287)
					this->MATRIX->identity();
					HX_STACK_LINE(289)
					if (((bool((special != null())) && bool(((bool((bool((bool(special->flipHorizontally) || bool(special->flipVertically))) || bool((special->rotate != (int)0)))) || bool((special->_animation != null())))))))){
						HX_STACK_LINE(291)
						this->MATRIX = special->getMatrix(this->_tileWidth,this->_tileHeight);
						HX_STACK_LINE(292)
						tileID = (special->getCurrentTileId() - this->_startingIndex);
					}
					HX_STACK_LINE(295)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_tileWidth));
					HX_STACK_LINE(296)
					drawY = (this->_helperPoint->y + (::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles))) * this->_tileHeight));
					HX_STACK_LINE(298)
					hx::AddEq(drawX,this->MATRIX->tx);
					HX_STACK_LINE(299)
					hx::AddEq(drawY,this->MATRIX->ty);
					HX_STACK_LINE(302)
					currDrawData[(currIndex)++] = (::Math_obj::floor(drawX) + 0.01);
					HX_STACK_LINE(303)
					currDrawData[(currIndex)++] = (::Math_obj::floor(drawY) + 0.01);
					HX_STACK_LINE(308)
					currDrawData[(currIndex)++] = tileID;
					HX_STACK_LINE(311)
					currDrawData[(currIndex)++] = this->MATRIX->a;
					HX_STACK_LINE(312)
					currDrawData[(currIndex)++] = this->MATRIX->b;
					HX_STACK_LINE(313)
					currDrawData[(currIndex)++] = this->MATRIX->c;
					HX_STACK_LINE(314)
					currDrawData[(currIndex)++] = this->MATRIX->d;
					HX_STACK_LINE(318)
					currDrawData[(currIndex)++] = this->alpha;
				}
				HX_STACK_LINE(323)
				hx::AddEq(this->_flashPoint->x,this->_tileWidth);
				HX_STACK_LINE(324)
				(column)++;
				HX_STACK_LINE(325)
				(columnIndex)++;
			}
			HX_STACK_LINE(328)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(329)
			hx::AddEq(this->_flashPoint->y,this->_tileHeight);
			HX_STACK_LINE(330)
			(row)++;
		}
		HX_STACK_LINE(334)
		drawItem->position = currIndex;
		HX_STACK_LINE(337)
		Buffer->x = (screenXInTiles * this->_tileWidth);
		HX_STACK_LINE(338)
		Buffer->y = (screenYInTiles * this->_tileHeight);
	}
return null();
}


Void FlxTilemapExt_obj::update( ){
{
		HX_STACK_PUSH("FlxTilemapExt::update","flixel/addons/tile/FlxTilemapExt.hx",126);
		HX_STACK_THIS(this);
		HX_STACK_LINE(127)
		this->super::update();
		HX_STACK_LINE(128)
		if (((bool((this->_specialTiles != null())) && bool((this->_specialTiles->length > (int)0))))){
			HX_STACK_LINE(130)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_specialTiles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(130)
			while(((_g < _g1->length))){
				HX_STACK_LINE(130)
				::flixel::addons::tile::FlxTileSpecial t = _g1->__get(_g).StaticCast< ::flixel::addons::tile::FlxTileSpecial >();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(130)
				++(_g);
				HX_STACK_LINE(132)
				if (((bool((t != null())) && bool((t->_animation != null()))))){
					HX_STACK_LINE(133)
					t->update();
				}
			}
		}
	}
return null();
}


Void FlxTilemapExt_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTilemapExt::destroy","flixel/addons/tile/FlxTilemapExt.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		this->_slopePoint = null();
		HX_STACK_LINE(93)
		this->_objPoint = null();
		HX_STACK_LINE(95)
		this->_slopeFloorLeft = null();
		HX_STACK_LINE(96)
		this->_slopeFloorRight = null();
		HX_STACK_LINE(97)
		this->_slopeCeilLeft = null();
		HX_STACK_LINE(98)
		this->_slopeCeilRight = null();
		HX_STACK_LINE(100)
		this->super::destroy();
		HX_STACK_LINE(102)
		if (((this->_specialTiles != null()))){
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_specialTiles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			while(((_g < _g1->length))){
				HX_STACK_LINE(104)
				::flixel::addons::tile::FlxTileSpecial t = _g1->__get(_g).StaticCast< ::flixel::addons::tile::FlxTileSpecial >();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(104)
				++(_g);
				HX_STACK_LINE(106)
				if (((t != null()))){
					HX_STACK_LINE(107)
					t->destroy();
				}
			}
		}
		HX_STACK_LINE(112)
		this->_specialTiles = null();
		HX_STACK_LINE(113)
		this->MATRIX = null();
	}
return null();
}


Float FlxTilemapExt_obj::set_alpha( Float alpha){
	HX_STACK_PUSH("FlxTilemapExt::set_alpha","flixel/addons/tile/FlxTilemapExt.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_LINE(59)
	this->alpha = alpha;
	HX_STACK_LINE(70)
	return alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,set_alpha,return )


FlxTilemapExt_obj::FlxTilemapExt_obj()
{
}

void FlxTilemapExt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapExt);
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(_specialTiles,"_specialTiles");
	HX_MARK_MEMBER_NAME(MATRIX,"MATRIX");
	HX_MARK_MEMBER_NAME(_slopeCeilRight,"_slopeCeilRight");
	HX_MARK_MEMBER_NAME(_slopeCeilLeft,"_slopeCeilLeft");
	HX_MARK_MEMBER_NAME(_slopeFloorRight,"_slopeFloorRight");
	HX_MARK_MEMBER_NAME(_slopeFloorLeft,"_slopeFloorLeft");
	HX_MARK_MEMBER_NAME(_objPoint,"_objPoint");
	HX_MARK_MEMBER_NAME(_slopePoint,"_slopePoint");
	HX_MARK_MEMBER_NAME(_snapping,"_snapping");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemapExt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(_specialTiles,"_specialTiles");
	HX_VISIT_MEMBER_NAME(MATRIX,"MATRIX");
	HX_VISIT_MEMBER_NAME(_slopeCeilRight,"_slopeCeilRight");
	HX_VISIT_MEMBER_NAME(_slopeCeilLeft,"_slopeCeilLeft");
	HX_VISIT_MEMBER_NAME(_slopeFloorRight,"_slopeFloorRight");
	HX_VISIT_MEMBER_NAME(_slopeFloorLeft,"_slopeFloorLeft");
	HX_VISIT_MEMBER_NAME(_objPoint,"_objPoint");
	HX_VISIT_MEMBER_NAME(_slopePoint,"_slopePoint");
	HX_VISIT_MEMBER_NAME(_snapping,"_snapping");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemapExt_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"MATRIX") ) { return MATRIX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setSlopes") ) { return setSlopes_dyn(); }
		if (HX_FIELD_EQ(inName,"setClouds") ) { return setClouds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"_objPoint") ) { return _objPoint; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { return _snapping; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkArrays") ) { return checkArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"_slopePoint") ) { return _slopePoint; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixSlopePoint") ) { return fixSlopePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"_specialTiles") ) { return _specialTiles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_slopeCeilLeft") ) { return _slopeCeilLeft; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setSpecialTiles") ) { return setSpecialTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"_slopeCeilRight") ) { return _slopeCeilRight; }
		if (HX_FIELD_EQ(inName,"_slopeFloorLeft") ) { return _slopeFloorLeft; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_slopeFloorRight") ) { return _slopeFloorRight; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setSlopeProperties") ) { return setSlopeProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"onCollideCeilSlope") ) { return onCollideCeilSlope_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onCollideFloorSlope") ) { return onCollideFloorSlope_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRectangleFromTileset") ) { return getRectangleFromTileset_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeCeilLeft") ) { return solveCollisionSlopeCeilLeft_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeCeilRight") ) { return solveCollisionSlopeCeilRight_dyn(); }
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeFloorLeft") ) { return solveCollisionSlopeFloorLeft_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeFloorRight") ) { return solveCollisionSlopeFloorRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemapExt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MATRIX") ) { MATRIX=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_objPoint") ) { _objPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { _snapping=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_slopePoint") ) { _slopePoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_specialTiles") ) { _specialTiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_slopeCeilLeft") ) { _slopeCeilLeft=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_slopeCeilRight") ) { _slopeCeilRight=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeFloorLeft") ) { _slopeFloorLeft=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_slopeFloorRight") ) { _slopeFloorRight=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapExt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("_specialTiles"));
	outFields->push(HX_CSTRING("MATRIX"));
	outFields->push(HX_CSTRING("_slopeCeilRight"));
	outFields->push(HX_CSTRING("_slopeCeilLeft"));
	outFields->push(HX_CSTRING("_slopeFloorRight"));
	outFields->push(HX_CSTRING("_slopeFloorLeft"));
	outFields->push(HX_CSTRING("_objPoint"));
	outFields->push(HX_CSTRING("_slopePoint"));
	outFields->push(HX_CSTRING("_snapping"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("checkArrays"),
	HX_CSTRING("setSlopeProperties"),
	HX_CSTRING("solveCollisionSlopeCeilRight"),
	HX_CSTRING("solveCollisionSlopeCeilLeft"),
	HX_CSTRING("solveCollisionSlopeFloorRight"),
	HX_CSTRING("solveCollisionSlopeFloorLeft"),
	HX_CSTRING("onCollideCeilSlope"),
	HX_CSTRING("onCollideFloorSlope"),
	HX_CSTRING("fixSlopePoint"),
	HX_CSTRING("setSlopes"),
	HX_CSTRING("setClouds"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("draw"),
	HX_CSTRING("getRectangleFromTileset"),
	HX_CSTRING("setSpecialTiles"),
	HX_CSTRING("drawTilemap"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("alpha"),
	HX_CSTRING("_specialTiles"),
	HX_CSTRING("MATRIX"),
	HX_CSTRING("_slopeCeilRight"),
	HX_CSTRING("_slopeCeilLeft"),
	HX_CSTRING("_slopeFloorRight"),
	HX_CSTRING("_slopeFloorLeft"),
	HX_CSTRING("_objPoint"),
	HX_CSTRING("_slopePoint"),
	HX_CSTRING("_snapping"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapExt_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapExt_obj::__mClass,"__mClass");
};

Class FlxTilemapExt_obj::__mClass;

void FlxTilemapExt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.tile.FlxTilemapExt"), hx::TCanCast< FlxTilemapExt_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTilemapExt_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace tile
