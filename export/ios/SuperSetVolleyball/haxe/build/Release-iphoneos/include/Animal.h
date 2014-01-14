#ifndef INCLUDED_Animal
#define INCLUDED_Animal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Animal)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IDestroyable)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitter)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Animal_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Animal_obj OBJ_;
		Animal_obj();
		Void __construct(Float X,Float Y);

	public:
		static hx::ObjectPtr< Animal_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Animal_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Animal"); }

		virtual Void emitter( );
		Dynamic emitter_dyn();

		virtual Void swimCheck( );
		Dynamic swimCheck_dyn();

		int loc;
		virtual Void update( );

		Float moveDifY;
		Float moveDifX;
		virtual Void joinParade( );
		Dynamic joinParade_dyn();

		bool still;
		::String afacing;
		::flixel::util::FlxPoint goTo;
		::flixel::util::FlxPoint lastPos;
		bool sink;
		bool swimming;
		::flixel::effects::particles::FlxEmitter music;
		bool musicOn;
		int wTimerMax;
		int wTimer;
		bool wander;
		int fd;
		int linePlace;
		bool inParade;
		bool pickedUp;
		int followDistance;
		Float vy;
		Float vx;
		Float velocityMax;
};


#endif /* INCLUDED_Animal */ 
