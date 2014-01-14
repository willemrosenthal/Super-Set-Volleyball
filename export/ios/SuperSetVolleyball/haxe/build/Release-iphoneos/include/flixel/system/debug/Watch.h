#ifndef INCLUDED_flixel_system_debug_Watch
#define INCLUDED_flixel_system_debug_Watch

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
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS3(flixel,system,debug,Watch)
HX_DECLARE_CLASS3(flixel,system,debug,WatchEntry)
HX_DECLARE_CLASS3(flixel,system,debug,Window)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Watch_obj : public ::flixel::system::debug::Window_obj{
	public:
		typedef ::flixel::system::debug::Window_obj super;
		typedef Watch_obj OBJ_;
		Watch_obj();
		Void __construct(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds);

	public:
		static hx::ObjectPtr< Watch_obj > __new(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Watch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Watch"); }

		virtual Void updateSize( );

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void removeEntry( ::flixel::system::debug::WatchEntry Entry,int Index);
		Dynamic removeEntry_dyn();

		virtual Void remove( Dynamic AnyObject,::String VariableName,::String QuickWatchName);
		Dynamic remove_dyn();

		virtual Void updateQuickWatch( ::String Name,Dynamic NewValue);
		Dynamic updateQuickWatch_dyn();

		virtual Void add( Dynamic AnyObject,::String VariableName,::String DisplayName);
		Dynamic add_dyn();

		virtual Void destroy( );

		::haxe::ds::StringMap _quickWatchList;
		Array< ::Dynamic > _watching;
		::flash::display::Sprite _values;
		::flash::display::Sprite _names;
		bool editing;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Watch */ 
