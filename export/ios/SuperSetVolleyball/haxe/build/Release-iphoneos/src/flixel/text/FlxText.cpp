#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
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
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
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
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace text{

Void FlxText_obj::__construct(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_PUSH("FlxText::new","flixel/text/FlxText.hx",22);
int size = __o_size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(715)
	this->_heightInc = (int)0;
	HX_STACK_LINE(714)
	this->_widthInc = (int)0;
	HX_STACK_LINE(122)
	this->_regen = true;
	HX_STACK_LINE(84)
	this->borderQuality = (int)1;
	HX_STACK_LINE(77)
	this->borderSize = (int)1;
	HX_STACK_LINE(72)
	this->borderColor = (int)0;
	HX_STACK_LINE(67)
	this->borderStyle = (int)0;
	HX_STACK_LINE(134)
	super::__construct(X,Y,null());
	HX_STACK_LINE(136)
	this->_filters = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(138)
	::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(139)
	this->makeGraphic(Width,(int)1,(int)0,false,key);
	HX_STACK_LINE(141)
	if (((Text == null()))){
		HX_STACK_LINE(142)
		Text = HX_CSTRING("");
	}
	HX_STACK_LINE(146)
	this->_textField = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(147)
	this->_textField->set_width(Width);
	HX_STACK_LINE(148)
	this->_textField->set_selectable(false);
	HX_STACK_LINE(149)
	this->_textField->set_multiline(true);
	HX_STACK_LINE(150)
	this->_textField->set_wordWrap(true);
	HX_STACK_LINE(151)
	this->_format = ::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEFAULT,size,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(152)
	this->_formatAdjusted = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(153)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(154)
	this->_textField->set_text(Text);
	HX_STACK_LINE(155)
	this->_textField->set_embedFonts(EmbeddedFont);
	HX_STACK_LINE(161)
	this->_textField->set_height((  (((Text.length <= (int)0))) ? Float((int)1) : Float((int)10) ));
	HX_STACK_LINE(163)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(164)
	this->set_moves(false);
	HX_STACK_LINE(169)
	if (((Text != HX_CSTRING("")))){
		HX_STACK_LINE(170)
		this->calcFrame(true);
	}
}
;
	return null();
}

FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(X,Y,Width,Text,__o_size,__o_EmbeddedFont);
	return result;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxText_obj::clearFilters( ){
{
		HX_STACK_PUSH("FlxText::clearFilters","flixel/text/FlxText.hx",738);
		HX_STACK_THIS(this);
		HX_STACK_LINE(739)
		if (((this->_filters->length > (int)0))){
			HX_STACK_LINE(740)
			this->dirty = true;
		}
		HX_STACK_LINE(743)
		this->_filters = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFilters,(void))

Void FlxText_obj::removeFilter( ::flash::filters::BitmapFilter filter){
{
		HX_STACK_PUSH("FlxText::removeFilter","flixel/text/FlxText.hx",729);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(730)
		bool removed = this->_filters->remove(filter);		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(731)
		if ((removed)){
			HX_STACK_LINE(732)
			this->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,removeFilter,(void))

Void FlxText_obj::addFilter( ::flash::filters::BitmapFilter filter,hx::Null< int >  __o_widthInc,hx::Null< int >  __o_heightInc){
int widthInc = __o_widthInc.Default(0);
int heightInc = __o_heightInc.Default(0);
	HX_STACK_PUSH("FlxText::addFilter","flixel/text/FlxText.hx",718);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(widthInc,"widthInc");
	HX_STACK_ARG(heightInc,"heightInc");
{
		HX_STACK_LINE(719)
		if (((bool((this->_widthInc != widthInc)) || bool((this->_heightInc != heightInc))))){
			HX_STACK_LINE(720)
			this->_regen = true;
		}
		HX_STACK_LINE(724)
		this->_filters->push(filter);
		HX_STACK_LINE(725)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFilter,(void))

Void FlxText_obj::updateFormat( ::flash::text::TextFormat Format){
{
		HX_STACK_PUSH("FlxText::updateFormat","flixel/text/FlxText.hx",704);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Format,"Format");
		HX_STACK_LINE(704)
		this->_textField->setTextFormat(Format,(int)0,this->_textField->get_text().length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,updateFormat,(void))

Void FlxText_obj::draw( ){
{
		HX_STACK_PUSH("FlxText::draw","flixel/text/FlxText.hx",692);
		HX_STACK_THIS(this);
		HX_STACK_LINE(695)
		if (((bool(this->_regen) || bool(this->dirty)))){
			HX_STACK_LINE(695)
			this->calcFrame(true);
		}
		HX_STACK_LINE(700)
		this->super::draw();
	}
return null();
}


Void FlxText_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxText::updateFrameData","flixel/text/FlxText.hx",682);
		HX_STACK_THIS(this);
		HX_STACK_LINE(682)
		if (((this->cachedGraphics != null()))){
			HX_STACK_LINE(685)
			this->framesData = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,null());
			HX_STACK_LINE(686)
			this->set_frame(this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
			HX_STACK_LINE(687)
			this->frames = (int)1;
		}
	}
return null();
}


::String FlxText_obj::convertTextAlignmentFromString( ::String StrAlign){
	HX_STACK_PUSH("FlxText::convertTextAlignmentFromString","flixel/text/FlxText.hx",676);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StrAlign,"StrAlign");
	HX_STACK_LINE(676)
	return StrAlign;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

::flash::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_PUSH("FlxText::dtfCopy","flixel/text/FlxText.hx",645);
	HX_STACK_THIS(this);
	HX_STACK_LINE(646)
	::flash::text::TextFormat defaultTextFormat = this->_textField->get_defaultTextFormat();		HX_STACK_VAR(defaultTextFormat,"defaultTextFormat");
	HX_STACK_LINE(648)
	return ::flash::text::TextFormat_obj::__new(defaultTextFormat->font,defaultTextFormat->size,defaultTextFormat->color,defaultTextFormat->bold,defaultTextFormat->italic,defaultTextFormat->underline,defaultTextFormat->url,defaultTextFormat->target,defaultTextFormat->align,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

Void FlxText_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxText::calcFrame","flixel/text/FlxText.hx",484);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(486)
		if ((AreYouSure)){
			HX_STACK_LINE(489)
			if (((this->_filters != null()))){
				HX_STACK_LINE(490)
				this->_textField->set_filters(this->_filters);
			}
			HX_STACK_LINE(494)
			this->regenGraphics();
			HX_STACK_LINE(496)
			if (((bool((bool((this->_textField != null())) && bool((this->_textField->get_text() != null())))) && bool((this->_textField->get_text().length > (int)0))))){
				HX_STACK_LINE(499)
				this->_formatAdjusted->font = this->_format->font;
				HX_STACK_LINE(500)
				this->_formatAdjusted->size = this->_format->size;
				HX_STACK_LINE(501)
				this->_formatAdjusted->color = this->_format->color;
				HX_STACK_LINE(502)
				this->_formatAdjusted->align = this->_format->align;
				HX_STACK_LINE(503)
				this->_matrix->identity();
				HX_STACK_LINE(505)
				this->_matrix->translate(::Std_obj::_int((0.5 * this->_widthInc)),::Std_obj::_int((0.5 * this->_heightInc)));
				HX_STACK_LINE(511)
				if (((bool((this->_format->align == ::flash::text::TextFormatAlign_obj::CENTER)) && bool((this->_textField->get_numLines() == (int)1))))){
					HX_STACK_LINE(514)
					this->_formatAdjusted->align = ::flash::text::TextFormatAlign_obj::LEFT;
					HX_STACK_LINE(515)
					this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
					HX_STACK_LINE(520)
					this->_matrix->translate(::Math_obj::floor((Float(((this->get_width() - this->_textField->get_textWidth()))) / Float((int)2))),(int)0);
				}
				HX_STACK_LINE(524)
				if (((this->borderStyle != (int)0))){
					HX_STACK_LINE(526)
					int iterations = ::Std_obj::_int((this->borderSize * this->borderQuality));		HX_STACK_VAR(iterations,"iterations");
					HX_STACK_LINE(527)
					if (((iterations <= (int)0))){
						HX_STACK_LINE(528)
						iterations = (int)1;
					}
					HX_STACK_LINE(531)
					Float delta = (Float(this->borderSize) / Float(iterations));		HX_STACK_VAR(delta,"delta");
					HX_STACK_LINE(533)
					if (((this->borderStyle == (int)1))){
						HX_STACK_LINE(537)
						this->_formatAdjusted->color = this->borderColor;
						HX_STACK_LINE(538)
						this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
						HX_STACK_LINE(540)
						{
							HX_STACK_LINE(540)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(540)
							while(((_g < iterations))){
								HX_STACK_LINE(540)
								int iter = (_g)++;		HX_STACK_VAR(iter,"iter");
								HX_STACK_LINE(542)
								this->_matrix->translate(delta,delta);
								HX_STACK_LINE(543)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
							}
						}
						HX_STACK_LINE(546)
						this->_matrix->translate(-(this->borderSize),-(this->borderSize));
						HX_STACK_LINE(547)
						this->_formatAdjusted->color = this->_format->color;
						HX_STACK_LINE(548)
						this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
					}
					else{
						HX_STACK_LINE(550)
						if (((this->borderStyle == (int)2))){
							HX_STACK_LINE(554)
							this->_formatAdjusted->color = this->borderColor;
							HX_STACK_LINE(555)
							this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
							HX_STACK_LINE(557)
							Float itd = delta;		HX_STACK_VAR(itd,"itd");
							HX_STACK_LINE(558)
							{
								HX_STACK_LINE(558)
								int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
								int _g = (iterations + (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(558)
								while(((_g1 < _g))){
									HX_STACK_LINE(558)
									int iter = (_g1)++;		HX_STACK_VAR(iter,"iter");
									HX_STACK_LINE(560)
									this->_matrix->translate(-(itd),-(itd));
									HX_STACK_LINE(561)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(562)
									this->_matrix->translate(itd,(int)0);
									HX_STACK_LINE(563)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(564)
									this->_matrix->translate(itd,(int)0);
									HX_STACK_LINE(565)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(566)
									this->_matrix->translate((int)0,itd);
									HX_STACK_LINE(567)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(568)
									this->_matrix->translate((int)0,itd);
									HX_STACK_LINE(569)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(570)
									this->_matrix->translate(-(itd),(int)0);
									HX_STACK_LINE(571)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(572)
									this->_matrix->translate(-(itd),(int)0);
									HX_STACK_LINE(573)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(574)
									this->_matrix->translate((int)0,-(itd));
									HX_STACK_LINE(575)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
									HX_STACK_LINE(576)
									this->_matrix->translate(itd,(int)0);
									HX_STACK_LINE(577)
									hx::AddEq(itd,delta);
								}
							}
							HX_STACK_LINE(580)
							this->_formatAdjusted->color = this->_format->color;
							HX_STACK_LINE(581)
							this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
						}
						else{
							HX_STACK_LINE(583)
							if (((this->borderStyle == (int)3))){
								HX_STACK_LINE(588)
								this->_formatAdjusted->color = this->borderColor;
								HX_STACK_LINE(589)
								this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
								HX_STACK_LINE(591)
								Float itd = delta;		HX_STACK_VAR(itd,"itd");
								HX_STACK_LINE(592)
								{
									HX_STACK_LINE(592)
									int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
									int _g = (iterations + (int)1);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(592)
									while(((_g1 < _g))){
										HX_STACK_LINE(592)
										int iter = (_g1)++;		HX_STACK_VAR(iter,"iter");
										HX_STACK_LINE(594)
										this->_matrix->translate(-(itd),-(itd));
										HX_STACK_LINE(595)
										this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
										HX_STACK_LINE(596)
										this->_matrix->translate((itd * (int)2),(int)0);
										HX_STACK_LINE(597)
										this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
										HX_STACK_LINE(598)
										this->_matrix->translate((int)0,(itd * (int)2));
										HX_STACK_LINE(599)
										this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
										HX_STACK_LINE(600)
										this->_matrix->translate((-(itd) * (int)2),(int)0);
										HX_STACK_LINE(601)
										this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
										HX_STACK_LINE(602)
										this->_matrix->translate(itd,-(itd));
										HX_STACK_LINE(603)
										hx::AddEq(itd,delta);
									}
								}
								HX_STACK_LINE(606)
								this->_formatAdjusted->color = this->_format->color;
								HX_STACK_LINE(607)
								this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
							}
						}
					}
				}
				HX_STACK_LINE(612)
				this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
				HX_STACK_LINE(613)
				this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
			}
			HX_STACK_LINE(617)
			if (((bool((bool((this->framePixels == null())) || bool((this->framePixels->get_width() != this->cachedGraphics->bitmap->get_width())))) || bool((this->framePixels->get_height() != this->cachedGraphics->bitmap->get_height()))))){
				HX_STACK_LINE(619)
				if (((this->framePixels != null()))){
					HX_STACK_LINE(620)
					this->framePixels->dispose();
				}
				HX_STACK_LINE(622)
				this->framePixels = ::flash::display::BitmapData_obj::__new(this->cachedGraphics->bitmap->get_width(),this->cachedGraphics->bitmap->get_height(),true,(int)0,null());
			}
			HX_STACK_LINE(625)
			this->framePixels->copyPixels(this->cachedGraphics->bitmap,this->_flashRect,this->_flashPointZero,null(),null(),null());
			HX_STACK_LINE(627)
			if ((this->useColorTransform)){
				HX_STACK_LINE(628)
				this->framePixels->colorTransform(this->_flashRect,this->_colorTransform);
			}
			HX_STACK_LINE(632)
			this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
		}
		HX_STACK_LINE(636)
		this->dirty = false;
	}
return null();
}


Void FlxText_obj::regenGraphics( ){
{
		HX_STACK_PUSH("FlxText::regenGraphics","flixel/text/FlxText.hx",450);
		HX_STACK_THIS(this);
		HX_STACK_LINE(450)
		if ((this->_regen)){
			HX_STACK_LINE(454)
			this->set_height(this->_textField->get_textHeight());
			HX_STACK_LINE(456)
			{
				HX_STACK_LINE(456)
				::flixel::text::FlxText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(456)
				_g->set_height((_g->get_height() + (int)4));
			}
			HX_STACK_LINE(457)
			::String key = this->cachedGraphics->key;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(458)
			::flixel::FlxG_obj::bitmap->remove(key);
			HX_STACK_LINE(460)
			this->makeGraphic(::Std_obj::_int((this->get_width() + this->_widthInc)),::Std_obj::_int((this->get_height() + this->_heightInc)),(int)0,false,key);
			HX_STACK_LINE(461)
			this->frameHeight = ::Std_obj::_int(this->get_height());
			HX_STACK_LINE(462)
			this->_textField->set_height((this->get_height() * 1.2));
			HX_STACK_LINE(463)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(464)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(465)
			this->_flashRect->width = (this->get_width() + this->_widthInc);
			HX_STACK_LINE(466)
			this->_flashRect->height = (this->get_height() + this->_heightInc);
			HX_STACK_LINE(467)
			this->_regen = false;
		}
		else{
			HX_STACK_LINE(471)
			this->cachedGraphics->bitmap->fillRect(this->_flashRect,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphics,(void))

Float FlxText_obj::set_borderQuality( Float Value){
	HX_STACK_PUSH("FlxText::set_borderQuality","flixel/text/FlxText.hx",434);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(435)
	if (((Value < (int)0))){
		HX_STACK_LINE(436)
		Value = (int)0;
	}
	else{
		HX_STACK_LINE(437)
		if (((Value > (int)1))){
			HX_STACK_LINE(438)
			Value = (int)1;
		}
	}
	HX_STACK_LINE(440)
	if (((bool((Value != this->borderQuality)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(441)
		this->dirty = true;
	}
	HX_STACK_LINE(444)
	this->borderQuality = Value;
	HX_STACK_LINE(446)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

Float FlxText_obj::set_borderSize( Float Value){
	HX_STACK_PUSH("FlxText::set_borderSize","flixel/text/FlxText.hx",422);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(423)
	if (((bool((Value != this->borderSize)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(425)
		this->_regen = true;
		HX_STACK_LINE(426)
		this->dirty = true;
	}
	HX_STACK_LINE(428)
	this->borderSize = Value;
	HX_STACK_LINE(430)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

int FlxText_obj::set_borderColor( int Color){
	HX_STACK_PUSH("FlxText::set_borderColor","flixel/text/FlxText.hx",409);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(410)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(412)
	if (((bool((this->borderColor != Color)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(413)
		this->dirty = true;
	}
	HX_STACK_LINE(416)
	this->borderColor = Color;
	HX_STACK_LINE(418)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

int FlxText_obj::set_borderStyle( int style){
	HX_STACK_PUSH("FlxText::set_borderStyle","flixel/text/FlxText.hx",398);
	HX_STACK_THIS(this);
	HX_STACK_ARG(style,"style");
	HX_STACK_LINE(399)
	if (((style != this->borderStyle))){
		HX_STACK_LINE(401)
		this->borderStyle = style;
		HX_STACK_LINE(402)
		this->dirty = true;
	}
	HX_STACK_LINE(405)
	return this->borderStyle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

Void FlxText_obj::setBorderStyle( int Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_PUSH("FlxText::setBorderStyle","flixel/text/FlxText.hx",390);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Quality,"Quality");
{
		HX_STACK_LINE(391)
		this->set_borderStyle(Style);
		HX_STACK_LINE(392)
		this->set_borderColor(Color);
		HX_STACK_LINE(393)
		this->set_borderSize(Size);
		HX_STACK_LINE(394)
		this->set_borderQuality(Quality);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,(void))

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_PUSH("FlxText::set_alignment","flixel/text/FlxText.hx",371);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_LINE(372)
	this->_format->align = this->convertTextAlignmentFromString(Alignment);
	HX_STACK_LINE(373)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(374)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(375)
	this->dirty = true;
	HX_STACK_LINE(376)
	this->_regen = true;
	HX_STACK_LINE(378)
	return Alignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_PUSH("FlxText::get_alignment","flixel/text/FlxText.hx",366);
	HX_STACK_THIS(this);
	HX_STACK_LINE(366)
	return hx::TCast< String >::cast(this->_format->align);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

bool FlxText_obj::set_wordWrap( bool value){
	HX_STACK_PUSH("FlxText::set_wordWrap","flixel/text/FlxText.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(356)
	if (((this->_textField->get_wordWrap() != value))){
		HX_STACK_LINE(358)
		this->_textField->set_wordWrap(value);
		HX_STACK_LINE(359)
		this->_textField->set_multiline(value);
		HX_STACK_LINE(360)
		this->_regen = true;
	}
	HX_STACK_LINE(362)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

bool FlxText_obj::get_wordWrap( ){
	HX_STACK_PUSH("FlxText::get_wordWrap","flixel/text/FlxText.hx",350);
	HX_STACK_THIS(this);
	HX_STACK_LINE(350)
	return this->_textField->get_wordWrap();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_bold( bool value){
	HX_STACK_PUSH("FlxText::set_bold","flixel/text/FlxText.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(338)
	if (((this->_format->bold != value))){
		HX_STACK_LINE(340)
		this->_format->bold = value;
		HX_STACK_LINE(341)
		this->_textField->set_defaultTextFormat(this->_format);
		HX_STACK_LINE(342)
		this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(343)
		this->_regen = true;
	}
	HX_STACK_LINE(346)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_bold( ){
	HX_STACK_PUSH("FlxText::get_bold","flixel/text/FlxText.hx",332);
	HX_STACK_THIS(this);
	HX_STACK_LINE(332)
	return this->_format->bold;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

::String FlxText_obj::set_systemFont( ::String Font){
	HX_STACK_PUSH("FlxText::set_systemFont","flixel/text/FlxText.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_LINE(323)
	this->_textField->set_embedFonts(false);
	HX_STACK_LINE(324)
	this->_format->font = Font;
	HX_STACK_LINE(325)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(326)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(327)
	this->_regen = true;
	HX_STACK_LINE(328)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

::String FlxText_obj::get_systemFont( ){
	HX_STACK_PUSH("FlxText::get_systemFont","flixel/text/FlxText.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_LINE(317)
	return this->_format->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

bool FlxText_obj::get_embedded( ){
	HX_STACK_PUSH("FlxText::get_embedded","flixel/text/FlxText.hx",312);
	HX_STACK_THIS(this);
	HX_STACK_LINE(312)
	return this->_textField->set_embedFonts(true);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_PUSH("FlxText::set_font","flixel/text/FlxText.hx",302);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_LINE(303)
	this->_textField->set_embedFonts(true);
	HX_STACK_LINE(304)
	this->_format->font = ::openfl::Assets_obj::getFont(Font,null())->fontName;
	HX_STACK_LINE(305)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(306)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(307)
	this->_regen = true;
	HX_STACK_LINE(308)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

::String FlxText_obj::get_font( ){
	HX_STACK_PUSH("FlxText::get_font","flixel/text/FlxText.hx",297);
	HX_STACK_THIS(this);
	HX_STACK_LINE(297)
	return this->_format->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_PUSH("FlxText::set_color","flixel/text/FlxText.hx",286);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(287)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(288)
	this->_format->color = Color;
	HX_STACK_LINE(289)
	this->color = Color;
	HX_STACK_LINE(290)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(291)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(292)
	this->dirty = true;
	HX_STACK_LINE(293)
	return Color;
}


Float FlxText_obj::set_size( Float Size){
	HX_STACK_PUSH("FlxText::set_size","flixel/text/FlxText.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(274)
	this->_format->size = Size;
	HX_STACK_LINE(275)
	this->_textField->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(276)
	this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(277)
	this->_regen = true;
	HX_STACK_LINE(279)
	return Size;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

Float FlxText_obj::get_size( ){
	HX_STACK_PUSH("FlxText::get_size","flixel/text/FlxText.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_LINE(268)
	return this->_format->size;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_PUSH("FlxText::set_text","flixel/text/FlxText.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Text,"Text");
	HX_STACK_LINE(256)
	::String ot = this->_textField->get_text();		HX_STACK_VAR(ot,"ot");
	HX_STACK_LINE(257)
	this->_textField->set_text(Text);
	HX_STACK_LINE(259)
	if (((this->_textField->get_text() != ot))){
		HX_STACK_LINE(260)
		this->_regen = true;
	}
	HX_STACK_LINE(264)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

::String FlxText_obj::get_text( ){
	HX_STACK_PUSH("FlxText::get_text","flixel/text/FlxText.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_LINE(250)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_text,return )

Float FlxText_obj::set_width( Float Width){
	HX_STACK_PUSH("FlxText::set_width","flixel/text/FlxText.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_LINE(236)
	if (((Width != this->get_width()))){
		HX_STACK_LINE(238)
		Float newWidth = this->super::set_width(Width);		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(239)
		if (((this->_textField != null()))){
			HX_STACK_LINE(240)
			this->_textField->set_width(newWidth);
		}
		HX_STACK_LINE(243)
		this->_regen = true;
	}
	HX_STACK_LINE(246)
	return Width;
}


::flixel::text::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,hx::Null< int >  __o_BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(16777215);
int BorderStyle = __o_BorderStyle.Default(0);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_PUSH("FlxText::setFormat","flixel/text/FlxText.hx",202);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_ARG(BorderStyle,"BorderStyle");
	HX_STACK_ARG(BorderColor,"BorderColor");
	HX_STACK_ARG(Embedded,"Embedded");
{
		HX_STACK_LINE(203)
		if ((Embedded)){
			HX_STACK_LINE(204)
			if (((Font == null()))){
				HX_STACK_LINE(206)
				this->_format->font = ::flixel::system::FlxAssets_obj::FONT_DEFAULT;
			}
			else{
				HX_STACK_LINE(210)
				this->_format->font = ::openfl::Assets_obj::getFont(Font,null())->fontName;
			}
		}
		else{
			HX_STACK_LINE(214)
			if (((Font != null()))){
				HX_STACK_LINE(215)
				this->_format->font = Font;
			}
		}
		HX_STACK_LINE(219)
		this->_textField->set_embedFonts(Embedded);
		HX_STACK_LINE(221)
		this->_format->size = Size;
		HX_STACK_LINE(222)
		hx::AndEq(Color,(int)16777215);
		HX_STACK_LINE(223)
		this->_format->color = Color;
		HX_STACK_LINE(224)
		this->_format->align = this->convertTextAlignmentFromString(Alignment);
		HX_STACK_LINE(225)
		this->_textField->set_defaultTextFormat(this->_format);
		HX_STACK_LINE(226)
		this->_textField->setTextFormat(this->_format,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(227)
		this->set_borderStyle(BorderStyle);
		HX_STACK_LINE(228)
		this->set_borderColor(BorderColor);
		HX_STACK_LINE(229)
		this->_regen = true;
		HX_STACK_LINE(231)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

Void FlxText_obj::destroy( ){
{
		HX_STACK_PUSH("FlxText::destroy","flixel/text/FlxText.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_LINE(181)
		this->_textField = null();
		HX_STACK_LINE(182)
		this->_format = null();
		HX_STACK_LINE(183)
		this->_formatAdjusted = null();
		HX_STACK_LINE(184)
		this->_filters = null();
		HX_STACK_LINE(186)
		this->super::destroy();
	}
return null();
}



FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(_heightInc,"_heightInc");
	HX_MARK_MEMBER_NAME(_widthInc,"_widthInc");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_textField,"_textField");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(embedded,"embedded");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_heightInc,"_heightInc");
	HX_VISIT_MEMBER_NAME(_widthInc,"_widthInc");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_textField,"_textField");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(embedded,"embedded");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"bold") ) { return get_bold(); }
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { return _regen; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return set_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return get_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"embedded") ) { return inCallProp ? get_embedded() : embedded; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"_widthInc") ) { return _widthInc; }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return get_alignment(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_heightInc") ) { return _heightInc; }
		if (HX_FIELD_EQ(inName,"_textField") ) { return _textField; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"systemFont") ) { return get_systemFont(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearFilters") ) { return clearFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFilter") ) { return removeFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFormat") ) { return updateFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return get_embedded_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"regenGraphics") ) { return regenGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return set_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return get_systemFont_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return set_bold(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"embedded") ) { embedded=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_widthInc") ) { _widthInc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alignment") ) { return set_alignment(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_heightInc") ) { _heightInc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textField") ) { _textField=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"systemFont") ) { return set_systemFont(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp) return set_borderStyle(inValue);borderStyle=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_heightInc"));
	outFields->push(HX_CSTRING("_widthInc"));
	outFields->push(HX_CSTRING("_filters"));
	outFields->push(HX_CSTRING("_regen"));
	outFields->push(HX_CSTRING("_formatAdjusted"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_textField"));
	outFields->push(HX_CSTRING("borderQuality"));
	outFields->push(HX_CSTRING("borderSize"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("borderStyle"));
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("bold"));
	outFields->push(HX_CSTRING("systemFont"));
	outFields->push(HX_CSTRING("embedded"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clearFilters"),
	HX_CSTRING("removeFilter"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("_heightInc"),
	HX_CSTRING("_widthInc"),
	HX_CSTRING("_filters"),
	HX_CSTRING("updateFormat"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("convertTextAlignmentFromString"),
	HX_CSTRING("dtfCopy"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("regenGraphics"),
	HX_CSTRING("set_borderQuality"),
	HX_CSTRING("set_borderSize"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("set_borderStyle"),
	HX_CSTRING("setBorderStyle"),
	HX_CSTRING("set_alignment"),
	HX_CSTRING("get_alignment"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_bold"),
	HX_CSTRING("get_bold"),
	HX_CSTRING("set_systemFont"),
	HX_CSTRING("get_systemFont"),
	HX_CSTRING("get_embedded"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_size"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_width"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_regen"),
	HX_CSTRING("_formatAdjusted"),
	HX_CSTRING("_format"),
	HX_CSTRING("_textField"),
	HX_CSTRING("borderQuality"),
	HX_CSTRING("borderSize"),
	HX_CSTRING("borderColor"),
	HX_CSTRING("borderStyle"),
	HX_CSTRING("embedded"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

Class FlxText_obj::__mClass;

void FlxText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxText"), hx::TCanCast< FlxText_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxText_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
