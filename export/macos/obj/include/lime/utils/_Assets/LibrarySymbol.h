#ifndef INCLUDED_lime_utils__Assets_LibrarySymbol
#define INCLUDED_lime_utils__Assets_LibrarySymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS3(lime,utils,_Assets,LibrarySymbol)

namespace lime{
namespace utils{
namespace _Assets{


class HXCPP_CLASS_ATTRIBUTES LibrarySymbol_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LibrarySymbol_obj OBJ_;
		LibrarySymbol_obj();

	public:
		enum { _hx_ClassId = 0x7de02acd };

		void __construct(::String id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils._Assets.LibrarySymbol")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.utils._Assets.LibrarySymbol"); }
		static ::hx::ObjectPtr< LibrarySymbol_obj > __new(::String id);
		static ::hx::ObjectPtr< LibrarySymbol_obj > __alloc(::hx::Ctx *_hx_ctx,::String id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LibrarySymbol_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LibrarySymbol",93,88,fe,d3); }

		 ::lime::utils::AssetLibrary library;
		::String libraryName;
		::String symbolName;
		bool isLocal(::String type);
		::Dynamic isLocal_dyn();

		bool exists(::String type);
		::Dynamic exists_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _Assets

#endif /* INCLUDED_lime_utils__Assets_LibrarySymbol */ 
