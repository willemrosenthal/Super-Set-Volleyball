#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_errors_ArgumentError
#include <flash/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_FocusEvent
#include <flash/events/FocusEvent.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldType
#include <flash/text/TextFieldType.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_ui_Keyboard
#include <flash/ui/Keyboard.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Console
#include <flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleCommands
#include <flixel/system/debug/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_input_IFlxInput
#include <flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_input_keyboard_FlxKeyboard
#include <flixel/system/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Console_obj::__construct(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{
HX_STACK_PUSH("Console::new","flixel/system/debug/Console.hx",23);
bool Resizable = __o_Resizable.Default(true);
{
	HX_STACK_LINE(54)
	this->defaultText = HX_CSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)");
	HX_STACK_LINE(52)
	this->historyMax = (int)25;
	HX_STACK_LINE(51)
	this->historyIndex = (int)0;
	HX_STACK_LINE(67)
	super::__construct(Title,IconPath,Width,Height,Resizable,Bounds);
	HX_STACK_LINE(69)
	this->cmdFunctions = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(70)
	this->cmdObjects = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(72)
	this->registeredObjects = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(73)
	this->registeredFunctions = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(75)
	this->objectStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(77)
	this->cmdHistory = Array_obj< ::String >::__new();
	HX_STACK_LINE(80)
	if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("history"),true) != null()))){
		HX_STACK_LINE(81)
		this->cmdHistory = ::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("history"),true);
		HX_STACK_LINE(82)
		this->historyIndex = this->cmdHistory->length;
	}
	else{
		HX_STACK_LINE(85)
		this->cmdHistory = Array_obj< ::String >::__new();
		HX_STACK_LINE(86)
		::flixel::FlxG_obj::save->data->__FieldRef(HX_CSTRING("history")) = this->cmdHistory;
	}
	HX_STACK_LINE(90)
	this->_input = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(91)
	this->_input->set_type(::flash::text::TextFieldType_obj::INPUT);
	HX_STACK_LINE(92)
	this->_input->set_embedFonts(true);
	HX_STACK_LINE(93)
	this->_input->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEBUGGER,(int)13,(int)16777215,false,false,false,null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(94)
	this->_input->set_text(this->defaultText);
	HX_STACK_LINE(95)
	this->_input->set_width((this->_width - (int)4));
	HX_STACK_LINE(96)
	this->_input->set_height((this->_height - (int)15));
	HX_STACK_LINE(97)
	this->_input->set_x((int)2);
	HX_STACK_LINE(98)
	this->_input->set_y((int)15);
	HX_STACK_LINE(99)
	this->addChild(this->_input);
	HX_STACK_LINE(101)
	this->_input->addEventListener(::flash::events::FocusEvent_obj::FOCUS_IN,this->onFocus_dyn(),null(),null(),null());
	HX_STACK_LINE(102)
	this->_input->addEventListener(::flash::events::FocusEvent_obj::FOCUS_OUT,this->onFocusLost_dyn(),null(),null(),null());
	HX_STACK_LINE(103)
	this->_input->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyPress_dyn(),null(),null(),null());
	HX_STACK_LINE(107)
	::flixel::system::debug::ConsoleCommands commands = ::flixel::system::debug::ConsoleCommands_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(commands,"commands");
}
;
	return null();
}

Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new(::String Title,::String IconPath,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::flash::geom::Rectangle Bounds)
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct(Title,IconPath,Width,Height,__o_Resizable,Bounds);
	return result;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Console_obj::updateSize( ){
{
		HX_STACK_PUSH("Console::updateSize","flixel/system/debug/Console.hx",399);
		HX_STACK_THIS(this);
		HX_STACK_LINE(400)
		this->super::updateSize();
		HX_STACK_LINE(402)
		this->_input->set_width((this->_width - (int)4));
		HX_STACK_LINE(403)
		this->_input->set_height((this->_height - (int)15));
	}
return null();
}


Void Console_obj::destroy( ){
{
		HX_STACK_PUSH("Console::destroy","flixel/system/debug/Console.hx",375);
		HX_STACK_THIS(this);
		HX_STACK_LINE(376)
		this->super::destroy();
		HX_STACK_LINE(378)
		this->_input->removeEventListener(::flash::events::FocusEvent_obj::FOCUS_IN,this->onFocus_dyn(),null());
		HX_STACK_LINE(379)
		this->_input->removeEventListener(::flash::events::FocusEvent_obj::FOCUS_OUT,this->onFocusLost_dyn(),null());
		HX_STACK_LINE(380)
		this->_input->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyPress_dyn(),null());
		HX_STACK_LINE(382)
		if (((this->_input != null()))){
			HX_STACK_LINE(383)
			this->removeChild(this->_input);
		}
		HX_STACK_LINE(384)
		this->_input = null();
		HX_STACK_LINE(386)
		this->cmdFunctions = null();
		HX_STACK_LINE(387)
		this->cmdObjects = null();
		HX_STACK_LINE(389)
		this->registeredObjects = null();
		HX_STACK_LINE(390)
		this->registeredFunctions = null();
		HX_STACK_LINE(392)
		this->objectStack = null();
	}
return null();
}


Void Console_obj::registerFunction( ::String FunctionAlias,Dynamic Function){
{
		HX_STACK_PUSH("Console::registerFunction","flixel/system/debug/Console.hx",367);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FunctionAlias,"FunctionAlias");
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(368)
		Dynamic value = Function;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(368)
		this->registeredFunctions->set(FunctionAlias,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerFunction,(void))

Void Console_obj::registerObject( ::String ObjectAlias,Dynamic AnyObject){
{
		HX_STACK_PUSH("Console::registerObject","flixel/system/debug/Console.hx",357);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ObjectAlias,"ObjectAlias");
		HX_STACK_ARG(AnyObject,"AnyObject");
		HX_STACK_LINE(358)
		Dynamic value = AnyObject;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(358)
		this->registeredObjects->set(ObjectAlias,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerObject,(void))

Void Console_obj::addCommand( ::String Command,Dynamic AnyObject,Dynamic Function,::String __o_Alt){
::String Alt = __o_Alt.Default(HX_CSTRING(""));
	HX_STACK_PUSH("Console::addCommand","flixel/system/debug/Console.hx",341);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Command,"Command");
	HX_STACK_ARG(AnyObject,"AnyObject");
	HX_STACK_ARG(Function,"Function");
	HX_STACK_ARG(Alt,"Alt");
{
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			Dynamic value = Function;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(342)
			this->cmdFunctions->set(Command,value);
		}
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			Dynamic value = AnyObject;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(343)
			this->cmdObjects->set(Command,value);
		}
		HX_STACK_LINE(345)
		if (((Alt != HX_CSTRING("")))){
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				Dynamic value = Function;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(346)
				this->cmdFunctions->set(Alt,value);
			}
			HX_STACK_LINE(347)
			{
				HX_STACK_LINE(347)
				Dynamic value = AnyObject;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(347)
				this->cmdObjects->set(Alt,value);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Console_obj,addCommand,(void))

::String Console_obj::getNextCommand( ){
	HX_STACK_PUSH("Console::getNextCommand","flixel/system/debug/Console.hx",323);
	HX_STACK_THIS(this);
	HX_STACK_LINE(324)
	if (((this->historyIndex < this->cmdHistory->length))){
		HX_STACK_LINE(325)
		(this->historyIndex)++;
	}
	HX_STACK_LINE(327)
	if (((this->cmdHistory->__get(this->historyIndex) != null()))){
		HX_STACK_LINE(328)
		return this->cmdHistory->__get(this->historyIndex);
	}
	else{
		HX_STACK_LINE(330)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(327)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,getNextCommand,return )

::String Console_obj::getPreviousCommand( ){
	HX_STACK_PUSH("Console::getPreviousCommand","flixel/system/debug/Console.hx",315);
	HX_STACK_THIS(this);
	HX_STACK_LINE(316)
	if (((this->historyIndex > (int)0))){
		HX_STACK_LINE(317)
		(this->historyIndex)--;
	}
	HX_STACK_LINE(319)
	return this->cmdHistory->__get(this->historyIndex);
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,getPreviousCommand,return )

::String Console_obj::filterDigits( ::String str){
	HX_STACK_PUSH("Console::filterDigits","flixel/system/debug/Console.hx",305);
	HX_STACK_THIS(this);
	HX_STACK_ARG(str,"str");
	HX_STACK_LINE(306)
	::StringBuf out = ::StringBuf_obj::__new();		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = str.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		while(((_g1 < _g))){
			HX_STACK_LINE(307)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(308)
			Dynamic c = str.charCodeAt(i);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(309)
			if (((bool((c >= (int)48)) && bool((c <= (int)57))))){
				HX_STACK_LINE(309)
				int c1 = c;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(309)
				out->b->push(::String::fromCharCode(c1));
			}
		}
	}
	HX_STACK_LINE(311)
	return out->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,filterDigits,return )

Void Console_obj::overrideDefaultSelection( ::flash::events::Event e){
{
		HX_STACK_PUSH("Console::overrideDefaultSelection","flixel/system/debug/Console.hx",299);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(300)
		this->_input->setSelection(this->_input->get_text().length,this->_input->get_text().length);
		HX_STACK_LINE(301)
		this->removeEventListener(::flash::events::Event_obj::RENDER,this->overrideDefaultSelection_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,overrideDefaultSelection,(void))

bool Console_obj::callFunction( Dynamic obj,Dynamic func,Dynamic args,::String cmd){
	HX_STACK_PUSH("Console::callFunction","flixel/system/debug/Console.hx",245);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_ARG(func,"func");
	HX_STACK_ARG(args,"args");
	HX_STACK_ARG(cmd,"cmd");
	HX_STACK_LINE(245)
	try{
		HX_STACK_LINE(264)
		::Reflect_obj::callMethod(obj,func,args);
		HX_STACK_LINE(265)
		return true;
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::flash::errors::ArgumentError >() ){
			HX_STACK_BEGIN_CATCH
			::flash::errors::ArgumentError e = __e;{
				HX_STACK_LINE(269)
				if (((e->errorID == (int)1063))){
					HX_STACK_LINE(274)
					int expected = ::Std_obj::parseInt(this->filterDigits(e->message).charAt((int)4));		HX_STACK_VAR(expected,"expected");
					HX_STACK_LINE(277)
					if (((expected < args->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(280)
						Dynamic shortenedArgs = args->__Field(HX_CSTRING("slice"),true)((int)0,expected);		HX_STACK_VAR(shortenedArgs,"shortenedArgs");
						HX_STACK_LINE(282)
						::Reflect_obj::callMethod(obj,func,shortenedArgs);
					}
					else{
						HX_STACK_LINE(287)
						::flixel::FlxG_obj::log->error(((((HX_CSTRING("Console: Invalid number or parameters: ") + expected) + HX_CSTRING(" expected, ")) + args->__Field(HX_CSTRING("length"),true)) + HX_CSTRING(" passed")));
						HX_STACK_LINE(288)
						return false;
					}
					HX_STACK_LINE(291)
					return true;
				}
				HX_STACK_LINE(294)
				return false;
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(245)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Console_obj,callFunction,return )

Void Console_obj::processCommand( ){
{
		HX_STACK_PUSH("Console::processCommand","flixel/system/debug/Console.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_LINE(196)
		Dynamic args = ::StringTools_obj::rtrim(this->_input->get_text()).split(HX_CSTRING(" "));		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(197)
		::String command = args->__Field(HX_CSTRING("shift"),true)();		HX_STACK_VAR(command,"command");
		HX_STACK_LINE(199)
		Dynamic obj = this->cmdObjects->get(command);		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(200)
		Dynamic func = this->cmdFunctions->get(command);		HX_STACK_VAR(func,"func");
		HX_STACK_LINE(203)
		if (((func != null()))){
			HX_STACK_LINE(206)
			if (((this->getPreviousCommand() != this->_input->get_text()))){
				HX_STACK_LINE(209)
				this->cmdHistory->push(this->_input->get_text());
				HX_STACK_LINE(210)
				::flixel::FlxG_obj::save->flush(null(),null());
				HX_STACK_LINE(213)
				if (((this->cmdHistory->length > this->historyMax))){
					HX_STACK_LINE(214)
					this->cmdHistory->shift();
				}
			}
			HX_STACK_LINE(217)
			this->historyIndex = this->cmdHistory->length;
			HX_STACK_LINE(219)
			if ((::Reflect_obj::isFunction(func))){
				HX_STACK_LINE(222)
				if (((command == HX_CSTRING("log")))){
					HX_STACK_LINE(223)
					args = Dynamic( Array_obj<Dynamic>::__new().Add(args->__Field(HX_CSTRING("join"),true)(HX_CSTRING(" "))));
				}
				else{
					HX_STACK_LINE(226)
					if (((command == HX_CSTRING("call")))){
						HX_STACK_LINE(227)
						hx::IndexRef((args).mPtr,(int)1) = args->__Field(HX_CSTRING("slice"),true)((int)1,args->__Field(HX_CSTRING("length"),true));
					}
					else{
						HX_STACK_LINE(230)
						if (((bool((command == HX_CSTRING("create"))) || bool((command == HX_CSTRING("cr")))))){
							HX_STACK_LINE(231)
							hx::IndexRef((args).mPtr,(int)2) = args->__Field(HX_CSTRING("slice"),true)((int)2,args->__Field(HX_CSTRING("length"),true));
						}
					}
				}
				HX_STACK_LINE(233)
				this->callFunction(obj,func,args,command);
			}
			HX_STACK_LINE(236)
			this->_input->set_text(HX_CSTRING(""));
		}
		else{
			HX_STACK_LINE(239)
			::flixel::FlxG_obj::log->error(((HX_CSTRING("Console: Invalid command: '") + command) + HX_CSTRING("'")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,processCommand,(void))

Void Console_obj::onKeyPress( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Console::onKeyPress","flixel/system/debug/Console.hx",159);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(161)
		if (((bool((e->keyCode == ::flash::ui::Keyboard_obj::SPACE)) && bool((this->_input->get_text() == HX_CSTRING(" ")))))){
			HX_STACK_LINE(162)
			this->_input->set_text(HX_CSTRING(""));
		}
		HX_STACK_LINE(165)
		if (((bool((e->keyCode == ::flash::ui::Keyboard_obj::ENTER)) && bool((this->_input->get_text() != HX_CSTRING("")))))){
			HX_STACK_LINE(166)
			this->processCommand();
		}
		else{
			HX_STACK_LINE(169)
			if (((e->keyCode == ::flash::ui::Keyboard_obj::ESCAPE))){
				HX_STACK_LINE(170)
				::flixel::FlxG_obj::game->get_stage()->set_focus(null());
			}
			else{
				HX_STACK_LINE(173)
				if (((e->keyCode == ::flash::ui::Keyboard_obj::DELETE))){
					HX_STACK_LINE(174)
					this->_input->set_text(HX_CSTRING(""));
				}
				else{
					HX_STACK_LINE(177)
					if (((e->keyCode == ::flash::ui::Keyboard_obj::UP))){
						HX_STACK_LINE(178)
						if (((this->cmdHistory->length == (int)0))){
							HX_STACK_LINE(178)
							return null();
						}
						HX_STACK_LINE(180)
						this->_input->set_text(this->getPreviousCommand());
						HX_STACK_LINE(183)
						this->addEventListener(::flash::events::Event_obj::RENDER,this->overrideDefaultSelection_dyn(),false,(int)0,true);
						HX_STACK_LINE(184)
						::flixel::FlxG_obj::game->get_stage()->invalidate();
					}
					else{
						HX_STACK_LINE(187)
						if (((e->keyCode == ::flash::ui::Keyboard_obj::DOWN))){
							HX_STACK_LINE(188)
							if (((this->cmdHistory->length == (int)0))){
								HX_STACK_LINE(188)
								return null();
							}
							HX_STACK_LINE(190)
							this->_input->set_text(this->getNextCommand());
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onKeyPress,(void))

Void Console_obj::onFocusLost( ::flash::events::FocusEvent e){
{
		HX_STACK_PUSH("Console::onFocusLost","flixel/system/debug/Console.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(148)
		::flixel::FlxG_obj::keyboard->enabled = true;
		HX_STACK_LINE(151)
		if (((this->_input->get_text() == HX_CSTRING("")))){
			HX_STACK_LINE(152)
			this->_input->set_text(this->defaultText);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocusLost,(void))

Void Console_obj::onFocus( ::flash::events::FocusEvent e){
{
		HX_STACK_PUSH("Console::onFocus","flixel/system/debug/Console.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(125)
		::flixel::FlxG_obj::keyboard->enabled = false;
		HX_STACK_LINE(128)
		if (((this->_input->get_text() == this->defaultText))){
			HX_STACK_LINE(129)
			this->_input->set_text(HX_CSTRING(""));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocus,(void))


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(defaultText,"defaultText");
	HX_MARK_MEMBER_NAME(historyMax,"historyMax");
	HX_MARK_MEMBER_NAME(historyIndex,"historyIndex");
	HX_MARK_MEMBER_NAME(cmdHistory,"cmdHistory");
	HX_MARK_MEMBER_NAME(objectStack,"objectStack");
	HX_MARK_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_MARK_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_MARK_MEMBER_NAME(cmdObjects,"cmdObjects");
	HX_MARK_MEMBER_NAME(cmdFunctions,"cmdFunctions");
	HX_MARK_MEMBER_NAME(_input,"_input");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultText,"defaultText");
	HX_VISIT_MEMBER_NAME(historyMax,"historyMax");
	HX_VISIT_MEMBER_NAME(historyIndex,"historyIndex");
	HX_VISIT_MEMBER_NAME(cmdHistory,"cmdHistory");
	HX_VISIT_MEMBER_NAME(objectStack,"objectStack");
	HX_VISIT_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_VISIT_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_VISIT_MEMBER_NAME(cmdObjects,"cmdObjects");
	HX_VISIT_MEMBER_NAME(cmdFunctions,"cmdFunctions");
	HX_VISIT_MEMBER_NAME(_input,"_input");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Console_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_input") ) { return _input; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"addCommand") ) { return addCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyPress") ) { return onKeyPress_dyn(); }
		if (HX_FIELD_EQ(inName,"historyMax") ) { return historyMax; }
		if (HX_FIELD_EQ(inName,"cmdHistory") ) { return cmdHistory; }
		if (HX_FIELD_EQ(inName,"cmdObjects") ) { return cmdObjects; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultText") ) { return defaultText; }
		if (HX_FIELD_EQ(inName,"objectStack") ) { return objectStack; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { return filterDigits_dyn(); }
		if (HX_FIELD_EQ(inName,"callFunction") ) { return callFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"historyIndex") ) { return historyIndex; }
		if (HX_FIELD_EQ(inName,"cmdFunctions") ) { return cmdFunctions; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerObject") ) { return registerObject_dyn(); }
		if (HX_FIELD_EQ(inName,"getNextCommand") ) { return getNextCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"processCommand") ) { return processCommand_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return registerFunction_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { return registeredObjects; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPreviousCommand") ) { return getPreviousCommand_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { return registeredFunctions; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"overrideDefaultSelection") ) { return overrideDefaultSelection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_input") ) { _input=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"historyMax") ) { historyMax=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cmdHistory") ) { cmdHistory=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cmdObjects") ) { cmdObjects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultText") ) { defaultText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectStack") ) { objectStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"historyIndex") ) { historyIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cmdFunctions") ) { cmdFunctions=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { registeredObjects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { registeredFunctions=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("defaultText"));
	outFields->push(HX_CSTRING("historyMax"));
	outFields->push(HX_CSTRING("historyIndex"));
	outFields->push(HX_CSTRING("cmdHistory"));
	outFields->push(HX_CSTRING("objectStack"));
	outFields->push(HX_CSTRING("registeredFunctions"));
	outFields->push(HX_CSTRING("registeredObjects"));
	outFields->push(HX_CSTRING("cmdObjects"));
	outFields->push(HX_CSTRING("cmdFunctions"));
	outFields->push(HX_CSTRING("_input"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateSize"),
	HX_CSTRING("destroy"),
	HX_CSTRING("registerFunction"),
	HX_CSTRING("registerObject"),
	HX_CSTRING("addCommand"),
	HX_CSTRING("getNextCommand"),
	HX_CSTRING("getPreviousCommand"),
	HX_CSTRING("filterDigits"),
	HX_CSTRING("overrideDefaultSelection"),
	HX_CSTRING("callFunction"),
	HX_CSTRING("processCommand"),
	HX_CSTRING("onKeyPress"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("defaultText"),
	HX_CSTRING("historyMax"),
	HX_CSTRING("historyIndex"),
	HX_CSTRING("cmdHistory"),
	HX_CSTRING("objectStack"),
	HX_CSTRING("registeredFunctions"),
	HX_CSTRING("registeredObjects"),
	HX_CSTRING("cmdObjects"),
	HX_CSTRING("cmdFunctions"),
	HX_CSTRING("_input"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
};

Class Console_obj::__mClass;

void Console_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Console"), hx::TCanCast< Console_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Console_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
