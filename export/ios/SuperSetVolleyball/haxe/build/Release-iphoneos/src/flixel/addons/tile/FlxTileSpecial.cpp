#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
namespace flixel{
namespace addons{
namespace tile{

Void FlxTileSpecial_obj::__construct(int TilesetId,bool FlipHorizontal,bool FlipVertical,int Rotate)
{
HX_STACK_PUSH("FlxTileSpecial::new","flixel/addons/tile/FlxTileSpecial.hx",12);
{
	HX_STACK_LINE(48)
	this->_frameTimer = 0.0;
	HX_STACK_LINE(45)
	this->_lastFrame = (int)-1;
	HX_STACK_LINE(44)
	this->_currFrame = (int)0;
	HX_STACK_LINE(24)
	this->flipVertically = false;
	HX_STACK_LINE(23)
	this->flipHorizontally = false;
	HX_STACK_LINE(57)
	super::__construct();
	HX_STACK_LINE(58)
	this->tileID = TilesetId;
	HX_STACK_LINE(59)
	this->_currTileId = this->tileID;
	HX_STACK_LINE(60)
	this->flipHorizontally = FlipHorizontal;
	HX_STACK_LINE(61)
	this->flipVertically = FlipVertical;
	HX_STACK_LINE(62)
	this->rotate = Rotate;
	HX_STACK_LINE(73)
	this->_matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(74)
	this->_animation = null();
}
;
	return null();
}

FlxTileSpecial_obj::~FlxTileSpecial_obj() { }

Dynamic FlxTileSpecial_obj::__CreateEmpty() { return  new FlxTileSpecial_obj; }
hx::ObjectPtr< FlxTileSpecial_obj > FlxTileSpecial_obj::__new(int TilesetId,bool FlipHorizontal,bool FlipVertical,int Rotate)
{  hx::ObjectPtr< FlxTileSpecial_obj > result = new FlxTileSpecial_obj();
	result->__construct(TilesetId,FlipHorizontal,FlipVertical,Rotate);
	return result;}

Dynamic FlxTileSpecial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileSpecial_obj > result = new FlxTileSpecial_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::flash::geom::Matrix FlxTileSpecial_obj::getMatrix( int width,int height){
	HX_STACK_PUSH("FlxTileSpecial::getMatrix","flixel/addons/tile/FlxTileSpecial.hx",246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(247)
	this->_tmp_flipH = this->flipHorizontally;
	HX_STACK_LINE(248)
	this->_tmp_flipV = this->flipVertically;
	HX_STACK_LINE(249)
	this->_tmp_rot = this->rotate;
	HX_STACK_LINE(251)
	if (((this->_currAnimParam != null()))){
		HX_STACK_LINE(252)
		this->_tmp_flipH = this->_currAnimParam->__Field(HX_CSTRING("flipHorizontal"),true);
		HX_STACK_LINE(253)
		this->_tmp_flipV = this->_currAnimParam->__Field(HX_CSTRING("flipVertical"),true);
		HX_STACK_LINE(254)
		this->_tmp_rot = this->_currAnimParam->__Field(HX_CSTRING("rotate"),true);
	}
	HX_STACK_LINE(257)
	this->_matrix->identity();
	HX_STACK_LINE(258)
	if ((this->_tmp_flipH)){
		HX_STACK_LINE(260)
		this->_matrix->scale((int)-1,(int)1);
		HX_STACK_LINE(261)
		this->_matrix->translate(width,(int)0);
	}
	HX_STACK_LINE(263)
	if ((this->_tmp_flipV)){
		HX_STACK_LINE(265)
		this->_matrix->scale((int)1,(int)-1);
		HX_STACK_LINE(266)
		this->_matrix->translate((int)0,height);
	}
	HX_STACK_LINE(269)
	if (((this->_tmp_rot != (int)0))){
		HX_STACK_LINE(271)
		::flixel::addons::tile::FlxTileSpecial _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(271)
		switch( (int)(_g->_tmp_rot)){
			case (int)1: {
				HX_STACK_LINE(274)
				this->_matrix->rotate(((int)90 * ::flixel::util::FlxAngle_obj::TO_RAD));
				HX_STACK_LINE(275)
				this->_matrix->translate(width,(int)0);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(278)
				this->_matrix->rotate(((int)270 * ::flixel::util::FlxAngle_obj::TO_RAD));
				HX_STACK_LINE(279)
				this->_matrix->translate((int)0,height);
			}
			;break;
		}
	}
	HX_STACK_LINE(283)
	return this->_matrix;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTileSpecial_obj,getMatrix,return )

Array< int > FlxTileSpecial_obj::getAnimationTilesId( ){
	HX_STACK_PUSH("FlxTileSpecial::getAnimationTilesId","flixel/addons/tile/FlxTileSpecial.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_LINE(231)
	if (((this->_animation != null()))){
		HX_STACK_LINE(232)
		return this->_animation->frames;
	}
	HX_STACK_LINE(236)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileSpecial_obj,getAnimationTilesId,return )

int FlxTileSpecial_obj::getCurrentTileId( ){
	HX_STACK_PUSH("FlxTileSpecial::getCurrentTileId","flixel/addons/tile/FlxTileSpecial.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_LINE(221)
	return this->_currTileId;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileSpecial_obj,getCurrentTileId,return )

Void FlxTileSpecial_obj::addAnimation( Array< int > tiles,hx::Null< Float >  __o_frameRate,Dynamic framesData){
Float frameRate = __o_frameRate.Default(30);
	HX_STACK_PUSH("FlxTileSpecial::addAnimation","flixel/addons/tile/FlxTileSpecial.hx",212);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tiles,"tiles");
	HX_STACK_ARG(frameRate,"frameRate");
	HX_STACK_ARG(framesData,"framesData");
{
		HX_STACK_LINE(212)
		this->_animation = ::flixel::addons::tile::FlxTileAnimation_obj::__new(HX_CSTRING("tileAnim"),tiles,frameRate,true,framesData);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTileSpecial_obj,addAnimation,(void))

bool FlxTileSpecial_obj::hasAnimation( ){
	HX_STACK_PUSH("FlxTileSpecial::hasAnimation","flixel/addons/tile/FlxTileSpecial.hx",157);
	HX_STACK_THIS(this);
	HX_STACK_LINE(157)
	return (this->_animation != null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileSpecial_obj,hasAnimation,return )

bool FlxTileSpecial_obj::isFlipped( ){
	HX_STACK_PUSH("FlxTileSpecial::isFlipped","flixel/addons/tile/FlxTileSpecial.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_LINE(152)
	return (bool((bool(this->flipHorizontally) || bool(this->flipVertically))) || bool((this->rotate != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileSpecial_obj,isFlipped,return )

bool FlxTileSpecial_obj::isSpecial( ){
	HX_STACK_PUSH("FlxTileSpecial::isSpecial","flixel/addons/tile/FlxTileSpecial.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_LINE(147)
	return (bool((bool((bool(this->flipHorizontally) || bool(this->flipVertically))) || bool((this->rotate != (int)0)))) || bool((this->_animation != null())));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileSpecial_obj,isSpecial,return )

Void FlxTileSpecial_obj::update( ){
{
		HX_STACK_PUSH("FlxTileSpecial::update","flixel/addons/tile/FlxTileSpecial.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_LINE(110)
		this->super::update();
		HX_STACK_LINE(115)
		if (((bool((this->_animation != null())) && bool((this->_animation->delay > (int)0))))){
			HX_STACK_LINE(117)
			hx::AddEq(this->_frameTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(118)
			if (((this->_frameTimer > this->_animation->delay))){
				HX_STACK_LINE(119)
				this->_lastFrame = this->_currFrame;
			}
			HX_STACK_LINE(122)
			while(((this->_frameTimer > this->_animation->delay))){
				HX_STACK_LINE(124)
				this->_frameTimer = (this->_frameTimer - this->_animation->delay);
				HX_STACK_LINE(125)
				if (((this->_currFrame >= (this->_animation->frames->length - (int)1)))){
					HX_STACK_LINE(126)
					this->_currFrame = (int)0;
				}
				else{
					HX_STACK_LINE(130)
					(this->_currFrame)++;
				}
			}
			HX_STACK_LINE(134)
			this->_currTileId = this->_animation->frames->__get(this->_currFrame);
			HX_STACK_LINE(135)
			if (((this->_animation->framesData != null()))){
				HX_STACK_LINE(136)
				this->_currAnimParam = this->_animation->framesData->__GetItem(this->_currFrame);
			}
		}
	}
return null();
}


Void FlxTileSpecial_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTileSpecial::destroy","flixel/addons/tile/FlxTileSpecial.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_LINE(79)
		this->super::destroy();
		HX_STACK_LINE(99)
		if (((this->_animation != null()))){
			HX_STACK_LINE(100)
			this->_animation->destroy();
		}
		HX_STACK_LINE(103)
		this->_animation = null();
		HX_STACK_LINE(104)
		this->_currAnimParam = null();
		HX_STACK_LINE(105)
		this->_matrix = null();
	}
return null();
}



FlxTileSpecial_obj::FlxTileSpecial_obj()
{
}

void FlxTileSpecial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileSpecial);
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_MARK_MEMBER_NAME(_currAnimParam,"_currAnimParam");
	HX_MARK_MEMBER_NAME(_currTileId,"_currTileId");
	HX_MARK_MEMBER_NAME(_lastFrame,"_lastFrame");
	HX_MARK_MEMBER_NAME(_currFrame,"_currFrame");
	HX_MARK_MEMBER_NAME(_animation,"_animation");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_tmp_rot,"_tmp_rot");
	HX_MARK_MEMBER_NAME(_tmp_flipV,"_tmp_flipV");
	HX_MARK_MEMBER_NAME(_tmp_flipH,"_tmp_flipH");
	HX_MARK_MEMBER_NAME(rotate,"rotate");
	HX_MARK_MEMBER_NAME(flipVertically,"flipVertically");
	HX_MARK_MEMBER_NAME(flipHorizontally,"flipHorizontally");
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileSpecial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_VISIT_MEMBER_NAME(_currAnimParam,"_currAnimParam");
	HX_VISIT_MEMBER_NAME(_currTileId,"_currTileId");
	HX_VISIT_MEMBER_NAME(_lastFrame,"_lastFrame");
	HX_VISIT_MEMBER_NAME(_currFrame,"_currFrame");
	HX_VISIT_MEMBER_NAME(_animation,"_animation");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_tmp_rot,"_tmp_rot");
	HX_VISIT_MEMBER_NAME(_tmp_flipV,"_tmp_flipV");
	HX_VISIT_MEMBER_NAME(_tmp_flipH,"_tmp_flipH");
	HX_VISIT_MEMBER_NAME(rotate,"rotate");
	HX_VISIT_MEMBER_NAME(flipVertically,"flipVertically");
	HX_VISIT_MEMBER_NAME(flipHorizontally,"flipHorizontally");
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTileSpecial_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate; }
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tmp_rot") ) { return _tmp_rot; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return getMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"isFlipped") ) { return isFlipped_dyn(); }
		if (HX_FIELD_EQ(inName,"isSpecial") ) { return isSpecial_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastFrame") ) { return _lastFrame; }
		if (HX_FIELD_EQ(inName,"_currFrame") ) { return _currFrame; }
		if (HX_FIELD_EQ(inName,"_animation") ) { return _animation; }
		if (HX_FIELD_EQ(inName,"_tmp_flipV") ) { return _tmp_flipV; }
		if (HX_FIELD_EQ(inName,"_tmp_flipH") ) { return _tmp_flipH; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return _frameTimer; }
		if (HX_FIELD_EQ(inName,"_currTileId") ) { return _currTileId; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"hasAnimation") ) { return hasAnimation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currAnimParam") ) { return _currAnimParam; }
		if (HX_FIELD_EQ(inName,"flipVertically") ) { return flipVertically; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCurrentTileId") ) { return getCurrentTileId_dyn(); }
		if (HX_FIELD_EQ(inName,"flipHorizontally") ) { return flipHorizontally; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnimationTilesId") ) { return getAnimationTilesId_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTileSpecial_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tmp_rot") ) { _tmp_rot=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastFrame") ) { _lastFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currFrame") ) { _currFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animation") ) { _animation=inValue.Cast< ::flixel::addons::tile::FlxTileAnimation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tmp_flipV") ) { _tmp_flipV=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tmp_flipH") ) { _tmp_flipH=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currTileId") ) { _currTileId=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currAnimParam") ) { _currAnimParam=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipVertically") ) { flipVertically=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"flipHorizontally") ) { flipHorizontally=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileSpecial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_frameTimer"));
	outFields->push(HX_CSTRING("_currAnimParam"));
	outFields->push(HX_CSTRING("_currTileId"));
	outFields->push(HX_CSTRING("_lastFrame"));
	outFields->push(HX_CSTRING("_currFrame"));
	outFields->push(HX_CSTRING("_animation"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_tmp_rot"));
	outFields->push(HX_CSTRING("_tmp_flipV"));
	outFields->push(HX_CSTRING("_tmp_flipH"));
	outFields->push(HX_CSTRING("rotate"));
	outFields->push(HX_CSTRING("flipVertically"));
	outFields->push(HX_CSTRING("flipHorizontally"));
	outFields->push(HX_CSTRING("tileID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getMatrix"),
	HX_CSTRING("getAnimationTilesId"),
	HX_CSTRING("getCurrentTileId"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("hasAnimation"),
	HX_CSTRING("isFlipped"),
	HX_CSTRING("isSpecial"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_frameTimer"),
	HX_CSTRING("_currAnimParam"),
	HX_CSTRING("_currTileId"),
	HX_CSTRING("_lastFrame"),
	HX_CSTRING("_currFrame"),
	HX_CSTRING("_animation"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_tmp_rot"),
	HX_CSTRING("_tmp_flipV"),
	HX_CSTRING("_tmp_flipH"),
	HX_CSTRING("rotate"),
	HX_CSTRING("flipVertically"),
	HX_CSTRING("flipHorizontally"),
	HX_CSTRING("tileID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileSpecial_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileSpecial_obj::__mClass,"__mClass");
};

Class FlxTileSpecial_obj::__mClass;

void FlxTileSpecial_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.tile.FlxTileSpecial"), hx::TCanCast< FlxTileSpecial_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTileSpecial_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace tile
