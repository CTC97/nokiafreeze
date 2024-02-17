#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a71b198b2cf5b646_138_boot,"AssetPaths","boot",0x7f6e2362,"AssetPaths.boot","flixel/system/macros/FlxAssetPaths.hx",138,0x71054749)

void AssetPaths_obj::__construct() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return new AssetPaths_obj; }

void *AssetPaths_obj::_hx_vtable = 0;

Dynamic AssetPaths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetPaths_obj > _hx_result = new AssetPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78a931fe;
}

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::bgflake__png;

::String AssetPaths_obj::bigbg__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::sounds_go_here__txt;

::String AssetPaths_obj::data_goes_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetPaths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AssetPaths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_("music_goes_here__txt",d1,aa,c8,0f)},
	{::hx::fsString,(void *) &AssetPaths_obj::bgflake__png,HX_("bgflake__png",b9,3c,1c,02)},
	{::hx::fsString,(void *) &AssetPaths_obj::bigbg__png,HX_("bigbg__png",e4,3c,fd,30)},
	{::hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_("images_go_here__txt",70,18,1f,93)},
	{::hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_("sounds_go_here__txt",e4,a8,cb,02)},
	{::hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_("data_goes_here__txt",ec,22,23,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AssetPaths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bgflake__png,"bgflake__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bigbg__png,"bigbg__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetPaths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bgflake__png,"bgflake__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bigbg__png,"bigbg__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
};

#endif

::hx::Class AssetPaths_obj::__mClass;

static ::String AssetPaths_obj_sStaticFields[] = {
	HX_("music_goes_here__txt",d1,aa,c8,0f),
	HX_("bgflake__png",b9,3c,1c,02),
	HX_("bigbg__png",e4,3c,fd,30),
	HX_("images_go_here__txt",70,18,1f,93),
	HX_("sounds_go_here__txt",e4,a8,cb,02),
	HX_("data_goes_here__txt",ec,22,23,e8),
	::String(null())
};

void AssetPaths_obj::__register()
{
	AssetPaths_obj _hx_dummy;
	AssetPaths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AssetPaths",3e,0f,e6,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetPaths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetPaths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetPaths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPaths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		music_goes_here__txt = HX_("assets/music/music-goes-here.txt",6b,32,60,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		bgflake__png = HX_("assets/images/bgflake.png",40,f6,f4,60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		bigbg__png = HX_("assets/images/bigbg.png",35,fd,0b,35);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		images_go_here__txt = HX_("assets/images/images-go-here.txt",0d,1d,45,a6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		sounds_go_here__txt = HX_("assets/sounds/sounds-go-here.txt",8d,b6,3d,a7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		data_goes_here__txt = HX_("assets/data/data-goes-here.txt",5f,4b,b2,8e);
            	}
}

