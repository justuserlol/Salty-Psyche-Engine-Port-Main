#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
#ifndef INCLUDED_openfl_media_Video
#include <openfl/media/Video.h>
#endif
#ifndef INCLUDED_openfl_net_NetStream
#include <openfl/net/NetStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb6bc49fba42380b_207_new,"openfl.media.Video","new",0x18e7e9e5,"openfl.media.Video.new","openfl/media/Video.hx",207,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_254_attachNetStream,"openfl.media.Video","attachNetStream",0xc6ae0d3d,"openfl.media.Video.attachNetStream","openfl/media/Video.hx",254,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_271_clear,"openfl.media.Video","clear",0xc14cb652,"openfl.media.Video.clear","openfl/media/Video.hx",271,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_274___enterFrame,"openfl.media.Video","__enterFrame",0x9c348cf0,"openfl.media.Video.__enterFrame","openfl/media/Video.hx",274,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_284___getBounds,"openfl.media.Video","__getBounds",0x07e0ff10,"openfl.media.Video.__getBounds","openfl/media/Video.hx",284,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_295___getIndexBuffer,"openfl.media.Video","__getIndexBuffer",0xdda0db37,"openfl.media.Video.__getIndexBuffer","openfl/media/Video.hx",295,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_344___getTexture,"openfl.media.Video","__getTexture",0x8826d7e0,"openfl.media.Video.__getTexture","openfl/media/Video.hx",344,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_349___getVertexBuffer,"openfl.media.Video","__getVertexBuffer",0x83d60e5f,"openfl.media.Video.__getVertexBuffer","openfl/media/Video.hx",349,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_398___hitTest,"openfl.media.Video","__hitTest",0x56a13c6a,"openfl.media.Video.__hitTest","openfl/media/Video.hx",398,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_421___hitTestMask,"openfl.media.Video","__hitTestMask",0x01982676,"openfl.media.Video.__hitTestMask","openfl/media/Video.hx",421,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_436_get_height,"openfl.media.Video","get_height",0x7919c8cb,"openfl.media.Video.get_height","openfl/media/Video.hx",436,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_440_set_height,"openfl.media.Video","set_height",0x7c97673f,"openfl.media.Video.set_height","openfl/media/Video.hx",440,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_460_get_videoHeight,"openfl.media.Video","get_videoHeight",0xebac235e,"openfl.media.Video.get_videoHeight","openfl/media/Video.hx",460,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_472_get_videoWidth,"openfl.media.Video","get_videoWidth",0x3e3af66f,"openfl.media.Video.get_videoWidth","openfl/media/Video.hx",472,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_477_get_width,"openfl.media.Video","get_width",0x00df9da2,"openfl.media.Video.get_width","openfl/media/Video.hx",477,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_481_set_width,"openfl.media.Video","set_width",0xe43089ae,"openfl.media.Video.set_width","openfl/media/Video.hx",481,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_91_boot,"openfl.media.Video","boot",0xaa1dbf0d,"openfl.media.Video.boot","openfl/media/Video.hx",91,0x054fa1ed)
namespace openfl{
namespace media{

void Video_obj::__construct(::hx::Null< int >  __o_width,::hx::Null< int >  __o_height){
            		int width = __o_width.Default(320);
            		int height = __o_height.Default(240);
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_207_new)
HXLINE( 208)		super::__construct();
HXLINE( 210)		this->_hx___drawableType = 8;
HXLINE( 211)		this->_hx___width = ( (Float)(width) );
HXLINE( 212)		this->_hx___height = ( (Float)(height) );
HXLINE( 214)		this->_hx___textureTime = ( (Float)(-1) );
HXLINE( 216)		this->smoothing = false;
HXLINE( 217)		this->deblocking = 0;
            	}

Dynamic Video_obj::__CreateEmpty() { return new Video_obj; }

void *Video_obj::_hx_vtable = 0;

Dynamic Video_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Video_obj > _hx_result = new Video_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Video_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12694e03) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x12694e03;
		}
	} else {
		return inClassId==(int)0x6b353933;
	}
}

void Video_obj::attachNetStream( ::openfl::net::NetStream netStream){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_254_attachNetStream)
HXDLIN( 254)		this->_hx___stream = netStream;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,attachNetStream,(void))

void Video_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_271_clear)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,clear,(void))

void Video_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_274___enterFrame)
            	}


void Video_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_284___getBounds)
HXLINE( 285)		 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 286)		bounds->setTo(( (Float)(0) ),( (Float)(0) ),this->_hx___width,this->_hx___height);
HXLINE( 287)		bounds->_hx___transform(bounds,matrix);
HXLINE( 289)		rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE( 291)		::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            	}


 ::openfl::display3D::IndexBuffer3D Video_obj::_hx___getIndexBuffer( ::openfl::display3D::Context3D context){
            	HX_GC_STACKFRAME(&_hx_pos_cb6bc49fba42380b_295___getIndexBuffer)
HXLINE( 297)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 299)		bool _hx_tmp;
HXDLIN( 299)		if (::hx::IsNotNull( this->_hx___indexBuffer )) {
HXLINE( 299)			_hx_tmp = ::hx::IsInstanceNotEq( this->_hx___indexBufferContext,context->_hx___context );
            		}
            		else {
HXLINE( 299)			_hx_tmp = true;
            		}
HXDLIN( 299)		if (_hx_tmp) {
HXLINE( 303)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 303)			::cpp::VirtualArray array = null();
HXDLIN( 303)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 303)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 303)			 ::Dynamic len = null();
HXDLIN( 303)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,6,6);
HXDLIN( 303)			this->_hx___indexBufferData = this1;
HXLINE( 304)			{
HXLINE( 304)				 ::lime::utils::ArrayBufferView this2 = this->_hx___indexBufferData;
HXDLIN( 304)				 ::__hxcpp_memory_set_ui16(this2->buffer->b,this2->byteOffset,0);
            			}
HXLINE( 305)			{
HXLINE( 305)				 ::lime::utils::ArrayBufferView this3 = this->_hx___indexBufferData;
HXDLIN( 305)				 ::__hxcpp_memory_set_ui16(this3->buffer->b,(this3->byteOffset + 2),1);
            			}
HXLINE( 306)			{
HXLINE( 306)				 ::lime::utils::ArrayBufferView this4 = this->_hx___indexBufferData;
HXDLIN( 306)				 ::__hxcpp_memory_set_ui16(this4->buffer->b,(this4->byteOffset + 4),2);
            			}
HXLINE( 307)			{
HXLINE( 307)				 ::lime::utils::ArrayBufferView this5 = this->_hx___indexBufferData;
HXDLIN( 307)				 ::__hxcpp_memory_set_ui16(this5->buffer->b,(this5->byteOffset + 6),2);
            			}
HXLINE( 308)			{
HXLINE( 308)				 ::lime::utils::ArrayBufferView this6 = this->_hx___indexBufferData;
HXDLIN( 308)				 ::__hxcpp_memory_set_ui16(this6->buffer->b,(this6->byteOffset + 8),1);
            			}
HXLINE( 309)			{
HXLINE( 309)				 ::lime::utils::ArrayBufferView this7 = this->_hx___indexBufferData;
HXDLIN( 309)				 ::__hxcpp_memory_set_ui16(this7->buffer->b,(this7->byteOffset + 10),3);
            			}
HXLINE( 311)			this->_hx___indexBufferContext = context->_hx___context;
HXLINE( 312)			this->_hx___indexBuffer = context->createIndexBuffer(6,null());
HXLINE( 313)			this->_hx___indexBuffer->uploadFromTypedArray(this->_hx___indexBufferData,null());
            		}
HXLINE( 317)		return this->_hx___indexBuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,_hx___getIndexBuffer,return )

 ::openfl::display3D::textures::RectangleTexture Video_obj::_hx___getTexture( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_344___getTexture)
HXDLIN( 344)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,_hx___getTexture,return )

 ::openfl::display3D::VertexBuffer3D Video_obj::_hx___getVertexBuffer( ::openfl::display3D::Context3D context){
            	HX_GC_STACKFRAME(&_hx_pos_cb6bc49fba42380b_349___getVertexBuffer)
HXLINE( 351)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 353)		bool _hx_tmp;
HXDLIN( 353)		if (::hx::IsNotNull( this->_hx___vertexBuffer )) {
HXLINE( 353)			_hx_tmp = ::hx::IsInstanceNotEq( this->_hx___vertexBufferContext,context->_hx___context );
            		}
            		else {
HXLINE( 353)			_hx_tmp = true;
            		}
HXDLIN( 353)		if (_hx_tmp) {
HXLINE( 372)			int uvWidth = 1;
HXLINE( 373)			int uvHeight = 1;
HXLINE( 376)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 376)			::cpp::VirtualArray array = null();
HXDLIN( 376)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 376)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 376)			 ::Dynamic len = null();
HXDLIN( 376)			 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,20,8);
HXDLIN( 376)			this->_hx___vertexBufferData = this1;
HXLINE( 378)			{
HXLINE( 378)				 ::lime::utils::ArrayBufferView this2 = this->_hx___vertexBufferData;
HXDLIN( 378)				Float val = this->get_width();
HXDLIN( 378)				 ::__hxcpp_memory_set_float(this2->buffer->b,this2->byteOffset,val);
            			}
HXLINE( 379)			{
HXLINE( 379)				 ::lime::utils::ArrayBufferView this3 = this->_hx___vertexBufferData;
HXDLIN( 379)				Float val1 = this->get_height();
HXDLIN( 379)				 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 4),val1);
            			}
HXLINE( 380)			{
HXLINE( 380)				 ::lime::utils::ArrayBufferView this4 = this->_hx___vertexBufferData;
HXDLIN( 380)				 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),uvWidth);
            			}
HXLINE( 381)			{
HXLINE( 381)				 ::lime::utils::ArrayBufferView this5 = this->_hx___vertexBufferData;
HXDLIN( 381)				 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),uvHeight);
            			}
HXLINE( 382)			{
HXLINE( 382)				 ::lime::utils::ArrayBufferView this6 = this->_hx___vertexBufferData;
HXDLIN( 382)				Float val2 = this->get_height();
HXDLIN( 382)				 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 24),val2);
            			}
HXLINE( 383)			{
HXLINE( 383)				 ::lime::utils::ArrayBufferView this7 = this->_hx___vertexBufferData;
HXDLIN( 383)				 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 36),uvHeight);
            			}
HXLINE( 384)			{
HXLINE( 384)				 ::lime::utils::ArrayBufferView this8 = this->_hx___vertexBufferData;
HXDLIN( 384)				Float val3 = this->get_width();
HXDLIN( 384)				 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 40),val3);
            			}
HXLINE( 385)			{
HXLINE( 385)				 ::lime::utils::ArrayBufferView this9 = this->_hx___vertexBufferData;
HXDLIN( 385)				 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 52),uvWidth);
            			}
HXLINE( 387)			this->_hx___vertexBufferContext = context->_hx___context;
HXLINE( 388)			this->_hx___vertexBuffer = context->createVertexBuffer(3,5,null());
HXLINE( 389)			this->_hx___vertexBuffer->uploadFromTypedArray(this->_hx___vertexBufferData,null());
            		}
HXLINE( 393)		return this->_hx___vertexBuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,_hx___getVertexBuffer,return )

bool Video_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_398___hitTest)
HXLINE( 399)		bool _hx_tmp;
HXDLIN( 399)		if (hitObject->get_visible()) {
HXLINE( 399)			_hx_tmp = this->_hx___isMask;
            		}
            		else {
HXLINE( 399)			_hx_tmp = true;
            		}
HXDLIN( 399)		if (_hx_tmp) {
HXLINE( 399)			return false;
            		}
HXLINE( 400)		bool _hx_tmp1;
HXDLIN( 400)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 400)			_hx_tmp1 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 400)			_hx_tmp1 = false;
            		}
HXDLIN( 400)		if (_hx_tmp1) {
HXLINE( 400)			return false;
            		}
HXLINE( 402)		this->_hx___getRenderTransform();
HXLINE( 404)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 404)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 404)		Float px;
HXDLIN( 404)		if ((norm == 0)) {
HXLINE( 404)			px = -(_this->tx);
            		}
            		else {
HXLINE( 404)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE( 405)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN( 405)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN( 405)		Float py;
HXDLIN( 405)		if ((norm1 == 0)) {
HXLINE( 405)			py = -(_this1->ty);
            		}
            		else {
HXLINE( 405)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE( 407)		bool _hx_tmp2;
HXDLIN( 407)		bool _hx_tmp3;
HXDLIN( 407)		bool _hx_tmp4;
HXDLIN( 407)		if ((px > 0)) {
HXLINE( 407)			_hx_tmp4 = (py > 0);
            		}
            		else {
HXLINE( 407)			_hx_tmp4 = false;
            		}
HXDLIN( 407)		if (_hx_tmp4) {
HXLINE( 407)			_hx_tmp3 = (px <= this->_hx___width);
            		}
            		else {
HXLINE( 407)			_hx_tmp3 = false;
            		}
HXDLIN( 407)		if (_hx_tmp3) {
HXLINE( 407)			_hx_tmp2 = (py <= this->_hx___height);
            		}
            		else {
HXLINE( 407)			_hx_tmp2 = false;
            		}
HXDLIN( 407)		if (_hx_tmp2) {
HXLINE( 409)			bool _hx_tmp;
HXDLIN( 409)			if (::hx::IsNotNull( stack )) {
HXLINE( 409)				_hx_tmp = !(interactiveOnly);
            			}
            			else {
HXLINE( 409)				_hx_tmp = false;
            			}
HXDLIN( 409)			if (_hx_tmp) {
HXLINE( 411)				stack->push(hitObject);
            			}
HXLINE( 414)			return true;
            		}
HXLINE( 417)		return false;
            	}


bool Video_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_421___hitTestMask)
HXLINE( 422)		 ::openfl::geom::Point point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 423)		point->setTo(x,y);
HXLINE( 425)		this->_hx___globalToLocal(point,point);
HXLINE( 427)		bool hit;
HXDLIN( 427)		bool hit1;
HXDLIN( 427)		bool hit2;
HXDLIN( 427)		if ((point->x > 0)) {
HXLINE( 427)			hit2 = (point->y > 0);
            		}
            		else {
HXLINE( 427)			hit2 = false;
            		}
HXDLIN( 427)		if (hit2) {
HXLINE( 427)			hit1 = (point->x <= this->_hx___width);
            		}
            		else {
HXLINE( 427)			hit1 = false;
            		}
HXDLIN( 427)		if (hit1) {
HXLINE( 427)			hit = (point->y <= this->_hx___height);
            		}
            		else {
HXLINE( 427)			hit = false;
            		}
HXLINE( 429)		::openfl::geom::Point_obj::_hx___pool->release(point);
HXLINE( 430)		return hit;
            	}


Float Video_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_436_get_height)
HXDLIN( 436)		Float _hx_tmp = this->_hx___height;
HXDLIN( 436)		return (_hx_tmp * this->get_scaleY());
            	}


Float Video_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_440_set_height)
HXLINE( 441)		bool _hx_tmp;
HXDLIN( 441)		if ((this->get_scaleY() == 1)) {
HXLINE( 441)			_hx_tmp = (value != this->_hx___height);
            		}
            		else {
HXLINE( 441)			_hx_tmp = true;
            		}
HXDLIN( 441)		if (_hx_tmp) {
HXLINE( 443)			this->_hx___setTransformDirty();
HXLINE( 444)			this->_hx___dirty = true;
            		}
HXLINE( 447)		this->set_scaleY(( (Float)(1) ));
HXLINE( 448)		return (this->_hx___height = value);
            	}


int Video_obj::get_videoHeight(){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_460_get_videoHeight)
HXDLIN( 460)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_videoHeight,return )

int Video_obj::get_videoWidth(){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_472_get_videoWidth)
HXDLIN( 472)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_videoWidth,return )

Float Video_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_477_get_width)
HXDLIN( 477)		return (this->_hx___width * this->_hx___scaleX);
            	}


Float Video_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_481_set_width)
HXLINE( 482)		bool _hx_tmp;
HXDLIN( 482)		if ((this->_hx___scaleX == 1)) {
HXLINE( 482)			_hx_tmp = (this->_hx___width != value);
            		}
            		else {
HXLINE( 482)			_hx_tmp = true;
            		}
HXDLIN( 482)		if (_hx_tmp) {
HXLINE( 484)			this->_hx___setTransformDirty();
HXLINE( 485)			this->_hx___dirty = true;
            		}
HXLINE( 488)		this->set_scaleX(( (Float)(1) ));
HXLINE( 489)		return (this->_hx___width = value);
            	}


int Video_obj::VERTEX_BUFFER_STRIDE;


::hx::ObjectPtr< Video_obj > Video_obj::__new(::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	::hx::ObjectPtr< Video_obj > __this = new Video_obj();
	__this->__construct(__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< Video_obj > Video_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	Video_obj *__this = (Video_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Video_obj), true, "openfl.media.Video"));
	*(void **)__this = Video_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height);
	return __this;
}

Video_obj::Video_obj()
{
}

void Video_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Video);
	HX_MARK_MEMBER_NAME(deblocking,"deblocking");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(_hx___active,"__active");
	HX_MARK_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_MARK_MEMBER_NAME(_hx___bufferAlpha,"__bufferAlpha");
	HX_MARK_MEMBER_NAME(_hx___bufferColorTransform,"__bufferColorTransform");
	HX_MARK_MEMBER_NAME(_hx___bufferContext,"__bufferContext");
	HX_MARK_MEMBER_NAME(_hx___bufferData,"__bufferData");
	HX_MARK_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_MARK_MEMBER_NAME(_hx___height,"__height");
	HX_MARK_MEMBER_NAME(_hx___indexBuffer,"__indexBuffer");
	HX_MARK_MEMBER_NAME(_hx___indexBufferContext,"__indexBufferContext");
	HX_MARK_MEMBER_NAME(_hx___indexBufferData,"__indexBufferData");
	HX_MARK_MEMBER_NAME(_hx___stream,"__stream");
	HX_MARK_MEMBER_NAME(_hx___texture,"__texture");
	HX_MARK_MEMBER_NAME(_hx___textureTime,"__textureTime");
	HX_MARK_MEMBER_NAME(_hx___uvRect,"__uvRect");
	HX_MARK_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferContext,"__vertexBufferContext");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferData,"__vertexBufferData");
	HX_MARK_MEMBER_NAME(_hx___width,"__width");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Video_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deblocking,"deblocking");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(_hx___active,"__active");
	HX_VISIT_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(_hx___bufferAlpha,"__bufferAlpha");
	HX_VISIT_MEMBER_NAME(_hx___bufferColorTransform,"__bufferColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___bufferContext,"__bufferContext");
	HX_VISIT_MEMBER_NAME(_hx___bufferData,"__bufferData");
	HX_VISIT_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(_hx___height,"__height");
	HX_VISIT_MEMBER_NAME(_hx___indexBuffer,"__indexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___indexBufferContext,"__indexBufferContext");
	HX_VISIT_MEMBER_NAME(_hx___indexBufferData,"__indexBufferData");
	HX_VISIT_MEMBER_NAME(_hx___stream,"__stream");
	HX_VISIT_MEMBER_NAME(_hx___texture,"__texture");
	HX_VISIT_MEMBER_NAME(_hx___textureTime,"__textureTime");
	HX_VISIT_MEMBER_NAME(_hx___uvRect,"__uvRect");
	HX_VISIT_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferContext,"__vertexBufferContext");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferData,"__vertexBufferData");
	HX_VISIT_MEMBER_NAME(_hx___width,"__width");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Video_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return ::hx::Val( _hx___dirty ); }
		if (HX_FIELD_EQ(inName,"__width") ) { return ::hx::Val( _hx___width ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__active") ) { return ::hx::Val( _hx___active ); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return ::hx::Val( _hx___buffer ); }
		if (HX_FIELD_EQ(inName,"__height") ) { return ::hx::Val( _hx___height ); }
		if (HX_FIELD_EQ(inName,"__stream") ) { return ::hx::Val( _hx___stream ); }
		if (HX_FIELD_EQ(inName,"__uvRect") ) { return ::hx::Val( _hx___uvRect ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return ::hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"__texture") ) { return ::hx::Val( _hx___texture ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deblocking") ) { return ::hx::Val( deblocking ); }
		if (HX_FIELD_EQ(inName,"videoWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_videoWidth() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_videoHeight() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bufferData") ) { return ::hx::Val( _hx___bufferData ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getTexture") ) { return ::hx::Val( _hx___getTexture_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bufferAlpha") ) { return ::hx::Val( _hx___bufferAlpha ); }
		if (HX_FIELD_EQ(inName,"__indexBuffer") ) { return ::hx::Val( _hx___indexBuffer ); }
		if (HX_FIELD_EQ(inName,"__textureTime") ) { return ::hx::Val( _hx___textureTime ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { return ::hx::Val( _hx___vertexBuffer ); }
		if (HX_FIELD_EQ(inName,"get_videoWidth") ) { return ::hx::Val( get_videoWidth_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__bufferContext") ) { return ::hx::Val( _hx___bufferContext ); }
		if (HX_FIELD_EQ(inName,"attachNetStream") ) { return ::hx::Val( attachNetStream_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_videoHeight") ) { return ::hx::Val( get_videoHeight_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__getIndexBuffer") ) { return ::hx::Val( _hx___getIndexBuffer_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__indexBufferData") ) { return ::hx::Val( _hx___indexBufferData ); }
		if (HX_FIELD_EQ(inName,"__getVertexBuffer") ) { return ::hx::Val( _hx___getVertexBuffer_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__vertexBufferData") ) { return ::hx::Val( _hx___vertexBufferData ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__indexBufferContext") ) { return ::hx::Val( _hx___indexBufferContext ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__vertexBufferContext") ) { return ::hx::Val( _hx___vertexBufferContext ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__bufferColorTransform") ) { return ::hx::Val( _hx___bufferColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Video_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { _hx___dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__active") ) { _hx___active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__buffer") ) { _hx___buffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stream") ) { _hx___stream=inValue.Cast<  ::openfl::net::NetStream >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvRect") ) { _hx___uvRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { _hx___texture=inValue.Cast<  ::openfl::display3D::textures::RectangleTexture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deblocking") ) { deblocking=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bufferData") ) { _hx___bufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bufferAlpha") ) { _hx___bufferAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__indexBuffer") ) { _hx___indexBuffer=inValue.Cast<  ::openfl::display3D::IndexBuffer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureTime") ) { _hx___textureTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { _hx___vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__bufferContext") ) { _hx___bufferContext=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__indexBufferData") ) { _hx___indexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__vertexBufferData") ) { _hx___vertexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__indexBufferContext") ) { _hx___indexBufferContext=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__vertexBufferContext") ) { _hx___vertexBufferContext=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__bufferColorTransform") ) { _hx___bufferColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Video_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("deblocking",36,66,05,70));
	outFields->push(HX_("smoothing",74,d5,e1,95));
	outFields->push(HX_("videoHeight",c2,9e,f3,7a));
	outFields->push(HX_("videoWidth",8b,f3,30,a6));
	outFields->push(HX_("__active",e6,ac,75,be));
	outFields->push(HX_("__buffer",20,28,c4,78));
	outFields->push(HX_("__bufferAlpha",1e,7b,5a,07));
	outFields->push(HX_("__bufferColorTransform",c9,8b,c3,0f));
	outFields->push(HX_("__bufferContext",af,d9,a7,d6));
	outFields->push(HX_("__bufferData",6a,3a,07,cc));
	outFields->push(HX_("__dirty",f2,a8,2e,44));
	outFields->push(HX_("__height",07,73,7b,aa));
	outFields->push(HX_("__indexBuffer",92,a6,1e,3e));
	outFields->push(HX_("__indexBufferContext",7d,ed,2f,1d));
	outFields->push(HX_("__indexBufferData",dc,d9,26,67));
	outFields->push(HX_("__stream",a0,7f,5c,b9));
	outFields->push(HX_("__texture",bb,19,2f,20));
	outFields->push(HX_("__textureTime",68,0b,f4,4b));
	outFields->push(HX_("__uvRect",45,8f,b9,97));
	outFields->push(HX_("__vertexBuffer",a4,32,6a,91));
	outFields->push(HX_("__vertexBufferContext",ab,e7,39,35));
	outFields->push(HX_("__vertexBufferData",ee,d6,5e,32));
	outFields->push(HX_("__width",e6,0e,c1,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Video_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Video_obj,deblocking),HX_("deblocking",36,66,05,70)},
	{::hx::fsBool,(int)offsetof(Video_obj,smoothing),HX_("smoothing",74,d5,e1,95)},
	{::hx::fsBool,(int)offsetof(Video_obj,_hx___active),HX_("__active",e6,ac,75,be)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Video_obj,_hx___buffer),HX_("__buffer",20,28,c4,78)},
	{::hx::fsFloat,(int)offsetof(Video_obj,_hx___bufferAlpha),HX_("__bufferAlpha",1e,7b,5a,07)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(Video_obj,_hx___bufferColorTransform),HX_("__bufferColorTransform",c9,8b,c3,0f)},
	{::hx::fsObject /*  ::lime::graphics::RenderContext */ ,(int)offsetof(Video_obj,_hx___bufferContext),HX_("__bufferContext",af,d9,a7,d6)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Video_obj,_hx___bufferData),HX_("__bufferData",6a,3a,07,cc)},
	{::hx::fsBool,(int)offsetof(Video_obj,_hx___dirty),HX_("__dirty",f2,a8,2e,44)},
	{::hx::fsFloat,(int)offsetof(Video_obj,_hx___height),HX_("__height",07,73,7b,aa)},
	{::hx::fsObject /*  ::openfl::display3D::IndexBuffer3D */ ,(int)offsetof(Video_obj,_hx___indexBuffer),HX_("__indexBuffer",92,a6,1e,3e)},
	{::hx::fsObject /*  ::lime::graphics::RenderContext */ ,(int)offsetof(Video_obj,_hx___indexBufferContext),HX_("__indexBufferContext",7d,ed,2f,1d)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Video_obj,_hx___indexBufferData),HX_("__indexBufferData",dc,d9,26,67)},
	{::hx::fsObject /*  ::openfl::net::NetStream */ ,(int)offsetof(Video_obj,_hx___stream),HX_("__stream",a0,7f,5c,b9)},
	{::hx::fsObject /*  ::openfl::display3D::textures::RectangleTexture */ ,(int)offsetof(Video_obj,_hx___texture),HX_("__texture",bb,19,2f,20)},
	{::hx::fsFloat,(int)offsetof(Video_obj,_hx___textureTime),HX_("__textureTime",68,0b,f4,4b)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Video_obj,_hx___uvRect),HX_("__uvRect",45,8f,b9,97)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Video_obj,_hx___vertexBuffer),HX_("__vertexBuffer",a4,32,6a,91)},
	{::hx::fsObject /*  ::lime::graphics::RenderContext */ ,(int)offsetof(Video_obj,_hx___vertexBufferContext),HX_("__vertexBufferContext",ab,e7,39,35)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Video_obj,_hx___vertexBufferData),HX_("__vertexBufferData",ee,d6,5e,32)},
	{::hx::fsFloat,(int)offsetof(Video_obj,_hx___width),HX_("__width",e6,0e,c1,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Video_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Video_obj::VERTEX_BUFFER_STRIDE,HX_("VERTEX_BUFFER_STRIDE",5d,b3,e6,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Video_obj_sMemberFields[] = {
	HX_("deblocking",36,66,05,70),
	HX_("smoothing",74,d5,e1,95),
	HX_("__active",e6,ac,75,be),
	HX_("__buffer",20,28,c4,78),
	HX_("__bufferAlpha",1e,7b,5a,07),
	HX_("__bufferColorTransform",c9,8b,c3,0f),
	HX_("__bufferContext",af,d9,a7,d6),
	HX_("__bufferData",6a,3a,07,cc),
	HX_("__dirty",f2,a8,2e,44),
	HX_("__height",07,73,7b,aa),
	HX_("__indexBuffer",92,a6,1e,3e),
	HX_("__indexBufferContext",7d,ed,2f,1d),
	HX_("__indexBufferData",dc,d9,26,67),
	HX_("__stream",a0,7f,5c,b9),
	HX_("__texture",bb,19,2f,20),
	HX_("__textureTime",68,0b,f4,4b),
	HX_("__uvRect",45,8f,b9,97),
	HX_("__vertexBuffer",a4,32,6a,91),
	HX_("__vertexBufferContext",ab,e7,39,35),
	HX_("__vertexBufferData",ee,d6,5e,32),
	HX_("__width",e6,0e,c1,34),
	HX_("attachNetStream",38,40,d7,16),
	HX_("clear",8d,71,5b,48),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getIndexBuffer",dc,43,84,b1),
	HX_("__getTexture",05,ca,d5,26),
	HX_("__getVertexBuffer",1a,36,ee,16),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_videoHeight",59,56,d5,3b),
	HX_("get_videoWidth",d4,7b,26,1c),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	::String(null()) };

static void Video_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Video_obj::VERTEX_BUFFER_STRIDE,"VERTEX_BUFFER_STRIDE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Video_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Video_obj::VERTEX_BUFFER_STRIDE,"VERTEX_BUFFER_STRIDE");
};

#endif

::hx::Class Video_obj::__mClass;

static ::String Video_obj_sStaticFields[] = {
	HX_("VERTEX_BUFFER_STRIDE",5d,b3,e6,c3),
	::String(null())
};

void Video_obj::__register()
{
	Video_obj _hx_dummy;
	Video_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.media.Video",73,13,12,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Video_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Video_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Video_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Video_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Video_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Video_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Video_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Video_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_91_boot)
HXDLIN(  91)		VERTEX_BUFFER_STRIDE = 5;
            	}
}

} // end namespace openfl
} // end namespace media
