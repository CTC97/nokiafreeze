#ifndef INCLUDED_openfl_geom_Transform
#define INCLUDED_openfl_geom_Transform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Transform)

namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Transform_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Transform_obj OBJ_;
		Transform_obj();

	public:
		enum { _hx_ClassId = 0x5a586a40 };

		void __construct( ::openfl::display::DisplayObject displayObject);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.geom.Transform")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.geom.Transform"); }
		static ::hx::ObjectPtr< Transform_obj > __new( ::openfl::display::DisplayObject displayObject);
		static ::hx::ObjectPtr< Transform_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject displayObject);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Transform_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Transform",4c,0d,66,e7); }

		 ::openfl::geom::ColorTransform concatenatedColorTransform;
		 ::openfl::geom::Rectangle pixelBounds;
		 ::openfl::geom::ColorTransform _hx___colorTransform;
		 ::openfl::display::DisplayObject _hx___displayObject;
		bool _hx___hasMatrix;
		bool _hx___hasMatrix3D;
		 ::openfl::geom::ColorTransform get_colorTransform();
		::Dynamic get_colorTransform_dyn();

		 ::openfl::geom::ColorTransform set_colorTransform( ::openfl::geom::ColorTransform value);
		::Dynamic set_colorTransform_dyn();

		 ::openfl::geom::Matrix get_concatenatedMatrix();
		::Dynamic get_concatenatedMatrix_dyn();

		 ::openfl::geom::Matrix get_matrix();
		::Dynamic get_matrix_dyn();

		 ::openfl::geom::Matrix set_matrix( ::openfl::geom::Matrix value);
		::Dynamic set_matrix_dyn();

		 ::openfl::geom::Matrix3D get_matrix3D();
		::Dynamic get_matrix3D_dyn();

		 ::openfl::geom::Matrix3D set_matrix3D( ::openfl::geom::Matrix3D value);
		::Dynamic set_matrix3D_dyn();

		void _hx___setTransform(Float a,Float b,Float c,Float d,Float tx,Float ty);
		::Dynamic _hx___setTransform_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Transform */ 
