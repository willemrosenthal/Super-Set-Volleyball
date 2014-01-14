#ifndef INCLUDED_flixel_system_debug_Stats
#define INCLUDED_flixel_system_debug_Stats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/system/debug/Window.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS3(flixel,system,debug,Stats)
HX_DECLARE_CLASS3(flixel,system,debug,Window)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Stats_obj : public ::flixel::system::debug::Window_obj{
	public:
		typedef ::flixel::system::debug::Window_obj super;
		typedef Stats_obj OBJ_;
		Stats_obj();
		Void __construct(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds);

	public:
		static hx::ObjectPtr< Stats_obj > __new(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stats_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stats"); }

		virtual Void drawCalls( int Drawcalls);
		Dynamic drawCalls_dyn();

		virtual Void visibleObjects( int Count);
		Dynamic visibleObjects_dyn();

		virtual Void activeObjects( int Count);
		Dynamic activeObjects_dyn();

		virtual Void flash( int Time);
		Dynamic flash_dyn();

		virtual Void flixelDraw( int Time);
		Dynamic flixelDraw_dyn();

		virtual Void flixelUpdate( int Time);
		Dynamic flixelUpdate_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );

		virtual ::flash::text::TextField createTextField( Dynamic Alignment,int Color);
		Dynamic createTextField_dyn();

		int _drawCallsMarker;
		Array< int > _drawCalls;
		int _flashMarker;
		Array< Float > _flash;
		int _activeObjectMarker;
		Array< int > _activeObject;
		int _visibleObjectMarker;
		Array< int > _visibleObject;
		int _drawMarker;
		Array< int > _draw;
		int _updateMarker;
		Array< int > _update;
		int _updateTimer;
		int _lastTime;
		::flash::text::TextField _text;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Stats */ 
