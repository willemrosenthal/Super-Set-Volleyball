#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Net)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(PlayerA)
HX_DECLARE_CLASS0(PlayerB)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(::String __o_Level);

	public:
		static hx::ObjectPtr< PlayState_obj > __new(::String __o_Level);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		virtual Void netHit( ::Ball ball,::Net net);
		Dynamic netHit_dyn();

		virtual Void touchBall( ::Ball ball,::flixel::FlxSprite player);
		Dynamic touchBall_dyn();

		virtual Void update( );

		virtual Void create( );

		virtual Void clearData( );
		Dynamic clearData_dyn();

		::Net net;
		::PlayerB player2;
		::PlayerA player;
		::Ball ball;
};


#endif /* INCLUDED_PlayState */ 
