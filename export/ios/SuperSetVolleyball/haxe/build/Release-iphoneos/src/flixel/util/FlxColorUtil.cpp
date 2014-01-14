#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorUtil
#include <flixel/util/FlxColorUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxColorUtil_obj::__construct()
{
	return null();
}

FlxColorUtil_obj::~FlxColorUtil_obj() { }

Dynamic FlxColorUtil_obj::__CreateEmpty() { return  new FlxColorUtil_obj; }
hx::ObjectPtr< FlxColorUtil_obj > FlxColorUtil_obj::__new()
{  hx::ObjectPtr< FlxColorUtil_obj > result = new FlxColorUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxColorUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColorUtil_obj > result = new FlxColorUtil_obj();
	result->__construct();
	return result;}

int FlxColorUtil_obj::makeFromRGBA( int Red,int Green,int Blue,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_PUSH("FlxColorUtil::makeFromRGBA","flixel/util/FlxColorUtil.hx",18);
	HX_STACK_ARG(Red,"Red");
	HX_STACK_ARG(Green,"Green");
	HX_STACK_ARG(Blue,"Blue");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(18)
		return (int((int((int((int(((int(::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(((int(Red) & int((int)255)))) << int((int)16))))) | int((int(((int(Green) & int((int)255)))) << int((int)8))))) | int((int(Blue) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,makeFromRGBA,return )

int FlxColorUtil_obj::makeFromHSBA( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_PUSH("FlxColorUtil::makeFromHSBA","flixel/util/FlxColorUtil.hx",32);
	HX_STACK_ARG(Hue,"Hue");
	HX_STACK_ARG(Saturation,"Saturation");
	HX_STACK_ARG(Brightness,"Brightness");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(33)
		Float red;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(34)
		Float green;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(35)
		Float blue;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(37)
		if (((Saturation == 0.0))){
			HX_STACK_LINE(39)
			red = Brightness;
			HX_STACK_LINE(40)
			green = Brightness;
			HX_STACK_LINE(41)
			blue = Brightness;
		}
		else{
			HX_STACK_LINE(45)
			if (((Hue == (int)360))){
				HX_STACK_LINE(46)
				Hue = (int)0;
			}
			HX_STACK_LINE(50)
			int slice = ::Std_obj::_int((Float(Hue) / Float((int)60)));		HX_STACK_VAR(slice,"slice");
			HX_STACK_LINE(51)
			Float hf = ((Float(Hue) / Float((int)60)) - slice);		HX_STACK_VAR(hf,"hf");
			HX_STACK_LINE(52)
			Float aa = (Brightness * (((int)1 - Saturation)));		HX_STACK_VAR(aa,"aa");
			HX_STACK_LINE(53)
			Float bb = (Brightness * (((int)1 - (Saturation * hf))));		HX_STACK_VAR(bb,"bb");
			HX_STACK_LINE(54)
			Float cc = (Brightness * (((int)1 - (Saturation * ((1.0 - hf))))));		HX_STACK_VAR(cc,"cc");
			HX_STACK_LINE(56)
			switch( (int)(slice)){
				case (int)0: {
					HX_STACK_LINE(59)
					red = Brightness;
					HX_STACK_LINE(60)
					green = cc;
					HX_STACK_LINE(61)
					blue = aa;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(63)
					red = bb;
					HX_STACK_LINE(64)
					green = Brightness;
					HX_STACK_LINE(65)
					blue = aa;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(67)
					red = aa;
					HX_STACK_LINE(68)
					green = Brightness;
					HX_STACK_LINE(69)
					blue = cc;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(71)
					red = aa;
					HX_STACK_LINE(72)
					green = bb;
					HX_STACK_LINE(73)
					blue = Brightness;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(75)
					red = cc;
					HX_STACK_LINE(76)
					green = aa;
					HX_STACK_LINE(77)
					blue = Brightness;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(79)
					red = Brightness;
					HX_STACK_LINE(80)
					green = aa;
					HX_STACK_LINE(81)
					blue = bb;
				}
				;break;
				default: {
					HX_STACK_LINE(83)
					red = (int)0;
					HX_STACK_LINE(84)
					green = (int)0;
					HX_STACK_LINE(85)
					blue = (int)0;
				}
			}
		}
		HX_STACK_LINE(89)
		return (int((int((int((int(((int(::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(::Std_obj::_int((red * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((green * (int)255))) << int((int)8))))) | int(::Std_obj::_int((blue * (int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,makeFromHSBA,return )

Dynamic FlxColorUtil_obj::getRGBA( int Color,Dynamic Results){
	HX_STACK_PUSH("FlxColorUtil::getRGBA","flixel/util/FlxColorUtil.hx",101);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Results,"Results");
	HX_STACK_LINE(102)
	int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(103)
	int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(104)
	int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(105)
	Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(107)
	if (((Results != null()))){
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",108);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("red") , red,false);
					__result->Add(HX_CSTRING("green") , green,false);
					__result->Add(HX_CSTRING("blue") , blue,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(108)
		Results = _Function_2_1::Block(red,green,blue,alpha);
	}
	struct _Function_1_1{
		inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",110);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("red") , red,false);
				__result->Add(HX_CSTRING("green") , green,false);
				__result->Add(HX_CSTRING("blue") , blue,false);
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(110)
	return _Function_1_1::Block(red,green,blue,alpha);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getRGBA,return )

Dynamic FlxColorUtil_obj::getHSBA( int Color,Dynamic Results){
	HX_STACK_PUSH("FlxColorUtil::getHSBA","flixel/util/FlxColorUtil.hx",123);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Results,"Results");
	HX_STACK_LINE(124)
	Float hue;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(125)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(126)
	Float brightness;		HX_STACK_VAR(brightness,"brightness");
	HX_STACK_LINE(127)
	Float alpha;		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(129)
	Float red = (Float(((int((int(Color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(130)
	Float green = (Float(((int((int(Color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(131)
	Float blue = (Float(((int(Color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(133)
	Float m = (  (((red > green))) ? Float(red) : Float(green) );		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(134)
	Float dmax = (  (((m > blue))) ? Float(m) : Float(blue) );		HX_STACK_VAR(dmax,"dmax");
	HX_STACK_LINE(135)
	m = (  (((red > green))) ? Float(green) : Float(red) );
	HX_STACK_LINE(136)
	Float dmin = (  (((m > blue))) ? Float(blue) : Float(m) );		HX_STACK_VAR(dmin,"dmin");
	HX_STACK_LINE(137)
	Float range = (dmax - dmin);		HX_STACK_VAR(range,"range");
	HX_STACK_LINE(139)
	brightness = ::flixel::util::FlxMath_obj::roundDecimal(dmax,(int)4);
	HX_STACK_LINE(140)
	saturation = (int)0;
	HX_STACK_LINE(141)
	hue = (int)0;
	HX_STACK_LINE(143)
	if (((dmax != (int)0))){
		HX_STACK_LINE(144)
		saturation = ::flixel::util::FlxMath_obj::roundDecimal((Float(range) / Float(dmax)),(int)4);
	}
	HX_STACK_LINE(147)
	if (((saturation != (int)0))){
		HX_STACK_LINE(149)
		if (((red == dmax))){
			HX_STACK_LINE(150)
			hue = (Float(((green - blue))) / Float(range));
		}
		else{
			HX_STACK_LINE(153)
			if (((green == dmax))){
				HX_STACK_LINE(154)
				hue = ((int)2 + (Float(((blue - red))) / Float(range)));
			}
			else{
				HX_STACK_LINE(157)
				if (((blue == dmax))){
					HX_STACK_LINE(158)
					hue = ((int)4 + (Float(((red - green))) / Float(range)));
				}
			}
		}
		HX_STACK_LINE(161)
		hx::MultEq(hue,(int)60);
		HX_STACK_LINE(162)
		if (((hue < (int)0))){
			HX_STACK_LINE(163)
			hx::AddEq(hue,(int)360);
		}
	}
	HX_STACK_LINE(168)
	alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);
	HX_STACK_LINE(170)
	if (((Results != null()))){
		struct _Function_2_1{
			inline static Dynamic Block( Float &brightness,Float &saturation,Float &alpha,Float &hue){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",171);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("hue") , ::Std_obj::_int(hue),false);
					__result->Add(HX_CSTRING("brightness") , brightness,false);
					__result->Add(HX_CSTRING("saturation") , saturation,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(171)
		Results = _Function_2_1::Block(brightness,saturation,alpha,hue);
	}
	struct _Function_1_1{
		inline static Dynamic Block( Float &brightness,Float &saturation,Float &alpha,Float &hue){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",172);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hue") , ::Std_obj::_int(hue),false);
				__result->Add(HX_CSTRING("brightness") , brightness,false);
				__result->Add(HX_CSTRING("saturation") , saturation,false);
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(172)
	return _Function_1_1::Block(brightness,saturation,alpha,hue);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getHSBA,return )

int FlxColorUtil_obj::getAlpha( int Color){
	HX_STACK_PUSH("FlxColorUtil::getAlpha","flixel/util/FlxColorUtil.hx",182);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(182)
	return (int((int(Color) >> int((int)24))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getAlpha,return )

Float FlxColorUtil_obj::getAlphaFloat( int Color){
	HX_STACK_PUSH("FlxColorUtil::getAlphaFloat","flixel/util/FlxColorUtil.hx",193);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(194)
	int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(195)
	return (Float(f) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getAlphaFloat,return )

int FlxColorUtil_obj::getRed( int Color){
	HX_STACK_PUSH("FlxColorUtil::getRed","flixel/util/FlxColorUtil.hx",205);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(205)
	return (int((int(Color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getRed,return )

int FlxColorUtil_obj::getGreen( int Color){
	HX_STACK_PUSH("FlxColorUtil::getGreen","flixel/util/FlxColorUtil.hx",216);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(216)
	return (int((int(Color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getGreen,return )

int FlxColorUtil_obj::getBlue( int Color){
	HX_STACK_PUSH("FlxColorUtil::getBlue","flixel/util/FlxColorUtil.hx",227);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(227)
	return (int(Color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getBlue,return )

int FlxColorUtil_obj::getRandomColor( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,hx::Null< int >  __o_Alpha){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(255);
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColorUtil::getRandomColor","flixel/util/FlxColorUtil.hx",242);
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(244)
		if (((Max > (int)255))){
			HX_STACK_LINE(246)
			::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxColor: getRandomColor - max value too high"));
			HX_STACK_LINE(247)
			return (int)16777215;
		}
		HX_STACK_LINE(250)
		if (((Min > Max))){
			HX_STACK_LINE(252)
			::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxColor: getRandomColor - min value higher than max"));
			HX_STACK_LINE(253)
			return (int)16777215;
		}
		HX_STACK_LINE(256)
		int red = (Min + ::Std_obj::_int((::Math_obj::random() * ((Max - Min)))));		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(257)
		int green = (Min + ::Std_obj::_int((::Math_obj::random() * ((Max - Min)))));		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(258)
		int blue = (Min + ::Std_obj::_int((::Math_obj::random() * ((Max - Min)))));		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(260)
		return (int((int((int((int(Alpha) << int((int)24))) | int((int(red) << int((int)16))))) | int((int(green) << int((int)8))))) | int(blue));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColorUtil_obj,getRandomColor,return )

int FlxColorUtil_obj::getColor32( int Alpha,int Red,int Green,int Blue){
	HX_STACK_PUSH("FlxColorUtil::getColor32","flixel/util/FlxColorUtil.hx",273);
	HX_STACK_ARG(Alpha,"Alpha");
	HX_STACK_ARG(Red,"Red");
	HX_STACK_ARG(Green,"Green");
	HX_STACK_ARG(Blue,"Blue");
	HX_STACK_LINE(273)
	return (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,getColor32,return )

int FlxColorUtil_obj::getColor24( int Red,int Green,int Blue){
	HX_STACK_PUSH("FlxColorUtil::getColor24","flixel/util/FlxColorUtil.hx",286);
	HX_STACK_ARG(Red,"Red");
	HX_STACK_ARG(Green,"Green");
	HX_STACK_ARG(Blue,"Blue");
	HX_STACK_LINE(286)
	return (int((int((int(Red) << int((int)16))) | int((int(Green) << int((int)8))))) | int(Blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColorUtil_obj,getColor24,return )

Array< int > FlxColorUtil_obj::getHSVColorWheel( hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColorUtil::getHSVColorWheel","flixel/util/FlxColorUtil.hx",297);
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(298)
		Array< int > colors = Array_obj< int >::__new();		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(300)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(300)
			while(((_g < (int)360))){
				HX_STACK_LINE(300)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(302)
				colors[c] = ::flixel::util::FlxColorUtil_obj::HSVtoRGBA(c,1.0,1.0,Alpha);
			}
		}
		HX_STACK_LINE(305)
		return colors;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getHSVColorWheel,return )

int FlxColorUtil_obj::getComplementHarmony( int Color){
	HX_STACK_PUSH("FlxColorUtil::getComplementHarmony","flixel/util/FlxColorUtil.hx",317);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(318)
	Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(320)
	int opposite = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
	HX_STACK_LINE(322)
	return ::flixel::util::FlxColorUtil_obj::HSVtoRGBA(opposite,1.0,1.0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getComplementHarmony,return )

Dynamic FlxColorUtil_obj::getAnalogousHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_PUSH("FlxColorUtil::getAnalogousHarmony","flixel/util/FlxColorUtil.hx",335);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Threshold,"Threshold");
{
		HX_STACK_LINE(336)
		Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(338)
		if (((bool((Threshold > (int)359)) || bool((Threshold < (int)0))))){
			HX_STACK_LINE(339)
			::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxColor Warning: Invalid threshold given to getAnalogousHarmony()"));
		}
		HX_STACK_LINE(343)
		int warmer = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),((int)359 - Threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(344)
		int colder = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),Threshold,(int)359);		HX_STACK_VAR(colder,"colder");
		struct _Function_1_1{
			inline static Dynamic Block( int &warmer,Dynamic &hsv,int &Color,int &colder){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",346);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , Color,false);
					__result->Add(HX_CSTRING("color2") , ::flixel::util::FlxColorUtil_obj::HSVtoRGBA(warmer,1.0,1.0,null()),false);
					__result->Add(HX_CSTRING("color3") , ::flixel::util::FlxColorUtil_obj::HSVtoRGBA(colder,1.0,1.0,null()),false);
					__result->Add(HX_CSTRING("hue1") , ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(346)
		return _Function_1_1::Block(warmer,hsv,Color,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getAnalogousHarmony,return )

Dynamic FlxColorUtil_obj::getSplitComplementHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_PUSH("FlxColorUtil::getSplitComplementHarmony","flixel/util/FlxColorUtil.hx",359);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Threshold,"Threshold");
{
		HX_STACK_LINE(360)
		Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(362)
		if (((bool((Threshold >= (int)359)) || bool((Threshold <= (int)0))))){
			HX_STACK_LINE(363)
			::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxColor: Invalid threshold given to getSplitComplementHarmony()"));
		}
		HX_STACK_LINE(367)
		int opposite = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
		HX_STACK_LINE(369)
		int warmer = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(opposite - Threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(370)
		int colder = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(opposite + Threshold),(int)359);		HX_STACK_VAR(colder,"colder");
		HX_STACK_LINE(372)
		::flixel::FlxG_obj::log->notice((((((((HX_CSTRING("hue: ") + hsv->__Field(HX_CSTRING("hue"),true)) + HX_CSTRING(" opposite: ")) + opposite) + HX_CSTRING(" warmer: ")) + warmer) + HX_CSTRING(" colder: ")) + colder));
		struct _Function_1_1{
			inline static Dynamic Block( int &warmer,Dynamic &hsv,int &Color,int &colder){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",374);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , Color,false);
					__result->Add(HX_CSTRING("color2") , ::flixel::util::FlxColorUtil_obj::HSVtoRGBA(warmer,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null()),false);
					__result->Add(HX_CSTRING("color3") , ::flixel::util::FlxColorUtil_obj::HSVtoRGBA(colder,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null()),false);
					__result->Add(HX_CSTRING("hue1") , ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(374)
		return _Function_1_1::Block(warmer,hsv,Color,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getSplitComplementHarmony,return )

Dynamic FlxColorUtil_obj::getTriadicHarmony( int Color){
	HX_STACK_PUSH("FlxColorUtil::getTriadicHarmony","flixel/util/FlxColorUtil.hx",386);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(387)
	Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(389)
	int triadic1 = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(int)120,(int)359);		HX_STACK_VAR(triadic1,"triadic1");
	HX_STACK_LINE(390)
	int triadic2 = ::flixel::util::FlxMath_obj::wrapValue(triadic1,(int)120,(int)359);		HX_STACK_VAR(triadic2,"triadic2");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color,int &triadic2,int &triadic1){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",392);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color1") , Color,false);
				__result->Add(HX_CSTRING("color2") , ::flixel::util::FlxColorUtil_obj::HSVtoRGBA(triadic1,1.0,1.0,null()),false);
				__result->Add(HX_CSTRING("color3") , ::flixel::util::FlxColorUtil_obj::HSVtoRGBA(triadic2,1.0,1.0,null()),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(392)
	return _Function_1_1::Block(Color,triadic2,triadic1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getTriadicHarmony,return )

::String FlxColorUtil_obj::getColorInfo( int Color){
	HX_STACK_PUSH("FlxColorUtil::getColorInfo","flixel/util/FlxColorUtil.hx",403);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",404);
			{
				HX_STACK_LINE(404)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(404)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(404)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(404)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(404)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(404)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",404);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(404)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",404);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(404)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(404)
	Dynamic rgba = _Function_1_1::Block(Color);		HX_STACK_VAR(rgba,"rgba");
	HX_STACK_LINE(405)
	Dynamic hsl = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsl,"hsl");
	struct _Function_1_2{
		inline static ::String Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",408);
			{
				struct _Function_2_1{
					inline static Dynamic Block( int &Color){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",408);
						{
							HX_STACK_LINE(408)
							Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
							HX_STACK_LINE(408)
							int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
							HX_STACK_LINE(408)
							int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
							HX_STACK_LINE(408)
							int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
							HX_STACK_LINE(408)
							Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
							HX_STACK_LINE(408)
							if (((Results != null()))){
								struct _Function_4_1{
									inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
										HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",408);
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("red") , red,false);
											__result->Add(HX_CSTRING("green") , green,false);
											__result->Add(HX_CSTRING("blue") , blue,false);
											__result->Add(HX_CSTRING("alpha") , alpha,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(408)
								Results = _Function_4_1::Block(red,green,blue,alpha);
							}
							struct _Function_3_1{
								inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
									HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",408);
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("red") , red,false);
										__result->Add(HX_CSTRING("green") , green,false);
										__result->Add(HX_CSTRING("blue") , blue,false);
										__result->Add(HX_CSTRING("alpha") , alpha,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(408)
							return _Function_3_1::Block(red,green,blue,alpha);
						}
						return null();
					}
				};
				HX_STACK_LINE(408)
				Dynamic rgba1 = _Function_2_1::Block(Color);		HX_STACK_VAR(rgba1,"rgba1");
				struct _Function_2_2{
					inline static ::String Block( Dynamic &rgba1){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",408);
						{
							HX_STACK_LINE(408)
							int Color1 = ::Std_obj::_int(rgba1->__Field(HX_CSTRING("alpha"),true));		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(408)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(408)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(408)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(408)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static ::String Block( Dynamic &rgba1){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",408);
						{
							HX_STACK_LINE(408)
							int Color1 = rgba1->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(408)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(408)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(408)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(408)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static ::String Block( Dynamic &rgba1){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",408);
						{
							HX_STACK_LINE(408)
							int Color1 = rgba1->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(408)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(408)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(408)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(408)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				struct _Function_2_5{
					inline static ::String Block( Dynamic &rgba1){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",408);
						{
							HX_STACK_LINE(408)
							int Color1 = rgba1->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(408)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(408)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(408)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(408)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				HX_STACK_LINE(408)
				return ((((HX_CSTRING("0x") + _Function_2_2::Block(rgba1)) + _Function_2_3::Block(rgba1)) + _Function_2_4::Block(rgba1)) + _Function_2_5::Block(rgba1));
			}
			return null();
		}
	};
	HX_STACK_LINE(408)
	::String result = (_Function_1_2::Block(Color) + HX_CSTRING("\n"));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(411)
	hx::AddEq(result,((((((((HX_CSTRING("Alpha: ") + rgba->__Field(HX_CSTRING("alpha"),true)) + HX_CSTRING(" Red: ")) + rgba->__Field(HX_CSTRING("red"),true)) + HX_CSTRING(" Green: ")) + rgba->__Field(HX_CSTRING("green"),true)) + HX_CSTRING(" Blue: ")) + rgba->__Field(HX_CSTRING("blue"),true)) + HX_CSTRING("\n")));
	HX_STACK_LINE(414)
	hx::AddEq(result,(((((HX_CSTRING("Hue: ") + hsl->__Field(HX_CSTRING("hue"),true)) + HX_CSTRING(" Saturation: ")) + hsl->__Field(HX_CSTRING("saturation"),true)) + HX_CSTRING(" Lightnes: ")) + hsl->__Field(HX_CSTRING("lightness"),true)));
	HX_STACK_LINE(416)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getColorInfo,return )

::String FlxColorUtil_obj::RGBAtoHexString( int Color){
	HX_STACK_PUSH("FlxColorUtil::RGBAtoHexString","flixel/util/FlxColorUtil.hx",426);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",427);
			{
				HX_STACK_LINE(427)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(427)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(427)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(427)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(427)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(427)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",427);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(427)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",427);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(427)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(427)
	Dynamic rgba = _Function_1_1::Block(Color);		HX_STACK_VAR(rgba,"rgba");
	struct _Function_1_2{
		inline static ::String Block( Dynamic &rgba){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",429);
			{
				HX_STACK_LINE(429)
				int Color1 = ::Std_obj::_int(rgba->__Field(HX_CSTRING("alpha"),true));		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(429)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(429)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(429)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(429)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::String Block( Dynamic &rgba){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",429);
			{
				HX_STACK_LINE(429)
				int Color1 = rgba->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(429)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(429)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(429)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(429)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::String Block( Dynamic &rgba){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",429);
			{
				HX_STACK_LINE(429)
				int Color1 = rgba->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(429)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(429)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(429)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(429)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static ::String Block( Dynamic &rgba){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",429);
			{
				HX_STACK_LINE(429)
				int Color1 = rgba->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(429)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(429)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(429)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(429)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	HX_STACK_LINE(429)
	return ((((HX_CSTRING("0x") + _Function_1_2::Block(rgba)) + _Function_1_3::Block(rgba)) + _Function_1_4::Block(rgba)) + _Function_1_5::Block(rgba));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,RGBAtoHexString,return )

::String FlxColorUtil_obj::RGBAtoWebString( int Color){
	HX_STACK_PUSH("FlxColorUtil::RGBAtoWebString","flixel/util/FlxColorUtil.hx",439);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",440);
			{
				HX_STACK_LINE(440)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(440)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(440)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(440)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(440)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(440)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",440);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(440)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",440);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(440)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(440)
	Dynamic rgba = _Function_1_1::Block(Color);		HX_STACK_VAR(rgba,"rgba");
	struct _Function_1_2{
		inline static ::String Block( Dynamic &rgba){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",442);
			{
				HX_STACK_LINE(442)
				int Color1 = rgba->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(442)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(442)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(442)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(442)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::String Block( Dynamic &rgba){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",442);
			{
				HX_STACK_LINE(442)
				int Color1 = rgba->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(442)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(442)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(442)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(442)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::String Block( Dynamic &rgba){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",442);
			{
				HX_STACK_LINE(442)
				int Color1 = rgba->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(442)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(442)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(442)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(442)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	HX_STACK_LINE(442)
	return (((HX_CSTRING("#") + _Function_1_2::Block(rgba)) + _Function_1_3::Block(rgba)) + _Function_1_4::Block(rgba));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,RGBAtoWebString,return )

::String FlxColorUtil_obj::colorToHexString( int Color){
	HX_STACK_PUSH("FlxColorUtil::colorToHexString","flixel/util/FlxColorUtil.hx",452);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(453)
	::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
	HX_STACK_LINE(455)
	Float lsd = hx::Mod(Color,(int)16);		HX_STACK_VAR(lsd,"lsd");
	HX_STACK_LINE(456)
	Float msd = (Float(((Color - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
	HX_STACK_LINE(458)
	return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,colorToHexString,return )

int FlxColorUtil_obj::HSVtoRGBA( Float H,Float S,Float V,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColorUtil::HSVtoRGBA","flixel/util/FlxColorUtil.hx",471);
	HX_STACK_ARG(H,"H");
	HX_STACK_ARG(S,"S");
	HX_STACK_ARG(V,"V");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(472)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(474)
		if (((S == 0.0))){
			HX_STACK_LINE(475)
			result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)8))))) | int(::Std_obj::_int((V * (int)255))));
		}
		else{
			HX_STACK_LINE(480)
			H = (Float(H) / Float(60.0));
			HX_STACK_LINE(481)
			Float f = (H - ::Std_obj::_int(H));		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(482)
			Float p = (V * ((1.0 - S)));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(483)
			Float q = (V * ((1.0 - (S * f))));		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(484)
			Float t = (V * ((1.0 - (S * ((1.0 - f))))));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(486)
			{
				HX_STACK_LINE(486)
				int _g = ::Std_obj::_int(H);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(486)
				switch( (int)(_g)){
					case (int)0: {
						HX_STACK_LINE(488)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((t * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(490)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((q * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(492)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)8))))) | int(::Std_obj::_int((t * (int)255))));
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(494)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((q * (int)255))) << int((int)8))))) | int(::Std_obj::_int((V * (int)255))));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(496)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((t * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((V * (int)255))));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(498)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((q * (int)255))));
					}
					;break;
					default: {
						HX_STACK_LINE(500)
						::flixel::FlxG_obj::log->warn(HX_CSTRING("FlxColor: HSVtoRGB: Unknown color"));
					}
				}
			}
		}
		HX_STACK_LINE(505)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,HSVtoRGBA,return )

Dynamic FlxColorUtil_obj::RGBtoHSV( int Color){
	HX_STACK_PUSH("FlxColorUtil::RGBtoHSV","flixel/util/FlxColorUtil.hx",515);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",516);
			{
				HX_STACK_LINE(516)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(516)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(516)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(516)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(516)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(516)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",516);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(516)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",516);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(516)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(516)
	Dynamic rgb = _Function_1_1::Block(Color);		HX_STACK_VAR(rgb,"rgb");
	HX_STACK_LINE(518)
	Float red = (Float(rgb->__Field(HX_CSTRING("red"),true)) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(519)
	Float green = (Float(rgb->__Field(HX_CSTRING("green"),true)) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(520)
	Float blue = (Float(rgb->__Field(HX_CSTRING("blue"),true)) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(522)
	Float min = ::Math_obj::min(red,::Math_obj::min(green,blue));		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(523)
	Float max = ::Math_obj::max(red,::Math_obj::max(green,blue));		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(524)
	Float delta = (max - min);		HX_STACK_VAR(delta,"delta");
	HX_STACK_LINE(525)
	Float lightness = (Float(((max + min))) / Float((int)2));		HX_STACK_VAR(lightness,"lightness");
	HX_STACK_LINE(526)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(527)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(530)
	if (((delta == (int)0))){
		HX_STACK_LINE(532)
		hue = (int)0;
		HX_STACK_LINE(533)
		saturation = (int)0;
	}
	else{
		HX_STACK_LINE(537)
		if (((lightness < 0.5))){
			HX_STACK_LINE(538)
			saturation = (Float(delta) / Float(((max + min))));
		}
		else{
			HX_STACK_LINE(542)
			saturation = (Float(delta) / Float(((((int)2 - max) - min))));
		}
		HX_STACK_LINE(546)
		Float delta_r = (Float((((Float(((max - red))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_r,"delta_r");
		HX_STACK_LINE(547)
		Float delta_g = (Float((((Float(((max - green))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_g,"delta_g");
		HX_STACK_LINE(548)
		Float delta_b = (Float((((Float(((max - blue))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_b,"delta_b");
		HX_STACK_LINE(550)
		if (((red == max))){
			HX_STACK_LINE(551)
			hue = (delta_b - delta_g);
		}
		else{
			HX_STACK_LINE(554)
			if (((green == max))){
				HX_STACK_LINE(555)
				hue = (((Float((int)1) / Float((int)3)) + delta_r) - delta_b);
			}
			else{
				HX_STACK_LINE(558)
				if (((blue == max))){
					HX_STACK_LINE(559)
					hue = (((Float((int)2) / Float((int)3)) + delta_g) - delta_r);
				}
			}
		}
		HX_STACK_LINE(563)
		if (((hue < (int)0))){
			HX_STACK_LINE(564)
			hx::AddEq(hue,(int)1);
		}
		HX_STACK_LINE(568)
		if (((hue > (int)1))){
			HX_STACK_LINE(569)
			hx::SubEq(hue,(int)1);
		}
	}
	HX_STACK_LINE(575)
	hx::MultEq(hue,(int)360);
	HX_STACK_LINE(576)
	hue = ::Math_obj::round(hue);
	struct _Function_1_2{
		inline static Dynamic Block( Float &saturation,Float &lightness,Float &hue){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",578);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hue") , hue,false);
				__result->Add(HX_CSTRING("saturation") , saturation,false);
				__result->Add(HX_CSTRING("lightness") , lightness,false);
				__result->Add(HX_CSTRING("value") , lightness,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(578)
	return _Function_1_2::Block(saturation,lightness,hue);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,RGBtoHSV,return )

int FlxColorUtil_obj::RGBAtoRGB( int Color){
	HX_STACK_PUSH("FlxColorUtil::RGBAtoRGB","flixel/util/FlxColorUtil.hx",589);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(589)
	return (int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,RGBAtoRGB,return )

int FlxColorUtil_obj::interpolateColor( int Color1,int Color2,int Steps,int CurrentStep,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColorUtil::interpolateColor","flixel/util/FlxColorUtil.hx",604);
	HX_STACK_ARG(Color1,"Color1");
	HX_STACK_ARG(Color2,"Color2");
	HX_STACK_ARG(Steps,"Steps");
	HX_STACK_ARG(CurrentStep,"CurrentStep");
	HX_STACK_ARG(Alpha,"Alpha");
{
		struct _Function_1_1{
			inline static Dynamic Block( int &Color1){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",605);
				{
					HX_STACK_LINE(605)
					Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
					HX_STACK_LINE(605)
					int red = (int((int(Color1) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
					HX_STACK_LINE(605)
					int green = (int((int(Color1) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
					HX_STACK_LINE(605)
					int blue = (int(Color1) & int((int)255));		HX_STACK_VAR(blue,"blue");
					HX_STACK_LINE(605)
					Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color1) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(605)
					if (((Results != null()))){
						struct _Function_3_1{
							inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
								HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",605);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("red") , red,false);
									__result->Add(HX_CSTRING("green") , green,false);
									__result->Add(HX_CSTRING("blue") , blue,false);
									__result->Add(HX_CSTRING("alpha") , alpha,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(605)
						Results = _Function_3_1::Block(red,green,blue,alpha);
					}
					struct _Function_2_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",605);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(605)
					return _Function_2_1::Block(red,green,blue,alpha);
				}
				return null();
			}
		};
		HX_STACK_LINE(605)
		Dynamic src1 = _Function_1_1::Block(Color1);		HX_STACK_VAR(src1,"src1");
		struct _Function_1_2{
			inline static Dynamic Block( int &Color2){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",606);
				{
					HX_STACK_LINE(606)
					Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
					HX_STACK_LINE(606)
					int red = (int((int(Color2) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
					HX_STACK_LINE(606)
					int green = (int((int(Color2) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
					HX_STACK_LINE(606)
					int blue = (int(Color2) & int((int)255));		HX_STACK_VAR(blue,"blue");
					HX_STACK_LINE(606)
					Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color2) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(606)
					if (((Results != null()))){
						struct _Function_3_1{
							inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
								HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",606);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("red") , red,false);
									__result->Add(HX_CSTRING("green") , green,false);
									__result->Add(HX_CSTRING("blue") , blue,false);
									__result->Add(HX_CSTRING("alpha") , alpha,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(606)
						Results = _Function_3_1::Block(red,green,blue,alpha);
					}
					struct _Function_2_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",606);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(606)
					return _Function_2_1::Block(red,green,blue,alpha);
				}
				return null();
			}
		};
		HX_STACK_LINE(606)
		Dynamic src2 = _Function_1_2::Block(Color2);		HX_STACK_VAR(src2,"src2");
		HX_STACK_LINE(608)
		int r = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("red"),true) - src1->__Field(HX_CSTRING("red"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(609)
		int g = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("green"),true) - src1->__Field(HX_CSTRING("green"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(610)
		int b = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("blue"),true) - src1->__Field(HX_CSTRING("blue"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(612)
		return (int((int((int((int(Alpha) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorUtil_obj,interpolateColor,return )

int FlxColorUtil_obj::interpolateColorWithRGB( int Color,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_PUSH("FlxColorUtil::interpolateColorWithRGB","flixel/util/FlxColorUtil.hx",628);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(R2,"R2");
	HX_STACK_ARG(G2,"G2");
	HX_STACK_ARG(B2,"B2");
	HX_STACK_ARG(Steps,"Steps");
	HX_STACK_ARG(CurrentStep,"CurrentStep");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",629);
			{
				HX_STACK_LINE(629)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(629)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(629)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(629)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(629)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(629)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",629);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(629)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",629);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(629)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(629)
	Dynamic src = _Function_1_1::Block(Color);		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(631)
	int r = ::Std_obj::_int(((Float((((R2 - src->__Field(HX_CSTRING("red"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(632)
	int g = ::Std_obj::_int(((Float((((G2 - src->__Field(HX_CSTRING("green"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(633)
	int b = ::Std_obj::_int(((Float((((B2 - src->__Field(HX_CSTRING("blue"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(635)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColorUtil_obj,interpolateColorWithRGB,return )

int FlxColorUtil_obj::interpolateRGB( int R1,int G1,int B1,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_PUSH("FlxColorUtil::interpolateRGB","flixel/util/FlxColorUtil.hx",653);
	HX_STACK_ARG(R1,"R1");
	HX_STACK_ARG(G1,"G1");
	HX_STACK_ARG(B1,"B1");
	HX_STACK_ARG(R2,"R2");
	HX_STACK_ARG(G2,"G2");
	HX_STACK_ARG(B2,"B2");
	HX_STACK_ARG(Steps,"Steps");
	HX_STACK_ARG(CurrentStep,"CurrentStep");
	HX_STACK_LINE(654)
	int r = ::Std_obj::_int(((Float((((R2 - R1)) * CurrentStep)) / Float(Steps)) + R1));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(655)
	int g = ::Std_obj::_int(((Float((((G2 - G1)) * CurrentStep)) / Float(Steps)) + G1));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(656)
	int b = ::Std_obj::_int(((Float((((B2 - B1)) * CurrentStep)) / Float(Steps)) + B1));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(658)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxColorUtil_obj,interpolateRGB,return )

int FlxColorUtil_obj::darken( int Color,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(0.2);
	HX_STACK_PUSH("FlxColorUtil::darken","flixel/util/FlxColorUtil.hx",669);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Factor,"Factor");
{
		HX_STACK_LINE(670)
		{
			HX_STACK_LINE(670)
			Float lowerBound = (  (((Factor < (int)0))) ? Float((int)0) : Float(Factor) );		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(670)
			if (((lowerBound > (int)1))){
				HX_STACK_LINE(670)
				(int)1;
			}
			else{
				HX_STACK_LINE(670)
				lowerBound;
			}
		}
		HX_STACK_LINE(672)
		int r = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(673)
		int g = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(674)
		int b = (int(Color) & int((int)255));		HX_STACK_VAR(b,"b");
		struct _Function_1_1{
			inline static Float Block( int &Color){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",675);
				{
					HX_STACK_LINE(675)
					int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(675)
					return (Float(f) / Float((int)255));
				}
				return null();
			}
		};
		HX_STACK_LINE(675)
		Float a = _Function_1_1::Block(Color);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(677)
		Factor = ((int)1 - Factor);
		HX_STACK_LINE(679)
		r = ::Std_obj::_int((r * Factor));
		HX_STACK_LINE(680)
		g = ::Std_obj::_int((g * Factor));
		HX_STACK_LINE(681)
		b = ::Std_obj::_int((b * Factor));
		HX_STACK_LINE(683)
		return (int((int((int((int(((int(::Std_obj::_int((  (((a > (int)1))) ? Float(a) : Float((a * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(((int(r) & int((int)255)))) << int((int)16))))) | int((int(((int(g) & int((int)255)))) << int((int)8))))) | int((int(b) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,darken,return )

int FlxColorUtil_obj::brighten( int Color,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(0.2);
	HX_STACK_PUSH("FlxColorUtil::brighten","flixel/util/FlxColorUtil.hx",694);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Factor,"Factor");
{
		HX_STACK_LINE(695)
		{
			HX_STACK_LINE(695)
			Float lowerBound = (  (((Factor < (int)0))) ? Float((int)0) : Float(Factor) );		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(695)
			if (((lowerBound > (int)1))){
				HX_STACK_LINE(695)
				(int)1;
			}
			else{
				HX_STACK_LINE(695)
				lowerBound;
			}
		}
		HX_STACK_LINE(697)
		int r = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(698)
		int g = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(699)
		int b = (int(Color) & int((int)255));		HX_STACK_VAR(b,"b");
		struct _Function_1_1{
			inline static Float Block( int &Color){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",700);
				{
					HX_STACK_LINE(700)
					int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(700)
					return (Float(f) / Float((int)255));
				}
				return null();
			}
		};
		HX_STACK_LINE(700)
		Float a = _Function_1_1::Block(Color);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(702)
		hx::AddEq(r,::Std_obj::_int(((((int)255 - r)) * Factor)));
		HX_STACK_LINE(703)
		hx::AddEq(g,::Std_obj::_int(((((int)255 - g)) * Factor)));
		HX_STACK_LINE(704)
		hx::AddEq(b,::Std_obj::_int(((((int)255 - b)) * Factor)));
		HX_STACK_LINE(706)
		return (int((int((int((int(((int(::Std_obj::_int((  (((a > (int)1))) ? Float(a) : Float((a * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(((int(r) & int((int)255)))) << int((int)16))))) | int((int(((int(g) & int((int)255)))) << int((int)8))))) | int((int(b) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,brighten,return )


FlxColorUtil_obj::FlxColorUtil_obj()
{
}

void FlxColorUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxColorUtil);
	HX_MARK_END_CLASS();
}

void FlxColorUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxColorUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		if (HX_FIELD_EQ(inName,"darken") ) { return darken_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getRGBA") ) { return getRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getHSBA") ) { return getHSBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAlpha") ) { return getAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBtoHSV") ) { return RGBtoHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"brighten") ) { return brighten_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HSVtoRGBA") ) { return HSVtoRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBAtoRGB") ) { return RGBAtoRGB_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getColor32") ) { return getColor32_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor24") ) { return getColor24_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeFromRGBA") ) { return makeFromRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"makeFromHSBA") ) { return makeFromHSBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { return getColorInfo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaFloat") ) { return getAlphaFloat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getRandomColor") ) { return getRandomColor_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateRGB") ) { return interpolateRGB_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"RGBAtoHexString") ) { return RGBAtoHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBAtoWebString") ) { return RGBAtoWebString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSVColorWheel") ) { return getHSVColorWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"colorToHexString") ) { return colorToHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateColor") ) { return interpolateColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { return getTriadicHarmony_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { return getAnalogousHarmony_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { return getComplementHarmony_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"interpolateColorWithRGB") ) { return interpolateColorWithRGB_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { return getSplitComplementHarmony_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxColorUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxColorUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("makeFromRGBA"),
	HX_CSTRING("makeFromHSBA"),
	HX_CSTRING("getRGBA"),
	HX_CSTRING("getHSBA"),
	HX_CSTRING("getAlpha"),
	HX_CSTRING("getAlphaFloat"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	HX_CSTRING("getRandomColor"),
	HX_CSTRING("getColor32"),
	HX_CSTRING("getColor24"),
	HX_CSTRING("getHSVColorWheel"),
	HX_CSTRING("getComplementHarmony"),
	HX_CSTRING("getAnalogousHarmony"),
	HX_CSTRING("getSplitComplementHarmony"),
	HX_CSTRING("getTriadicHarmony"),
	HX_CSTRING("getColorInfo"),
	HX_CSTRING("RGBAtoHexString"),
	HX_CSTRING("RGBAtoWebString"),
	HX_CSTRING("colorToHexString"),
	HX_CSTRING("HSVtoRGBA"),
	HX_CSTRING("RGBtoHSV"),
	HX_CSTRING("RGBAtoRGB"),
	HX_CSTRING("interpolateColor"),
	HX_CSTRING("interpolateColorWithRGB"),
	HX_CSTRING("interpolateRGB"),
	HX_CSTRING("darken"),
	HX_CSTRING("brighten"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColorUtil_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColorUtil_obj::__mClass,"__mClass");
};

Class FlxColorUtil_obj::__mClass;

void FlxColorUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxColorUtil"), hx::TCanCast< FlxColorUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxColorUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
