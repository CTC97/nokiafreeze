#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Int
#include <openfl/display/ShaderParameter_Int.h>
#endif
#ifndef INCLUDED_openfl_display__ShaderData_ShaderData_Impl_
#include <openfl/display/_ShaderData/ShaderData_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4b006e5218f2daf8_261_new,"openfl.display.Shader","new",0x88fbb381,"openfl.display.Shader.new","openfl/display/Shader.hx",261,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_271___clearUseArray,"openfl.display.Shader","__clearUseArray",0xbc4a9c00,"openfl.display.Shader.__clearUseArray","openfl/display/Shader.hx",271,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_319___createGLShader,"openfl.display.Shader","__createGLShader",0xd8186585,"openfl.display.Shader.__createGLShader","openfl/display/Shader.hx",319,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_342___createGLProgram,"openfl.display.Shader","__createGLProgram",0xd1b33824,"openfl.display.Shader.__createGLProgram","openfl/display/Shader.hx",342,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_376___disable,"openfl.display.Shader","__disable",0x171f2ca9,"openfl.display.Shader.__disable","openfl/display/Shader.hx",376,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_383___disableGL,"openfl.display.Shader","__disableGL",0x7ec2a70e,"openfl.display.Shader.__disableGL","openfl/display/Shader.hx",383,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_421___enable,"openfl.display.Shader","__enable",0x8f5f3ee2,"openfl.display.Shader.__enable","openfl/display/Shader.hx",421,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_431___enableGL,"openfl.display.Shader","__enableGL",0x94d67987,"openfl.display.Shader.__enableGL","openfl/display/Shader.hx",431,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_451___init,"openfl.display.Shader","__init",0x2faba5af,"openfl.display.Shader.__init","openfl/display/Shader.hx",451,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_464___initGL,"openfl.display.Shader","__initGL",0x2e23ed94,"openfl.display.Shader.__initGL","openfl/display/Shader.hx",464,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_572___processGLData,"openfl.display.Shader","__processGLData",0x90b8a01f,"openfl.display.Shader.__processGLData","openfl/display/Shader.hx",572,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_733___update,"openfl.display.Shader","__update",0x1ddd1668,"openfl.display.Shader.__update","openfl/display/Shader.hx",733,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_741___updateFromBuffer,"openfl.display.Shader","__updateFromBuffer",0x7639ee92,"openfl.display.Shader.__updateFromBuffer","openfl/display/Shader.hx",741,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_748___updateGL,"openfl.display.Shader","__updateGL",0x201dbe8d,"openfl.display.Shader.__updateGL","openfl/display/Shader.hx",748,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_774___updateGLFromBuffer,"openfl.display.Shader","__updateGLFromBuffer",0x5f0216f7,"openfl.display.Shader.__updateGLFromBuffer","openfl/display/Shader.hx",774,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_911_get_data,"openfl.display.Shader","get_data",0xb0c636f2,"openfl.display.Shader.get_data","openfl/display/Shader.hx",911,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_922_set_data,"openfl.display.Shader","set_data",0x5f239066,"openfl.display.Shader.set_data","openfl/display/Shader.hx",922,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_927_get_glFragmentSource,"openfl.display.Shader","get_glFragmentSource",0x5d5fb298,"openfl.display.Shader.get_glFragmentSource","openfl/display/Shader.hx",927,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_931_set_glFragmentSource,"openfl.display.Shader","set_glFragmentSource",0x2a176a0c,"openfl.display.Shader.set_glFragmentSource","openfl/display/Shader.hx",931,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_942_get_glVertexSource,"openfl.display.Shader","get_glVertexSource",0xa3c917ec,"openfl.display.Shader.get_glVertexSource","openfl/display/Shader.hx",942,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_946_set_glVertexSource,"openfl.display.Shader","set_glVertexSource",0x80784a60,"openfl.display.Shader.set_glVertexSource","openfl/display/Shader.hx",946,0xae8f5dcd)
HX_LOCAL_STACK_FRAME(_hx_pos_4b006e5218f2daf8_124_boot,"openfl.display.Shader","boot",0x4b5a5df1,"openfl.display.Shader.boot","openfl/display/Shader.hx",124,0xae8f5dcd)
namespace openfl{
namespace display{

void Shader_obj::__construct( ::openfl::utils::ByteArrayData code){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_261_new)
HXLINE( 262)		this->byteCode = code;
HXLINE( 263)		this->precisionHint = 1;
HXLINE( 265)		this->_hx___glSourceDirty = true;
HXLINE( 266)		this->_hx___numPasses = 1;
HXLINE( 267)		this->_hx___data = ::openfl::display::_ShaderData::ShaderData_Impl__obj::_new(code);
            	}

Dynamic Shader_obj::__CreateEmpty() { return new Shader_obj; }

void *Shader_obj::_hx_vtable = 0;

Dynamic Shader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Shader_obj > _hx_result = new Shader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Shader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78d8d737;
}

void Shader_obj::_hx___clearUseArray(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_271___clearUseArray)
HXLINE( 272)		{
HXLINE( 272)			int _g = 0;
HXDLIN( 272)			::Array< ::Dynamic> _g1 = this->_hx___paramBool;
HXDLIN( 272)			while((_g < _g1->length)){
HXLINE( 272)				 ::openfl::display::ShaderParameter_Bool parameter = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 272)				_g = (_g + 1);
HXLINE( 274)				parameter->_hx___useArray = false;
            			}
            		}
HXLINE( 277)		{
HXLINE( 277)			int _g2 = 0;
HXDLIN( 277)			::Array< ::Dynamic> _g3 = this->_hx___paramFloat;
HXDLIN( 277)			while((_g2 < _g3->length)){
HXLINE( 277)				 ::openfl::display::ShaderParameter_Float parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 277)				_g2 = (_g2 + 1);
HXLINE( 279)				parameter->_hx___useArray = false;
            			}
            		}
HXLINE( 282)		{
HXLINE( 282)			int _g4 = 0;
HXDLIN( 282)			::Array< ::Dynamic> _g5 = this->_hx___paramInt;
HXDLIN( 282)			while((_g4 < _g5->length)){
HXLINE( 282)				 ::openfl::display::ShaderParameter_Int parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 282)				_g4 = (_g4 + 1);
HXLINE( 284)				parameter->_hx___useArray = false;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___clearUseArray,(void))

 ::lime::graphics::opengl::GLObject Shader_obj::_hx___createGLShader(::String source,int type){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_319___createGLShader)
HXLINE( 320)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 322)		 ::lime::graphics::opengl::GLObject shader = gl->createShader(type);
HXLINE( 323)		gl->shaderSource(shader,source);
HXLINE( 324)		gl->compileShader(shader);
HXLINE( 325)		::String shaderInfoLog = gl->getShaderInfoLog(shader);
HXLINE( 326)		int compileStatus = ( (int)(gl->getShaderParameter(shader,gl->COMPILE_STATUS)) );
HXLINE( 328)		bool _hx_tmp;
HXDLIN( 328)		if (::hx::IsNull( shaderInfoLog )) {
HXLINE( 328)			_hx_tmp = (compileStatus == 0);
            		}
            		else {
HXLINE( 328)			_hx_tmp = true;
            		}
HXDLIN( 328)		if (_hx_tmp) {
HXLINE( 330)			::String message;
HXDLIN( 330)			if ((compileStatus == 0)) {
HXLINE( 330)				message = HX_("Error",a8,3b,57,06);
            			}
            			else {
HXLINE( 330)				message = HX_("Info",8e,64,94,30);
            			}
HXLINE( 331)			::String message1;
HXDLIN( 331)			if ((type == gl->VERTEX_SHADER)) {
HXLINE( 331)				message1 = HX_(" compiling vertex shader",91,d5,12,08);
            			}
            			else {
HXLINE( 331)				message1 = HX_(" compiling fragment shader",a5,a2,ad,f8);
            			}
HXDLIN( 331)			message = (message + message1);
HXLINE( 332)			message = (message + (HX_("\n",0a,00,00,00) + shaderInfoLog));
HXLINE( 333)			message = (message + (HX_("\n",0a,00,00,00) + source));
HXLINE( 334)			if ((compileStatus == 0)) {
HXLINE( 334)				::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("openfl/display/Shader.hx",cd,5d,8f,ae),334,HX_("openfl.display.Shader",0f,df,61,a7),HX_("__createGLShader",46,69,da,33)));
            			}
            			else {
HXLINE( 335)				if (::hx::IsNotNull( shaderInfoLog )) {
HXLINE( 335)					::lime::utils::Log_obj::debug(message,::hx::SourceInfo(HX_("openfl/display/Shader.hx",cd,5d,8f,ae),335,HX_("openfl.display.Shader",0f,df,61,a7),HX_("__createGLShader",46,69,da,33)));
            				}
            			}
            		}
HXLINE( 338)		return shader;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___createGLShader,return )

 ::lime::graphics::opengl::GLObject Shader_obj::_hx___createGLProgram(::String vertexSource,::String fragmentSource){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_342___createGLProgram)
HXLINE( 343)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 345)		 ::lime::graphics::opengl::GLObject vertexShader = this->_hx___createGLShader(vertexSource,gl->VERTEX_SHADER);
HXLINE( 346)		 ::lime::graphics::opengl::GLObject fragmentShader = this->_hx___createGLShader(fragmentSource,gl->FRAGMENT_SHADER);
HXLINE( 348)		 ::lime::graphics::opengl::GLObject program = gl->createProgram();
HXLINE( 351)		{
HXLINE( 351)			int _g = 0;
HXDLIN( 351)			::Array< ::Dynamic> _g1 = this->_hx___paramFloat;
HXDLIN( 351)			while((_g < _g1->length)){
HXLINE( 351)				 ::openfl::display::ShaderParameter_Float param = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 351)				_g = (_g + 1);
HXLINE( 353)				bool _hx_tmp;
HXDLIN( 353)				if ((param->name.indexOf(HX_("Position",c9,5c,ac,a4),null()) > -1)) {
HXLINE( 353)					_hx_tmp = ::StringTools_obj::startsWith(param->name,HX_("openfl_",cf,ba,42,40));
            				}
            				else {
HXLINE( 353)					_hx_tmp = false;
            				}
HXDLIN( 353)				if (_hx_tmp) {
HXLINE( 355)					gl->bindAttribLocation(program,0,param->name);
HXLINE( 356)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE( 360)		gl->attachShader(program,vertexShader);
HXLINE( 361)		gl->attachShader(program,fragmentShader);
HXLINE( 362)		gl->linkProgram(program);
HXLINE( 364)		if (::hx::IsEq( gl->getProgramParameter(program,gl->LINK_STATUS),0 )) {
HXLINE( 366)			::String message = HX_("Unable to initialize the shader program",f0,86,8b,39);
HXLINE( 367)			message = (message + (HX_("\n",0a,00,00,00) + gl->getProgramInfoLog(program)));
HXLINE( 368)			::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("openfl/display/Shader.hx",cd,5d,8f,ae),368,HX_("openfl.display.Shader",0f,df,61,a7),HX_("__createGLProgram",43,7d,b4,bf)));
            		}
HXLINE( 371)		return program;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___createGLProgram,return )

void Shader_obj::_hx___disable(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_376___disable)
HXDLIN( 376)		if (::hx::IsNotNull( this->program )) {
HXLINE( 378)			this->_hx___disableGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___disable,(void))

void Shader_obj::_hx___disableGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_383___disableGL)
HXLINE( 384)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 386)		int textureCount = 0;
HXLINE( 388)		{
HXLINE( 388)			int _g = 0;
HXDLIN( 388)			::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 388)			while((_g < _g1->length)){
HXLINE( 388)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 388)				_g = (_g + 1);
HXLINE( 390)				input->_hx___disableGL(this->_hx___context,textureCount);
HXLINE( 391)				textureCount = (textureCount + 1);
HXLINE( 392)				if ((textureCount == gl->MAX_TEXTURE_IMAGE_UNITS)) {
HXLINE( 392)					goto _hx_goto_9;
            				}
            			}
            			_hx_goto_9:;
            		}
HXLINE( 395)		{
HXLINE( 395)			int _g2 = 0;
HXDLIN( 395)			::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 395)			while((_g2 < _g3->length)){
HXLINE( 395)				 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 395)				_g2 = (_g2 + 1);
HXLINE( 397)				parameter->_hx___disableGL(this->_hx___context);
            			}
            		}
HXLINE( 400)		{
HXLINE( 400)			int _g4 = 0;
HXDLIN( 400)			::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 400)			while((_g4 < _g5->length)){
HXLINE( 400)				 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 400)				_g4 = (_g4 + 1);
HXLINE( 402)				parameter->_hx___disableGL(this->_hx___context);
            			}
            		}
HXLINE( 405)		{
HXLINE( 405)			int _g6 = 0;
HXDLIN( 405)			::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 405)			while((_g6 < _g7->length)){
HXLINE( 405)				 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 405)				_g6 = (_g6 + 1);
HXLINE( 407)				parameter->_hx___disableGL(this->_hx___context);
            			}
            		}
HXLINE( 410)		this->_hx___context->_hx___bindGLArrayBuffer(null());
HXLINE( 413)		if ((this->_hx___context->_hx___context->type == HX_("opengl",6f,64,94,21))) {
HXLINE( 415)			gl->disable(gl->TEXTURE_2D);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___disableGL,(void))

void Shader_obj::_hx___enable(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_421___enable)
HXLINE( 422)		this->_hx___init();
HXLINE( 424)		if (::hx::IsNotNull( this->program )) {
HXLINE( 426)			this->_hx___enableGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___enable,(void))

void Shader_obj::_hx___enableGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_431___enableGL)
HXLINE( 432)		int textureCount = 0;
HXLINE( 434)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 436)		{
HXLINE( 436)			int _g = 0;
HXDLIN( 436)			::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 436)			while((_g < _g1->length)){
HXLINE( 436)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 436)				_g = (_g + 1);
HXLINE( 438)				gl->uniform1i(( (int)(input->index) ),textureCount);
HXLINE( 439)				textureCount = (textureCount + 1);
            			}
            		}
HXLINE( 443)		bool _hx_tmp;
HXDLIN( 443)		if ((this->_hx___context->_hx___context->type == HX_("opengl",6f,64,94,21))) {
HXLINE( 443)			_hx_tmp = (textureCount > 0);
            		}
            		else {
HXLINE( 443)			_hx_tmp = false;
            		}
HXDLIN( 443)		if (_hx_tmp) {
HXLINE( 445)			gl->enable(gl->TEXTURE_2D);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___enableGL,(void))

void Shader_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_451___init)
HXLINE( 452)		if (::hx::IsNull( this->_hx___data )) {
HXLINE( 454)			this->_hx___data = ::openfl::display::_ShaderData::ShaderData_Impl__obj::_new(null());
            		}
HXLINE( 457)		bool _hx_tmp;
HXDLIN( 457)		bool _hx_tmp1;
HXDLIN( 457)		if (::hx::IsNotNull( this->_hx___glFragmentSource )) {
HXLINE( 457)			_hx_tmp1 = ::hx::IsNotNull( this->_hx___glVertexSource );
            		}
            		else {
HXLINE( 457)			_hx_tmp1 = false;
            		}
HXDLIN( 457)		if (_hx_tmp1) {
HXLINE( 457)			if (::hx::IsNotNull( this->program )) {
HXLINE( 457)				_hx_tmp = this->_hx___glSourceDirty;
            			}
            			else {
HXLINE( 457)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 457)			_hx_tmp = false;
            		}
HXDLIN( 457)		if (_hx_tmp) {
HXLINE( 459)			this->_hx___initGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___init,(void))

void Shader_obj::_hx___initGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_464___initGL)
HXLINE( 465)		bool _hx_tmp;
HXDLIN( 465)		if (!(this->_hx___glSourceDirty)) {
HXLINE( 465)			_hx_tmp = ::hx::IsNull( this->_hx___paramBool );
            		}
            		else {
HXLINE( 465)			_hx_tmp = true;
            		}
HXDLIN( 465)		if (_hx_tmp) {
HXLINE( 467)			this->_hx___glSourceDirty = false;
HXLINE( 468)			this->program = null();
HXLINE( 470)			this->_hx___inputBitmapData = ::Array_obj< ::Dynamic>::__new();
HXLINE( 471)			this->_hx___paramBool = ::Array_obj< ::Dynamic>::__new();
HXLINE( 472)			this->_hx___paramFloat = ::Array_obj< ::Dynamic>::__new();
HXLINE( 473)			this->_hx___paramInt = ::Array_obj< ::Dynamic>::__new();
HXLINE( 475)			this->_hx___processGLData(this->get_glVertexSource(),HX_("attribute",1c,70,f0,fa));
HXLINE( 476)			this->_hx___processGLData(this->get_glVertexSource(),HX_("uniform",34,41,64,b5));
HXLINE( 477)			this->_hx___processGLData(this->get_glFragmentSource(),HX_("uniform",34,41,64,b5));
            		}
HXLINE( 480)		bool _hx_tmp1;
HXDLIN( 480)		if (::hx::IsNotNull( this->_hx___context )) {
HXLINE( 480)			_hx_tmp1 = ::hx::IsNull( this->program );
            		}
            		else {
HXLINE( 480)			_hx_tmp1 = false;
            		}
HXDLIN( 480)		if (_hx_tmp1) {
HXLINE( 482)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 488)			::String prefix;
HXDLIN( 488)			if (::hx::IsEq( this->precisionHint,1 )) {
HXLINE( 488)				prefix = ((((HX_("#ifdef GL_FRAGMENT_PRECISION_HIGH\n",97,28,cb,f3) + HX_("precision highp float;\n",57,4a,f7,14)) + HX_("#else\n",2e,de,b0,6d)) + HX_("precision mediump float;\n",64,96,1e,cd)) + HX_("#endif\n",f5,d8,f7,a9));
            			}
            			else {
HXLINE( 488)				prefix = HX_("precision lowp float;\n",69,31,06,bd);
            			}
HXLINE( 487)			::String prefix1 = ((HX_("#ifdef GL_ES\n",3d,09,5c,91) + prefix) + HX_("#endif\n\n",75,fd,e5,0e));
HXLINE( 496)			::String vertex = (prefix1 + this->get_glVertexSource());
HXLINE( 497)			::String fragment = (prefix1 + this->get_glFragmentSource());
HXLINE( 499)			::String id = (vertex + fragment);
HXLINE( 501)			if (this->_hx___context->_hx___programs->exists(id)) {
HXLINE( 503)				this->program = ( ( ::openfl::display3D::Program3D)(this->_hx___context->_hx___programs->get(id)) );
            			}
            			else {
HXLINE( 507)				this->program = this->_hx___context->createProgram(1);
HXLINE( 511)				this->program->_hx___glProgram = this->_hx___createGLProgram(vertex,fragment);
HXLINE( 513)				this->_hx___context->_hx___programs->set(id,this->program);
            			}
HXLINE( 516)			if (::hx::IsNotNull( this->program )) {
HXLINE( 518)				this->glProgram = this->program->_hx___glProgram;
HXLINE( 520)				{
HXLINE( 520)					int _g = 0;
HXDLIN( 520)					::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 520)					while((_g < _g1->length)){
HXLINE( 520)						 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 520)						_g = (_g + 1);
HXLINE( 522)						if (input->_hx___isUniform) {
HXLINE( 524)							input->index = gl->getUniformLocation(this->glProgram,input->name);
            						}
            						else {
HXLINE( 528)							input->index = gl->getAttribLocation(this->glProgram,input->name);
            						}
            					}
            				}
HXLINE( 532)				{
HXLINE( 532)					int _g2 = 0;
HXDLIN( 532)					::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 532)					while((_g2 < _g3->length)){
HXLINE( 532)						 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 532)						_g2 = (_g2 + 1);
HXLINE( 534)						if (parameter->_hx___isUniform) {
HXLINE( 536)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 540)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
HXLINE( 544)				{
HXLINE( 544)					int _g4 = 0;
HXDLIN( 544)					::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 544)					while((_g4 < _g5->length)){
HXLINE( 544)						 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 544)						_g4 = (_g4 + 1);
HXLINE( 546)						if (parameter->_hx___isUniform) {
HXLINE( 548)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 552)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
HXLINE( 556)				{
HXLINE( 556)					int _g6 = 0;
HXDLIN( 556)					::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 556)					while((_g6 < _g7->length)){
HXLINE( 556)						 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 556)						_g6 = (_g6 + 1);
HXLINE( 558)						if (parameter->_hx___isUniform) {
HXLINE( 560)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 564)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___initGL,(void))

void Shader_obj::_hx___processGLData(::String source,::String storageType){
            	HX_GC_STACKFRAME(&_hx_pos_4b006e5218f2daf8_572___processGLData)
HXLINE( 573)		int lastMatch = 0;
HXDLIN( 573)		 ::Dynamic position;
HXDLIN( 573)		 ::EReg regex;
HXDLIN( 573)		::String name;
HXDLIN( 573)		::String type;
HXLINE( 575)		if ((storageType == HX_("uniform",34,41,64,b5))) {
HXLINE( 577)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("uniform ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",e3,a8,c0,f8),HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 581)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("attribute ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",fb,2e,25,cc),HX_("",00,00,00,00));
            		}
HXLINE( 584)		while(regex->matchSub(source,lastMatch,null())){
HXLINE( 586)			type = regex->matched(1);
HXLINE( 587)			name = regex->matched(2);
HXLINE( 589)			if (::StringTools_obj::startsWith(name,HX_("gl_",9a,86,4e,00))) {
HXLINE( 591)				continue;
            			}
HXLINE( 594)			bool isUniform = (storageType == HX_("uniform",34,41,64,b5));
HXLINE( 596)			if (::StringTools_obj::startsWith(type,HX_("sampler",08,c5,c9,83))) {
HXLINE( 598)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input =  ::openfl::display::ShaderInput_openfl_display_BitmapData_obj::__alloc( HX_CTX );
HXLINE( 599)				input->name = name;
HXLINE( 600)				input->_hx___isUniform = isUniform;
HXLINE( 601)				this->_hx___inputBitmapData->push(input);
HXLINE( 603)				::String _hx_switch_0 = name;
            				if (  (_hx_switch_0==HX_("bitmap",ef,0f,0c,f1)) ){
HXLINE( 608)					this->_hx___bitmap = input;
HXDLIN( 608)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("openfl_Texture",cc,bd,e4,7e)) ){
HXLINE( 606)					this->_hx___texture = input;
HXDLIN( 606)					goto _hx_goto_24;
            				}
            				/* default */{
            				}
            				_hx_goto_24:;
HXLINE( 612)				::Reflect_obj::setField(this->_hx___data,name,input);
HXLINE( 613)				if (this->_hx___isGenerated) {
HXLINE( 613)					::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,input);
            				}
            			}
            			else {
HXLINE( 615)				bool _hx_tmp;
HXDLIN( 615)				if (::Reflect_obj::hasField(this->_hx___data,name)) {
HXLINE( 615)					_hx_tmp = ::hx::IsNull( ::Reflect_obj::field(this->_hx___data,name) );
            				}
            				else {
HXLINE( 615)					_hx_tmp = true;
            				}
HXDLIN( 615)				if (_hx_tmp) {
HXLINE( 617)					 ::Dynamic parameterType;
HXDLIN( 617)					::String _hx_switch_1 = type;
            					if (  (_hx_switch_1==HX_("bool",2a,84,1b,41)) ){
HXLINE( 617)						parameterType = 0;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("bvec2",c0,00,91,bb)) ){
HXLINE( 617)						parameterType = 1;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("bvec3",c1,00,91,bb)) ){
HXLINE( 617)						parameterType = 2;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("bvec4",c2,00,91,bb)) ){
HXLINE( 617)						parameterType = 3;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("dvec2",c2,29,5e,e2)) ||  (_hx_switch_1==HX_("vec2",5e,27,4c,4e)) ){
HXLINE( 617)						parameterType = 5;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("dvec3",c3,29,5e,e2)) ||  (_hx_switch_1==HX_("vec3",5f,27,4c,4e)) ){
HXLINE( 617)						parameterType = 6;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("double",11,2b,cb,32)) ||  (_hx_switch_1==HX_("float",9c,c5,96,02)) ){
HXLINE( 617)						parameterType = 4;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("ivec3",48,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec3",54,06,2e,ac)) ){
HXLINE( 617)						parameterType = 10;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("ivec4",49,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec4",55,06,2e,ac)) ){
HXLINE( 617)						parameterType = 11;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat2",92,41,56,48)) ||  (_hx_switch_1==HX_("mat2x2",cc,b2,97,bb)) ){
HXLINE( 617)						parameterType = 12;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat2x3",cd,b2,97,bb)) ){
HXLINE( 617)						parameterType = 13;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat2x4",ce,b2,97,bb)) ){
HXLINE( 617)						parameterType = 14;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat3x2",0d,75,98,bb)) ){
HXLINE( 617)						parameterType = 15;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat3",93,41,56,48)) ||  (_hx_switch_1==HX_("mat3x3",0e,75,98,bb)) ){
HXLINE( 617)						parameterType = 16;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat3x4",0f,75,98,bb)) ){
HXLINE( 617)						parameterType = 17;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat4",94,41,56,48)) ||  (_hx_switch_1==HX_("mat4x4",50,37,99,bb)) ){
HXLINE( 617)						parameterType = 20;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat4x2",4e,37,99,bb)) ){
HXLINE( 617)						parameterType = 18;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("mat4x3",4f,37,99,bb)) ){
HXLINE( 617)						parameterType = 19;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ||  (_hx_switch_1==HX_("uint",9a,03,a6,4d)) ){
HXLINE( 617)						parameterType = 8;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("ivec2",47,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec2",53,06,2e,ac)) ){
HXLINE( 617)						parameterType = 9;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					if (  (_hx_switch_1==HX_("dvec4",c4,29,5e,e2)) ||  (_hx_switch_1==HX_("vec4",60,27,4c,4e)) ){
HXLINE( 617)						parameterType = 7;
HXDLIN( 617)						goto _hx_goto_25;
            					}
            					/* default */{
HXLINE( 617)						parameterType = null();
            					}
            					_hx_goto_25:;
HXLINE( 643)					int length;
HXDLIN( 643)					 ::Dynamic _hx_switch_2 = parameterType;
            					if (  (_hx_switch_2==1) ||  (_hx_switch_2==5) ||  (_hx_switch_2==9) ){
HXLINE( 643)						length = 2;
HXDLIN( 643)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==3) ||  (_hx_switch_2==7) ||  (_hx_switch_2==11) ||  (_hx_switch_2==12) ){
HXLINE( 643)						length = 4;
HXDLIN( 643)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==2) ||  (_hx_switch_2==6) ||  (_hx_switch_2==10) ){
HXLINE( 643)						length = 3;
HXDLIN( 643)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==16) ){
HXLINE( 643)						length = 9;
HXDLIN( 643)						goto _hx_goto_26;
            					}
            					if (  (_hx_switch_2==20) ){
HXLINE( 643)						length = 16;
HXDLIN( 643)						goto _hx_goto_26;
            					}
            					/* default */{
HXLINE( 643)						length = 1;
            					}
            					_hx_goto_26:;
HXLINE( 653)					int arrayLength;
HXDLIN( 653)					 ::Dynamic _hx_switch_3 = parameterType;
            					if (  (_hx_switch_3==12) ){
HXLINE( 653)						arrayLength = 2;
HXDLIN( 653)						goto _hx_goto_27;
            					}
            					if (  (_hx_switch_3==16) ){
HXLINE( 653)						arrayLength = 3;
HXDLIN( 653)						goto _hx_goto_27;
            					}
            					if (  (_hx_switch_3==20) ){
HXLINE( 653)						arrayLength = 4;
HXDLIN( 653)						goto _hx_goto_27;
            					}
            					/* default */{
HXLINE( 653)						arrayLength = 1;
            					}
            					_hx_goto_27:;
HXLINE( 661)					 ::Dynamic _hx_switch_4 = parameterType;
            					if (  (_hx_switch_4==0) ||  (_hx_switch_4==1) ||  (_hx_switch_4==2) ||  (_hx_switch_4==3) ){
HXLINE( 664)						 ::openfl::display::ShaderParameter_Bool parameter =  ::openfl::display::ShaderParameter_Bool_obj::__alloc( HX_CTX );
HXLINE( 665)						parameter->set_name(name);
HXLINE( 666)						parameter->type = parameterType;
HXLINE( 667)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 668)						parameter->_hx___isBool = true;
HXLINE( 669)						parameter->_hx___isUniform = isUniform;
HXLINE( 670)						parameter->__length = length;
HXLINE( 671)						this->_hx___paramBool->push(parameter);
HXLINE( 673)						if ((name == HX_("openfl_HasColorTransform",b4,00,4b,62))) {
HXLINE( 675)							this->_hx___hasColorTransform = parameter;
            						}
HXLINE( 678)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 679)						if (this->_hx___isGenerated) {
HXLINE( 679)							::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
HXLINE( 663)						goto _hx_goto_29;
            					}
            					if (  (_hx_switch_4==8) ||  (_hx_switch_4==9) ||  (_hx_switch_4==10) ||  (_hx_switch_4==11) ){
HXLINE( 682)						 ::openfl::display::ShaderParameter_Int parameter =  ::openfl::display::ShaderParameter_Int_obj::__alloc( HX_CTX );
HXLINE( 683)						parameter->set_name(name);
HXLINE( 684)						parameter->type = parameterType;
HXLINE( 685)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 686)						parameter->_hx___isInt = true;
HXLINE( 687)						parameter->_hx___isUniform = isUniform;
HXLINE( 688)						parameter->__length = length;
HXLINE( 689)						this->_hx___paramInt->push(parameter);
HXLINE( 690)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 691)						if (this->_hx___isGenerated) {
HXLINE( 691)							::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
HXLINE( 681)						goto _hx_goto_29;
            					}
            					/* default */{
HXLINE( 694)						 ::openfl::display::ShaderParameter_Float parameter =  ::openfl::display::ShaderParameter_Float_obj::__alloc( HX_CTX );
HXLINE( 695)						parameter->set_name(name);
HXLINE( 696)						parameter->type = parameterType;
HXLINE( 697)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 699)						if ((arrayLength > 0)) {
HXLINE( 699)							 ::Dynamic elements = (arrayLength * arrayLength);
HXDLIN( 699)							 ::haxe::io::Bytes buffer = null();
HXDLIN( 699)							::cpp::VirtualArray array = null();
HXDLIN( 699)							 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 699)							 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 699)							 ::Dynamic len = null();
HXDLIN( 699)							 ::lime::utils::ArrayBufferView this1;
HXDLIN( 699)							if (::hx::IsNotNull( elements )) {
HXLINE( 699)								this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            							}
            							else {
HXLINE( 699)								if (::hx::IsNotNull( array )) {
HXLINE( 699)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 699)									_this->byteOffset = 0;
HXDLIN( 699)									_this->length = array->get_length();
HXDLIN( 699)									_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 699)									 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 699)									_this->buffer = this2;
HXDLIN( 699)									_this->copyFromArray(array,null());
HXDLIN( 699)									this1 = _this;
            								}
            								else {
HXLINE( 699)									if (::hx::IsNotNull( vector )) {
HXLINE( 699)										 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 699)										::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 699)										_this->byteOffset = 0;
HXDLIN( 699)										_this->length = array->get_length();
HXDLIN( 699)										_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 699)										 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 699)										_this->buffer = this2;
HXDLIN( 699)										_this->copyFromArray(array,null());
HXDLIN( 699)										this1 = _this;
            									}
            									else {
HXLINE( 699)										if (::hx::IsNotNull( view )) {
HXLINE( 699)											 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 699)											 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 699)											int srcLength = view->length;
HXDLIN( 699)											int srcByteOffset = view->byteOffset;
HXDLIN( 699)											int srcElementSize = view->bytesPerElement;
HXDLIN( 699)											int elementSize = _this->bytesPerElement;
HXDLIN( 699)											if ((view->type == _this->type)) {
HXLINE( 699)												int srcLength = srcData->length;
HXDLIN( 699)												int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 699)												 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 699)												_this->buffer = this1;
HXDLIN( 699)												_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            											}
            											else {
HXLINE( 699)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            											}
HXDLIN( 699)											_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 699)											_this->byteOffset = 0;
HXDLIN( 699)											_this->length = srcLength;
HXDLIN( 699)											this1 = _this;
            										}
            										else {
HXLINE( 699)											if (::hx::IsNotNull( buffer )) {
HXLINE( 699)												 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 699)												int in_byteOffset = 0;
HXDLIN( 699)												if ((in_byteOffset < 0)) {
HXLINE( 699)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
HXDLIN( 699)												if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 699)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
HXDLIN( 699)												int bufferByteLength = buffer->length;
HXDLIN( 699)												int elementSize = _this->bytesPerElement;
HXDLIN( 699)												int newByteLength = bufferByteLength;
HXDLIN( 699)												if (::hx::IsNull( len )) {
HXLINE( 699)													newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 699)													if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 699)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
HXDLIN( 699)													if ((newByteLength < 0)) {
HXLINE( 699)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
            												}
            												else {
HXLINE( 699)													newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 699)													int newRange = (in_byteOffset + newByteLength);
HXDLIN( 699)													if ((newRange > bufferByteLength)) {
HXLINE( 699)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
            												}
HXDLIN( 699)												_this->buffer = buffer;
HXDLIN( 699)												_this->byteOffset = in_byteOffset;
HXDLIN( 699)												_this->byteLength = newByteLength;
HXDLIN( 699)												_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 699)												this1 = _this;
            											}
            											else {
HXLINE( 699)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            											}
            										}
            									}
            								}
            							}
HXDLIN( 699)							parameter->_hx___uniformMatrix = this1;
            						}
HXLINE( 701)						parameter->_hx___isFloat = true;
HXLINE( 702)						parameter->_hx___isUniform = isUniform;
HXLINE( 703)						parameter->__length = length;
HXLINE( 704)						this->_hx___paramFloat->push(parameter);
HXLINE( 706)						if (::StringTools_obj::startsWith(name,HX_("openfl_",cf,ba,42,40))) {
HXLINE( 708)							::String _hx_switch_5 = name;
            							if (  (_hx_switch_5==HX_("openfl_Alpha",0f,ce,3e,6a)) ){
HXLINE( 710)								this->_hx___alpha = parameter;
HXDLIN( 710)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_ColorMultiplier",b5,e4,dc,18)) ){
HXLINE( 711)								this->_hx___colorMultiplier = parameter;
HXDLIN( 711)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_ColorOffset",c7,ea,07,41)) ){
HXLINE( 712)								this->_hx___colorOffset = parameter;
HXDLIN( 712)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_Matrix",70,ea,41,06)) ){
HXLINE( 713)								this->_hx___matrix = parameter;
HXDLIN( 713)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_Position",98,fe,6c,ee)) ){
HXLINE( 714)								this->_hx___position = parameter;
HXDLIN( 714)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_TextureCoord",49,e9,27,e8)) ){
HXLINE( 715)								this->_hx___textureCoord = parameter;
HXDLIN( 715)								goto _hx_goto_28;
            							}
            							if (  (_hx_switch_5==HX_("openfl_TextureSize",ad,60,72,29)) ){
HXLINE( 716)								this->_hx___textureSize = parameter;
HXDLIN( 716)								goto _hx_goto_28;
            							}
            							/* default */{
            							}
            							_hx_goto_28:;
            						}
HXLINE( 721)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 722)						if (this->_hx___isGenerated) {
HXLINE( 722)							::Reflect_obj::setField(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
            					}
            					_hx_goto_29:;
            				}
            			}
HXLINE( 726)			position = regex->matchedPos();
HXLINE( 727)			lastMatch = ( (int)((position->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + position->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___processGLData,(void))

void Shader_obj::_hx___update(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_733___update)
HXDLIN( 733)		if (::hx::IsNotNull( this->program )) {
HXLINE( 735)			this->_hx___updateGL();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___update,(void))

void Shader_obj::_hx___updateFromBuffer( ::openfl::display::_internal::ShaderBuffer shaderBuffer,int bufferOffset){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_741___updateFromBuffer)
HXDLIN( 741)		if (::hx::IsNotNull( this->program )) {
HXLINE( 743)			this->_hx___updateGLFromBuffer(shaderBuffer,bufferOffset);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___updateFromBuffer,(void))

void Shader_obj::_hx___updateGL(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_748___updateGL)
HXLINE( 749)		int textureCount = 0;
HXLINE( 751)		{
HXLINE( 751)			int _g = 0;
HXDLIN( 751)			::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 751)			while((_g < _g1->length)){
HXLINE( 751)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 751)				_g = (_g + 1);
HXLINE( 753)				input->_hx___updateGL(this->_hx___context,textureCount,null(),null(),null(),null());
HXLINE( 754)				textureCount = (textureCount + 1);
            			}
            		}
HXLINE( 757)		{
HXLINE( 757)			int _g2 = 0;
HXDLIN( 757)			::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 757)			while((_g2 < _g3->length)){
HXLINE( 757)				 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 757)				_g2 = (_g2 + 1);
HXLINE( 759)				parameter->_hx___updateGL(this->_hx___context,null());
            			}
            		}
HXLINE( 762)		{
HXLINE( 762)			int _g4 = 0;
HXDLIN( 762)			::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 762)			while((_g4 < _g5->length)){
HXLINE( 762)				 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 762)				_g4 = (_g4 + 1);
HXLINE( 764)				parameter->_hx___updateGL(this->_hx___context,null());
            			}
            		}
HXLINE( 767)		{
HXLINE( 767)			int _g6 = 0;
HXDLIN( 767)			::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 767)			while((_g6 < _g7->length)){
HXLINE( 767)				 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 767)				_g6 = (_g6 + 1);
HXLINE( 769)				parameter->_hx___updateGL(this->_hx___context,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,_hx___updateGL,(void))

void Shader_obj::_hx___updateGLFromBuffer( ::openfl::display::_internal::ShaderBuffer shaderBuffer,int bufferOffset){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_774___updateGLFromBuffer)
HXLINE( 775)		int textureCount = 0;
HXLINE( 776)		 ::openfl::display::ShaderInput_openfl_display_BitmapData input;
HXDLIN( 776)		 ::openfl::display::BitmapData inputData;
HXDLIN( 776)		 ::Dynamic inputFilter;
HXDLIN( 776)		 ::Dynamic inputMipFilter;
HXDLIN( 776)		 ::Dynamic inputWrap;
HXLINE( 778)		{
HXLINE( 778)			int _g = 0;
HXDLIN( 778)			int _g1 = shaderBuffer->inputCount;
HXDLIN( 778)			while((_g < _g1)){
HXLINE( 778)				_g = (_g + 1);
HXDLIN( 778)				int i = (_g - 1);
HXLINE( 780)				input = shaderBuffer->inputRefs->__get(i).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXLINE( 781)				inputData = shaderBuffer->inputs->__get(i).StaticCast<  ::openfl::display::BitmapData >();
HXLINE( 782)				inputFilter = shaderBuffer->inputFilter->__get(i);
HXLINE( 783)				inputMipFilter = shaderBuffer->inputMipFilter->__get(i);
HXLINE( 784)				inputWrap = shaderBuffer->inputWrap->__get(i);
HXLINE( 786)				if (::hx::IsNotNull( inputData )) {
HXLINE( 788)					input->_hx___updateGL(this->_hx___context,textureCount,inputData,inputFilter,inputMipFilter,inputWrap);
HXLINE( 789)					textureCount = (textureCount + 1);
            				}
            			}
            		}
HXLINE( 793)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 795)		if ((shaderBuffer->paramDataLength > 0)) {
HXLINE( 797)			if (::hx::IsNull( shaderBuffer->paramDataBuffer )) {
HXLINE( 799)				shaderBuffer->paramDataBuffer = gl->createBuffer();
            			}
HXLINE( 804)			this->_hx___context->_hx___bindGLArrayBuffer(shaderBuffer->paramDataBuffer);
HXLINE( 805)			::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::bufferData(gl,gl->ARRAY_BUFFER,shaderBuffer->paramData,gl->DYNAMIC_DRAW);
            		}
            		else {
HXLINE( 811)			this->_hx___context->_hx___bindGLArrayBuffer(null());
            		}
HXLINE( 814)		int boolIndex = 0;
HXLINE( 815)		int floatIndex = 0;
HXLINE( 816)		int intIndex = 0;
HXLINE( 818)		int boolCount = shaderBuffer->paramBoolCount;
HXLINE( 819)		int floatCount = shaderBuffer->paramFloatCount;
HXLINE( 820)		 ::lime::utils::ArrayBufferView paramData = shaderBuffer->paramData;
HXLINE( 822)		 ::openfl::display::ShaderParameter_Bool boolRef;
HXDLIN( 822)		 ::openfl::display::ShaderParameter_Float floatRef;
HXDLIN( 822)		 ::openfl::display::ShaderParameter_Int intRef;
HXDLIN( 822)		bool hasOverride;
HXLINE( 823)		::Array< bool > overrideBoolValue = null();
HXDLIN( 823)		::Array< Float > overrideFloatValue = null();
HXDLIN( 823)		::Array< int > overrideIntValue = null();
HXLINE( 827)		{
HXLINE( 827)			int _g2 = 0;
HXDLIN( 827)			int _g3 = shaderBuffer->paramCount;
HXDLIN( 827)			while((_g2 < _g3)){
HXLINE( 827)				_g2 = (_g2 + 1);
HXDLIN( 827)				int i = (_g2 - 1);
HXLINE( 829)				hasOverride = false;
HXLINE( 831)				if ((i < boolCount)) {
HXLINE( 833)					boolRef = shaderBuffer->paramRefs_Bool->__get(boolIndex).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXLINE( 835)					{
HXLINE( 835)						int _g = 0;
HXDLIN( 835)						int _g1 = shaderBuffer->overrideBoolCount;
HXDLIN( 835)						while((_g < _g1)){
HXLINE( 835)							_g = (_g + 1);
HXDLIN( 835)							int j = (_g - 1);
HXLINE( 837)							if ((boolRef->name == shaderBuffer->overrideBoolNames->__get(j))) {
HXLINE( 839)								overrideBoolValue = shaderBuffer->overrideBoolValues->__get(j).StaticCast< ::Array< bool > >();
HXLINE( 840)								hasOverride = true;
HXLINE( 841)								goto _hx_goto_40;
            							}
            						}
            						_hx_goto_40:;
            					}
HXLINE( 845)					if (hasOverride) {
HXLINE( 847)						boolRef->_hx___updateGL(this->_hx___context,overrideBoolValue);
            					}
            					else {
HXLINE( 851)						boolRef->_hx___updateGLFromBuffer(this->_hx___context,paramData,shaderBuffer->paramPositions->__get(i),shaderBuffer->paramLengths->__get(i),bufferOffset);
            					}
HXLINE( 854)					boolIndex = (boolIndex + 1);
            				}
            				else {
HXLINE( 856)					if ((i < (boolCount + floatCount))) {
HXLINE( 858)						floatRef = shaderBuffer->paramRefs_Float->__get(floatIndex).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXLINE( 860)						{
HXLINE( 860)							int _g = 0;
HXDLIN( 860)							int _g1 = shaderBuffer->overrideFloatCount;
HXDLIN( 860)							while((_g < _g1)){
HXLINE( 860)								_g = (_g + 1);
HXDLIN( 860)								int j = (_g - 1);
HXLINE( 862)								if ((floatRef->name == shaderBuffer->overrideFloatNames->__get(j))) {
HXLINE( 864)									overrideFloatValue = shaderBuffer->overrideFloatValues->__get(j).StaticCast< ::Array< Float > >();
HXLINE( 865)									hasOverride = true;
HXLINE( 866)									goto _hx_goto_41;
            								}
            							}
            							_hx_goto_41:;
            						}
HXLINE( 870)						if (hasOverride) {
HXLINE( 872)							floatRef->_hx___updateGL(this->_hx___context,overrideFloatValue);
            						}
            						else {
HXLINE( 876)							floatRef->_hx___updateGLFromBuffer(this->_hx___context,paramData,shaderBuffer->paramPositions->__get(i),shaderBuffer->paramLengths->__get(i),bufferOffset);
            						}
HXLINE( 879)						floatIndex = (floatIndex + 1);
            					}
            					else {
HXLINE( 883)						intRef = shaderBuffer->paramRefs_Int->__get(intIndex).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXLINE( 885)						{
HXLINE( 885)							int _g = 0;
HXDLIN( 885)							int _g1 = shaderBuffer->overrideIntCount;
HXDLIN( 885)							while((_g < _g1)){
HXLINE( 885)								_g = (_g + 1);
HXDLIN( 885)								int j = (_g - 1);
HXLINE( 887)								if ((intRef->name == shaderBuffer->overrideIntNames->__get(j))) {
HXLINE( 889)									overrideIntValue = ::cpp::VirtualArray( shaderBuffer->overrideIntValues->__get(j));
HXLINE( 890)									hasOverride = true;
HXLINE( 891)									goto _hx_goto_42;
            								}
            							}
            							_hx_goto_42:;
            						}
HXLINE( 895)						if (hasOverride) {
HXLINE( 897)							intRef->_hx___updateGL(this->_hx___context,overrideIntValue);
            						}
            						else {
HXLINE( 901)							intRef->_hx___updateGLFromBuffer(this->_hx___context,paramData,shaderBuffer->paramPositions->__get(i),shaderBuffer->paramLengths->__get(i),bufferOffset);
            						}
HXLINE( 904)						intIndex = (intIndex + 1);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,_hx___updateGLFromBuffer,(void))

 ::Dynamic Shader_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_911_get_data)
HXLINE( 912)		bool _hx_tmp;
HXDLIN( 912)		if (!(this->_hx___glSourceDirty)) {
HXLINE( 912)			_hx_tmp = ::hx::IsNull( this->_hx___data );
            		}
            		else {
HXLINE( 912)			_hx_tmp = true;
            		}
HXDLIN( 912)		if (_hx_tmp) {
HXLINE( 914)			this->_hx___init();
            		}
HXLINE( 917)		return this->_hx___data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_data,return )

 ::Dynamic Shader_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_922_set_data)
HXDLIN( 922)		return (this->_hx___data = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_data,return )

::String Shader_obj::get_glFragmentSource(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_927_get_glFragmentSource)
HXDLIN( 927)		return this->_hx___glFragmentSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glFragmentSource,return )

::String Shader_obj::set_glFragmentSource(::String value){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_931_set_glFragmentSource)
HXLINE( 932)		if ((value != this->_hx___glFragmentSource)) {
HXLINE( 934)			this->_hx___glSourceDirty = true;
            		}
HXLINE( 937)		return (this->_hx___glFragmentSource = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glFragmentSource,return )

::String Shader_obj::get_glVertexSource(){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_942_get_glVertexSource)
HXDLIN( 942)		return this->_hx___glVertexSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glVertexSource,return )

::String Shader_obj::set_glVertexSource(::String value){
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_946_set_glVertexSource)
HXLINE( 947)		if ((value != this->_hx___glVertexSource)) {
HXLINE( 949)			this->_hx___glSourceDirty = true;
            		}
HXLINE( 952)		return (this->_hx___glVertexSource = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glVertexSource,return )


::hx::ObjectPtr< Shader_obj > Shader_obj::__new( ::openfl::utils::ByteArrayData code) {
	::hx::ObjectPtr< Shader_obj > __this = new Shader_obj();
	__this->__construct(code);
	return __this;
}

::hx::ObjectPtr< Shader_obj > Shader_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData code) {
	Shader_obj *__this = (Shader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Shader_obj), true, "openfl.display.Shader"));
	*(void **)__this = Shader_obj::_hx_vtable;
	__this->__construct(code);
	return __this;
}

Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(byteCode,"byteCode");
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_MEMBER_NAME(precisionHint,"precisionHint");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_MARK_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(_hx___colorMultiplier,"__colorMultiplier");
	HX_MARK_MEMBER_NAME(_hx___colorOffset,"__colorOffset");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_MEMBER_NAME(_hx___glFragmentSource,"__glFragmentSource");
	HX_MARK_MEMBER_NAME(_hx___glSourceDirty,"__glSourceDirty");
	HX_MARK_MEMBER_NAME(_hx___glVertexSource,"__glVertexSource");
	HX_MARK_MEMBER_NAME(_hx___hasColorTransform,"__hasColorTransform");
	HX_MARK_MEMBER_NAME(_hx___inputBitmapData,"__inputBitmapData");
	HX_MARK_MEMBER_NAME(_hx___isGenerated,"__isGenerated");
	HX_MARK_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_MARK_MEMBER_NAME(_hx___numPasses,"__numPasses");
	HX_MARK_MEMBER_NAME(_hx___paramBool,"__paramBool");
	HX_MARK_MEMBER_NAME(_hx___paramFloat,"__paramFloat");
	HX_MARK_MEMBER_NAME(_hx___paramInt,"__paramInt");
	HX_MARK_MEMBER_NAME(_hx___position,"__position");
	HX_MARK_MEMBER_NAME(_hx___textureCoord,"__textureCoord");
	HX_MARK_MEMBER_NAME(_hx___texture,"__texture");
	HX_MARK_MEMBER_NAME(_hx___textureSize,"__textureSize");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(byteCode,"byteCode");
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
	HX_VISIT_MEMBER_NAME(precisionHint,"precisionHint");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(_hx___alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(_hx___colorMultiplier,"__colorMultiplier");
	HX_VISIT_MEMBER_NAME(_hx___colorOffset,"__colorOffset");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
	HX_VISIT_MEMBER_NAME(_hx___glFragmentSource,"__glFragmentSource");
	HX_VISIT_MEMBER_NAME(_hx___glSourceDirty,"__glSourceDirty");
	HX_VISIT_MEMBER_NAME(_hx___glVertexSource,"__glVertexSource");
	HX_VISIT_MEMBER_NAME(_hx___hasColorTransform,"__hasColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___inputBitmapData,"__inputBitmapData");
	HX_VISIT_MEMBER_NAME(_hx___isGenerated,"__isGenerated");
	HX_VISIT_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_VISIT_MEMBER_NAME(_hx___numPasses,"__numPasses");
	HX_VISIT_MEMBER_NAME(_hx___paramBool,"__paramBool");
	HX_VISIT_MEMBER_NAME(_hx___paramFloat,"__paramFloat");
	HX_VISIT_MEMBER_NAME(_hx___paramInt,"__paramInt");
	HX_VISIT_MEMBER_NAME(_hx___position,"__position");
	HX_VISIT_MEMBER_NAME(_hx___textureCoord,"__textureCoord");
	HX_VISIT_MEMBER_NAME(_hx___texture,"__texture");
	HX_VISIT_MEMBER_NAME(_hx___textureSize,"__textureSize");
}

::hx::Val Shader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_data() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return ::hx::Val( _hx___data ); }
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return ::hx::Val( program ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return ::hx::Val( _hx___alpha ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { return ::hx::Val( byteCode ); }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return ::hx::Val( _hx___bitmap ); }
		if (HX_FIELD_EQ(inName,"__matrix") ) { return ::hx::Val( _hx___matrix ); }
		if (HX_FIELD_EQ(inName,"__enable") ) { return ::hx::Val( _hx___enable_dyn() ); }
		if (HX_FIELD_EQ(inName,"__initGL") ) { return ::hx::Val( _hx___initGL_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return ::hx::Val( glProgram ); }
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		if (HX_FIELD_EQ(inName,"__texture") ) { return ::hx::Val( _hx___texture ); }
		if (HX_FIELD_EQ(inName,"__disable") ) { return ::hx::Val( _hx___disable_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { return ::hx::Val( _hx___paramInt ); }
		if (HX_FIELD_EQ(inName,"__position") ) { return ::hx::Val( _hx___position ); }
		if (HX_FIELD_EQ(inName,"__enableGL") ) { return ::hx::Val( _hx___enableGL_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateGL") ) { return ::hx::Val( _hx___updateGL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__numPasses") ) { return ::hx::Val( _hx___numPasses ); }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { return ::hx::Val( _hx___paramBool ); }
		if (HX_FIELD_EQ(inName,"__disableGL") ) { return ::hx::Val( _hx___disableGL_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { return ::hx::Val( _hx___paramFloat ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { return ::hx::Val( precisionHint ); }
		if (HX_FIELD_EQ(inName,"__colorOffset") ) { return ::hx::Val( _hx___colorOffset ); }
		if (HX_FIELD_EQ(inName,"__isGenerated") ) { return ::hx::Val( _hx___isGenerated ); }
		if (HX_FIELD_EQ(inName,"__textureSize") ) { return ::hx::Val( _hx___textureSize ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_glVertexSource() ); }
		if (HX_FIELD_EQ(inName,"__textureCoord") ) { return ::hx::Val( _hx___textureCoord ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { return ::hx::Val( _hx___glSourceDirty ); }
		if (HX_FIELD_EQ(inName,"__clearUseArray") ) { return ::hx::Val( _hx___clearUseArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"__processGLData") ) { return ::hx::Val( _hx___processGLData_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_glFragmentSource() ); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { return ::hx::Val( _hx___glVertexSource ); }
		if (HX_FIELD_EQ(inName,"__createGLShader") ) { return ::hx::Val( _hx___createGLShader_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__colorMultiplier") ) { return ::hx::Val( _hx___colorMultiplier ); }
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { return ::hx::Val( _hx___inputBitmapData ); }
		if (HX_FIELD_EQ(inName,"__createGLProgram") ) { return ::hx::Val( _hx___createGLProgram_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { return ::hx::Val( _hx___glFragmentSource ); }
		if (HX_FIELD_EQ(inName,"__updateFromBuffer") ) { return ::hx::Val( _hx___updateFromBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_glVertexSource") ) { return ::hx::Val( get_glVertexSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_glVertexSource") ) { return ::hx::Val( set_glVertexSource_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__hasColorTransform") ) { return ::hx::Val( _hx___hasColorTransform ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__updateGLFromBuffer") ) { return ::hx::Val( _hx___updateGLFromBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_glFragmentSource") ) { return ::hx::Val( get_glFragmentSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_glFragmentSource") ) { return ::hx::Val( set_glFragmentSource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Shader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { byteCode=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { _hx___bitmap=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__matrix") ) { _hx___matrix=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { _hx___texture=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { _hx___paramInt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__position") ) { _hx___position=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__numPasses") ) { _hx___numPasses=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { _hx___paramBool=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { _hx___paramFloat=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { precisionHint=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__colorOffset") ) { _hx___colorOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isGenerated") ) { _hx___isGenerated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureSize") ) { _hx___textureSize=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_glVertexSource(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"__textureCoord") ) { _hx___textureCoord=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { _hx___glSourceDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_glFragmentSource(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { _hx___glVertexSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__colorMultiplier") ) { _hx___colorMultiplier=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { _hx___inputBitmapData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { _hx___glFragmentSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__hasColorTransform") ) { _hx___hasColorTransform=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("byteCode",55,20,71,42));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("glFragmentSource",d0,c5,ca,f7));
	outFields->push(HX_("glProgram",df,d6,b3,c1));
	outFields->push(HX_("glVertexSource",24,6d,4a,5b));
	outFields->push(HX_("precisionHint",e5,b5,95,2c));
	outFields->push(HX_("program",84,4a,f9,f3));
	outFields->push(HX_("__alpha",3e,00,f5,8b));
	outFields->push(HX_("__bitmap",0f,7b,3b,99));
	outFields->push(HX_("__colorMultiplier",a4,47,db,d3));
	outFields->push(HX_("__colorOffset",36,6a,e0,62));
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__data",4a,b9,5b,f1));
	outFields->push(HX_("__glFragmentSource",f0,58,5b,63));
	outFields->push(HX_("__glSourceDirty",f2,a3,ef,41));
	outFields->push(HX_("__glVertexSource",44,f8,89,8f));
	outFields->push(HX_("__hasColorTransform",63,3d,db,a3));
	outFields->push(HX_("__inputBitmapData",43,df,f6,64));
	outFields->push(HX_("__isGenerated",25,e7,69,bb));
	outFields->push(HX_("__matrix",61,a1,f7,63));
	outFields->push(HX_("__numPasses",45,67,5f,cd));
	outFields->push(HX_("__paramBool",37,44,b6,5f));
	outFields->push(HX_("__paramFloat",ef,10,64,ab));
	outFields->push(HX_("__paramInt",82,cd,bd,21));
	outFields->push(HX_("__position",c9,13,33,6e));
	outFields->push(HX_("__textureCoord",fa,ea,be,63));
	outFields->push(HX_("__texture",bb,19,2f,20));
	outFields->push(HX_("__textureSize",1c,e0,4a,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Shader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(Shader_obj,byteCode),HX_("byteCode",55,20,71,42)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Shader_obj,glProgram),HX_("glProgram",df,d6,b3,c1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Shader_obj,precisionHint),HX_("precisionHint",e5,b5,95,2c)},
	{::hx::fsObject /*  ::openfl::display3D::Program3D */ ,(int)offsetof(Shader_obj,program),HX_("program",84,4a,f9,f3)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___alpha),HX_("__alpha",3e,00,f5,8b)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(Shader_obj,_hx___bitmap),HX_("__bitmap",0f,7b,3b,99)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___colorMultiplier),HX_("__colorMultiplier",a4,47,db,d3)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___colorOffset),HX_("__colorOffset",36,6a,e0,62)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Shader_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Shader_obj,_hx___data),HX_("__data",4a,b9,5b,f1)},
	{::hx::fsString,(int)offsetof(Shader_obj,_hx___glFragmentSource),HX_("__glFragmentSource",f0,58,5b,63)},
	{::hx::fsBool,(int)offsetof(Shader_obj,_hx___glSourceDirty),HX_("__glSourceDirty",f2,a3,ef,41)},
	{::hx::fsString,(int)offsetof(Shader_obj,_hx___glVertexSource),HX_("__glVertexSource",44,f8,89,8f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(Shader_obj,_hx___hasColorTransform),HX_("__hasColorTransform",63,3d,db,a3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___inputBitmapData),HX_("__inputBitmapData",43,df,f6,64)},
	{::hx::fsBool,(int)offsetof(Shader_obj,_hx___isGenerated),HX_("__isGenerated",25,e7,69,bb)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___matrix),HX_("__matrix",61,a1,f7,63)},
	{::hx::fsInt,(int)offsetof(Shader_obj,_hx___numPasses),HX_("__numPasses",45,67,5f,cd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___paramBool),HX_("__paramBool",37,44,b6,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___paramFloat),HX_("__paramFloat",ef,10,64,ab)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Shader_obj,_hx___paramInt),HX_("__paramInt",82,cd,bd,21)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___position),HX_("__position",c9,13,33,6e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___textureCoord),HX_("__textureCoord",fa,ea,be,63)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(Shader_obj,_hx___texture),HX_("__texture",bb,19,2f,20)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Shader_obj,_hx___textureSize),HX_("__textureSize",1c,e0,4a,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Shader_obj_sStaticStorageInfo = 0;
#endif

static ::String Shader_obj_sMemberFields[] = {
	HX_("byteCode",55,20,71,42),
	HX_("glProgram",df,d6,b3,c1),
	HX_("precisionHint",e5,b5,95,2c),
	HX_("program",84,4a,f9,f3),
	HX_("__alpha",3e,00,f5,8b),
	HX_("__bitmap",0f,7b,3b,99),
	HX_("__colorMultiplier",a4,47,db,d3),
	HX_("__colorOffset",36,6a,e0,62),
	HX_("__context",cf,e6,c5,9a),
	HX_("__data",4a,b9,5b,f1),
	HX_("__glFragmentSource",f0,58,5b,63),
	HX_("__glSourceDirty",f2,a3,ef,41),
	HX_("__glVertexSource",44,f8,89,8f),
	HX_("__hasColorTransform",63,3d,db,a3),
	HX_("__inputBitmapData",43,df,f6,64),
	HX_("__isGenerated",25,e7,69,bb),
	HX_("__matrix",61,a1,f7,63),
	HX_("__numPasses",45,67,5f,cd),
	HX_("__paramBool",37,44,b6,5f),
	HX_("__paramFloat",ef,10,64,ab),
	HX_("__paramInt",82,cd,bd,21),
	HX_("__position",c9,13,33,6e),
	HX_("__textureCoord",fa,ea,be,63),
	HX_("__texture",bb,19,2f,20),
	HX_("__textureSize",1c,e0,4a,4b),
	HX_("__clearUseArray",5f,0b,0a,a8),
	HX_("__createGLShader",46,69,da,33),
	HX_("__createGLProgram",43,7d,b4,bf),
	HX_("__disable",c8,ba,a6,32),
	HX_("__disableGL",ed,3a,e1,35),
	HX_("__enable",a3,19,b7,a0),
	HX_("__enableGL",88,46,eb,8f),
	HX_("__init",30,9e,b3,f4),
	HX_("__initGL",55,c8,7b,3f),
	HX_("__processGLData",7e,0f,78,7c),
	HX_("__update",29,f1,34,2f),
	HX_("__updateFromBuffer",93,24,55,c9),
	HX_("__updateGL",8e,8b,32,1b),
	HX_("__updateGLFromBuffer",38,8f,d7,17),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("get_glFragmentSource",d9,2a,35,16),
	HX_("set_glFragmentSource",4d,e2,ec,e2),
	HX_("get_glVertexSource",ed,4d,e4,f6),
	HX_("set_glVertexSource",61,80,93,d3),
	::String(null()) };

::hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	Shader_obj _hx_dummy;
	Shader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Shader",0f,df,61,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Shader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Shader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Shader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4b006e5218f2daf8_124_boot)
HXDLIN( 124)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("glProgram",df,d6,b3,c1), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
