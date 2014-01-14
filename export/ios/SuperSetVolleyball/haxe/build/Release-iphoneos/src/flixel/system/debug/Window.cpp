#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Window_obj::__construct(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{
HX_STACK_PUSH("Window::new","flixel/system/debug/Window.hx",118);
bool Resizable = __o_Resizable.Default(true);
{
	HX_STACK_LINE(119)
	super::__construct();
	HX_STACK_LINE(121)
	this->_width = ::Std_obj::_int(::Math_obj::abs(Width));
	HX_STACK_LINE(122)
	this->_height = ::Std_obj::_int(::Math_obj::abs(Height));
	HX_STACK_LINE(123)
	this->updateBounds(Bounds);
	HX_STACK_LINE(124)
	this->_drag = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(126)
	this->_resizable = Resizable;
	HX_STACK_LINE(128)
	this->_shadow = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new((int)1,(int)2,true,(int)-16777216,null()),null(),null());
	HX_STACK_LINE(129)
	this->addChild(this->_shadow);
	HX_STACK_LINE(130)
	this->_background = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new((int)1,(int)1,true,(int)-580952225,null()),null(),null());
	HX_STACK_LINE(131)
	this->_background->set_y((int)15);
	HX_STACK_LINE(132)
	this->addChild(this->_background);
	HX_STACK_LINE(133)
	this->_header = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new((int)1,(int)15,true,(int)-1442840576,null()),null(),null());
	HX_STACK_LINE(134)
	this->addChild(this->_header);
	HX_STACK_LINE(136)
	this->_title = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(137)
	this->_title->set_x((int)2);
	HX_STACK_LINE(138)
	this->_title->set_y((int)-1);
	HX_STACK_LINE(139)
	this->_title->set_alpha(0.8);
	HX_STACK_LINE(140)
	this->_title->set_height((int)20);
	HX_STACK_LINE(141)
	this->_title->set_selectable(false);
	HX_STACK_LINE(142)
	this->_title->set_multiline(false);
	HX_STACK_LINE(143)
	this->_title->set_embedFonts(true);
	HX_STACK_LINE(144)
	this->_title->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEBUGGER,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(145)
	this->_title->set_text(Title);
	HX_STACK_LINE(146)
	this->addChild(this->_title);
	HX_STACK_LINE(148)
	if (((IconPath != null()))){
		HX_STACK_LINE(150)
		::flash::display::Bitmap _icon = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(IconPath,null()),null(),null());		HX_STACK_VAR(_icon,"_icon");
		HX_STACK_LINE(151)
		_icon->set_x((int)5);
		HX_STACK_LINE(152)
		_icon->set_y((int)2);
		HX_STACK_LINE(153)
		_icon->set_alpha(0.8);
		HX_STACK_LINE(154)
		this->_title->set_x(((_icon->get_x() + _icon->get_width()) + (int)2));
		HX_STACK_LINE(155)
		this->addChild(_icon);
	}
	HX_STACK_LINE(158)
	if ((this->_resizable)){
		HX_STACK_LINE(160)
		this->_handle = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("flixel/img/debugger/windowHandle.png"),false),null(),null());
		HX_STACK_LINE(161)
		this->addChild(this->_handle);
	}
	HX_STACK_LINE(164)
	if (((bool((this->_width != (int)0)) || bool((this->_height != (int)0))))){
		HX_STACK_LINE(165)
		this->updateSize();
	}
	HX_STACK_LINE(168)
	this->bound();
	HX_STACK_LINE(170)
	this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->init_dyn(),null(),null(),null());
	HX_STACK_LINE(172)
	this->_id = (::flixel::system::debug::Window_obj::WINDOW_AMOUNT)++;
	HX_STACK_LINE(173)
	if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("windowSettings"),true) != null()))){
		HX_STACK_LINE(174)
		this->set_visible(::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("windowSettings"),true)->__GetItem(this->_id));
	}
	else{
		HX_STACK_LINE(178)
		::flixel::FlxG_obj::save->data->__FieldRef(HX_CSTRING("windowSettings")) = Array_obj< bool >::__new();
	}
}
;
	return null();
}

Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(Title,IconPath,Width,Height,__o_Resizable,Bounds);
	return result;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Window_obj::toggleVisibility( ){
{
		HX_STACK_PUSH("Window::toggleVisibility","flixel/system/debug/Window.hx",383);
		HX_STACK_THIS(this);
		HX_STACK_LINE(384)
		this->set_visible(!(this->get_visible()));
		HX_STACK_LINE(385)
		hx::IndexRef((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("windowSettings"),true)).mPtr,this->_id) = this->get_visible();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,toggleVisibility,(void))

Void Window_obj::updateBounds( ::flash::geom::Rectangle Bounds){
{
		HX_STACK_PUSH("Window::updateBounds","flixel/system/debug/Window.hx",369);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Bounds,"Bounds");
		HX_STACK_LINE(370)
		this->_bounds = Bounds;
		HX_STACK_LINE(371)
		this->minSize = ::flash::geom::Point_obj::__new((int)50,(int)30);
		HX_STACK_LINE(372)
		if (((this->_bounds != null()))){
			HX_STACK_LINE(373)
			this->maxSize = ::flash::geom::Point_obj::__new(this->_bounds->width,this->_bounds->height);
		}
		else{
			HX_STACK_LINE(377)
			this->maxSize = ::flash::geom::Point_obj::__new(1.79e+308,1.79e+308);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,updateBounds,(void))

Void Window_obj::updateSize( ){
{
		HX_STACK_PUSH("Window::updateSize","flixel/system/debug/Window.hx",351);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Float Block( ::flixel::system::debug::Window_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/debug/Window.hx",352);
				{
					HX_STACK_LINE(352)
					Float Value = __this->_width;		HX_STACK_VAR(Value,"Value");
					Float Min = __this->minSize->x;		HX_STACK_VAR(Min,"Min");
					Float Max = __this->maxSize->x;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(352)
					Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(352)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(352)
		this->_width = ::Std_obj::_int(_Function_1_1::Block(this));
		struct _Function_1_2{
			inline static Float Block( ::flixel::system::debug::Window_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/debug/Window.hx",353);
				{
					HX_STACK_LINE(353)
					Float Value = __this->_height;		HX_STACK_VAR(Value,"Value");
					Float Min = __this->minSize->y;		HX_STACK_VAR(Min,"Min");
					Float Max = __this->maxSize->y;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(353)
					Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(353)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(353)
		this->_height = ::Std_obj::_int(_Function_1_2::Block(this));
		HX_STACK_LINE(355)
		this->_header->set_scaleX(this->_width);
		HX_STACK_LINE(356)
		this->_background->set_scaleX(this->_width);
		HX_STACK_LINE(357)
		this->_background->set_scaleY((this->_height - (int)15));
		HX_STACK_LINE(358)
		this->_shadow->set_scaleX(this->_width);
		HX_STACK_LINE(359)
		this->_shadow->set_y(this->_height);
		HX_STACK_LINE(360)
		this->_title->set_width((this->_width - (int)4));
		HX_STACK_LINE(361)
		if ((this->_resizable)){
			HX_STACK_LINE(363)
			this->_handle->set_x((this->_width - this->_handle->get_width()));
			HX_STACK_LINE(364)
			this->_handle->set_y((this->_height - this->_handle->get_height()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,updateSize,(void))

Void Window_obj::bound( ){
{
		HX_STACK_PUSH("Window::bound","flixel/system/debug/Window.hx",339);
		HX_STACK_THIS(this);
		HX_STACK_LINE(339)
		if (((this->_bounds != null()))){
			struct _Function_2_1{
				inline static Float Block( ::flixel::system::debug::Window_obj *__this){
					HX_STACK_PUSH("*::closure","flixel/system/debug/Window.hx",342);
					{
						HX_STACK_LINE(342)
						Float Value = __this->get_x();		HX_STACK_VAR(Value,"Value");
						Float Min = __this->_bounds->get_left();		HX_STACK_VAR(Min,"Min");
						Float Max = (__this->_bounds->get_right() - __this->_width);		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(342)
						Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(342)
						return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(342)
			this->set_x(_Function_2_1::Block(this));
			struct _Function_2_2{
				inline static Float Block( ::flixel::system::debug::Window_obj *__this){
					HX_STACK_PUSH("*::closure","flixel/system/debug/Window.hx",343);
					{
						HX_STACK_LINE(343)
						Float Value = __this->get_y();		HX_STACK_VAR(Value,"Value");
						Float Min = __this->_bounds->get_top();		HX_STACK_VAR(Min,"Min");
						Float Max = (__this->_bounds->get_bottom() - __this->_height);		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(343)
						Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(343)
						return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
					}
					return null();
				}
			};
			HX_STACK_LINE(343)
			this->set_y(_Function_2_2::Block(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,bound,(void))

Void Window_obj::onMouseUp( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("Window::onMouseUp","flixel/system/debug/Window.hx",328);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(329)
		this->_dragging = false;
		HX_STACK_LINE(330)
		this->_resizing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseUp,(void))

Void Window_obj::onMouseDown( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("Window::onMouseDown","flixel/system/debug/Window.hx",307);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(307)
		if ((this->_overHeader)){
			HX_STACK_LINE(310)
			this->get_parent()->addChild(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(311)
			this->_dragging = true;
			HX_STACK_LINE(312)
			this->_drag->x = this->get_mouseX();
			HX_STACK_LINE(313)
			this->_drag->y = this->get_mouseY();
		}
		else{
			HX_STACK_LINE(315)
			if ((this->_overHandle)){
				HX_STACK_LINE(317)
				this->_resizing = true;
				HX_STACK_LINE(318)
				this->_drag->x = (this->_width - this->get_mouseX());
				HX_STACK_LINE(319)
				this->_drag->y = (this->_height - this->get_mouseY());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseDown,(void))

Void Window_obj::onMouseMove( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("Window::onMouseMove","flixel/system/debug/Window.hx",271);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(272)
		if ((!(this->get_parent()->get_visible()))){
			HX_STACK_LINE(274)
			this->_overHandle = this->_overHeader = false;
			HX_STACK_LINE(275)
			return null();
		}
		HX_STACK_LINE(278)
		if ((this->_dragging)){
			HX_STACK_LINE(280)
			this->_overHeader = true;
			HX_STACK_LINE(281)
			this->reposition((this->get_parent()->get_mouseX() - this->_drag->x),(this->get_parent()->get_mouseY() - this->_drag->y));
		}
		else{
			HX_STACK_LINE(283)
			if ((this->_resizing)){
				HX_STACK_LINE(285)
				this->_overHandle = true;
				HX_STACK_LINE(286)
				this->resize((this->get_mouseX() - this->_drag->x),(this->get_mouseY() - this->_drag->y));
			}
			else{
				HX_STACK_LINE(288)
				if (((bool((bool((bool((this->get_mouseX() >= (int)0)) && bool((this->get_mouseX() <= this->_width)))) && bool((this->get_mouseY() >= (int)0)))) && bool((this->get_mouseY() <= this->_height))))){
					HX_STACK_LINE(290)
					this->_overHeader = (bool((this->get_mouseX() <= this->_header->get_width())) && bool((this->get_mouseY() <= this->_header->get_height())));
					HX_STACK_LINE(291)
					if ((this->_resizable)){
						HX_STACK_LINE(292)
						this->_overHandle = (bool((this->get_mouseX() >= (this->_width - this->_handle->get_width()))) && bool((this->get_mouseY() >= (this->_height - this->_handle->get_height()))));
					}
				}
				else{
					HX_STACK_LINE(297)
					this->_overHandle = this->_overHeader = false;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseMove,(void))

Void Window_obj::init( ::flash::events::Event E){
{
		HX_STACK_PUSH("Window::init","flixel/system/debug/Window.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(254)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(256)
			return null();
		}
		HX_STACK_LINE(259)
		this->removeEventListener(::flash::events::Event_obj::ENTER_FRAME,this->init_dyn(),null());
		HX_STACK_LINE(261)
		this->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(262)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(263)
		this->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,init,(void))

Void Window_obj::reposition( Float X,Float Y){
{
		HX_STACK_PUSH("Window::reposition","flixel/system/debug/Window.hx",237);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(238)
		this->set_x(X);
		HX_STACK_LINE(239)
		this->set_y(Y);
		HX_STACK_LINE(240)
		this->bound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,reposition,(void))

Void Window_obj::resize( Float Width,Float Height){
{
		HX_STACK_PUSH("Window::resize","flixel/system/debug/Window.hx",225);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(226)
		this->_width = ::Std_obj::_int(::Math_obj::abs(Width));
		HX_STACK_LINE(227)
		this->_height = ::Std_obj::_int(::Math_obj::abs(Height));
		HX_STACK_LINE(228)
		this->updateSize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

Void Window_obj::destroy( ){
{
		HX_STACK_PUSH("Window::destroy","flixel/system/debug/Window.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_LINE(188)
		this->minSize = null();
		HX_STACK_LINE(189)
		this->maxSize = null();
		HX_STACK_LINE(190)
		this->_bounds = null();
		HX_STACK_LINE(191)
		if (((this->_shadow != null()))){
			HX_STACK_LINE(192)
			this->removeChild(this->_shadow);
		}
		HX_STACK_LINE(195)
		this->_shadow = null();
		HX_STACK_LINE(196)
		if (((this->_background != null()))){
			HX_STACK_LINE(197)
			this->removeChild(this->_background);
		}
		HX_STACK_LINE(200)
		this->_background = null();
		HX_STACK_LINE(201)
		if (((this->_header != null()))){
			HX_STACK_LINE(202)
			this->removeChild(this->_header);
		}
		HX_STACK_LINE(205)
		this->_header = null();
		HX_STACK_LINE(206)
		if (((this->_title != null()))){
			HX_STACK_LINE(207)
			this->removeChild(this->_title);
		}
		HX_STACK_LINE(210)
		this->_title = null();
		HX_STACK_LINE(211)
		if (((this->_handle != null()))){
			HX_STACK_LINE(212)
			this->removeChild(this->_handle);
		}
		HX_STACK_LINE(215)
		this->_handle = null();
		HX_STACK_LINE(216)
		this->_drag = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,destroy,(void))

int Window_obj::WINDOW_AMOUNT;


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(_resizable,"_resizable");
	HX_MARK_MEMBER_NAME(_resizing,"_resizing");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_drag,"_drag");
	HX_MARK_MEMBER_NAME(_overHandle,"_overHandle");
	HX_MARK_MEMBER_NAME(_overHeader,"_overHeader");
	HX_MARK_MEMBER_NAME(_handle,"_handle");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(minSize,"minSize");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(_resizable,"_resizable");
	HX_VISIT_MEMBER_NAME(_resizing,"_resizing");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_drag,"_drag");
	HX_VISIT_MEMBER_NAME(_overHandle,"_overHandle");
	HX_VISIT_MEMBER_NAME(_overHeader,"_overHeader");
	HX_VISIT_MEMBER_NAME(_handle,"_handle");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(minSize,"minSize");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Window_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"_drag") ) { return _drag; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"_title") ) { return _title; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_handle") ) { return _handle; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		if (HX_FIELD_EQ(inName,"_header") ) { return _header; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"minSize") ) { return minSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_resizing") ) { return _resizing; }
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"reposition") ) { return reposition_dyn(); }
		if (HX_FIELD_EQ(inName,"_resizable") ) { return _resizable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { return _overHandle; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { return _overHeader; }
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WINDOW_AMOUNT") ) { return WINDOW_AMOUNT; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"toggleVisibility") ) { return toggleVisibility_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { _drag=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_handle") ) { _handle=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minSize") ) { minSize=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resizing") ) { _resizing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { _resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_overHandle") ) { _overHandle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { _overHeader=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WINDOW_AMOUNT") ) { WINDOW_AMOUNT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_id"));
	outFields->push(HX_CSTRING("_resizable"));
	outFields->push(HX_CSTRING("_resizing"));
	outFields->push(HX_CSTRING("_dragging"));
	outFields->push(HX_CSTRING("_drag"));
	outFields->push(HX_CSTRING("_overHandle"));
	outFields->push(HX_CSTRING("_overHeader"));
	outFields->push(HX_CSTRING("_handle"));
	outFields->push(HX_CSTRING("_title"));
	outFields->push(HX_CSTRING("_shadow"));
	outFields->push(HX_CSTRING("_header"));
	outFields->push(HX_CSTRING("_background"));
	outFields->push(HX_CSTRING("_bounds"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("minSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("WINDOW_AMOUNT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toggleVisibility"),
	HX_CSTRING("updateBounds"),
	HX_CSTRING("updateSize"),
	HX_CSTRING("bound"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("init"),
	HX_CSTRING("reposition"),
	HX_CSTRING("resize"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_id"),
	HX_CSTRING("_resizable"),
	HX_CSTRING("_resizing"),
	HX_CSTRING("_dragging"),
	HX_CSTRING("_drag"),
	HX_CSTRING("_overHandle"),
	HX_CSTRING("_overHeader"),
	HX_CSTRING("_handle"),
	HX_CSTRING("_title"),
	HX_CSTRING("_shadow"),
	HX_CSTRING("_header"),
	HX_CSTRING("_background"),
	HX_CSTRING("_bounds"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("minSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Window_obj::WINDOW_AMOUNT,"WINDOW_AMOUNT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Window_obj::WINDOW_AMOUNT,"WINDOW_AMOUNT");
};

Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Window"), hx::TCanCast< Window_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Window_obj::__boot()
{
	WINDOW_AMOUNT= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
