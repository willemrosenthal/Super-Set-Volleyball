#ifndef INCLUDED_Ball
#define INCLUDED_Ball

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Ball_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Ball_obj OBJ_;
		Ball_obj();
		Void __construct(Float X,Float Y);

	public:
		static hx::ObjectPtr< Ball_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Ball_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ball"); }

		virtual Void addVelocity( Float xSpeed,Float ySpeed);
		Dynamic addVelocity_dyn();

		virtual Void throwBall( );
		Dynamic throwBall_dyn();

		Float ySpeed;
		Float xSpeed;
		Float hyp;
		Float yDif;
		Float xDif;
		virtual Void fingerControls( );
		Dynamic fingerControls_dyn();

		virtual bool pressRightSide( );
		Dynamic pressRightSide_dyn();

		virtual Void update( );

		int justHit;
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


#endif /* INCLUDED_Ball */ 
