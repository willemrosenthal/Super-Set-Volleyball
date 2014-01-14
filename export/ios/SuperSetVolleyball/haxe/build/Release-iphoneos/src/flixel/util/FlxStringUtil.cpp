#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxStringUtil_obj::__construct()
{
	return null();
}

FlxStringUtil_obj::~FlxStringUtil_obj() { }

Dynamic FlxStringUtil_obj::__CreateEmpty() { return  new FlxStringUtil_obj; }
hx::ObjectPtr< FlxStringUtil_obj > FlxStringUtil_obj::__new()
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxStringUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

::String FlxStringUtil_obj::formatTicks( int StartTicks,int EndTicks){
	HX_STACK_PUSH("FlxStringUtil::formatTicks","flixel/util/FlxStringUtil.hx",19);
	HX_STACK_ARG(StartTicks,"StartTicks");
	HX_STACK_ARG(EndTicks,"EndTicks");
	HX_STACK_LINE(19)
	return ((Float(::Math_obj::abs((EndTicks - StartTicks))) / Float((int)1000)) + HX_CSTRING("s"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTicks,return )

::String FlxStringUtil_obj::formatTime( Float Seconds,hx::Null< bool >  __o_ShowMS){
bool ShowMS = __o_ShowMS.Default(false);
	HX_STACK_PUSH("FlxStringUtil::formatTime","flixel/util/FlxStringUtil.hx",30);
	HX_STACK_ARG(Seconds,"Seconds");
	HX_STACK_ARG(ShowMS,"ShowMS");
{
		HX_STACK_LINE(31)
		::String timeString = (::Std_obj::_int((Float(Seconds) / Float((int)60))) + HX_CSTRING(":"));		HX_STACK_VAR(timeString,"timeString");
		HX_STACK_LINE(32)
		int timeStringHelper = hx::Mod(::Std_obj::_int(Seconds),(int)60);		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
		HX_STACK_LINE(33)
		if (((timeStringHelper < (int)10))){
			HX_STACK_LINE(34)
			hx::AddEq(timeString,HX_CSTRING("0"));
		}
		HX_STACK_LINE(37)
		hx::AddEq(timeString,timeStringHelper);
		HX_STACK_LINE(38)
		if ((ShowMS)){
			HX_STACK_LINE(40)
			hx::AddEq(timeString,HX_CSTRING("."));
			HX_STACK_LINE(41)
			timeStringHelper = ::Std_obj::_int((((Seconds - ::Std_obj::_int(Seconds))) * (int)100));
			HX_STACK_LINE(42)
			if (((timeStringHelper < (int)10))){
				HX_STACK_LINE(43)
				hx::AddEq(timeString,HX_CSTRING("0"));
			}
			HX_STACK_LINE(46)
			hx::AddEq(timeString,timeStringHelper);
		}
		HX_STACK_LINE(49)
		return timeString;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTime,return )

::String FlxStringUtil_obj::formatArray( Dynamic AnyArray){
	HX_STACK_PUSH("FlxStringUtil::formatArray","flixel/util/FlxStringUtil.hx",59);
	HX_STACK_ARG(AnyArray,"AnyArray");
	HX_STACK_LINE(60)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(61)
	if (((bool((AnyArray != null())) && bool((AnyArray->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(63)
		string = ::Std_obj::string(AnyArray->__GetItem((int)0));
		HX_STACK_LINE(64)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(65)
		int l = AnyArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(66)
		while(((i < l))){
			HX_STACK_LINE(67)
			hx::AddEq(string,(HX_CSTRING(", ") + ::Std_obj::string(AnyArray->__GetItem((i)++))));
		}
	}
	HX_STACK_LINE(71)
	return string;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatArray,return )

::String FlxStringUtil_obj::formatFlxPoint( ::flixel::util::FlxPoint Point,int Precision){
	HX_STACK_PUSH("FlxStringUtil::formatFlxPoint","flixel/util/FlxStringUtil.hx",81);
	HX_STACK_ARG(Point,"Point");
	HX_STACK_ARG(Precision,"Precision");
	HX_STACK_LINE(82)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(83)
	if (((Point != null()))){
		HX_STACK_LINE(85)
		Float xValue = ::flixel::util::FlxMath_obj::roundDecimal(Point->x,Precision);		HX_STACK_VAR(xValue,"xValue");
		HX_STACK_LINE(86)
		Float yValue = ::flixel::util::FlxMath_obj::roundDecimal(Point->y,Precision);		HX_STACK_VAR(yValue,"yValue");
		HX_STACK_LINE(88)
		string = (((HX_CSTRING("x: ") + xValue) + HX_CSTRING(" | y: ")) + yValue);
	}
	HX_STACK_LINE(91)
	return string;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatFlxPoint,return )

::String FlxStringUtil_obj::formatStringMap( ::haxe::ds::StringMap AnyMap){
	HX_STACK_PUSH("FlxStringUtil::formatStringMap","flixel/util/FlxStringUtil.hx",100);
	HX_STACK_ARG(AnyMap,"AnyMap");
	HX_STACK_LINE(101)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(102)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(AnyMap->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(103)
			hx::AddEq(string,::Std_obj::string(key));
			HX_STACK_LINE(104)
			hx::AddEq(string,HX_CSTRING(", "));
		}
;
	}
	HX_STACK_LINE(107)
	return string.substring((int)0,(string.length - (int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatStringMap,return )

::String FlxStringUtil_obj::formatMoney( Float Amount,hx::Null< bool >  __o_ShowDecimal,hx::Null< bool >  __o_EnglishStyle){
bool ShowDecimal = __o_ShowDecimal.Default(true);
bool EnglishStyle = __o_EnglishStyle.Default(true);
	HX_STACK_PUSH("FlxStringUtil::formatMoney","flixel/util/FlxStringUtil.hx",121);
	HX_STACK_ARG(Amount,"Amount");
	HX_STACK_ARG(ShowDecimal,"ShowDecimal");
	HX_STACK_ARG(EnglishStyle,"EnglishStyle");
{
		HX_STACK_LINE(122)
		int helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(123)
		int amount = ::Math_obj::floor(Amount);		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(124)
		::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
		HX_STACK_LINE(125)
		::String comma = HX_CSTRING("");		HX_STACK_VAR(comma,"comma");
		HX_STACK_LINE(126)
		::String zeroes = HX_CSTRING("");		HX_STACK_VAR(zeroes,"zeroes");
		HX_STACK_LINE(127)
		while(((amount > (int)0))){
			HX_STACK_LINE(129)
			if (((bool((string.length > (int)0)) && bool((comma.length <= (int)0))))){
				HX_STACK_LINE(130)
				if ((EnglishStyle)){
					HX_STACK_LINE(132)
					comma = HX_CSTRING(",");
				}
				else{
					HX_STACK_LINE(136)
					comma = HX_CSTRING(".");
				}
			}
			HX_STACK_LINE(140)
			zeroes = HX_CSTRING("");
			HX_STACK_LINE(141)
			helper = (amount - (::Math_obj::floor((Float(amount) / Float((int)1000))) * (int)1000));
			HX_STACK_LINE(142)
			amount = ::Math_obj::floor((Float(amount) / Float((int)1000)));
			HX_STACK_LINE(143)
			if (((amount > (int)0))){
				HX_STACK_LINE(145)
				if (((helper < (int)100))){
					HX_STACK_LINE(146)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
				HX_STACK_LINE(149)
				if (((helper < (int)10))){
					HX_STACK_LINE(150)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
			}
			HX_STACK_LINE(154)
			string = (((zeroes + helper) + comma) + string);
		}
		HX_STACK_LINE(156)
		if ((ShowDecimal)){
			HX_STACK_LINE(158)
			amount = (::Std_obj::_int((Amount * (int)100)) - (::Std_obj::_int(Amount) * (int)100));
			HX_STACK_LINE(159)
			hx::AddEq(string,(((  ((EnglishStyle)) ? ::String(HX_CSTRING(".")) : ::String(HX_CSTRING(",")) )) + amount));
			HX_STACK_LINE(160)
			if (((amount < (int)10))){
				HX_STACK_LINE(161)
				hx::AddEq(string,HX_CSTRING("0"));
			}
		}
		HX_STACK_LINE(165)
		return string;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,formatMoney,return )


FlxStringUtil_obj::FlxStringUtil_obj()
{
}

void FlxStringUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxStringUtil);
	HX_MARK_END_CLASS();
}

void FlxStringUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxStringUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { return formatTime_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { return formatTicks_dyn(); }
		if (HX_FIELD_EQ(inName,"formatArray") ) { return formatArray_dyn(); }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { return formatMoney_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"formatFlxPoint") ) { return formatFlxPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"formatStringMap") ) { return formatStringMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxStringUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxStringUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("formatTicks"),
	HX_CSTRING("formatTime"),
	HX_CSTRING("formatArray"),
	HX_CSTRING("formatFlxPoint"),
	HX_CSTRING("formatStringMap"),
	HX_CSTRING("formatMoney"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

Class FlxStringUtil_obj::__mClass;

void FlxStringUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxStringUtil"), hx::TCanCast< FlxStringUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxStringUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
