#ifndef INCLUDED_BGFlake
#define INCLUDED_BGFlake

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(BGFlake)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxRandom)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES BGFlake_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef BGFlake_obj OBJ_;
		BGFlake_obj();

	public:
		enum { _hx_ClassId = 0x71b87ff0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="BGFlake")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"BGFlake"); }
		static ::hx::ObjectPtr< BGFlake_obj > __new();
		static ::hx::ObjectPtr< BGFlake_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BGFlake_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BGFlake",b0,da,98,b1); }

		int xSpawn;
		int ySpawn;
		int xSpeed;
		int ySpeed;
		bool xDir;
		 ::flixel::math::FlxRandom random;
		void update(Float elapsed);

};


#endif /* INCLUDED_BGFlake */ 
