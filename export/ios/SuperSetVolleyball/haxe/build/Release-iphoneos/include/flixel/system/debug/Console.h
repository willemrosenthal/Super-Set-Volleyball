#ifndef INCLUDED_flixel_system_debug_Console
#define INCLUDED_flixel_system_debug_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/system/debug/Window.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,FocusEvent)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS3(flixel,system,debug,Console)
HX_DECLARE_CLASS3(flixel,system,debug,Window)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Console_obj : public ::flixel::system::debug::Window_obj{
	public:
		typedef ::flixel::system::debug::Window_obj super;
		typedef Console_obj OBJ_;
		Console_obj();
		Void __construct(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds);

	public:
		static hx::ObjectPtr< Console_obj > __new(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Console_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Console"); }

		virtual Void updateSize( );

		virtual Void destroy( );

		virtual Void registerFunction( ::String FunctionAlias,Dynamic Function);
		Dynamic registerFunction_dyn();

		virtual Void registerObject( ::String ObjectAlias,Dynamic AnyObject);
		Dynamic registerObject_dyn();

		virtual Void addCommand( ::String Command,Dynamic AnyObject,Dynamic Function,::String Alt);
		Dynamic addCommand_dyn();

		virtual ::String getNextCommand( );
		Dynamic getNextCommand_dyn();

		virtual ::String getPreviousCommand( );
		Dynamic getPreviousCommand_dyn();

		virtual ::String filterDigits( ::String str);
		Dynamic filterDigits_dyn();

		virtual Void overrideDefaultSelection( ::flash::events::Event e);
		Dynamic overrideDefaultSelection_dyn();

		virtual bool callFunction( Dynamic obj,Dynamic func,Dynamic args,::String cmd);
		Dynamic callFunction_dyn();

		virtual Void processCommand( );
		Dynamic processCommand_dyn();

		virtual Void onKeyPress( ::flash::events::KeyboardEvent e);
		Dynamic onKeyPress_dyn();

		virtual Void onFocusLost( ::flash::events::FocusEvent e);
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( ::flash::events::FocusEvent e);
		Dynamic onFocus_dyn();

		::String defaultText;
		int historyMax;
		int historyIndex;
		Array< ::String > cmdHistory;
		Array< ::Dynamic > objectStack;
		::haxe::ds::StringMap registeredFunctions;
		::haxe::ds::StringMap registeredObjects;
		::haxe::ds::StringMap cmdObjects;
		::haxe::ds::StringMap cmdFunctions;
		::flash::text::TextField _input;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Console */ 
