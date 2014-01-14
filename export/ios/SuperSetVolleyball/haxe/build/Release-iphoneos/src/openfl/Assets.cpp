#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace openfl{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::openfl::AssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

bool Assets_obj::initialized;

bool Assets_obj::exists( ::String id,::openfl::AssetType type){
	HX_STACK_PUSH("Assets::exists","openfl/Assets.hx",40);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(42)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(46)
	if (((type == null()))){
		HX_STACK_LINE(46)
		type = ::openfl::AssetType_obj::BINARY;
	}
	HX_STACK_LINE(52)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(53)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(54)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(56)
	if (((library != null()))){
		HX_STACK_LINE(56)
		return library->exists(symbolName,type);
	}
	HX_STACK_LINE(64)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::flash::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","openfl/Assets.hx",76);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(78)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(82)
		if (((bool((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled))) && bool(::openfl::Assets_obj::cache->bitmapData->exists(id))))){
			HX_STACK_LINE(84)
			::flash::display::BitmapData bitmapData = ::openfl::Assets_obj::cache->bitmapData->get(id);		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(86)
			if ((::openfl::Assets_obj::isValidBitmapData(bitmapData))){
				HX_STACK_LINE(86)
				return bitmapData;
			}
		}
		HX_STACK_LINE(94)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(95)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(96)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(98)
		if (((library != null()))){
			HX_STACK_LINE(98)
			if ((library->exists(symbolName,::openfl::AssetType_obj::IMAGE))){
				HX_STACK_LINE(100)
				if ((library->isLocal(symbolName,::openfl::AssetType_obj::IMAGE))){
					HX_STACK_LINE(104)
					::flash::display::BitmapData bitmapData = library->getBitmapData(symbolName);		HX_STACK_VAR(bitmapData,"bitmapData");
					HX_STACK_LINE(106)
					if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(106)
						::openfl::Assets_obj::cache->bitmapData->set(id,bitmapData);
					}
					HX_STACK_LINE(112)
					return bitmapData;
				}
				else{
					HX_STACK_LINE(114)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] BitmapData asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),116,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(120)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),122,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		else{
			HX_STACK_LINE(126)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),128,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
		}
		HX_STACK_LINE(134)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::flash::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","openfl/Assets.hx",145);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(147)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(151)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(152)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(153)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(155)
	if (((library != null()))){
		HX_STACK_LINE(155)
		if ((library->exists(symbolName,::openfl::AssetType_obj::BINARY))){
			HX_STACK_LINE(157)
			if ((library->isLocal(symbolName,::openfl::AssetType_obj::BINARY))){
				HX_STACK_LINE(159)
				return library->getBytes(symbolName);
			}
			else{
				HX_STACK_LINE(163)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] String or ByteArray asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),165,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
			}
		}
		else{
			HX_STACK_LINE(169)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),171,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
		}
	}
	else{
		HX_STACK_LINE(175)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),177,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
	}
	HX_STACK_LINE(183)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::flash::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getFont","openfl/Assets.hx",194);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(196)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(200)
		if (((bool((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled))) && bool(::openfl::Assets_obj::cache->font->exists(id))))){
			HX_STACK_LINE(200)
			return ::openfl::Assets_obj::cache->font->get(id);
		}
		HX_STACK_LINE(206)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(207)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(208)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(210)
		if (((library != null()))){
			HX_STACK_LINE(210)
			if ((library->exists(symbolName,::openfl::AssetType_obj::FONT))){
				HX_STACK_LINE(212)
				if ((library->isLocal(symbolName,::openfl::AssetType_obj::FONT))){
					HX_STACK_LINE(216)
					::flash::text::Font font = library->getFont(symbolName);		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(218)
					if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(218)
						::openfl::Assets_obj::cache->font->set(id,font);
					}
					HX_STACK_LINE(224)
					return font;
				}
				else{
					HX_STACK_LINE(226)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] Font asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),228,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
				}
			}
			else{
				HX_STACK_LINE(232)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),234,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
			}
		}
		else{
			HX_STACK_LINE(238)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),240,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
		}
		HX_STACK_LINE(246)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::openfl::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_PUSH("Assets::getLibrary","openfl/Assets.hx",251);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(253)
	if (((bool((name == null())) || bool((name == HX_CSTRING("")))))){
		HX_STACK_LINE(253)
		name = HX_CSTRING("default");
	}
	HX_STACK_LINE(259)
	return ::openfl::Assets_obj::libraries->get(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::flash::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_PUSH("Assets::getMovieClip","openfl/Assets.hx",270);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(272)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(276)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(277)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(278)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(280)
	if (((library != null()))){
		HX_STACK_LINE(280)
		if ((library->exists(symbolName,::openfl::AssetType_obj::MOVIE_CLIP))){
			HX_STACK_LINE(282)
			if ((library->isLocal(symbolName,::openfl::AssetType_obj::MOVIE_CLIP))){
				HX_STACK_LINE(284)
				return library->getMovieClip(symbolName);
			}
			else{
				HX_STACK_LINE(288)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] MovieClip asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),290,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMovieClip")));
			}
		}
		else{
			HX_STACK_LINE(294)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),296,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMovieClip")));
		}
	}
	else{
		HX_STACK_LINE(300)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),302,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(308)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::flash::media::Sound Assets_obj::getMusic( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getMusic","openfl/Assets.hx",319);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(321)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(325)
		if (((bool((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled))) && bool(::openfl::Assets_obj::cache->sound->exists(id))))){
			HX_STACK_LINE(325)
			return ::openfl::Assets_obj::cache->sound->get(id);
		}
		HX_STACK_LINE(331)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(332)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(333)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(335)
		if (((library != null()))){
			HX_STACK_LINE(335)
			if ((library->exists(symbolName,::openfl::AssetType_obj::MUSIC))){
				HX_STACK_LINE(337)
				if ((library->isLocal(symbolName,::openfl::AssetType_obj::MUSIC))){
					HX_STACK_LINE(341)
					::flash::media::Sound sound = library->getMusic(symbolName);		HX_STACK_VAR(sound,"sound");
					HX_STACK_LINE(343)
					if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(343)
						::openfl::Assets_obj::cache->sound->set(id,sound);
					}
					HX_STACK_LINE(349)
					return sound;
				}
				else{
					HX_STACK_LINE(351)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] Sound asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),353,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMusic")));
				}
			}
			else{
				HX_STACK_LINE(357)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),359,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMusic")));
			}
		}
		else{
			HX_STACK_LINE(363)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),365,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMusic")));
		}
		HX_STACK_LINE(371)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_PUSH("Assets::getPath","openfl/Assets.hx",382);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(384)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(388)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(389)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(390)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(392)
	if (((library != null()))){
		HX_STACK_LINE(392)
		if ((library->exists(symbolName,null()))){
			HX_STACK_LINE(394)
			return library->getPath(symbolName);
		}
		else{
			HX_STACK_LINE(398)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),400,HX_CSTRING("openfl.Assets"),HX_CSTRING("getPath")));
		}
	}
	else{
		HX_STACK_LINE(404)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),406,HX_CSTRING("openfl.Assets"),HX_CSTRING("getPath")));
	}
	HX_STACK_LINE(412)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::flash::media::Sound Assets_obj::getSound( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getSound","openfl/Assets.hx",423);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(425)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(429)
		if (((bool((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled))) && bool(::openfl::Assets_obj::cache->sound->exists(id))))){
			HX_STACK_LINE(431)
			::flash::media::Sound sound = ::openfl::Assets_obj::cache->sound->get(id);		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(433)
			if ((::openfl::Assets_obj::isValidSound(sound))){
				HX_STACK_LINE(433)
				return sound;
			}
		}
		HX_STACK_LINE(441)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(442)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(443)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(445)
		if (((library != null()))){
			HX_STACK_LINE(445)
			if ((library->exists(symbolName,::openfl::AssetType_obj::SOUND))){
				HX_STACK_LINE(447)
				if ((library->isLocal(symbolName,::openfl::AssetType_obj::SOUND))){
					HX_STACK_LINE(451)
					::flash::media::Sound sound = library->getSound(symbolName);		HX_STACK_VAR(sound,"sound");
					HX_STACK_LINE(453)
					if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(453)
						::openfl::Assets_obj::cache->sound->set(id,sound);
					}
					HX_STACK_LINE(459)
					return sound;
				}
				else{
					HX_STACK_LINE(461)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] Sound asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),463,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
				}
			}
			else{
				HX_STACK_LINE(467)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),469,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
			}
		}
		else{
			HX_STACK_LINE(473)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),475,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
		}
		HX_STACK_LINE(481)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","openfl/Assets.hx",492);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(494)
	::flash::utils::ByteArray bytes = ::openfl::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(496)
	if (((bytes == null()))){
		HX_STACK_LINE(496)
		return null();
	}
	else{
		HX_STACK_LINE(500)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(496)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","openfl/Assets.hx",509);
		HX_STACK_LINE(509)
		if ((!(::openfl::Assets_obj::initialized))){
			HX_STACK_LINE(515)
			::openfl::Assets_obj::registerLibrary(HX_CSTRING("default"),::DefaultAssetLibrary_obj::__new());
			HX_STACK_LINE(519)
			::openfl::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

bool Assets_obj::isLocal( ::String id,::openfl::AssetType type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::isLocal","openfl/Assets.hx",526);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(528)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(532)
		if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
			HX_STACK_LINE(534)
			if (((bool((type == ::openfl::AssetType_obj::IMAGE)) || bool((type == null()))))){
				HX_STACK_LINE(534)
				if ((::openfl::Assets_obj::cache->bitmapData->exists(id))){
					HX_STACK_LINE(536)
					return true;
				}
			}
			HX_STACK_LINE(540)
			if (((bool((type == ::openfl::AssetType_obj::FONT)) || bool((type == null()))))){
				HX_STACK_LINE(540)
				if ((::openfl::Assets_obj::cache->font->exists(id))){
					HX_STACK_LINE(542)
					return true;
				}
			}
			HX_STACK_LINE(546)
			if (((bool((bool((type == ::openfl::AssetType_obj::SOUND)) || bool((type == ::openfl::AssetType_obj::MUSIC)))) || bool((type == null()))))){
				HX_STACK_LINE(546)
				if ((::openfl::Assets_obj::cache->sound->exists(id))){
					HX_STACK_LINE(548)
					return true;
				}
			}
		}
		HX_STACK_LINE(554)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(555)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(556)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(558)
		if (((library != null()))){
			HX_STACK_LINE(558)
			return library->isLocal(symbolName,type);
		}
		HX_STACK_LINE(566)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::flash::display::BitmapData bitmapData){
	HX_STACK_PUSH("Assets::isValidBitmapData","openfl/Assets.hx",571);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(575)
	return (bitmapData->__handle != null());
	HX_STACK_LINE(591)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::flash::media::Sound sound){
	HX_STACK_PUSH("Assets::isValidSound","openfl/Assets.hx",596);
	HX_STACK_ARG(sound,"sound");
	HX_STACK_LINE(596)
	return (bool((sound->__handle != null())) && bool((sound->__handle != (int)0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

Void Assets_obj::loadBitmapData( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::loadBitmapData","openfl/Assets.hx",611);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(handler,"handler");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(611)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(611)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(613)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(617)
		if (((bool((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled))) && bool(::openfl::Assets_obj::cache->bitmapData->exists(id1->__get((int)0)))))){
			HX_STACK_LINE(619)
			::flash::display::BitmapData bitmapData = ::openfl::Assets_obj::cache->bitmapData->get(id1->__get((int)0));		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(621)
			if ((::openfl::Assets_obj::isValidBitmapData(bitmapData))){
				HX_STACK_LINE(623)
				handler1->__GetItem((int)0)(bitmapData).Cast< Void >();
				HX_STACK_LINE(624)
				return null();
			}
		}
		HX_STACK_LINE(630)
		::String libraryName = id1->__get((int)0).substring((int)0,id1->__get((int)0).indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(631)
		::String symbolName = id1->__get((int)0).substr((id1->__get((int)0).indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(632)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(634)
		if (((library != null()))){
			HX_STACK_LINE(634)
			if ((library->exists(symbolName,::openfl::AssetType_obj::IMAGE))){
				HX_STACK_LINE(638)
				if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::flash::display::BitmapData bitmapData){
						HX_STACK_PUSH("*::_Function_4_1","openfl/Assets.hx",640);
						HX_STACK_ARG(bitmapData,"bitmapData");
						{
							HX_STACK_LINE(642)
							::openfl::Assets_obj::cache->bitmapData->set(id1->__get((int)0),bitmapData);
							HX_STACK_LINE(643)
							handler1->__GetItem((int)0)(bitmapData).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(638)
					library->loadBitmapData(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(647)
					library->loadBitmapData(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(653)
				return null();
			}
			else{
				HX_STACK_LINE(655)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),657,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBitmapData")));
			}
		}
		else{
			HX_STACK_LINE(661)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),663,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBitmapData")));
		}
		HX_STACK_LINE(669)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadBitmapData,(void))

Void Assets_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadBytes","openfl/Assets.hx",674);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(676)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(680)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(681)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(682)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(684)
		if (((library != null()))){
			HX_STACK_LINE(684)
			if ((library->exists(symbolName,::openfl::AssetType_obj::BINARY))){
				HX_STACK_LINE(688)
				library->loadBytes(symbolName,handler);
				HX_STACK_LINE(689)
				return null();
			}
			else{
				HX_STACK_LINE(691)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),693,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBytes")));
			}
		}
		else{
			HX_STACK_LINE(697)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),699,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBytes")));
		}
		HX_STACK_LINE(705)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,(void))

Void Assets_obj::loadFont( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::loadFont","openfl/Assets.hx",710);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(handler,"handler");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(710)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(710)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(712)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(716)
		if (((bool((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled))) && bool(::openfl::Assets_obj::cache->font->exists(id1->__get((int)0)))))){
			HX_STACK_LINE(718)
			handler1->__GetItem((int)0)(::openfl::Assets_obj::cache->font->get(id1->__get((int)0))).Cast< Void >();
			HX_STACK_LINE(719)
			return null();
		}
		HX_STACK_LINE(723)
		::String libraryName = id1->__get((int)0).substring((int)0,id1->__get((int)0).indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(724)
		::String symbolName = id1->__get((int)0).substr((id1->__get((int)0).indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(725)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(727)
		if (((library != null()))){
			HX_STACK_LINE(727)
			if ((library->exists(symbolName,::openfl::AssetType_obj::FONT))){
				HX_STACK_LINE(731)
				if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::flash::text::Font font){
						HX_STACK_PUSH("*::_Function_4_1","openfl/Assets.hx",733);
						HX_STACK_ARG(font,"font");
						{
							HX_STACK_LINE(735)
							::openfl::Assets_obj::cache->font->set(id1->__get((int)0),font);
							HX_STACK_LINE(736)
							handler1->__GetItem((int)0)(font).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(731)
					library->loadFont(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(740)
					library->loadFont(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(746)
				return null();
			}
			else{
				HX_STACK_LINE(748)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Font asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),750,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadFont")));
			}
		}
		else{
			HX_STACK_LINE(754)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),756,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadFont")));
		}
		HX_STACK_LINE(762)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadFont,(void))

Void Assets_obj::loadLibrary( ::String name,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadLibrary","openfl/Assets.hx",767);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(769)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(773)
		::String data = ::openfl::Assets_obj::getText(((HX_CSTRING("libraries/") + name) + HX_CSTRING(".dat")));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(775)
		if (((bool((data != null())) && bool((data != HX_CSTRING("")))))){
			HX_STACK_LINE(777)
			::haxe::Unserializer unserializer = ::haxe::Unserializer_obj::__new(data);		HX_STACK_VAR(unserializer,"unserializer");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","openfl/Assets.hx",778);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("resolveEnum") , ::openfl::Assets_obj::resolveEnum_dyn(),false);
						__result->Add(HX_CSTRING("resolveClass") , ::openfl::Assets_obj::resolveClass_dyn(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(778)
			unserializer->setResolver(_Function_2_1::Block());
			HX_STACK_LINE(780)
			::openfl::AssetLibrary library = unserializer->unserialize();		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(781)
			::openfl::Assets_obj::libraries->set(name,library);
			HX_STACK_LINE(782)
			library->load(handler);
		}
		else{
			HX_STACK_LINE(784)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + name) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),786,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadLibrary")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,(void))

Void Assets_obj::loadMusic( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::loadMusic","openfl/Assets.hx",795);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(handler,"handler");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(795)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(795)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(797)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(801)
		if (((bool((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled))) && bool(::openfl::Assets_obj::cache->sound->exists(id1->__get((int)0)))))){
			HX_STACK_LINE(803)
			handler1->__GetItem((int)0)(::openfl::Assets_obj::cache->sound->get(id1->__get((int)0))).Cast< Void >();
			HX_STACK_LINE(804)
			return null();
		}
		HX_STACK_LINE(808)
		::String libraryName = id1->__get((int)0).substring((int)0,id1->__get((int)0).indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(809)
		::String symbolName = id1->__get((int)0).substr((id1->__get((int)0).indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(810)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(812)
		if (((library != null()))){
			HX_STACK_LINE(812)
			if ((library->exists(symbolName,::openfl::AssetType_obj::MUSIC))){
				HX_STACK_LINE(816)
				if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::flash::media::Sound sound){
						HX_STACK_PUSH("*::_Function_4_1","openfl/Assets.hx",818);
						HX_STACK_ARG(sound,"sound");
						{
							HX_STACK_LINE(820)
							::openfl::Assets_obj::cache->sound->set(id1->__get((int)0),sound);
							HX_STACK_LINE(821)
							handler1->__GetItem((int)0)(sound).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(816)
					library->loadMusic(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(825)
					library->loadMusic(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(831)
				return null();
			}
			else{
				HX_STACK_LINE(833)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),835,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMusic")));
			}
		}
		else{
			HX_STACK_LINE(839)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),841,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMusic")));
		}
		HX_STACK_LINE(847)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadMusic,(void))

Void Assets_obj::loadMovieClip( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadMovieClip","openfl/Assets.hx",852);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(854)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(858)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(859)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(860)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(862)
		if (((library != null()))){
			HX_STACK_LINE(862)
			if ((library->exists(symbolName,::openfl::AssetType_obj::MOVIE_CLIP))){
				HX_STACK_LINE(866)
				library->loadMovieClip(symbolName,handler);
				HX_STACK_LINE(867)
				return null();
			}
			else{
				HX_STACK_LINE(869)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),871,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMovieClip")));
			}
		}
		else{
			HX_STACK_LINE(875)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),877,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMovieClip")));
		}
		HX_STACK_LINE(883)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMovieClip,(void))

Void Assets_obj::loadSound( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::loadSound","openfl/Assets.hx",888);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(handler,"handler");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(888)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(888)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(890)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(894)
		if (((bool((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled))) && bool(::openfl::Assets_obj::cache->sound->exists(id1->__get((int)0)))))){
			HX_STACK_LINE(896)
			::flash::media::Sound sound = ::openfl::Assets_obj::cache->sound->get(id1->__get((int)0));		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(898)
			if ((::openfl::Assets_obj::isValidSound(sound))){
				HX_STACK_LINE(900)
				handler1->__GetItem((int)0)(sound).Cast< Void >();
				HX_STACK_LINE(901)
				return null();
			}
		}
		HX_STACK_LINE(907)
		::String libraryName = id1->__get((int)0).substring((int)0,id1->__get((int)0).indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(908)
		::String symbolName = id1->__get((int)0).substr((id1->__get((int)0).indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(909)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(911)
		if (((library != null()))){
			HX_STACK_LINE(911)
			if ((library->exists(symbolName,::openfl::AssetType_obj::SOUND))){
				HX_STACK_LINE(915)
				if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::flash::media::Sound sound){
						HX_STACK_PUSH("*::_Function_4_1","openfl/Assets.hx",917);
						HX_STACK_ARG(sound,"sound");
						{
							HX_STACK_LINE(919)
							::openfl::Assets_obj::cache->sound->set(id1->__get((int)0),sound);
							HX_STACK_LINE(920)
							handler1->__GetItem((int)0)(sound).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(915)
					library->loadSound(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(924)
					library->loadSound(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(930)
				return null();
			}
			else{
				HX_STACK_LINE(932)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),934,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadSound")));
			}
		}
		else{
			HX_STACK_LINE(938)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),940,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadSound")));
		}
		HX_STACK_LINE(946)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadSound,(void))

Void Assets_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadText","openfl/Assets.hx",951);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(951)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(953)
		::openfl::Assets_obj::initialize();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler1)
		Void run(::flash::utils::ByteArray bytes){
			HX_STACK_PUSH("*::_Function_1_1","openfl/Assets.hx",957);
			HX_STACK_ARG(bytes,"bytes");
			{
				HX_STACK_LINE(957)
				if (((bytes == null()))){
					HX_STACK_LINE(959)
					handler1->__GetItem((int)0)(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(963)
					handler1->__GetItem((int)0)(bytes->readUTFBytes(bytes->length)).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(957)
		Dynamic callback =  Dynamic(new _Function_1_1(handler1));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(971)
		::openfl::Assets_obj::loadBytes(id,callback);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,(void))

Void Assets_obj::registerLibrary( ::String name,::openfl::AssetLibrary library){
{
		HX_STACK_PUSH("Assets::registerLibrary","openfl/Assets.hx",982);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(library,"library");
		HX_STACK_LINE(984)
		if ((::openfl::Assets_obj::libraries->exists(name))){
			HX_STACK_LINE(984)
			::openfl::Assets_obj::unloadLibrary(name);
		}
		HX_STACK_LINE(990)
		::openfl::Assets_obj::libraries->set(name,library);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

::Class Assets_obj::resolveClass( ::String name){
	HX_STACK_PUSH("Assets::resolveClass","openfl/Assets.hx",995);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(995)
	return ::Type_obj::resolveClass(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::Enum Assets_obj::resolveEnum( ::String name){
	HX_STACK_PUSH("Assets::resolveEnum","openfl/Assets.hx",1002);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(1004)
	::Enum value = ::Type_obj::resolveEnum(name);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(1016)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_PUSH("Assets::unloadLibrary","openfl/Assets.hx",1021);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(1023)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(1027)
		Dynamic keys = ::openfl::Assets_obj::cache->bitmapData->keys();		HX_STACK_VAR(keys,"keys");
		HX_STACK_LINE(1029)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(1031)
				::String libraryName = key.substring((int)0,key.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(1032)
				::String symbolName = key.substr((key.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(1034)
				if (((libraryName == name))){
					HX_STACK_LINE(1034)
					::openfl::Assets_obj::cache->bitmapData->remove(key);
				}
			}
;
		}
		HX_STACK_LINE(1042)
		::openfl::Assets_obj::libraries->remove(name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { return libraries; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { return getLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { return loadLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { return resolveEnum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { return isValidSound_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { return resolveClass_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { return loadMovieClip_dyn(); }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { return unloadLibrary_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { return registerLibrary_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { return isValidBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::openfl::AssetCache >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cache"),
	HX_CSTRING("libraries"),
	HX_CSTRING("initialized"),
	HX_CSTRING("exists"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getLibrary"),
	HX_CSTRING("getMovieClip"),
	HX_CSTRING("getMusic"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	HX_CSTRING("initialize"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("isValidBitmapData"),
	HX_CSTRING("isValidSound"),
	HX_CSTRING("loadBitmapData"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadLibrary"),
	HX_CSTRING("loadMusic"),
	HX_CSTRING("loadMovieClip"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadText"),
	HX_CSTRING("registerLibrary"),
	HX_CSTRING("resolveClass"),
	HX_CSTRING("resolveEnum"),
	HX_CSTRING("unloadLibrary"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cache= ::openfl::AssetCache_obj::__new();
	libraries= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace openfl
