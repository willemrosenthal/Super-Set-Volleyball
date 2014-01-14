#ifndef INCLUDED_flixel_system_replay_MouseRecord
#define INCLUDED_flixel_system_replay_MouseRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,replay,MouseRecord)
namespace flixel{
namespace system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES  MouseRecord_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseRecord_obj OBJ_;
		MouseRecord_obj();
		Void __construct(int X,int Y,int Button,int Wheel);

	public:
		static hx::ObjectPtr< MouseRecord_obj > __new(int X,int Y,int Button,int Wheel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MouseRecord_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MouseRecord"); }

		int wheel;
		int button;
		int y;
		int x;
};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_MouseRecord */ 
