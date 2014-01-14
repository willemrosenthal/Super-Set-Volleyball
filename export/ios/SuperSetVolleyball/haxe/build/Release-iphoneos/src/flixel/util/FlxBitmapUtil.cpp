#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapUtil
#include <flixel/util/FlxBitmapUtil.h>
#endif
namespace flixel{
namespace util{

Void FlxBitmapUtil_obj::__construct()
{
	return null();
}

FlxBitmapUtil_obj::~FlxBitmapUtil_obj() { }

Dynamic FlxBitmapUtil_obj::__CreateEmpty() { return  new FlxBitmapUtil_obj; }
hx::ObjectPtr< FlxBitmapUtil_obj > FlxBitmapUtil_obj::__new()
{  hx::ObjectPtr< FlxBitmapUtil_obj > result = new FlxBitmapUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxBitmapUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapUtil_obj > result = new FlxBitmapUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxBitmapUtil_obj::compare( ::flash::display::BitmapData Bitmap1,::flash::display::BitmapData Bitmap2){
	HX_STACK_PUSH("FlxBitmapUtil::compare","flixel/util/FlxBitmapUtil.hx",8);
	HX_STACK_ARG(Bitmap1,"Bitmap1");
	HX_STACK_ARG(Bitmap2,"Bitmap2");
	HX_STACK_LINE(12)
	if (((Bitmap1 == Bitmap2))){
		HX_STACK_LINE(13)
		return (int)0;
	}
	HX_STACK_LINE(16)
	if (((Bitmap1->get_width() != Bitmap2->get_width()))){
		HX_STACK_LINE(17)
		return (int)-3;
	}
	else{
		HX_STACK_LINE(20)
		if (((Bitmap1->get_height() != Bitmap2->get_height()))){
			HX_STACK_LINE(21)
			return (int)-4;
		}
		else{
			HX_STACK_LINE(26)
			int width = Bitmap1->get_width();		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(27)
			int height = Bitmap1->get_height();		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(28)
			::flash::display::BitmapData result = ::flash::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(29)
			bool identical = true;		HX_STACK_VAR(identical,"identical");
			HX_STACK_LINE(31)
			int pixel1;		HX_STACK_VAR(pixel1,"pixel1");
			int pixel2;		HX_STACK_VAR(pixel2,"pixel2");
			HX_STACK_LINE(32)
			int rgb1;		HX_STACK_VAR(rgb1,"rgb1");
			int rgb2;		HX_STACK_VAR(rgb2,"rgb2");
			HX_STACK_LINE(33)
			int r1;		HX_STACK_VAR(r1,"r1");
			int g1;		HX_STACK_VAR(g1,"g1");
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(34)
			int r2;		HX_STACK_VAR(r2,"r2");
			int g2;		HX_STACK_VAR(g2,"g2");
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(35)
			int alpha1;		HX_STACK_VAR(alpha1,"alpha1");
			int alpha2;		HX_STACK_VAR(alpha2,"alpha2");
			HX_STACK_LINE(36)
			int resultAlpha;		HX_STACK_VAR(resultAlpha,"resultAlpha");
			int resultColor;		HX_STACK_VAR(resultColor,"resultColor");
			HX_STACK_LINE(37)
			int resultR;		HX_STACK_VAR(resultR,"resultR");
			int resultG;		HX_STACK_VAR(resultG,"resultG");
			int resultB;		HX_STACK_VAR(resultB,"resultB");
			HX_STACK_LINE(38)
			int diffR;		HX_STACK_VAR(diffR,"diffR");
			int diffG;		HX_STACK_VAR(diffG,"diffG");
			int diffB;		HX_STACK_VAR(diffB,"diffB");
			int diffA;		HX_STACK_VAR(diffA,"diffA");
			HX_STACK_LINE(39)
			bool checkAlpha = true;		HX_STACK_VAR(checkAlpha,"checkAlpha");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(41)
				while(((_g < width))){
					HX_STACK_LINE(41)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(43)
					{
						HX_STACK_LINE(43)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(43)
						while(((_g1 < height))){
							HX_STACK_LINE(43)
							int j = (_g1)++;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(45)
							pixel1 = Bitmap1->getPixel32(i,j);
							HX_STACK_LINE(46)
							pixel2 = Bitmap2->getPixel32(i,j);
							HX_STACK_LINE(48)
							if (((pixel1 != pixel2))){
								HX_STACK_LINE(50)
								identical = false;
								HX_STACK_LINE(51)
								checkAlpha = true;
								HX_STACK_LINE(53)
								rgb1 = (int(pixel1) & int((int)16777215));
								HX_STACK_LINE(54)
								rgb2 = (int(pixel2) & int((int)16777215));
								HX_STACK_LINE(56)
								if (((rgb1 != rgb2))){
									HX_STACK_LINE(58)
									r1 = (int((int(pixel1) >> int((int)16))) & int((int)255));
									HX_STACK_LINE(59)
									g1 = (int((int(pixel1) >> int((int)8))) & int((int)255));
									HX_STACK_LINE(60)
									b1 = (int(pixel1) & int((int)255));
									HX_STACK_LINE(62)
									r2 = (int((int(pixel2) >> int((int)16))) & int((int)255));
									HX_STACK_LINE(63)
									g2 = (int((int(pixel2) >> int((int)8))) & int((int)255));
									HX_STACK_LINE(64)
									b2 = (int(pixel2) & int((int)255));
									HX_STACK_LINE(66)
									diffR = (r1 - r2);
									HX_STACK_LINE(67)
									diffG = (g1 - g2);
									HX_STACK_LINE(68)
									diffB = (b1 - b2);
									HX_STACK_LINE(70)
									resultR = (  (((diffR >= (int)0))) ? int(diffR) : int(((int)256 + diffR)) );
									HX_STACK_LINE(71)
									resultG = (  (((diffG >= (int)0))) ? int(diffG) : int(((int)256 + diffG)) );
									HX_STACK_LINE(72)
									resultB = (  (((diffB >= (int)0))) ? int(diffB) : int(((int)256 + diffB)) );
									HX_STACK_LINE(74)
									resultColor = (int((int((int((int)-16777216) | int((int(resultR) << int((int)16))))) | int((int(resultG) << int((int)8))))) | int(resultB));
									HX_STACK_LINE(75)
									result->setPixel32(i,j,resultColor);
									HX_STACK_LINE(77)
									checkAlpha = false;
								}
								HX_STACK_LINE(80)
								if ((checkAlpha)){
									HX_STACK_LINE(82)
									alpha1 = (int((int(pixel1) >> int((int)24))) & int((int)255));
									HX_STACK_LINE(83)
									alpha2 = (int((int(pixel2) >> int((int)24))) & int((int)255));
									HX_STACK_LINE(84)
									diffA = (alpha1 - alpha2);
									HX_STACK_LINE(85)
									resultAlpha = (  (((diffA >= (int)0))) ? int(diffA) : int(((int)256 + diffA)) );
									HX_STACK_LINE(86)
									resultColor = (int((int((int(resultAlpha) | int((int)16711680))) | int((int)65280))) | int((int)255));
									HX_STACK_LINE(88)
									if (((alpha1 != alpha2))){
										HX_STACK_LINE(89)
										result->setPixel32(i,j,resultColor);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(97)
			if ((!(identical))){
				HX_STACK_LINE(98)
				return result;
			}
		}
	}
	HX_STACK_LINE(103)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapUtil_obj,compare,return )


FlxBitmapUtil_obj::FlxBitmapUtil_obj()
{
}

void FlxBitmapUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBitmapUtil);
	HX_MARK_END_CLASS();
}

void FlxBitmapUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxBitmapUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBitmapUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBitmapUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("compare"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapUtil_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapUtil_obj::__mClass,"__mClass");
};

Class FlxBitmapUtil_obj::__mClass;

void FlxBitmapUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxBitmapUtil"), hx::TCanCast< FlxBitmapUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxBitmapUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
