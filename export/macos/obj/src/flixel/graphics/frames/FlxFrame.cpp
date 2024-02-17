#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5df8bdd839d6a258_19_new,"flixel.graphics.frames.FlxFrame","new",0x06ad24e4,"flixel.graphics.frames.FlxFrame.new","flixel/graphics/frames/FlxFrame.hx",19,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_122_cacheFrameMatrix,"flixel.graphics.frames.FlxFrame","cacheFrameMatrix",0xffbbac28,"flixel.graphics.frames.FlxFrame.cacheFrameMatrix","flixel/graphics/frames/FlxFrame.hx",122,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_152_prepareBlitMatrix,"flixel.graphics.frames.FlxFrame","prepareBlitMatrix",0xbf3c9041,"flixel.graphics.frames.FlxFrame.prepareBlitMatrix","flixel/graphics/frames/FlxFrame.hx",152,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_184_rotateAndFlip,"flixel.graphics.frames.FlxFrame","rotateAndFlip",0x835ac58d,"flixel.graphics.frames.FlxFrame.rotateAndFlip","flixel/graphics/frames/FlxFrame.hx",184,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_233_prepareTransformedBlitMatrix,"flixel.graphics.frames.FlxFrame","prepareTransformedBlitMatrix",0xc5ea2af6,"flixel.graphics.frames.FlxFrame.prepareTransformedBlitMatrix","flixel/graphics/frames/FlxFrame.hx",233,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_248_prepareMatrix,"flixel.graphics.frames.FlxFrame","prepareMatrix",0xbf883cac,"flixel.graphics.frames.FlxFrame.prepareMatrix","flixel/graphics/frames/FlxFrame.hx",248,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_272_fillBlitMatrix,"flixel.graphics.frames.FlxFrame","fillBlitMatrix",0xa3605eb5,"flixel.graphics.frames.FlxFrame.fillBlitMatrix","flixel/graphics/frames/FlxFrame.hx",272,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_295_paint,"flixel.graphics.frames.FlxFrame","paint",0x0c093522,"flixel.graphics.frames.FlxFrame.paint","flixel/graphics/frames/FlxFrame.hx",295,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_342_paintRotatedAndFlipped,"flixel.graphics.frames.FlxFrame","paintRotatedAndFlipped",0x8f0fb1b2,"flixel.graphics.frames.FlxFrame.paintRotatedAndFlipped","flixel/graphics/frames/FlxFrame.hx",342,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_382_checkInputBitmap,"flixel.graphics.frames.FlxFrame","checkInputBitmap",0x11e1b8ad,"flixel.graphics.frames.FlxFrame.checkInputBitmap","flixel/graphics/frames/FlxFrame.hx",382,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_417_getDrawFrameRect,"flixel.graphics.frames.FlxFrame","getDrawFrameRect",0x7930f1d3,"flixel.graphics.frames.FlxFrame.getDrawFrameRect","flixel/graphics/frames/FlxFrame.hx",417,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_438_subFrameTo,"flixel.graphics.frames.FlxFrame","subFrameTo",0x37199964,"flixel.graphics.frames.FlxFrame.subFrameTo","flixel/graphics/frames/FlxFrame.hx",438,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_526_setBorderTo,"flixel.graphics.frames.FlxFrame","setBorderTo",0x0ba0ebcd,"flixel.graphics.frames.FlxFrame.setBorderTo","flixel/graphics/frames/FlxFrame.hx",526,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_543_clipTo,"flixel.graphics.frames.FlxFrame","clipTo",0x9ecb6267,"flixel.graphics.frames.FlxFrame.clipTo","flixel/graphics/frames/FlxFrame.hx",543,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_628_copyTo,"flixel.graphics.frames.FlxFrame","copyTo",0x5da6728c,"flixel.graphics.frames.FlxFrame.copyTo","flixel/graphics/frames/FlxFrame.hx",628,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_652_destroy,"flixel.graphics.frames.FlxFrame","destroy",0x74fe137e,"flixel.graphics.frames.FlxFrame.destroy","flixel/graphics/frames/FlxFrame.hx",652,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_665_toString,"flixel.graphics.frames.FlxFrame","toString",0x50e09da8,"flixel.graphics.frames.FlxFrame.toString","flixel/graphics/frames/FlxFrame.hx",665,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_669_set_frame,"flixel.graphics.frames.FlxFrame","set_frame",0x789f5014,"flixel.graphics.frames.FlxFrame.set_frame","flixel/graphics/frames/FlxFrame.hx",669,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_33_sort,"flixel.graphics.frames.FlxFrame","sort",0xd428c65a,"flixel.graphics.frames.FlxFrame.sort","flixel/graphics/frames/FlxFrame.hx",33,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_37_sortByName,"flixel.graphics.frames.FlxFrame","sortByName",0xdd6fa5bc,"flixel.graphics.frames.FlxFrame.sortByName","flixel/graphics/frames/FlxFrame.hx",37,0x6c7f608b)
namespace flixel{
namespace graphics{
namespace frames{

void FlxFrame_obj::__construct( ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration){
            		int angle = __o_angle.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            		Float duration = __o_duration.Default(((Float)0.0));
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_19_new)
HXLINE(  24)		this->matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  23)		this->rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  22)		this->point2 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  21)		this->point1 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 103)		this->parent = parent;
HXLINE( 104)		this->angle = angle;
HXLINE( 105)		this->flipX = flipX;
HXLINE( 106)		this->flipY = flipY;
HXLINE( 107)		this->duration = duration;
HXLINE( 109)		this->type = 0;
HXLINE( 111)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 111)		point->_inPool = false;
HXDLIN( 111)		this->sourceSize = point;
HXLINE( 112)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 112)		point1->_inPool = false;
HXDLIN( 112)		this->offset = point1;
HXLINE( 114)		::Array< Float > this1 = ::Array_obj< Float >::__new(6);
HXDLIN( 114)		this->blitMatrix = this1;
HXLINE( 115)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 116)			::Array< Float > this1 = ::Array_obj< Float >::__new(6);
HXDLIN( 116)			this->tileMatrix = this1;
            		}
            	}

Dynamic FlxFrame_obj::__CreateEmpty() { return new FlxFrame_obj; }

void *FlxFrame_obj::_hx_vtable = 0;

Dynamic FlxFrame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFrame_obj > _hx_result = new FlxFrame_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3adf0488;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_frames_FlxFrame__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::frames::FlxFrame_obj::destroy,
};

void *FlxFrame_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_frames_FlxFrame__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxFrame_obj::cacheFrameMatrix(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_122_cacheFrameMatrix)
HXLINE( 123)		{
HXLINE( 123)			 ::flixel::math::FlxMatrix mat = this->matrix;
HXDLIN( 123)			mat->identity();
HXDLIN( 123)			mat->translate(-(this->frame->x),-(this->frame->y));
HXDLIN( 123)			if ((this->angle == 90)) {
HXLINE( 123)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 123)				mat->translate(this->frame->height,( (Float)(0) ));
            			}
            			else {
HXLINE( 123)				if ((this->angle == -90)) {
HXLINE( 123)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 123)					mat->translate(( (Float)(0) ),this->frame->width);
            				}
            			}
HXDLIN( 123)			mat->translate(this->offset->x,this->offset->y);
            		}
HXLINE( 124)		this->blitMatrix->__unsafe_set(0,this->matrix->a);
HXLINE( 125)		this->blitMatrix->__unsafe_set(1,this->matrix->b);
HXLINE( 126)		this->blitMatrix->__unsafe_set(2,this->matrix->c);
HXLINE( 127)		this->blitMatrix->__unsafe_set(3,this->matrix->d);
HXLINE( 128)		this->blitMatrix->__unsafe_set(4,this->matrix->tx);
HXLINE( 129)		this->blitMatrix->__unsafe_set(5,this->matrix->ty);
HXLINE( 131)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 133)			{
HXLINE( 133)				 ::flixel::math::FlxMatrix mat = this->matrix;
HXDLIN( 133)				mat->identity();
HXDLIN( 133)				if ((this->angle == 90)) {
HXLINE( 133)					mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 133)					mat->translate(this->frame->height,( (Float)(0) ));
            				}
            				else {
HXLINE( 133)					if ((this->angle == -90)) {
HXLINE( 133)						mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 133)						mat->translate(( (Float)(0) ),this->frame->width);
            					}
            				}
HXDLIN( 133)				mat->translate(this->offset->x,this->offset->y);
            			}
HXLINE( 134)			this->tileMatrix->__unsafe_set(0,this->matrix->a);
HXLINE( 135)			this->tileMatrix->__unsafe_set(1,this->matrix->b);
HXLINE( 136)			this->tileMatrix->__unsafe_set(2,this->matrix->c);
HXLINE( 137)			this->tileMatrix->__unsafe_set(3,this->matrix->d);
HXLINE( 138)			this->tileMatrix->__unsafe_set(4,this->matrix->tx);
HXLINE( 139)			this->tileMatrix->__unsafe_set(5,this->matrix->ty);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,cacheFrameMatrix,(void))

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareBlitMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< bool >  __o_blit){
            		bool blit = __o_blit.Default(true);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_152_prepareBlitMatrix)
HXLINE( 153)		mat->identity();
HXLINE( 155)		if (blit) {
HXLINE( 156)			mat->translate(-(this->frame->x),-(this->frame->y));
            		}
HXLINE( 158)		if ((this->angle == 90)) {
HXLINE( 160)			mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXLINE( 161)			mat->translate(this->frame->height,( (Float)(0) ));
            		}
            		else {
HXLINE( 163)			if ((this->angle == -90)) {
HXLINE( 165)				mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXLINE( 166)				mat->translate(( (Float)(0) ),this->frame->width);
            			}
            		}
HXLINE( 169)		mat->translate(this->offset->x,this->offset->y);
HXLINE( 170)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,prepareBlitMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::rotateAndFlip( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_184_rotateAndFlip)
HXLINE( 185)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXLINE( 186)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXLINE( 189)		if ((rotation != 0)) {
HXLINE( 191)			int t = w;
HXLINE( 192)			w = h;
HXLINE( 193)			h = t;
HXLINE( 195)			if ((rotation == 90)) {
HXLINE( 197)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXLINE( 198)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 200)				bool _hx_tmp;
HXDLIN( 200)				if ((rotation != -90)) {
HXLINE( 200)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 200)					_hx_tmp = true;
            				}
HXDLIN( 200)				if (_hx_tmp) {
HXLINE( 202)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXLINE( 203)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXLINE( 208)		if (flipX) {
HXLINE( 210)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXLINE( 211)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXLINE( 214)		if (flipY) {
HXLINE( 216)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXLINE( 217)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXLINE( 220)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,rotateAndFlip,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareTransformedBlitMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_233_prepareTransformedBlitMatrix)
HXLINE( 234)		mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXDLIN( 234)		mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXDLIN( 234)		mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXDLIN( 234)		mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXDLIN( 234)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXDLIN( 234)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
HXLINE( 235)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 235)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 235)		if ((rotation != 0)) {
HXLINE( 235)			int t = w;
HXDLIN( 235)			w = h;
HXDLIN( 235)			h = t;
HXDLIN( 235)			if ((rotation == 90)) {
HXLINE( 235)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 235)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 235)				bool _hx_tmp;
HXDLIN( 235)				if ((rotation != -90)) {
HXLINE( 235)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 235)					_hx_tmp = true;
            				}
HXDLIN( 235)				if (_hx_tmp) {
HXLINE( 235)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 235)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXDLIN( 235)		if (flipX) {
HXLINE( 235)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXDLIN( 235)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXDLIN( 235)		if (flipY) {
HXLINE( 235)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXDLIN( 235)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXDLIN( 235)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareTransformedBlitMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_248_prepareMatrix)
HXLINE( 249)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 251)			mat->identity();
HXLINE( 252)			return mat;
            		}
HXLINE( 255)		mat->a = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,0)) );
HXLINE( 256)		mat->b = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,1)) );
HXLINE( 257)		mat->c = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,2)) );
HXLINE( 258)		mat->d = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,3)) );
HXLINE( 259)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,4)) );
HXLINE( 260)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,5)) );
HXLINE( 262)		bool doFlipX = (flipX != this->flipX);
HXLINE( 263)		bool doFlipY = (flipY != this->flipY);
HXLINE( 265)		bool _hx_tmp;
HXDLIN( 265)		bool _hx_tmp1;
HXDLIN( 265)		if ((rotation == 0)) {
HXLINE( 265)			_hx_tmp1 = !(doFlipX);
            		}
            		else {
HXLINE( 265)			_hx_tmp1 = false;
            		}
HXDLIN( 265)		if (_hx_tmp1) {
HXLINE( 265)			_hx_tmp = !(doFlipY);
            		}
            		else {
HXLINE( 265)			_hx_tmp = false;
            		}
HXDLIN( 265)		if (_hx_tmp) {
HXLINE( 266)			return mat;
            		}
HXLINE( 268)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 268)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 268)		if ((rotation != 0)) {
HXLINE( 268)			int t = w;
HXDLIN( 268)			w = h;
HXDLIN( 268)			h = t;
HXDLIN( 268)			if ((rotation == 90)) {
HXLINE( 268)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 268)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 268)				bool _hx_tmp;
HXDLIN( 268)				if ((rotation != -90)) {
HXLINE( 268)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 268)					_hx_tmp = true;
            				}
HXDLIN( 268)				if (_hx_tmp) {
HXLINE( 268)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 268)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXDLIN( 268)		if (doFlipX) {
HXLINE( 268)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXDLIN( 268)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXDLIN( 268)		if (doFlipY) {
HXLINE( 268)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXDLIN( 268)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXDLIN( 268)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::fillBlitMatrix( ::flixel::math::FlxMatrix mat){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_272_fillBlitMatrix)
HXLINE( 273)		mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXLINE( 274)		mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXLINE( 275)		mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXLINE( 276)		mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXLINE( 277)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXLINE( 278)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
HXLINE( 279)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,fillBlitMatrix,return )

 ::openfl::display::BitmapData FlxFrame_obj::paint( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_295_paint)
HXLINE( 296)		if (::hx::IsNull( point )) {
HXLINE( 298)			point = this->point1;
HXLINE( 299)			point->setTo(( (Float)(0) ),( (Float)(0) ));
            		}
HXLINE( 302)		 ::openfl::display::BitmapData bmd1 = bmd;
HXDLIN( 302)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 302)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 302)		if ((0 != 0)) {
HXLINE( 302)			int t = w;
HXDLIN( 302)			w = h;
HXDLIN( 302)			h = t;
            		}
HXDLIN( 302)		bool bmd2;
HXDLIN( 302)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 302)			bmd2 = disposeIfNotEqual;
            		}
            		else {
HXLINE( 302)			bmd2 = false;
            		}
HXDLIN( 302)		if (bmd2) {
HXLINE( 302)			bmd1 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd1,( (Float)(w) ),( (Float)(h) ));
            		}
HXDLIN( 302)		bool bmd3;
HXDLIN( 302)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 302)			bmd3 = !(mergeAlpha);
            		}
            		else {
HXLINE( 302)			bmd3 = false;
            		}
HXDLIN( 302)		if (bmd3) {
HXLINE( 302)			this->rect->setTo(point->x,point->y,( (Float)(w) ),( (Float)(h) ));
HXDLIN( 302)			bmd1->fillRect(this->rect,0);
            		}
            		else {
HXLINE( 302)			if (::hx::IsNull( bmd1 )) {
HXLINE( 302)				bmd1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,true,0);
            			}
            		}
HXDLIN( 302)		bmd = bmd1;
HXLINE( 304)		if ((this->type == 2)) {
HXLINE( 305)			return bmd;
            		}
HXLINE( 307)		if ((this->angle == 0)) {
HXLINE( 309)			{
HXLINE( 309)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 309)				 ::openfl::geom::Point p = this->point2;
HXDLIN( 309)				if (::hx::IsNull( p )) {
HXLINE( 309)					p =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            				}
HXDLIN( 309)				p->x = this1->x;
HXDLIN( 309)				p->y = this1->y;
            			}
HXLINE( 310)			 ::openfl::geom::Point fh = this->point2;
HXDLIN( 310)			fh->x = (fh->x + point->x);
HXLINE( 311)			 ::openfl::geom::Point fh1 = this->point2;
HXDLIN( 311)			fh1->y = (fh1->y + point->y);
HXLINE( 312)			 ::openfl::display::BitmapData _hx_tmp = this->parent->bitmap;
HXDLIN( 312)			 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 312)			 ::openfl::geom::Rectangle FlashRect = this->rect;
HXDLIN( 312)			if (::hx::IsNull( FlashRect )) {
HXLINE( 312)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 312)			FlashRect->x = _this->x;
HXDLIN( 312)			FlashRect->y = _this->y;
HXDLIN( 312)			FlashRect->width = _this->width;
HXDLIN( 312)			FlashRect->height = _this->height;
HXDLIN( 312)			bmd->copyPixels(_hx_tmp,FlashRect,this->point2,null(),null(),mergeAlpha);
            		}
            		else {
HXLINE( 316)			{
HXLINE( 316)				 ::flixel::math::FlxMatrix mat = this->matrix;
HXDLIN( 316)				mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXDLIN( 316)				mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXDLIN( 316)				mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXDLIN( 316)				mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXDLIN( 316)				mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXDLIN( 316)				mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
            			}
HXLINE( 317)			this->matrix->translate(point->x,point->y);
HXLINE( 318)			 ::flixel::math::FlxMatrix mat1 = this->matrix;
HXDLIN( 318)			Float x = this->frame->x;
HXDLIN( 318)			Float y = this->frame->y;
HXDLIN( 318)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 318)			point1->_inPool = false;
HXDLIN( 318)			 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 318)			point2->_weak = true;
HXDLIN( 318)			 ::flixel::math::FlxBasePoint p1 = point2;
HXDLIN( 318)			 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 318)			Float x1 = (_this->x + _this->width);
HXDLIN( 318)			 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 318)			Float y1 = (_this1->y + _this1->height);
HXDLIN( 318)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y1);
HXDLIN( 318)			point3->_inPool = false;
HXDLIN( 318)			 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 318)			point4->_weak = true;
HXDLIN( 318)			 ::flixel::math::FlxBasePoint p2 = point4;
HXDLIN( 318)			{
HXLINE( 318)				Float x11 = (((p1->x * mat1->a) + (p1->y * mat1->c)) + mat1->tx);
HXDLIN( 318)				Float y11 = (((p1->x * mat1->b) + (p1->y * mat1->d)) + mat1->ty);
HXDLIN( 318)				{
HXLINE( 318)					p1->set_x(x11);
HXDLIN( 318)					p1->set_y(y11);
            				}
            			}
HXDLIN( 318)			{
HXLINE( 318)				Float x12 = (((p2->x * mat1->a) + (p2->y * mat1->c)) + mat1->tx);
HXDLIN( 318)				Float y12 = (((p2->x * mat1->b) + (p2->y * mat1->d)) + mat1->ty);
HXDLIN( 318)				{
HXLINE( 318)					p2->set_x(x12);
HXDLIN( 318)					p2->set_y(y12);
            				}
            			}
HXDLIN( 318)			 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 318)			_this2->x = ( (Float)(0) );
HXDLIN( 318)			_this2->y = ( (Float)(0) );
HXDLIN( 318)			_this2->width = ( (Float)(0) );
HXDLIN( 318)			_this2->height = ( (Float)(0) );
HXDLIN( 318)			 ::flixel::math::FlxRect rect = _this2;
HXDLIN( 318)			rect->_inPool = false;
HXDLIN( 318)			 ::flixel::math::FlxRect _this3 = rect;
HXDLIN( 318)			Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 318)			Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 318)			Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 318)			Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 318)			if (p1->_weak) {
HXLINE( 318)				p1->put();
            			}
HXDLIN( 318)			if (p2->_weak) {
HXLINE( 318)				p2->put();
            			}
HXDLIN( 318)			_this3->x = minX;
HXDLIN( 318)			_this3->y = minY;
HXDLIN( 318)			_this3->width = (maxX - minX);
HXDLIN( 318)			_this3->height = (maxY - minY);
HXDLIN( 318)			 ::flixel::math::FlxRect flxRect = _this3;
HXDLIN( 318)			{
HXLINE( 318)				 ::openfl::geom::Rectangle FlashRect = this->rect;
HXDLIN( 318)				if (::hx::IsNull( FlashRect )) {
HXLINE( 318)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 318)				FlashRect->x = flxRect->x;
HXDLIN( 318)				FlashRect->y = flxRect->y;
HXDLIN( 318)				FlashRect->width = flxRect->width;
HXDLIN( 318)				FlashRect->height = flxRect->height;
            			}
HXDLIN( 318)			if (!(flxRect->_inPool)) {
HXLINE( 318)				flxRect->_inPool = true;
HXDLIN( 318)				flxRect->_weak = false;
HXDLIN( 318)				::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            			}
HXDLIN( 318)			 ::openfl::geom::Rectangle rect1 = this->rect;
HXLINE( 319)			bmd->draw(this->parent->bitmap,this->matrix,null(),null(),rect1,null());
            		}
HXLINE( 322)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,paint,return )

 ::openfl::display::BitmapData FlxFrame_obj::paintRotatedAndFlipped( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_342_paintRotatedAndFlipped)
HXLINE( 343)		bool _hx_tmp;
HXDLIN( 343)		if ((this->type == 2)) {
HXLINE( 343)			_hx_tmp = (rotation == 0);
            		}
            		else {
HXLINE( 343)			_hx_tmp = false;
            		}
HXDLIN( 343)		if (_hx_tmp) {
HXLINE( 344)			return this->paint(bmd,point,mergeAlpha,disposeIfNotEqual);
            		}
HXLINE( 346)		if (::hx::IsNull( point )) {
HXLINE( 348)			point = this->point2;
HXLINE( 349)			point->setTo(( (Float)(0) ),( (Float)(0) ));
            		}
HXLINE( 352)		 ::openfl::display::BitmapData bmd1 = bmd;
HXDLIN( 352)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 352)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 352)		if ((rotation != 0)) {
HXLINE( 352)			int t = w;
HXDLIN( 352)			w = h;
HXDLIN( 352)			h = t;
            		}
HXDLIN( 352)		bool bmd2;
HXDLIN( 352)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 352)			bmd2 = disposeIfNotEqual;
            		}
            		else {
HXLINE( 352)			bmd2 = false;
            		}
HXDLIN( 352)		if (bmd2) {
HXLINE( 352)			bmd1 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd1,( (Float)(w) ),( (Float)(h) ));
            		}
HXDLIN( 352)		bool bmd3;
HXDLIN( 352)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 352)			bmd3 = !(mergeAlpha);
            		}
            		else {
HXLINE( 352)			bmd3 = false;
            		}
HXDLIN( 352)		if (bmd3) {
HXLINE( 352)			this->rect->setTo(point->x,point->y,( (Float)(w) ),( (Float)(h) ));
HXDLIN( 352)			bmd1->fillRect(this->rect,0);
            		}
            		else {
HXLINE( 352)			if (::hx::IsNull( bmd1 )) {
HXLINE( 352)				bmd1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,true,0);
            			}
            		}
HXDLIN( 352)		bmd = bmd1;
HXLINE( 354)		if ((this->type == 2)) {
HXLINE( 355)			return bmd;
            		}
HXLINE( 357)		bool doFlipX = (flipX != this->flipX);
HXLINE( 358)		bool doFlipY = (flipY != this->flipY);
HXLINE( 360)		this->prepareTransformedBlitMatrix(this->matrix,rotation,doFlipX,doFlipY);
HXLINE( 361)		this->matrix->translate(point->x,point->y);
HXLINE( 362)		 ::flixel::math::FlxMatrix mat = this->matrix;
HXDLIN( 362)		Float x = this->frame->x;
HXDLIN( 362)		Float y = this->frame->y;
HXDLIN( 362)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 362)		point1->_inPool = false;
HXDLIN( 362)		 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 362)		point2->_weak = true;
HXDLIN( 362)		 ::flixel::math::FlxBasePoint p1 = point2;
HXDLIN( 362)		 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 362)		Float x1 = (_this->x + _this->width);
HXDLIN( 362)		 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 362)		Float y1 = (_this1->y + _this1->height);
HXDLIN( 362)		 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y1);
HXDLIN( 362)		point3->_inPool = false;
HXDLIN( 362)		 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 362)		point4->_weak = true;
HXDLIN( 362)		 ::flixel::math::FlxBasePoint p2 = point4;
HXDLIN( 362)		{
HXLINE( 362)			Float x11 = (((p1->x * mat->a) + (p1->y * mat->c)) + mat->tx);
HXDLIN( 362)			Float y11 = (((p1->x * mat->b) + (p1->y * mat->d)) + mat->ty);
HXDLIN( 362)			{
HXLINE( 362)				p1->set_x(x11);
HXDLIN( 362)				p1->set_y(y11);
            			}
            		}
HXDLIN( 362)		{
HXLINE( 362)			Float x12 = (((p2->x * mat->a) + (p2->y * mat->c)) + mat->tx);
HXDLIN( 362)			Float y12 = (((p2->x * mat->b) + (p2->y * mat->d)) + mat->ty);
HXDLIN( 362)			{
HXLINE( 362)				p2->set_x(x12);
HXDLIN( 362)				p2->set_y(y12);
            			}
            		}
HXDLIN( 362)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 362)		_this2->x = ( (Float)(0) );
HXDLIN( 362)		_this2->y = ( (Float)(0) );
HXDLIN( 362)		_this2->width = ( (Float)(0) );
HXDLIN( 362)		_this2->height = ( (Float)(0) );
HXDLIN( 362)		 ::flixel::math::FlxRect rect = _this2;
HXDLIN( 362)		rect->_inPool = false;
HXDLIN( 362)		 ::flixel::math::FlxRect _this3 = rect;
HXDLIN( 362)		Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 362)		Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 362)		Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 362)		Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 362)		if (p1->_weak) {
HXLINE( 362)			p1->put();
            		}
HXDLIN( 362)		if (p2->_weak) {
HXLINE( 362)			p2->put();
            		}
HXDLIN( 362)		_this3->x = minX;
HXDLIN( 362)		_this3->y = minY;
HXDLIN( 362)		_this3->width = (maxX - minX);
HXDLIN( 362)		_this3->height = (maxY - minY);
HXDLIN( 362)		 ::flixel::math::FlxRect flxRect = _this3;
HXDLIN( 362)		{
HXLINE( 362)			 ::openfl::geom::Rectangle FlashRect = this->rect;
HXDLIN( 362)			if (::hx::IsNull( FlashRect )) {
HXLINE( 362)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 362)			FlashRect->x = flxRect->x;
HXDLIN( 362)			FlashRect->y = flxRect->y;
HXDLIN( 362)			FlashRect->width = flxRect->width;
HXDLIN( 362)			FlashRect->height = flxRect->height;
            		}
HXDLIN( 362)		if (!(flxRect->_inPool)) {
HXLINE( 362)			flxRect->_inPool = true;
HXDLIN( 362)			flxRect->_weak = false;
HXDLIN( 362)			::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            		}
HXDLIN( 362)		 ::openfl::geom::Rectangle rect1 = this->rect;
HXLINE( 363)		bmd->draw(this->parent->bitmap,this->matrix,null(),null(),rect1,null());
HXLINE( 364)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxFrame_obj,paintRotatedAndFlipped,return )

 ::openfl::display::BitmapData FlxFrame_obj::checkInputBitmap( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		int rotation = __o_rotation.Default(0);
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_382_checkInputBitmap)
HXLINE( 383)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXLINE( 384)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXLINE( 386)		if ((rotation != 0)) {
HXLINE( 388)			int t = w;
HXLINE( 389)			w = h;
HXLINE( 390)			h = t;
            		}
HXLINE( 393)		bool _hx_tmp;
HXDLIN( 393)		if (::hx::IsNotNull( bmd )) {
HXLINE( 393)			_hx_tmp = disposeIfNotEqual;
            		}
            		else {
HXLINE( 393)			_hx_tmp = false;
            		}
HXDLIN( 393)		if (_hx_tmp) {
HXLINE( 394)			bmd = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd,( (Float)(w) ),( (Float)(h) ));
            		}
HXLINE( 396)		bool _hx_tmp1;
HXDLIN( 396)		if (::hx::IsNotNull( bmd )) {
HXLINE( 396)			_hx_tmp1 = !(mergeAlpha);
            		}
            		else {
HXLINE( 396)			_hx_tmp1 = false;
            		}
HXDLIN( 396)		if (_hx_tmp1) {
HXLINE( 398)			this->rect->setTo(point->x,point->y,( (Float)(w) ),( (Float)(h) ));
HXLINE( 399)			bmd->fillRect(this->rect,0);
            		}
            		else {
HXLINE( 401)			if (::hx::IsNull( bmd )) {
HXLINE( 403)				bmd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,true,0);
            			}
            		}
HXLINE( 406)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxFrame_obj,checkInputBitmap,return )

 ::openfl::geom::Rectangle FlxFrame_obj::getDrawFrameRect( ::flixel::math::FlxMatrix mat){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_417_getDrawFrameRect)
HXLINE( 418)		Float x = this->frame->x;
HXDLIN( 418)		Float y = this->frame->y;
HXDLIN( 418)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 418)		point->_inPool = false;
HXDLIN( 418)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 418)		point1->_weak = true;
HXDLIN( 418)		 ::flixel::math::FlxBasePoint p1 = point1;
HXLINE( 419)		 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 419)		Float x1 = (_this->x + _this->width);
HXDLIN( 419)		 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 419)		Float y1 = (_this1->y + _this1->height);
HXDLIN( 419)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y1);
HXDLIN( 419)		point2->_inPool = false;
HXDLIN( 419)		 ::flixel::math::FlxBasePoint point3 = point2;
HXDLIN( 419)		point3->_weak = true;
HXDLIN( 419)		 ::flixel::math::FlxBasePoint p2 = point3;
HXLINE( 421)		{
HXLINE( 421)			Float x11 = (((p1->x * mat->a) + (p1->y * mat->c)) + mat->tx);
HXDLIN( 421)			Float y11 = (((p1->x * mat->b) + (p1->y * mat->d)) + mat->ty);
HXDLIN( 421)			{
HXLINE( 421)				p1->set_x(x11);
HXDLIN( 421)				p1->set_y(y11);
            			}
            		}
HXLINE( 422)		{
HXLINE( 422)			Float x12 = (((p2->x * mat->a) + (p2->y * mat->c)) + mat->tx);
HXDLIN( 422)			Float y12 = (((p2->x * mat->b) + (p2->y * mat->d)) + mat->ty);
HXDLIN( 422)			{
HXLINE( 422)				p2->set_x(x12);
HXDLIN( 422)				p2->set_y(y12);
            			}
            		}
HXLINE( 424)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 424)		_this2->x = ( (Float)(0) );
HXDLIN( 424)		_this2->y = ( (Float)(0) );
HXDLIN( 424)		_this2->width = ( (Float)(0) );
HXDLIN( 424)		_this2->height = ( (Float)(0) );
HXDLIN( 424)		 ::flixel::math::FlxRect rect = _this2;
HXDLIN( 424)		rect->_inPool = false;
HXDLIN( 424)		 ::flixel::math::FlxRect _this3 = rect;
HXDLIN( 424)		Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 424)		Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 424)		Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 424)		Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 424)		if (p1->_weak) {
HXLINE( 424)			p1->put();
            		}
HXDLIN( 424)		if (p2->_weak) {
HXLINE( 424)			p2->put();
            		}
HXDLIN( 424)		_this3->x = minX;
HXDLIN( 424)		_this3->y = minY;
HXDLIN( 424)		_this3->width = (maxX - minX);
HXDLIN( 424)		_this3->height = (maxY - minY);
HXDLIN( 424)		 ::flixel::math::FlxRect flxRect = _this3;
HXLINE( 425)		{
HXLINE( 425)			 ::openfl::geom::Rectangle FlashRect = this->rect;
HXDLIN( 425)			if (::hx::IsNull( FlashRect )) {
HXLINE( 425)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 425)			FlashRect->x = flxRect->x;
HXDLIN( 425)			FlashRect->y = flxRect->y;
HXDLIN( 425)			FlashRect->width = flxRect->width;
HXDLIN( 425)			FlashRect->height = flxRect->height;
            		}
HXLINE( 426)		if (!(flxRect->_inPool)) {
HXLINE( 426)			flxRect->_inPool = true;
HXDLIN( 426)			flxRect->_weak = false;
HXDLIN( 426)			::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            		}
HXLINE( 427)		return this->rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,getDrawFrameRect,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::subFrameTo( ::flixel::math::FlxRect rect, ::flixel::graphics::frames::FlxFrame frameToFill){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_438_subFrameTo)
HXLINE( 439)		if (::hx::IsNull( frameToFill )) {
HXLINE( 441)			frameToFill =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null(),null());
            		}
            		else {
HXLINE( 445)			frameToFill->parent = this->parent;
HXLINE( 446)			frameToFill->angle = this->angle;
HXLINE( 447)			frameToFill->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(frameToFill->frame)) ));
            		}
HXLINE( 450)		{
HXLINE( 450)			 ::flixel::math::FlxBasePoint this1 = frameToFill->sourceSize;
HXDLIN( 450)			Float y = rect->height;
HXDLIN( 450)			this1->set_x(rect->width);
HXDLIN( 450)			this1->set_y(y);
            		}
HXLINE( 453)		if ((this->type == 2)) {
HXLINE( 455)			frameToFill->type = 2;
HXLINE( 456)			{
HXLINE( 456)				 ::flixel::math::FlxBasePoint this1 = frameToFill->offset;
HXDLIN( 456)				this1->set_x(( (Float)(0) ));
HXDLIN( 456)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 457)			return frameToFill;
            		}
HXLINE( 460)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 460)		_this->x = ( (Float)(0) );
HXDLIN( 460)		_this->y = ( (Float)(0) );
HXDLIN( 460)		_this->width = ( (Float)(0) );
HXDLIN( 460)		_this->height = ( (Float)(0) );
HXDLIN( 460)		 ::flixel::math::FlxRect rect1 = _this;
HXDLIN( 460)		rect1->_inPool = false;
HXDLIN( 460)		 ::flixel::math::FlxRect _this1 = rect1;
HXDLIN( 460)		_this1->width = this->frame->width;
HXDLIN( 460)		_this1->height = this->frame->height;
HXDLIN( 460)		 ::flixel::math::FlxRect clippedRect = _this1;
HXLINE( 461)		if ((this->angle != 0)) {
HXLINE( 463)			clippedRect->width = this->frame->height;
HXLINE( 464)			clippedRect->height = this->frame->width;
            		}
HXLINE( 467)		Float ox = ::Math_obj::max(this->offset->x,( (Float)(0) ));
HXLINE( 468)		Float oy = ::Math_obj::max(this->offset->y,( (Float)(0) ));
HXLINE( 470)		{
HXLINE( 470)			 ::flixel::math::FlxRect rect2 = rect;
HXDLIN( 470)			rect2->x = (rect2->x + -(ox));
HXDLIN( 470)			 ::flixel::math::FlxRect rect3 = rect;
HXDLIN( 470)			rect3->y = (rect3->y + -(oy));
            		}
HXLINE( 471)		 ::flixel::math::FlxRect frameRect = clippedRect->intersection(rect,null());
HXLINE( 472)		clippedRect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedRect)) );
HXLINE( 473)		{
HXLINE( 473)			 ::flixel::math::FlxRect rect4 = rect;
HXDLIN( 473)			rect4->x = (rect4->x + ox);
HXDLIN( 473)			 ::flixel::math::FlxRect rect5 = rect;
HXDLIN( 473)			rect5->y = (rect5->y + oy);
            		}
HXLINE( 475)		bool _hx_tmp;
HXDLIN( 475)		if ((frameRect->width != 0)) {
HXLINE( 475)			_hx_tmp = (frameRect->height == 0);
            		}
            		else {
HXLINE( 475)			_hx_tmp = true;
            		}
HXDLIN( 475)		if (_hx_tmp) {
HXLINE( 477)			frameToFill->type = 2;
HXLINE( 478)			{
HXLINE( 478)				frameRect->x = ( (Float)(0) );
HXDLIN( 478)				frameRect->y = ( (Float)(0) );
HXDLIN( 478)				frameRect->width = ( (Float)(0) );
HXDLIN( 478)				frameRect->height = ( (Float)(0) );
            			}
HXLINE( 479)			frameToFill->set_frame(frameRect);
HXLINE( 480)			{
HXLINE( 480)				 ::flixel::math::FlxBasePoint this1 = frameToFill->offset;
HXDLIN( 480)				this1->set_x(( (Float)(0) ));
HXDLIN( 480)				this1->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 484)			frameToFill->type = 0;
HXLINE( 485)			{
HXLINE( 485)				 ::flixel::math::FlxBasePoint this1 = frameToFill->offset;
HXDLIN( 485)				Float y = frameRect->y;
HXDLIN( 485)				this1->set_x(frameRect->x);
HXDLIN( 485)				this1->set_y(y);
HXDLIN( 485)				 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 485)				Float y1 = rect->y;
HXDLIN( 485)				this2->set_x((this2->x - rect->x));
HXDLIN( 485)				this2->set_y((this2->y - y1));
HXDLIN( 485)				 ::flixel::math::FlxBasePoint this3 = this2;
HXDLIN( 485)				 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 485)				{
HXLINE( 485)					Float y2 = point->y;
HXDLIN( 485)					this3->set_x((this3->x + point->x));
HXDLIN( 485)					this3->set_y((this3->y + y2));
            				}
HXDLIN( 485)				if (point->_weak) {
HXLINE( 485)					point->put();
            				}
            			}
HXLINE( 487)			Float x = frameRect->x;
HXDLIN( 487)			Float y3 = frameRect->y;
HXDLIN( 487)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y3);
HXDLIN( 487)			point1->_inPool = false;
HXDLIN( 487)			 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 487)			point2->_weak = true;
HXDLIN( 487)			 ::flixel::math::FlxBasePoint p1 = point2;
HXLINE( 488)			Float x1 = (frameRect->x + frameRect->width);
HXDLIN( 488)			Float y4 = (frameRect->y + frameRect->height);
HXDLIN( 488)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y4);
HXDLIN( 488)			point3->_inPool = false;
HXDLIN( 488)			 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 488)			point4->_weak = true;
HXDLIN( 488)			 ::flixel::math::FlxBasePoint p2 = point4;
HXLINE( 490)			this->matrix->identity();
HXLINE( 492)			if ((this->angle == -90)) {
HXLINE( 494)				{
HXLINE( 494)					 ::flixel::math::FlxMatrix _this = this->matrix;
HXDLIN( 494)					_this->setTo(-(_this->b),_this->a,-(_this->d),_this->c,-(_this->ty),_this->tx);
            				}
HXLINE( 495)				this->matrix->translate(this->frame->width,( (Float)(0) ));
            			}
            			else {
HXLINE( 497)				if ((this->angle == 90)) {
HXLINE( 499)					{
HXLINE( 499)						 ::flixel::math::FlxMatrix _this = this->matrix;
HXDLIN( 499)						_this->setTo(_this->b,-(_this->a),_this->d,-(_this->c),_this->ty,-(_this->tx));
            					}
HXLINE( 500)					this->matrix->translate(( (Float)(0) ),this->frame->height);
            				}
            			}
HXLINE( 503)			if ((this->angle != 0)) {
HXLINE( 505)				{
HXLINE( 505)					 ::openfl::geom::Matrix matrix = this->matrix;
HXDLIN( 505)					Float x1 = (((p1->x * matrix->a) + (p1->y * matrix->c)) + matrix->tx);
HXDLIN( 505)					Float y1 = (((p1->x * matrix->b) + (p1->y * matrix->d)) + matrix->ty);
HXDLIN( 505)					{
HXLINE( 505)						p1->set_x(x1);
HXDLIN( 505)						p1->set_y(y1);
            					}
            				}
HXLINE( 506)				{
HXLINE( 506)					 ::openfl::geom::Matrix matrix1 = this->matrix;
HXDLIN( 506)					Float x11 = (((p2->x * matrix1->a) + (p2->y * matrix1->c)) + matrix1->tx);
HXDLIN( 506)					Float y11 = (((p2->x * matrix1->b) + (p2->y * matrix1->d)) + matrix1->ty);
HXDLIN( 506)					{
HXLINE( 506)						p2->set_x(x11);
HXDLIN( 506)						p2->set_y(y11);
            					}
            				}
            			}
HXLINE( 509)			{
HXLINE( 509)				Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 509)				Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 509)				Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 509)				Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 509)				if (p1->_weak) {
HXLINE( 509)					p1->put();
            				}
HXDLIN( 509)				if (p2->_weak) {
HXLINE( 509)					p2->put();
            				}
HXDLIN( 509)				{
HXLINE( 509)					frameRect->x = minX;
HXDLIN( 509)					frameRect->y = minY;
HXDLIN( 509)					frameRect->width = (maxX - minX);
HXDLIN( 509)					frameRect->height = (maxY - minY);
            				}
            			}
HXLINE( 510)			{
HXLINE( 510)				 ::flixel::math::FlxRect frameRect1 = frameRect;
HXDLIN( 510)				frameRect1->x = (frameRect1->x + this->frame->x);
HXDLIN( 510)				 ::flixel::math::FlxRect frameRect2 = frameRect;
HXDLIN( 510)				frameRect2->y = (frameRect2->y + this->frame->y);
            			}
HXLINE( 511)			frameToFill->set_frame(frameRect);
HXLINE( 512)			frameToFill->cacheFrameMatrix();
            		}
HXLINE( 515)		return frameToFill;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,subFrameTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::setBorderTo( ::flixel::math::FlxBasePoint border, ::flixel::graphics::frames::FlxFrame frameToFill){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_526_setBorderTo)
HXLINE( 527)		Float X = border->x;
HXDLIN( 527)		Float Y = border->y;
HXDLIN( 527)		Float Width = (this->sourceSize->x - (( (Float)(2) ) * border->x));
HXDLIN( 527)		Float Height = (this->sourceSize->y - (( (Float)(2) ) * border->y));
HXDLIN( 527)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 527)		_this->x = X;
HXDLIN( 527)		_this->y = Y;
HXDLIN( 527)		_this->width = Width;
HXDLIN( 527)		_this->height = Height;
HXDLIN( 527)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 527)		rect->_inPool = false;
HXDLIN( 527)		 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 528)		frameToFill = this->subFrameTo(rect1,frameToFill);
HXLINE( 529)		frameToFill->name = this->name;
HXLINE( 530)		rect1 = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(rect1)) );
HXLINE( 531)		return frameToFill;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,setBorderTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::clipTo( ::flixel::math::FlxRect clip, ::flixel::graphics::frames::FlxFrame clippedFrame){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_543_clipTo)
HXLINE( 544)		if (::hx::IsNull( clippedFrame )) {
HXLINE( 546)			clippedFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null(),null());
            		}
            		else {
HXLINE( 550)			clippedFrame->parent = this->parent;
HXLINE( 551)			clippedFrame->angle = this->angle;
HXLINE( 552)			clippedFrame->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedFrame->frame)) ));
            		}
HXLINE( 555)		{
HXLINE( 555)			 ::flixel::math::FlxBasePoint this1 = clippedFrame->sourceSize;
HXDLIN( 555)			 ::flixel::math::FlxBasePoint p = this->sourceSize;
HXDLIN( 555)			{
HXLINE( 555)				Float y = p->y;
HXDLIN( 555)				this1->set_x(p->x);
HXDLIN( 555)				this1->set_y(y);
            			}
HXDLIN( 555)			if (p->_weak) {
HXLINE( 555)				p->put();
            			}
            		}
HXLINE( 556)		clippedFrame->name = this->name;
HXLINE( 559)		if ((this->type == 2)) {
HXLINE( 561)			clippedFrame->type = 2;
HXLINE( 562)			{
HXLINE( 562)				 ::flixel::math::FlxBasePoint this1 = clippedFrame->offset;
HXDLIN( 562)				this1->set_x(( (Float)(0) ));
HXDLIN( 562)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 563)			return clippedFrame;
            		}
HXLINE( 566)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 566)		_this->x = ( (Float)(0) );
HXDLIN( 566)		_this->y = ( (Float)(0) );
HXDLIN( 566)		_this->width = ( (Float)(0) );
HXDLIN( 566)		_this->height = ( (Float)(0) );
HXDLIN( 566)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 566)		rect->_inPool = false;
HXDLIN( 566)		 ::flixel::math::FlxRect _this1 = rect;
HXDLIN( 566)		_this1->width = this->frame->width;
HXDLIN( 566)		_this1->height = this->frame->height;
HXDLIN( 566)		 ::flixel::math::FlxRect clippedRect = _this1;
HXLINE( 567)		if ((this->angle != 0)) {
HXLINE( 569)			clippedRect->width = this->frame->height;
HXLINE( 570)			clippedRect->height = this->frame->width;
            		}
HXLINE( 573)		{
HXLINE( 573)			 ::flixel::math::FlxRect clip1 = clip;
HXDLIN( 573)			clip1->x = (clip1->x + -(this->offset->x));
HXDLIN( 573)			 ::flixel::math::FlxRect clip2 = clip;
HXDLIN( 573)			clip2->y = (clip2->y + -(this->offset->y));
            		}
HXLINE( 574)		 ::flixel::math::FlxRect frameRect = clippedRect->intersection(clip,null());
HXLINE( 575)		clippedRect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedRect)) );
HXLINE( 577)		bool _hx_tmp;
HXDLIN( 577)		if ((frameRect->width != 0)) {
HXLINE( 577)			_hx_tmp = (frameRect->height == 0);
            		}
            		else {
HXLINE( 577)			_hx_tmp = true;
            		}
HXDLIN( 577)		if (_hx_tmp) {
HXLINE( 579)			clippedFrame->type = 2;
HXLINE( 580)			{
HXLINE( 580)				frameRect->x = ( (Float)(0) );
HXDLIN( 580)				frameRect->y = ( (Float)(0) );
HXDLIN( 580)				frameRect->width = ( (Float)(0) );
HXDLIN( 580)				frameRect->height = ( (Float)(0) );
            			}
HXLINE( 581)			clippedFrame->set_frame(frameRect);
HXLINE( 582)			{
HXLINE( 582)				 ::flixel::math::FlxBasePoint this1 = clippedFrame->offset;
HXDLIN( 582)				this1->set_x(( (Float)(0) ));
HXDLIN( 582)				this1->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 586)			clippedFrame->type = 0;
HXLINE( 587)			{
HXLINE( 587)				 ::flixel::math::FlxBasePoint this1 = clippedFrame->offset;
HXDLIN( 587)				Float y = frameRect->y;
HXDLIN( 587)				this1->set_x(frameRect->x);
HXDLIN( 587)				this1->set_y(y);
HXDLIN( 587)				 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 587)				 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 587)				{
HXLINE( 587)					Float y1 = point->y;
HXDLIN( 587)					this2->set_x((this2->x + point->x));
HXDLIN( 587)					this2->set_y((this2->y + y1));
            				}
HXDLIN( 587)				if (point->_weak) {
HXLINE( 587)					point->put();
            				}
            			}
HXLINE( 589)			Float x = frameRect->x;
HXDLIN( 589)			Float y2 = frameRect->y;
HXDLIN( 589)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y2);
HXDLIN( 589)			point1->_inPool = false;
HXDLIN( 589)			 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 589)			point2->_weak = true;
HXDLIN( 589)			 ::flixel::math::FlxBasePoint p1 = point2;
HXLINE( 590)			Float x1 = (frameRect->x + frameRect->width);
HXDLIN( 590)			Float y3 = (frameRect->y + frameRect->height);
HXDLIN( 590)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x1,y3);
HXDLIN( 590)			point3->_inPool = false;
HXDLIN( 590)			 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 590)			point4->_weak = true;
HXDLIN( 590)			 ::flixel::math::FlxBasePoint p2 = point4;
HXLINE( 592)			this->matrix->identity();
HXLINE( 594)			if ((this->angle == -90)) {
HXLINE( 596)				{
HXLINE( 596)					 ::flixel::math::FlxMatrix _this = this->matrix;
HXDLIN( 596)					_this->setTo(-(_this->b),_this->a,-(_this->d),_this->c,-(_this->ty),_this->tx);
            				}
HXLINE( 597)				this->matrix->translate(this->frame->width,( (Float)(0) ));
            			}
            			else {
HXLINE( 599)				if ((this->angle == 90)) {
HXLINE( 601)					{
HXLINE( 601)						 ::flixel::math::FlxMatrix _this = this->matrix;
HXDLIN( 601)						_this->setTo(_this->b,-(_this->a),_this->d,-(_this->c),_this->ty,-(_this->tx));
            					}
HXLINE( 602)					this->matrix->translate(( (Float)(0) ),this->frame->height);
            				}
            			}
HXLINE( 605)			if ((this->angle != 0)) {
HXLINE( 607)				{
HXLINE( 607)					 ::openfl::geom::Matrix matrix = this->matrix;
HXDLIN( 607)					Float x1 = (((p1->x * matrix->a) + (p1->y * matrix->c)) + matrix->tx);
HXDLIN( 607)					Float y1 = (((p1->x * matrix->b) + (p1->y * matrix->d)) + matrix->ty);
HXDLIN( 607)					{
HXLINE( 607)						p1->set_x(x1);
HXDLIN( 607)						p1->set_y(y1);
            					}
            				}
HXLINE( 608)				{
HXLINE( 608)					 ::openfl::geom::Matrix matrix1 = this->matrix;
HXDLIN( 608)					Float x11 = (((p2->x * matrix1->a) + (p2->y * matrix1->c)) + matrix1->tx);
HXDLIN( 608)					Float y11 = (((p2->x * matrix1->b) + (p2->y * matrix1->d)) + matrix1->ty);
HXDLIN( 608)					{
HXLINE( 608)						p2->set_x(x11);
HXDLIN( 608)						p2->set_y(y11);
            					}
            				}
            			}
HXLINE( 611)			{
HXLINE( 611)				Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 611)				Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 611)				Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 611)				Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 611)				if (p1->_weak) {
HXLINE( 611)					p1->put();
            				}
HXDLIN( 611)				if (p2->_weak) {
HXLINE( 611)					p2->put();
            				}
HXDLIN( 611)				{
HXLINE( 611)					frameRect->x = minX;
HXDLIN( 611)					frameRect->y = minY;
HXDLIN( 611)					frameRect->width = (maxX - minX);
HXDLIN( 611)					frameRect->height = (maxY - minY);
            				}
            			}
HXLINE( 612)			{
HXLINE( 612)				 ::flixel::math::FlxRect frameRect1 = frameRect;
HXDLIN( 612)				frameRect1->x = (frameRect1->x + this->frame->x);
HXDLIN( 612)				 ::flixel::math::FlxRect frameRect2 = frameRect;
HXDLIN( 612)				frameRect2->y = (frameRect2->y + this->frame->y);
            			}
HXLINE( 613)			clippedFrame->set_frame(frameRect);
HXLINE( 614)			clippedFrame->cacheFrameMatrix();
            		}
HXLINE( 617)		{
HXLINE( 617)			 ::flixel::math::FlxRect clip3 = clip;
HXDLIN( 617)			clip3->x = (clip3->x + this->offset->x);
HXDLIN( 617)			 ::flixel::math::FlxRect clip4 = clip;
HXDLIN( 617)			clip4->y = (clip4->y + this->offset->y);
            		}
HXLINE( 618)		return clippedFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,clipTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::copyTo( ::flixel::graphics::frames::FlxFrame clone){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_628_copyTo)
HXLINE( 629)		if (::hx::IsNull( clone )) {
HXLINE( 631)			clone =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null(),null());
            		}
            		else {
HXLINE( 635)			clone->parent = this->parent;
HXLINE( 636)			clone->angle = this->angle;
HXLINE( 637)			clone->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clone->frame)) ));
            		}
HXLINE( 640)		{
HXLINE( 640)			 ::flixel::math::FlxBasePoint this1 = clone->offset;
HXDLIN( 640)			 ::flixel::math::FlxBasePoint p = this->offset;
HXDLIN( 640)			{
HXLINE( 640)				Float y = p->y;
HXDLIN( 640)				this1->set_x(p->x);
HXDLIN( 640)				this1->set_y(y);
            			}
HXDLIN( 640)			if (p->_weak) {
HXLINE( 640)				p->put();
            			}
            		}
HXLINE( 641)		clone->flipX = this->flipX;
HXLINE( 642)		clone->flipY = this->flipY;
HXLINE( 643)		{
HXLINE( 643)			 ::flixel::math::FlxBasePoint this2 = clone->sourceSize;
HXDLIN( 643)			 ::flixel::math::FlxBasePoint p1 = this->sourceSize;
HXDLIN( 643)			{
HXLINE( 643)				Float y1 = p1->y;
HXDLIN( 643)				this2->set_x(p1->x);
HXDLIN( 643)				this2->set_y(y1);
            			}
HXDLIN( 643)			if (p1->_weak) {
HXLINE( 643)				p1->put();
            			}
            		}
HXLINE( 644)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 644)		_this->x = ( (Float)(0) );
HXDLIN( 644)		_this->y = ( (Float)(0) );
HXDLIN( 644)		_this->width = ( (Float)(0) );
HXDLIN( 644)		_this->height = ( (Float)(0) );
HXDLIN( 644)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 644)		rect->_inPool = false;
HXDLIN( 644)		 ::flixel::math::FlxRect _this1 = rect;
HXDLIN( 644)		 ::flixel::math::FlxRect Rect = this->frame;
HXDLIN( 644)		_this1->x = Rect->x;
HXDLIN( 644)		_this1->y = Rect->y;
HXDLIN( 644)		_this1->width = Rect->width;
HXDLIN( 644)		_this1->height = Rect->height;
HXDLIN( 644)		if (Rect->_weak) {
HXLINE( 644)			if (!(Rect->_inPool)) {
HXLINE( 644)				Rect->_inPool = true;
HXDLIN( 644)				Rect->_weak = false;
HXDLIN( 644)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN( 644)		clone->set_frame(_this1);
HXLINE( 645)		clone->type = this->type;
HXLINE( 646)		clone->name = this->name;
HXLINE( 647)		clone->cacheFrameMatrix();
HXLINE( 648)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,copyTo,return )

void FlxFrame_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_652_destroy)
HXLINE( 653)		this->name = null();
HXLINE( 654)		this->parent = null();
HXLINE( 655)		this->sourceSize = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->sourceSize)) );
HXLINE( 656)		this->offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 657)		this->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->frame)) ));
HXLINE( 658)		this->uv = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->uv)) );
HXLINE( 659)		this->blitMatrix = null();
HXLINE( 660)		this->tileMatrix = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroy,(void))

::String FlxFrame_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_665_toString)
HXDLIN( 665)		 ::Dynamic value = this->name;
HXDLIN( 665)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 665)		_this->label = HX_("name",4b,72,ff,48);
HXDLIN( 665)		_this->value = value;
HXDLIN( 665)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(1)->init(0,_this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,toString,return )

 ::flixel::math::FlxRect FlxFrame_obj::set_frame( ::flixel::math::FlxRect value){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_669_set_frame)
HXLINE( 670)		if (::hx::IsNotNull( value )) {
HXLINE( 672)			if (::hx::IsNull( this->uv )) {
HXLINE( 673)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 673)				_this->x = ( (Float)(0) );
HXDLIN( 673)				_this->y = ( (Float)(0) );
HXDLIN( 673)				_this->width = ( (Float)(0) );
HXDLIN( 673)				_this->height = ( (Float)(0) );
HXDLIN( 673)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 673)				rect->_inPool = false;
HXDLIN( 673)				this->uv = rect;
            			}
HXLINE( 675)			{
HXLINE( 675)				 ::flixel::math::FlxRect _this = this->uv;
HXDLIN( 675)				Float Width = ((value->x + value->width) / ( (Float)(this->parent->width) ));
HXDLIN( 675)				Float Height = ((value->y + value->height) / ( (Float)(this->parent->height) ));
HXDLIN( 675)				_this->x = (value->x / ( (Float)(this->parent->width) ));
HXDLIN( 675)				_this->y = (value->y / ( (Float)(this->parent->height) ));
HXDLIN( 675)				_this->width = Width;
HXDLIN( 675)				_this->height = Height;
            			}
            		}
HXLINE( 678)		return (this->frame = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,set_frame,return )

void FlxFrame_obj::sort(::Array< ::Dynamic> frames,int prefixLength,int postfixLength){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,postfixLength1,int,prefixLength1) HXARGC(2)
            		int _hx_run( ::flixel::graphics::frames::FlxFrame frame1, ::flixel::graphics::frames::FlxFrame frame2){
            			HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_33_sort)
HXDLIN(  33)			return ::flixel::graphics::frames::FlxFrame_obj::sortByName(frame1,frame2,prefixLength1,postfixLength1);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_33_sort)
HXDLIN(  33)		int prefixLength1 = prefixLength;
HXDLIN(  33)		int postfixLength1 = postfixLength;
HXDLIN(  33)		::haxe::ds::ArraySort_obj::sort(frames, ::Dynamic(new _hx_Closure_0(postfixLength1,prefixLength1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxFrame_obj,sort,(void))

int FlxFrame_obj::sortByName( ::flixel::graphics::frames::FlxFrame frame1, ::flixel::graphics::frames::FlxFrame frame2,int prefixLength,int postfixLength){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_37_sortByName)
HXLINE(  38)		::String name1 = frame1->name;
HXLINE(  39)		::String name2 = frame2->name;
HXLINE(  40)		 ::Dynamic num1 = ::Std_obj::parseInt(name1.substring(prefixLength,(name1.length - postfixLength)));
HXLINE(  41)		 ::Dynamic num2 = ::Std_obj::parseInt(name2.substring(prefixLength,(name2.length - postfixLength)));
HXLINE(  42)		if (::hx::IsNull( num1 )) {
HXLINE(  43)			num1 = 0;
            		}
HXLINE(  44)		if (::hx::IsNull( num2 )) {
HXLINE(  45)			num2 = 0;
            		}
HXLINE(  47)		return (( (int)(num1) ) - ( (int)(num2) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sortByName,return )


::hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__new( ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration) {
	::hx::ObjectPtr< FlxFrame_obj > __this = new FlxFrame_obj();
	__this->__construct(parent,__o_angle,__o_flipX,__o_flipY,__o_duration);
	return __this;
}

::hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration) {
	FlxFrame_obj *__this = (FlxFrame_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFrame_obj), true, "flixel.graphics.frames.FlxFrame"));
	*(void **)__this = FlxFrame_obj::_hx_vtable;
	__this->__construct(parent,__o_angle,__o_flipX,__o_flipY,__o_duration);
	return __this;
}

FlxFrame_obj::FlxFrame_obj()
{
}

void FlxFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFrame);
	HX_MARK_MEMBER_NAME(point1,"point1");
	HX_MARK_MEMBER_NAME(point2,"point2");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_MARK_MEMBER_NAME(blitMatrix,"blitMatrix");
	HX_MARK_END_CLASS();
}

void FlxFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(point1,"point1");
	HX_VISIT_MEMBER_NAME(point2,"point2");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_VISIT_MEMBER_NAME(blitMatrix,"blitMatrix");
}

::hx::Val FlxFrame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return ::hx::Val( uv ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return ::hx::Val( rect ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"paint") ) { return ::hx::Val( paint_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point1") ) { return ::hx::Val( point1 ); }
		if (HX_FIELD_EQ(inName,"point2") ) { return ::hx::Val( point2 ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return ::hx::Val( matrix ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"clipTo") ) { return ::hx::Val( clipTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return ::hx::Val( sourceSize ); }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { return ::hx::Val( tileMatrix ); }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { return ::hx::Val( blitMatrix ); }
		if (HX_FIELD_EQ(inName,"subFrameTo") ) { return ::hx::Val( subFrameTo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setBorderTo") ) { return ::hx::Val( setBorderTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotateAndFlip") ) { return ::hx::Val( rotateAndFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"prepareMatrix") ) { return ::hx::Val( prepareMatrix_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fillBlitMatrix") ) { return ::hx::Val( fillBlitMatrix_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cacheFrameMatrix") ) { return ::hx::Val( cacheFrameMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkInputBitmap") ) { return ::hx::Val( checkInputBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDrawFrameRect") ) { return ::hx::Val( getDrawFrameRect_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareBlitMatrix") ) { return ::hx::Val( prepareBlitMatrix_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"paintRotatedAndFlipped") ) { return ::hx::Val( paintRotatedAndFlipped_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"prepareTransformedBlitMatrix") ) { return ::hx::Val( prepareTransformedBlitMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortByName") ) { outValue = sortByName_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxFrame_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frame(inValue.Cast<  ::flixel::math::FlxRect >()) );frame=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point1") ) { point1=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { tileMatrix=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { blitMatrix=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("point1",e1,11,2e,f7));
	outFields->push(HX_("point2",e2,11,2e,f7));
	outFields->push(HX_("rect",24,4d,a7,4b));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("uv",61,66,00,00));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("sourceSize",3c,87,b7,74));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("tileMatrix",0f,0c,5f,20));
	outFields->push(HX_("blitMatrix",56,78,21,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxFrame_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxFrame_obj,point1),HX_("point1",e1,11,2e,f7)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxFrame_obj,point2),HX_("point2",e2,11,2e,f7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxFrame_obj,rect),HX_("rect",24,4d,a7,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxFrame_obj,matrix),HX_("matrix",41,36,c8,bb)},
	{::hx::fsString,(int)offsetof(FlxFrame_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxFrame_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxFrame_obj,uv),HX_("uv",61,66,00,00)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxFrame_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsInt,(int)offsetof(FlxFrame_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxFrame_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxFrame_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxFrame_obj,sourceSize),HX_("sourceSize",3c,87,b7,74)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxFrame_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsFloat,(int)offsetof(FlxFrame_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsInt,(int)offsetof(FlxFrame_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxFrame_obj,tileMatrix),HX_("tileMatrix",0f,0c,5f,20)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxFrame_obj,blitMatrix),HX_("blitMatrix",56,78,21,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFrame_obj_sMemberFields[] = {
	HX_("point1",e1,11,2e,f7),
	HX_("point2",e2,11,2e,f7),
	HX_("rect",24,4d,a7,4b),
	HX_("matrix",41,36,c8,bb),
	HX_("name",4b,72,ff,48),
	HX_("frame",2d,78,83,06),
	HX_("uv",61,66,00,00),
	HX_("parent",2a,05,7e,ed),
	HX_("angle",d3,43,e2,22),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("sourceSize",3c,87,b7,74),
	HX_("offset",93,97,3f,60),
	HX_("duration",54,0f,8e,14),
	HX_("type",ba,f2,08,4d),
	HX_("tileMatrix",0f,0c,5f,20),
	HX_("blitMatrix",56,78,21,d8),
	HX_("cacheFrameMatrix",2c,83,fa,88),
	HX_("prepareBlitMatrix",bd,dc,f9,4c),
	HX_("rotateAndFlip",09,24,e1,45),
	HX_("prepareTransformedBlitMatrix",fa,77,91,f4),
	HX_("prepareMatrix",28,9b,0e,82),
	HX_("fillBlitMatrix",b9,ac,6c,16),
	HX_("paint",9e,b7,4e,bd),
	HX_("paintRotatedAndFlipped",b6,a3,df,c7),
	HX_("checkInputBitmap",b1,8f,20,9b),
	HX_("getDrawFrameRect",d7,c8,6f,02),
	HX_("subFrameTo",68,95,dd,c4),
	HX_("setBorderTo",49,73,59,89),
	HX_("clipTo",6b,0c,58,0a),
	HX_("copyTo",90,1c,33,c9),
	HX_("destroy",fa,2c,86,24),
	HX_("toString",ac,d0,6e,38),
	HX_("set_frame",90,c0,7d,2d),
	::String(null()) };

::hx::Class FlxFrame_obj::__mClass;

static ::String FlxFrame_obj_sStaticFields[] = {
	HX_("sort",5e,27,58,4c),
	HX_("sortByName",c0,a1,33,6b),
	::String(null())
};

void FlxFrame_obj::__register()
{
	FlxFrame_obj _hx_dummy;
	FlxFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxFrame",f2,22,40,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxFrame_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFrame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFrame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFrame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
