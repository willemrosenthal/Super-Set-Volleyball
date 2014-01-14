#ifndef INCLUDED_flixel_system_FlxSplash
#define INCLUDED_flixel_system_FlxSplash

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,system,FlxSplash)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxSplash_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef FlxSplash_obj OBJ_;
		FlxSplash_obj();
		Void __construct(::Class NextState);

	public:
		static hx::ObjectPtr< FlxSplash_obj > __new(::Class NextState);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSplash_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSplash"); }

		virtual Void onComplete( ::flixel::tweens::FlxTween Tween);
		Dynamic onComplete_dyn();

		virtual Void drawLightBlue( );
		Dynamic drawLightBlue_dyn();

		virtual Void drawBlue( );
		Dynamic drawBlue_dyn();

		virtual Void drawRed( );
		Dynamic drawRed_dyn();

		virtual Void drawYellow( );
		Dynamic drawYellow_dyn();

		virtual Void drawGreen( );
		Dynamic drawGreen_dyn();

		virtual Void timerCallback( ::flixel::util::FlxTimer Timer);
		Dynamic timerCallback_dyn();

		virtual Void create( );

		bool _cachedAutoPause;
		bool _cachedTimestep;
		int _cachedBgColor;
		int _curPart;
		Dynamic _functions;
		Array< int > _colors;
		Array< Float > _times;
		::flash::text::TextField _text;
		::flash::display::Graphics _gfx;
		::flash::display::Sprite _sprite;
		::Class _nextState;
};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxSplash */ 
