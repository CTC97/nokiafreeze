#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_bgra
#include <lime/graphics/opengl/ext/EXT_bgra.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_46934636fcfe52a8_4_new,"lime.graphics.opengl.ext.EXT_bgra","new",0x426ab806,"lime.graphics.opengl.ext.EXT_bgra.new","lime/graphics/opengl/ext/EXT_bgra.hx",4,0xf6e9a0c8)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_bgra_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_46934636fcfe52a8_4_new)
HXLINE(   7)		this->BGRA_EXT = 32993;
HXLINE(   6)		this->BGR_EXT = 32992;
            	}

Dynamic EXT_bgra_obj::__CreateEmpty() { return new EXT_bgra_obj; }

void *EXT_bgra_obj::_hx_vtable = 0;

Dynamic EXT_bgra_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_bgra_obj > _hx_result = new EXT_bgra_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_bgra_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1eee6c9c;
}


EXT_bgra_obj::EXT_bgra_obj()
{
}

::hx::Val EXT_bgra_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"BGR_EXT") ) { return ::hx::Val( BGR_EXT ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { return ::hx::Val( BGRA_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_bgra_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"BGR_EXT") ) { BGR_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { BGRA_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_bgra_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("BGR_EXT",ef,ba,ba,91));
	outFields->push(HX_("BGRA_EXT",36,94,c4,bc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_bgra_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_bgra_obj,BGR_EXT),HX_("BGR_EXT",ef,ba,ba,91)},
	{::hx::fsInt,(int)offsetof(EXT_bgra_obj,BGRA_EXT),HX_("BGRA_EXT",36,94,c4,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_bgra_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_bgra_obj_sMemberFields[] = {
	HX_("BGR_EXT",ef,ba,ba,91),
	HX_("BGRA_EXT",36,94,c4,bc),
	::String(null()) };

::hx::Class EXT_bgra_obj::__mClass;

void EXT_bgra_obj::__register()
{
	EXT_bgra_obj _hx_dummy;
	EXT_bgra_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_bgra",14,fd,e8,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_bgra_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_bgra_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_bgra_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_bgra_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
