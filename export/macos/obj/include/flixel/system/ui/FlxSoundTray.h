#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#define INCLUDED_flixel_system_ui_FlxSoundTray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSoundTray)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxSoundTray_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef FlxSoundTray_obj OBJ_;
		FlxSoundTray_obj();

	public:
		enum { _hx_ClassId = 0x232a5d76 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.ui.FlxSoundTray")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.ui.FlxSoundTray"); }
		static ::hx::ObjectPtr< FlxSoundTray_obj > __new();
		static ::hx::ObjectPtr< FlxSoundTray_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSoundTray_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSoundTray",b3,ab,b9,74); }

		bool active;
		Float _timer;
		::Array< ::Dynamic> _bars;
		int _width;
		Float _defaultScale;
		::String volumeUpSound;
		::String volumeDownSound;
		bool silent;
		void update(Float MS);
		::Dynamic update_dyn();

		void show(::hx::Null< bool >  up);
		::Dynamic show_dyn();

		void screenCenter();
		::Dynamic screenCenter_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace ui

#endif /* INCLUDED_flixel_system_ui_FlxSoundTray */ 
