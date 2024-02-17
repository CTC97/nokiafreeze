#ifndef INCLUDED_flixel_path_FlxPathDrawData
#define INCLUDED_flixel_path_FlxPathDrawData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ac1e30a014ff1e13_893_new)
HX_DECLARE_CLASS2(flixel,path,FlxPathDrawData)

namespace flixel{
namespace path{


class HXCPP_CLASS_ATTRIBUTES FlxPathDrawData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPathDrawData_obj OBJ_;
		FlxPathDrawData_obj();

	public:
		enum { _hx_ClassId = 0x6f491424 };

		void __construct( ::Dynamic lineColor, ::Dynamic nodeColor, ::Dynamic startColor, ::Dynamic endColor, ::Dynamic lineSize, ::Dynamic nodeSize, ::Dynamic startSize, ::Dynamic endSize);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.path.FlxPathDrawData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.path.FlxPathDrawData"); }

		inline static ::hx::ObjectPtr< FlxPathDrawData_obj > __new( ::Dynamic lineColor, ::Dynamic nodeColor, ::Dynamic startColor, ::Dynamic endColor, ::Dynamic lineSize, ::Dynamic nodeSize, ::Dynamic startSize, ::Dynamic endSize) {
			::hx::ObjectPtr< FlxPathDrawData_obj > __this = new FlxPathDrawData_obj();
			__this->__construct(lineColor,nodeColor,startColor,endColor,lineSize,nodeSize,startSize,endSize);
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxPathDrawData_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic lineColor, ::Dynamic nodeColor, ::Dynamic startColor, ::Dynamic endColor, ::Dynamic lineSize, ::Dynamic nodeSize, ::Dynamic startSize, ::Dynamic endSize) {
			FlxPathDrawData_obj *__this = (FlxPathDrawData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPathDrawData_obj), false, "flixel.path.FlxPathDrawData"));
			*(void **)__this = FlxPathDrawData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ac1e30a014ff1e13_893_new)
HXLINE( 902)		( ( ::flixel::path::FlxPathDrawData)(__this) )->endSize = 5;
HXLINE( 901)		( ( ::flixel::path::FlxPathDrawData)(__this) )->startSize = 5;
HXLINE( 900)		( ( ::flixel::path::FlxPathDrawData)(__this) )->nodeSize = 3;
HXLINE( 899)		( ( ::flixel::path::FlxPathDrawData)(__this) )->lineSize = 1;
HXLINE( 898)		( ( ::flixel::path::FlxPathDrawData)(__this) )->endColor = -65536;
HXLINE( 897)		( ( ::flixel::path::FlxPathDrawData)(__this) )->startColor = -16744448;
HXLINE( 896)		( ( ::flixel::path::FlxPathDrawData)(__this) )->nodeColor = -1;
HXLINE( 895)		( ( ::flixel::path::FlxPathDrawData)(__this) )->lineColor = -1;
HXLINE( 893)		if (::hx::IsNotNull( lineColor )) {
HXDLIN( 893)			( ( ::flixel::path::FlxPathDrawData)(__this) )->lineColor = ( (int)(lineColor) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( nodeColor )) {
HXDLIN( 893)			( ( ::flixel::path::FlxPathDrawData)(__this) )->nodeColor = ( (int)(nodeColor) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( startColor )) {
HXDLIN( 893)			( ( ::flixel::path::FlxPathDrawData)(__this) )->startColor = ( (int)(startColor) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( endColor )) {
HXDLIN( 893)			( ( ::flixel::path::FlxPathDrawData)(__this) )->endColor = ( (int)(endColor) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( lineSize )) {
HXDLIN( 893)			( ( ::flixel::path::FlxPathDrawData)(__this) )->lineSize = ( (int)(lineSize) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( nodeSize )) {
HXDLIN( 893)			( ( ::flixel::path::FlxPathDrawData)(__this) )->nodeSize = ( (int)(nodeSize) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( startSize )) {
HXDLIN( 893)			( ( ::flixel::path::FlxPathDrawData)(__this) )->startSize = ( (int)(startSize) );
            		}
HXDLIN( 893)		if (::hx::IsNotNull( endSize )) {
HXDLIN( 893)			( ( ::flixel::path::FlxPathDrawData)(__this) )->endSize = ( (int)(endSize) );
            		}
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPathDrawData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxPathDrawData",85,4a,90,f4); }

		int lineColor;
		int nodeColor;
		int startColor;
		int endColor;
		int lineSize;
		int nodeSize;
		int startSize;
		int endSize;
};

} // end namespace flixel
} // end namespace path

#endif /* INCLUDED_flixel_path_FlxPathDrawData */ 
