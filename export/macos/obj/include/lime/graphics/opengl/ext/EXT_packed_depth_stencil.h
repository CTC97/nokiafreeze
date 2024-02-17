#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_packed_depth_stencil
#define INCLUDED_lime_graphics_opengl_ext_EXT_packed_depth_stencil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_cab1116d5a570d04_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_packed_depth_stencil)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_packed_depth_stencil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_packed_depth_stencil_obj OBJ_;
		EXT_packed_depth_stencil_obj();

	public:
		enum { _hx_ClassId = 0x78e06975 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_packed_depth_stencil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_packed_depth_stencil"); }

		inline static ::hx::ObjectPtr< EXT_packed_depth_stencil_obj > __new() {
			::hx::ObjectPtr< EXT_packed_depth_stencil_obj > __this = new EXT_packed_depth_stencil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_packed_depth_stencil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_packed_depth_stencil_obj *__this = (EXT_packed_depth_stencil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_packed_depth_stencil_obj), false, "lime.graphics.opengl.ext.EXT_packed_depth_stencil"));
			*(void **)__this = EXT_packed_depth_stencil_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_cab1116d5a570d04_4_new)
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_packed_depth_stencil)(__this) )->TEXTURE_STENCIL_SIZE_EXT = 35057;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_packed_depth_stencil)(__this) )->DEPTH24_STENCIL8_EXT = 35056;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_packed_depth_stencil)(__this) )->UNSIGNED_INT_24_8_EXT = 34042;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_packed_depth_stencil)(__this) )->DEPTH_STENCIL_EXT = 34041;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_packed_depth_stencil_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_packed_depth_stencil",f7,88,e3,09); }

		int DEPTH_STENCIL_EXT;
		int UNSIGNED_INT_24_8_EXT;
		int DEPTH24_STENCIL8_EXT;
		int TEXTURE_STENCIL_SIZE_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_packed_depth_stencil */ 
