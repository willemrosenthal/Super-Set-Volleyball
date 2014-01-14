#ifndef INCLUDED_PlayerB
#define INCLUDED_PlayerB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(PlayerB)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  PlayerB_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef PlayerB_obj OBJ_;
		PlayerB_obj();
		Void __construct(Float X,Float Y);

	public:
		static hx::ObjectPtr< PlayerB_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlayerB_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayerB"); }

		virtual Void addVelocity( Float xSpeed,Float ySpeed);
		Dynamic addVelocity_dyn();

		virtual Void jump( );
		Dynamic jump_dyn();

		Float ySpeed;
		Float xSpeed;
		Float hyp;
		Float yDif;
		Float xDif;
		virtual Void slowDown( );
		Dynamic slowDown_dyn();

		virtual Void fingerControls( );
		Dynamic fingerControls_dyn();

		virtual bool pressRightSide( );
		Dynamic pressRightSide_dyn();

		virtual Void spike( );
		Dynamic spike_dyn();

		virtual Void update( );

		int spiking;
		bool jumping;
		Float ignoreRange;
		::flixel::util::FlxPoint mouseB;
		::flixel::util::FlxPoint mouseA;
		bool mouseDown;
		Float speedMulti;
		Float maxSpeedMod;
		Float maxSpeed;
		Float friction;
		bool stickToScreen;
};


#endif /* INCLUDED_PlayerB */ 
