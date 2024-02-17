#ifndef INCLUDED_flixel_system__FlxAssets_FlxJsonAsset_Impl_
#define INCLUDED_flixel_system__FlxAssets_FlxJsonAsset_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,_FlxAssets,FlxJsonAsset_Impl_)

namespace flixel{
namespace _hx_system{
namespace _FlxAssets{


class HXCPP_CLASS_ATTRIBUTES FlxJsonAsset_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxJsonAsset_Impl__obj OBJ_;
		FlxJsonAsset_Impl__obj();

	public:
		enum { _hx_ClassId = 0x123cd297 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system._FlxAssets.FlxJsonAsset_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system._FlxAssets.FlxJsonAsset_Impl_"); }

		inline static ::hx::ObjectPtr< FlxJsonAsset_Impl__obj > __new() {
			::hx::ObjectPtr< FlxJsonAsset_Impl__obj > __this = new FlxJsonAsset_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxJsonAsset_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxJsonAsset_Impl__obj *__this = (FlxJsonAsset_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxJsonAsset_Impl__obj), false, "flixel.system._FlxAssets.FlxJsonAsset_Impl_"));
			*(void **)__this = FlxJsonAsset_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxJsonAsset_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxJsonAsset_Impl_",16,a9,9c,39); }

		static  ::Dynamic getData( ::Dynamic this1);
		static ::Dynamic getData_dyn();

		static  ::Dynamic fromPath(::String path);
		static ::Dynamic fromPath_dyn();

		static  ::Dynamic fromDataString(::String data);
		static ::Dynamic fromDataString_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace _FlxAssets

#endif /* INCLUDED_flixel_system__FlxAssets_FlxJsonAsset_Impl_ */ 
