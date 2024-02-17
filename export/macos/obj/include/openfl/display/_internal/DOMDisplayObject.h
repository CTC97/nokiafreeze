#ifndef INCLUDED_openfl_display__internal_DOMDisplayObject
#define INCLUDED_openfl_display__internal_DOMDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,DOMDisplayObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES DOMDisplayObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DOMDisplayObject_obj OBJ_;
		DOMDisplayObject_obj();

	public:
		enum { _hx_ClassId = 0x7471defd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.DOMDisplayObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.DOMDisplayObject"); }

		inline static ::hx::ObjectPtr< DOMDisplayObject_obj > __new() {
			::hx::ObjectPtr< DOMDisplayObject_obj > __this = new DOMDisplayObject_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DOMDisplayObject_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DOMDisplayObject_obj *__this = (DOMDisplayObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMDisplayObject_obj), false, "openfl.display._internal.DOMDisplayObject"));
			*(void **)__this = DOMDisplayObject_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMDisplayObject_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMDisplayObject",df,d6,25,8f); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void clear( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic clear_dyn();

		static void render( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableClear( ::openfl::display::DisplayObject displayObject, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawableClear_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_DOMDisplayObject */ 
