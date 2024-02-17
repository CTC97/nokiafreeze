#include <hxcpp.h>

#ifndef INCLUDED_BGFlake
#include <BGFlake.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e2d906d8ec24e520_19_new,"BGFlake","new",0x2d4f93a2,"BGFlake.new","BGFlake.hx",19,0xea64360e)
HX_LOCAL_STACK_FRAME(_hx_pos_e2d906d8ec24e520_36_update,"BGFlake","update",0x7925b807,"BGFlake.update","BGFlake.hx",36,0xea64360e)

void BGFlake_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e2d906d8ec24e520_19_new)
HXLINE(  20)		super::__construct(this->x,this->y,null());
HXLINE(  21)		this->loadGraphic(HX_("assets/images/bgflake.png",40,f6,f4,60),false,8,8,null(),null());
HXLINE(  23)		this->xSpawn = this->random->_hx_int(0,84,null());
HXLINE(  24)		this->ySpawn = (-1 * this->random->_hx_int(0,20,null()));
HXLINE(  25)		this->xSpeed = this->random->_hx_int(1,4,null());
HXLINE(  26)		this->ySpeed = this->random->_hx_int(1,4,null());
HXLINE(  27)		this->xDir = (this->random->_hx_float(0,100,null()) < ( (Float)(50) ));
HXLINE(  29)		if (this->xDir) {
HXLINE(  31)			this->xSpeed = (-1 * this->xSpeed);
            		}
            	}

Dynamic BGFlake_obj::__CreateEmpty() { return new BGFlake_obj; }

void *BGFlake_obj::_hx_vtable = 0;

Dynamic BGFlake_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BGFlake_obj > _hx_result = new BGFlake_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BGFlake_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x71b87ff0) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x71b87ff0;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void BGFlake_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_e2d906d8ec24e520_36_update)
HXLINE(  37)		this->super::update(elapsed);
HXLINE(  39)		this->set_x((this->x + (8 * this->xSpeed)));
HXLINE(  40)		this->set_y((this->y + (8 * this->ySpeed)));
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		bool _hx_tmp1;
HXDLIN(  42)		if (!((this->x > 384))) {
HXLINE(  42)			_hx_tmp1 = (this->x < 0);
            		}
            		else {
HXLINE(  42)			_hx_tmp1 = true;
            		}
HXDLIN(  42)		if (!(_hx_tmp1)) {
HXLINE(  42)			_hx_tmp = (this->y > 672);
            		}
            		else {
HXLINE(  42)			_hx_tmp = true;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  44)			this->kill();
HXLINE(  45)			this->set_exists(false);
            		}
            	}



::hx::ObjectPtr< BGFlake_obj > BGFlake_obj::__new() {
	::hx::ObjectPtr< BGFlake_obj > __this = new BGFlake_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BGFlake_obj > BGFlake_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BGFlake_obj *__this = (BGFlake_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BGFlake_obj), true, "BGFlake"));
	*(void **)__this = BGFlake_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BGFlake_obj::BGFlake_obj()
{
}

void BGFlake_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BGFlake);
	HX_MARK_MEMBER_NAME(xSpawn,"xSpawn");
	HX_MARK_MEMBER_NAME(ySpawn,"ySpawn");
	HX_MARK_MEMBER_NAME(xSpeed,"xSpeed");
	HX_MARK_MEMBER_NAME(ySpeed,"ySpeed");
	HX_MARK_MEMBER_NAME(xDir,"xDir");
	HX_MARK_MEMBER_NAME(random,"random");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BGFlake_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(xSpawn,"xSpawn");
	HX_VISIT_MEMBER_NAME(ySpawn,"ySpawn");
	HX_VISIT_MEMBER_NAME(xSpeed,"xSpeed");
	HX_VISIT_MEMBER_NAME(ySpeed,"ySpeed");
	HX_VISIT_MEMBER_NAME(xDir,"xDir");
	HX_VISIT_MEMBER_NAME(random,"random");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BGFlake_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xDir") ) { return ::hx::Val( xDir ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xSpawn") ) { return ::hx::Val( xSpawn ); }
		if (HX_FIELD_EQ(inName,"ySpawn") ) { return ::hx::Val( ySpawn ); }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { return ::hx::Val( xSpeed ); }
		if (HX_FIELD_EQ(inName,"ySpeed") ) { return ::hx::Val( ySpeed ); }
		if (HX_FIELD_EQ(inName,"random") ) { return ::hx::Val( random ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BGFlake_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xDir") ) { xDir=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xSpawn") ) { xSpawn=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ySpawn") ) { ySpawn=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { xSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ySpeed") ) { ySpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"random") ) { random=inValue.Cast<  ::flixel::math::FlxRandom >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BGFlake_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("xSpawn",a3,5a,67,0f));
	outFields->push(HX_("ySpawn",02,b7,c2,75));
	outFields->push(HX_("xSpeed",ef,53,6a,0f));
	outFields->push(HX_("ySpeed",4e,b0,c5,75));
	outFields->push(HX_("xDir",b5,8f,85,4f));
	outFields->push(HX_("random",03,22,8f,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BGFlake_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BGFlake_obj,xSpawn),HX_("xSpawn",a3,5a,67,0f)},
	{::hx::fsInt,(int)offsetof(BGFlake_obj,ySpawn),HX_("ySpawn",02,b7,c2,75)},
	{::hx::fsInt,(int)offsetof(BGFlake_obj,xSpeed),HX_("xSpeed",ef,53,6a,0f)},
	{::hx::fsInt,(int)offsetof(BGFlake_obj,ySpeed),HX_("ySpeed",4e,b0,c5,75)},
	{::hx::fsBool,(int)offsetof(BGFlake_obj,xDir),HX_("xDir",b5,8f,85,4f)},
	{::hx::fsObject /*  ::flixel::math::FlxRandom */ ,(int)offsetof(BGFlake_obj,random),HX_("random",03,22,8f,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BGFlake_obj_sStaticStorageInfo = 0;
#endif

static ::String BGFlake_obj_sMemberFields[] = {
	HX_("xSpawn",a3,5a,67,0f),
	HX_("ySpawn",02,b7,c2,75),
	HX_("xSpeed",ef,53,6a,0f),
	HX_("ySpeed",4e,b0,c5,75),
	HX_("xDir",b5,8f,85,4f),
	HX_("random",03,22,8f,b7),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class BGFlake_obj::__mClass;

void BGFlake_obj::__register()
{
	BGFlake_obj _hx_dummy;
	BGFlake_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("BGFlake",b0,da,98,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BGFlake_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BGFlake_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BGFlake_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BGFlake_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

