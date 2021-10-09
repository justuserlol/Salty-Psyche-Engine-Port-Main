#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c625bfaa5b4263df_21_new,"flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",21,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_664_initVars,"flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",664,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_678_initMotionVars,"flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",678,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_696_destroy,"flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",696,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_714_update,"flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",714,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_739_updateMotion,"flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",739,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_762_draw,"flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",762,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_784_overlaps,"flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",784,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_820_overlapsCallback,"flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",820,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_843_overlapsAt,"flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",843,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_881_overlapsAtCallback,"flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",881,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_894_overlapsPoint,"flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",894,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_919_inWorldBounds,"flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",919,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_932_getScreenPosition,"flixel.FlxObject","getScreenPosition",0x643c435c,"flixel.FlxObject.getScreenPosition","flixel/FlxObject.hx",932,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_947_getPosition,"flixel.FlxObject","getPosition",0x1bf09890,"flixel.FlxObject.getPosition","flixel/FlxObject.hx",947,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_961_getMidpoint,"flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",961,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_968_getHitbox,"flixel.FlxObject","getHitbox",0x5f284dbf,"flixel.FlxObject.getHitbox","flixel/FlxObject.hx",968,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_982_reset,"flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",982,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_999_isOnScreen,"flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",999,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1011_isPixelPerfectRender,"flixel.FlxObject","isPixelPerfectRender",0xc4c93916,"flixel.FlxObject.isPixelPerfectRender","flixel/FlxObject.hx",1011,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1026_isTouching,"flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",1026,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1038_justTouched,"flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",1038,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1048_hurt,"flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",1048,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1061_screenCenter,"flixel.FlxObject","screenCenter",0x59e58410,"flixel.FlxObject.screenCenter","flixel/FlxObject.hx",1061,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1081_setPosition,"flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",1081,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1093_setSize,"flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",1093,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1173_getBoundingBox,"flixel.FlxObject","getBoundingBox",0x58364780,"flixel.FlxObject.getBoundingBox","flixel/FlxObject.hx",1173,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1192_toString,"flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",1192,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1205_set_x,"flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",1205,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1211_set_y,"flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",1211,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1225_set_width,"flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",1225,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1239_set_height,"flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",1239,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1245_get_width,"flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1245,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1251_get_height,"flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1251,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1257_get_solid,"flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1257,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1262_set_solid,"flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1262,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1270_set_angle,"flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1270,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1276_set_moves,"flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1276,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1282_set_immovable,"flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1282,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1288_set_pixelPerfectRender,"flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1288,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1294_set_allowCollisions,"flixel.FlxObject","set_allowCollisions",0x7975d9fe,"flixel.FlxObject.set_allowCollisions","flixel/FlxObject.hx",1294,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1319_set_path,"flixel.FlxObject","set_path",0xde100cd1,"flixel.FlxObject.set_path","flixel/FlxObject.hx",1319,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_93_separate,"flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",93,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_108_updateTouchingFlags,"flixel.FlxObject","updateTouchingFlags",0x15a0502c,"flixel.FlxObject.updateTouchingFlags","flixel/FlxObject.hx",108,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_121_computeOverlapX,"flixel.FlxObject","computeOverlapX",0x240ec739,"flixel.FlxObject.computeOverlapX","flixel/FlxObject.hx",121,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_189_separateX,"flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",189,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_255_updateTouchingFlagsX,"flixel.FlxObject","updateTouchingFlagsX",0xd6a5d6ac,"flixel.FlxObject.updateTouchingFlagsX","flixel/FlxObject.hx",255,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_278_computeOverlapY,"flixel.FlxObject","computeOverlapY",0x240ec73a,"flixel.FlxObject.computeOverlapY","flixel/FlxObject.hx",278,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_346_separateY,"flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",346,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_424_updateTouchingFlagsY,"flixel.FlxObject","updateTouchingFlagsY",0xd6a5d6ad,"flixel.FlxObject.updateTouchingFlagsY","flixel/FlxObject.hx",424,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_26_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",26,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_33_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",33,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_38_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",38,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_43_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",43,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_48_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",48,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_53_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",53,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_58_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",58,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_63_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",63,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_68_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",68,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_73_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",73,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_78_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",78,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_81_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",81,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_83_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",83,0xf0fe0d80)
namespace flixel{

void FlxObject_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float Width = __o_Width.Default(0);
            		Float Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_21_new)
HXLINE( 639)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 639)		_this->x = ( (Float)(0) );
HXDLIN( 639)		_this->y = ( (Float)(0) );
HXDLIN( 639)		_this->width = ( (Float)(0) );
HXDLIN( 639)		_this->height = ( (Float)(0) );
HXDLIN( 639)		_this->_inPool = false;
HXDLIN( 639)		this->_rect = _this;
HXLINE( 637)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 637)		point->_inPool = false;
HXDLIN( 637)		this->_point = point;
HXLINE( 634)		this->path = null();
HXLINE( 592)		this->collisonXDrag = true;
HXLINE( 586)		this->allowCollisions = 4369;
HXLINE( 580)		this->wasTouching = 0;
HXLINE( 574)		this->touching = 0;
HXLINE( 568)		this->health = ((Float)1);
HXLINE( 563)		this->maxAngular = ((Float)10000);
HXLINE( 558)		this->angularDrag = ((Float)0);
HXLINE( 553)		this->angularAcceleration = ((Float)0);
HXLINE( 548)		this->angularVelocity = ((Float)0);
HXLINE( 543)		this->elasticity = ((Float)0);
HXLINE( 538)		this->mass = ((Float)1);
HXLINE( 490)		this->immovable = false;
HXLINE( 485)		this->moves = true;
HXLINE( 479)		this->angle = ((Float)0);
HXLINE( 473)		this->pixelPerfectPosition = true;
HXLINE( 448)		this->y = ((Float)0);
HXLINE( 443)		this->x = ((Float)0);
HXLINE( 649)		super::__construct();
HXLINE( 651)		this->set_x(X);
HXLINE( 652)		this->set_y(Y);
HXLINE( 653)		this->set_width(Width);
HXLINE( 654)		this->set_height(Height);
HXLINE( 656)		this->initVars();
            	}

Dynamic FlxObject_obj::__CreateEmpty() { return new FlxObject_obj; }

void *FlxObject_obj::_hx_vtable = 0;

Dynamic FlxObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxObject_obj > _hx_result = new FlxObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7ccf8994;
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxObject_obj::initVars(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_664_initVars)
HXLINE( 665)		this->flixelType = 1;
HXLINE( 666)		Float X = this->x;
HXDLIN( 666)		Float Y = this->y;
HXDLIN( 666)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 666)		point->_inPool = false;
HXDLIN( 666)		this->last = point;
HXLINE( 667)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(1,1);
HXDLIN( 667)		point1->_inPool = false;
HXDLIN( 667)		this->scrollFactor = point1;
HXLINE( 668)		this->pixelPerfectPosition = ::flixel::FlxObject_obj::defaultPixelPerfectPosition;
HXLINE( 670)		{
HXLINE( 670)			 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 670)			point2->_inPool = false;
HXDLIN( 670)			this->velocity = point2;
HXDLIN( 670)			 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 670)			point3->_inPool = false;
HXDLIN( 670)			this->acceleration = point3;
HXDLIN( 670)			 ::flixel::math::FlxPoint point4 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 670)			point4->_inPool = false;
HXDLIN( 670)			this->drag = point4;
HXDLIN( 670)			 ::flixel::math::FlxPoint point5 = ::flixel::math::FlxPoint_obj::_pool->get()->set(10000,10000);
HXDLIN( 670)			point5->_inPool = false;
HXDLIN( 670)			this->maxVelocity = point5;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

void FlxObject_obj::initMotionVars(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_678_initMotionVars)
HXLINE( 679)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 679)		point->_inPool = false;
HXDLIN( 679)		this->velocity = point;
HXLINE( 680)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 680)		point1->_inPool = false;
HXDLIN( 680)		this->acceleration = point1;
HXLINE( 681)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 681)		point2->_inPool = false;
HXDLIN( 681)		this->drag = point2;
HXLINE( 682)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(10000,10000);
HXDLIN( 682)		point3->_inPool = false;
HXDLIN( 682)		this->maxVelocity = point3;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

void FlxObject_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_696_destroy)
HXLINE( 697)		this->super::destroy();
HXLINE( 699)		this->velocity = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->velocity)) );
HXLINE( 700)		this->acceleration = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->acceleration)) );
HXLINE( 701)		this->drag = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->drag)) );
HXLINE( 702)		this->maxVelocity = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->maxVelocity)) );
HXLINE( 703)		this->scrollFactor = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scrollFactor)) );
HXLINE( 704)		this->last = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->last)) );
HXLINE( 705)		this->_point = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_point)) );
HXLINE( 706)		this->_rect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->_rect)) );
            	}


void FlxObject_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_714_update)
HXLINE( 720)		this->last->set(this->x,this->y);
HXLINE( 722)		bool _hx_tmp;
HXDLIN( 722)		if (::hx::IsNotNull( this->path )) {
HXLINE( 722)			_hx_tmp = this->path->active;
            		}
            		else {
HXLINE( 722)			_hx_tmp = false;
            		}
HXDLIN( 722)		if (_hx_tmp) {
HXLINE( 723)			this->path->update(elapsed);
            		}
HXLINE( 725)		if (this->moves) {
HXLINE( 726)			this->updateMotion(elapsed);
            		}
HXLINE( 728)		this->wasTouching = this->touching;
HXLINE( 729)		this->touching = 0;
            	}


void FlxObject_obj::updateMotion(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_739_updateMotion)
HXLINE( 740)		Float velocityDelta = ::flixel::math::FlxVelocity_obj::computeVelocity(this->angularVelocity,this->angularAcceleration,this->angularDrag,this->maxAngular,elapsed);
HXDLIN( 740)		Float velocityDelta1 = (((Float)0.5) * (velocityDelta - this->angularVelocity));
HXLINE( 741)		 ::flixel::FlxObject _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 741)		_hx_tmp->angularVelocity = (_hx_tmp->angularVelocity + velocityDelta1);
HXLINE( 742)		this->set_angle((this->angle + (this->angularVelocity * elapsed)));
HXLINE( 743)		 ::flixel::FlxObject _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 743)		_hx_tmp1->angularVelocity = (_hx_tmp1->angularVelocity + velocityDelta1);
HXLINE( 745)		Float velocityDelta2 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->x,this->acceleration->x,this->drag->x,this->maxVelocity->x,elapsed);
HXDLIN( 745)		velocityDelta1 = (((Float)0.5) * (velocityDelta2 - this->velocity->x));
HXLINE( 746)		 ::flixel::math::FlxPoint fh = this->velocity;
HXDLIN( 746)		fh->set_x((fh->x + velocityDelta1));
HXLINE( 747)		Float delta = (this->velocity->x * elapsed);
HXLINE( 748)		 ::flixel::math::FlxPoint fh1 = this->velocity;
HXDLIN( 748)		fh1->set_x((fh1->x + velocityDelta1));
HXLINE( 749)		this->set_x((this->x + delta));
HXLINE( 751)		Float velocityDelta3 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->y,this->acceleration->y,this->drag->y,this->maxVelocity->y,elapsed);
HXDLIN( 751)		velocityDelta1 = (((Float)0.5) * (velocityDelta3 - this->velocity->y));
HXLINE( 752)		 ::flixel::math::FlxPoint fh2 = this->velocity;
HXDLIN( 752)		fh2->set_y((fh2->y + velocityDelta1));
HXLINE( 753)		delta = (this->velocity->y * elapsed);
HXLINE( 754)		 ::flixel::math::FlxPoint fh3 = this->velocity;
HXDLIN( 754)		fh3->set_y((fh3->y + velocityDelta1));
HXLINE( 755)		this->set_y((this->y + delta));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,updateMotion,(void))

void FlxObject_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_762_draw)
            	}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_784_overlaps)
HXLINE( 785)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE( 786)		if (::hx::IsNotNull( group )) {
HXLINE( 788)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->overlapsCallback_dyn(),group,( (Float)(0) ),( (Float)(0) ),InScreenSpace,Camera);
            		}
HXLINE( 791)		if ((ObjectOrGroup->flixelType == 3)) {
HXLINE( 795)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(ObjectOrGroup) );
HXLINE( 796)			return tilemap->overlaps(::hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
            		}
HXLINE( 799)		 ::flixel::FlxObject object = ( ( ::flixel::FlxObject)(ObjectOrGroup) );
HXLINE( 800)		if (!(InScreenSpace)) {
HXLINE( 802)			bool _hx_tmp;
HXDLIN( 802)			bool _hx_tmp1;
HXDLIN( 802)			Float object1 = object->x;
HXDLIN( 802)			Float _hx_tmp2 = (object1 + object->get_width());
HXDLIN( 802)			if ((_hx_tmp2 > this->x)) {
HXLINE( 802)				Float object1 = object->x;
HXDLIN( 802)				Float _hx_tmp = this->x;
HXDLIN( 802)				_hx_tmp1 = (object1 < (_hx_tmp + this->get_width()));
            			}
            			else {
HXLINE( 802)				_hx_tmp1 = false;
            			}
HXDLIN( 802)			if (_hx_tmp1) {
HXLINE( 802)				Float object1 = object->y;
HXDLIN( 802)				Float _hx_tmp1 = (object1 + object->get_height());
HXDLIN( 802)				_hx_tmp = (_hx_tmp1 > this->y);
            			}
            			else {
HXLINE( 802)				_hx_tmp = false;
            			}
HXDLIN( 802)			if (_hx_tmp) {
HXLINE( 802)				Float object1 = object->y;
HXDLIN( 802)				Float _hx_tmp = this->y;
HXDLIN( 802)				return (object1 < (_hx_tmp + this->get_height()));
            			}
            			else {
HXLINE( 802)				return false;
            			}
            		}
HXLINE( 805)		if (::hx::IsNull( Camera )) {
HXLINE( 807)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 809)		 ::flixel::math::FlxPoint objectScreenPos = object->getScreenPosition(null(),Camera);
HXLINE( 810)		this->getScreenPosition(this->_point,Camera);
HXLINE( 811)		bool _hx_tmp;
HXDLIN( 811)		bool _hx_tmp1;
HXDLIN( 811)		Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 811)		Float _hx_tmp2 = (objectScreenPos1 + object->get_width());
HXDLIN( 811)		if ((_hx_tmp2 > this->_point->x)) {
HXLINE( 812)			Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 812)			Float _hx_tmp = this->_point->x;
HXLINE( 811)			_hx_tmp1 = (objectScreenPos1 < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 811)			_hx_tmp1 = false;
            		}
HXDLIN( 811)		if (_hx_tmp1) {
HXLINE( 813)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 813)			Float _hx_tmp1 = (objectScreenPos1 + object->get_height());
HXLINE( 811)			_hx_tmp = (_hx_tmp1 > this->_point->y);
            		}
            		else {
HXLINE( 811)			_hx_tmp = false;
            		}
HXDLIN( 811)		if (_hx_tmp) {
HXLINE( 814)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 814)			Float _hx_tmp = this->_point->y;
HXDLIN( 814)			return (objectScreenPos1 < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 811)			return false;
            		}
HXDLIN( 811)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_820_overlapsCallback)
HXDLIN( 820)		return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt(Float X,Float Y, ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_843_overlapsAt)
HXLINE( 844)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE( 845)		if (::hx::IsNotNull( group )) {
HXLINE( 847)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->overlapsAtCallback_dyn(),group,X,Y,InScreenSpace,Camera);
            		}
HXLINE( 850)		if ((ObjectOrGroup->flixelType == 3)) {
HXLINE( 856)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(ObjectOrGroup) );
HXLINE( 857)			return tilemap->overlapsAt((tilemap->x - (X - this->x)),(tilemap->y - (Y - this->y)),::hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
            		}
HXLINE( 860)		 ::flixel::FlxObject object = ( ( ::flixel::FlxObject)(ObjectOrGroup) );
HXLINE( 861)		if (!(InScreenSpace)) {
HXLINE( 863)			bool _hx_tmp;
HXDLIN( 863)			bool _hx_tmp1;
HXDLIN( 863)			Float object1 = object->x;
HXDLIN( 863)			if (((object1 + object->get_width()) > X)) {
HXLINE( 863)				Float object1 = object->x;
HXDLIN( 863)				_hx_tmp1 = (object1 < (X + this->get_width()));
            			}
            			else {
HXLINE( 863)				_hx_tmp1 = false;
            			}
HXDLIN( 863)			if (_hx_tmp1) {
HXLINE( 863)				Float object1 = object->y;
HXDLIN( 863)				_hx_tmp = ((object1 + object->get_height()) > Y);
            			}
            			else {
HXLINE( 863)				_hx_tmp = false;
            			}
HXDLIN( 863)			if (_hx_tmp) {
HXLINE( 863)				Float object1 = object->y;
HXDLIN( 863)				return (object1 < (Y + this->get_height()));
            			}
            			else {
HXLINE( 863)				return false;
            			}
            		}
HXLINE( 866)		if (::hx::IsNull( Camera )) {
HXLINE( 868)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 870)		 ::flixel::math::FlxPoint objectScreenPos = object->getScreenPosition(null(),Camera);
HXLINE( 871)		this->getScreenPosition(this->_point,Camera);
HXLINE( 872)		bool _hx_tmp;
HXDLIN( 872)		bool _hx_tmp1;
HXDLIN( 872)		Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 872)		Float _hx_tmp2 = (objectScreenPos1 + object->get_width());
HXDLIN( 872)		if ((_hx_tmp2 > this->_point->x)) {
HXLINE( 873)			Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 873)			Float _hx_tmp = this->_point->x;
HXLINE( 872)			_hx_tmp1 = (objectScreenPos1 < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 872)			_hx_tmp1 = false;
            		}
HXDLIN( 872)		if (_hx_tmp1) {
HXLINE( 874)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 874)			Float _hx_tmp1 = (objectScreenPos1 + object->get_height());
HXLINE( 872)			_hx_tmp = (_hx_tmp1 > this->_point->y);
            		}
            		else {
HXLINE( 872)			_hx_tmp = false;
            		}
HXDLIN( 872)		if (_hx_tmp) {
HXLINE( 875)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 875)			Float _hx_tmp = this->_point->y;
HXDLIN( 875)			return (objectScreenPos1 < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 872)			return false;
            		}
HXDLIN( 872)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_881_overlapsAtCallback)
HXDLIN( 881)		return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::math::FlxPoint point,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_894_overlapsPoint)
HXLINE( 895)		if (!(InScreenSpace)) {
HXLINE( 897)			bool _hx_tmp;
HXDLIN( 897)			bool _hx_tmp1;
HXDLIN( 897)			if ((point->x >= this->x)) {
HXLINE( 897)				Float point1 = point->x;
HXDLIN( 897)				Float _hx_tmp = this->x;
HXDLIN( 897)				_hx_tmp1 = (point1 < (_hx_tmp + this->get_width()));
            			}
            			else {
HXLINE( 897)				_hx_tmp1 = false;
            			}
HXDLIN( 897)			if (_hx_tmp1) {
HXLINE( 897)				_hx_tmp = (point->y >= this->y);
            			}
            			else {
HXLINE( 897)				_hx_tmp = false;
            			}
HXDLIN( 897)			if (_hx_tmp) {
HXLINE( 897)				Float point1 = point->y;
HXDLIN( 897)				Float _hx_tmp = this->y;
HXDLIN( 897)				return (point1 < (_hx_tmp + this->get_height()));
            			}
            			else {
HXLINE( 897)				return false;
            			}
            		}
HXLINE( 900)		if (::hx::IsNull( Camera )) {
HXLINE( 902)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 904)		Float xPos = (point->x - Camera->scroll->x);
HXLINE( 905)		Float yPos = (point->y - Camera->scroll->y);
HXLINE( 906)		this->getScreenPosition(this->_point,Camera);
HXLINE( 907)		if (point->_weak) {
HXLINE( 907)			point->put();
            		}
HXLINE( 908)		bool _hx_tmp;
HXDLIN( 908)		bool _hx_tmp1;
HXDLIN( 908)		if ((xPos >= this->_point->x)) {
HXLINE( 908)			Float _hx_tmp = this->_point->x;
HXDLIN( 908)			_hx_tmp1 = (xPos < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 908)			_hx_tmp1 = false;
            		}
HXDLIN( 908)		if (_hx_tmp1) {
HXLINE( 908)			_hx_tmp = (yPos >= this->_point->y);
            		}
            		else {
HXLINE( 908)			_hx_tmp = false;
            		}
HXDLIN( 908)		if (_hx_tmp) {
HXLINE( 908)			Float _hx_tmp = this->_point->y;
HXDLIN( 908)			return (yPos < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 908)			return false;
            		}
HXDLIN( 908)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_919_inWorldBounds)
HXDLIN( 919)		bool _hx_tmp;
HXDLIN( 919)		bool _hx_tmp1;
HXDLIN( 919)		Float _hx_tmp2 = this->x;
HXDLIN( 919)		Float _hx_tmp3 = (_hx_tmp2 + this->get_width());
HXDLIN( 919)		if ((_hx_tmp3 > ::flixel::FlxG_obj::worldBounds->x)) {
HXDLIN( 919)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 919)			_hx_tmp1 = (this->x < (_this->x + _this->width));
            		}
            		else {
HXDLIN( 919)			_hx_tmp1 = false;
            		}
HXDLIN( 919)		if (_hx_tmp1) {
HXDLIN( 919)			Float _hx_tmp1 = this->y;
HXDLIN( 919)			Float _hx_tmp2 = (_hx_tmp1 + this->get_height());
HXDLIN( 919)			_hx_tmp = (_hx_tmp2 > ::flixel::FlxG_obj::worldBounds->y);
            		}
            		else {
HXDLIN( 919)			_hx_tmp = false;
            		}
HXDLIN( 919)		if (_hx_tmp) {
HXDLIN( 919)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 919)			return (this->y < (_this->y + _this->height));
            		}
            		else {
HXDLIN( 919)			return false;
            		}
HXDLIN( 919)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

 ::flixel::math::FlxPoint FlxObject_obj::getScreenPosition( ::flixel::math::FlxPoint point, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_932_getScreenPosition)
HXLINE( 933)		if (::hx::IsNull( point )) {
HXLINE( 934)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 934)			point1->_inPool = false;
HXDLIN( 934)			point = point1;
            		}
HXLINE( 936)		if (::hx::IsNull( Camera )) {
HXLINE( 937)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 939)		point->set(this->x,this->y);
HXLINE( 940)		if (this->pixelPerfectPosition) {
HXLINE( 941)			point->set_x(( (Float)(::Math_obj::floor(point->x)) ));
HXDLIN( 941)			point->set_y(( (Float)(::Math_obj::floor(point->y)) ));
            		}
HXLINE( 943)		Float Y = (Camera->scroll->y * this->scrollFactor->y);
HXDLIN( 943)		point->set_x((point->x - (Camera->scroll->x * this->scrollFactor->x)));
HXDLIN( 943)		point->set_y((point->y - Y));
HXDLIN( 943)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenPosition,return )

 ::flixel::math::FlxPoint FlxObject_obj::getPosition( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_947_getPosition)
HXLINE( 948)		if (::hx::IsNull( point )) {
HXLINE( 949)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 949)			point1->_inPool = false;
HXDLIN( 949)			point = point1;
            		}
HXLINE( 950)		return point->set(this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getPosition,return )

 ::flixel::math::FlxPoint FlxObject_obj::getMidpoint( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_961_getMidpoint)
HXLINE( 962)		if (::hx::IsNull( point )) {
HXLINE( 963)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 963)			point1->_inPool = false;
HXDLIN( 963)			point = point1;
            		}
HXLINE( 964)		Float _hx_tmp = this->x;
HXDLIN( 964)		Float _hx_tmp1 = (_hx_tmp + (this->get_width() * ((Float)0.5)));
HXDLIN( 964)		Float _hx_tmp2 = this->y;
HXDLIN( 964)		return point->set(_hx_tmp1,(_hx_tmp2 + (this->get_height() * ((Float)0.5))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

 ::flixel::math::FlxRect FlxObject_obj::getHitbox( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_968_getHitbox)
HXLINE( 969)		if (::hx::IsNull( rect )) {
HXLINE( 970)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 970)			_this->x = ( (Float)(0) );
HXDLIN( 970)			_this->y = ( (Float)(0) );
HXDLIN( 970)			_this->width = ( (Float)(0) );
HXDLIN( 970)			_this->height = ( (Float)(0) );
HXDLIN( 970)			 ::flixel::math::FlxRect rect1 = _this;
HXDLIN( 970)			rect1->_inPool = false;
HXDLIN( 970)			rect = rect1;
            		}
HXLINE( 971)		Float X = this->x;
HXDLIN( 971)		Float Y = this->y;
HXDLIN( 971)		Float Width = this->get_width();
HXDLIN( 971)		Float Height = this->get_height();
HXDLIN( 971)		rect->x = X;
HXDLIN( 971)		rect->y = Y;
HXDLIN( 971)		rect->width = Width;
HXDLIN( 971)		rect->height = Height;
HXDLIN( 971)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getHitbox,return )

void FlxObject_obj::reset(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_982_reset)
HXLINE( 983)		this->touching = 0;
HXLINE( 984)		this->wasTouching = 0;
HXLINE( 985)		this->setPosition(X,Y);
HXLINE( 986)		this->last->set(this->x,this->y);
HXLINE( 987)		this->velocity->set(null(),null());
HXLINE( 988)		this->revive();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_999_isOnScreen)
HXLINE(1000)		if (::hx::IsNull( Camera )) {
HXLINE(1001)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1003)		this->getScreenPosition(this->_point,Camera);
HXLINE(1004)		 ::flixel::math::FlxPoint point = this->_point;
HXDLIN(1004)		Float width = this->get_width();
HXDLIN(1004)		Float height = this->get_height();
HXDLIN(1004)		bool _hx_tmp;
HXDLIN(1004)		bool _hx_tmp1;
HXDLIN(1004)		if (((point->x + width) > Camera->viewOffsetX)) {
HXLINE(1004)			_hx_tmp1 = (point->x < Camera->viewOffsetWidth);
            		}
            		else {
HXLINE(1004)			_hx_tmp1 = false;
            		}
HXDLIN(1004)		if (_hx_tmp1) {
HXLINE(1004)			_hx_tmp = ((point->y + height) > Camera->viewOffsetY);
            		}
            		else {
HXLINE(1004)			_hx_tmp = false;
            		}
HXDLIN(1004)		if (_hx_tmp) {
HXLINE(1004)			return (point->y < Camera->viewOffsetHeight);
            		}
            		else {
HXLINE(1004)			return false;
            		}
HXDLIN(1004)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1011_isPixelPerfectRender)
HXLINE(1012)		if (::hx::IsNull( Camera )) {
HXLINE(1013)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1014)		if (::hx::IsNull( this->pixelPerfectRender )) {
HXLINE(1014)			return Camera->pixelPerfectRender;
            		}
            		else {
HXLINE(1014)			return ( (bool)(this->pixelPerfectRender) );
            		}
HXDLIN(1014)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isPixelPerfectRender,return )

bool FlxObject_obj::isTouching(int Direction){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1026_isTouching)
HXDLIN(1026)		return ((this->touching & Direction) > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched(int Direction){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1038_justTouched)
HXDLIN(1038)		if (((this->touching & Direction) > 0)) {
HXDLIN(1038)			return ((this->wasTouching & Direction) <= 0);
            		}
            		else {
HXDLIN(1038)			return false;
            		}
HXDLIN(1038)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

void FlxObject_obj::hurt(Float Damage){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1048_hurt)
HXLINE(1049)		this->health = (this->health - Damage);
HXLINE(1050)		if ((this->health <= 0)) {
HXLINE(1051)			this->kill();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

 ::flixel::FlxObject FlxObject_obj::screenCenter( ::flixel::util::FlxAxes axes){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1061_screenCenter)
HXLINE(1062)		if (::hx::IsNull( axes )) {
HXLINE(1063)			axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            		}
HXLINE(1065)		if (::hx::IsPointerNotEq( axes,::flixel::util::FlxAxes_obj::Y_dyn() )) {
HXLINE(1066)			Float _hx_tmp = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXDLIN(1066)			this->set_x((_hx_tmp - (this->get_width() / ( (Float)(2) ))));
            		}
HXLINE(1067)		if (::hx::IsPointerNotEq( axes,::flixel::util::FlxAxes_obj::X_dyn() )) {
HXLINE(1068)			Float _hx_tmp = (( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) ));
HXDLIN(1068)			this->set_y((_hx_tmp - (this->get_height() / ( (Float)(2) ))));
            		}
HXLINE(1070)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,screenCenter,return )

void FlxObject_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1081_setPosition)
HXLINE(1082)		this->set_x(X);
HXLINE(1083)		this->set_y(Y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

void FlxObject_obj::setSize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1093_setSize)
HXLINE(1094)		this->set_width(Width);
HXLINE(1095)		this->set_height(Height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

 ::flixel::math::FlxRect FlxObject_obj::getBoundingBox( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1173_getBoundingBox)
HXLINE(1174)		this->getScreenPosition(this->_point,camera);
HXLINE(1176)		{
HXLINE(1176)			 ::flixel::math::FlxRect _this = this->_rect;
HXDLIN(1176)			Float X = this->_point->x;
HXDLIN(1176)			Float Y = this->_point->y;
HXDLIN(1176)			Float Width = this->get_width();
HXDLIN(1176)			Float Height = this->get_height();
HXDLIN(1176)			_this->x = X;
HXDLIN(1176)			_this->y = Y;
HXDLIN(1176)			_this->width = Width;
HXDLIN(1176)			_this->height = Height;
            		}
HXLINE(1177)		this->_rect = camera->transformRect(this->_rect);
HXLINE(1179)		if (this->isPixelPerfectRender(camera)) {
HXLINE(1181)			 ::flixel::math::FlxRect _this = this->_rect;
HXDLIN(1181)			_this->x = ( (Float)(::Math_obj::floor(_this->x)) );
HXDLIN(1181)			_this->y = ( (Float)(::Math_obj::floor(_this->y)) );
HXDLIN(1181)			_this->width = ( (Float)(::Math_obj::floor(_this->width)) );
HXDLIN(1181)			_this->height = ( (Float)(::Math_obj::floor(_this->height)) );
            		}
HXLINE(1184)		return this->_rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getBoundingBox,return )

::String FlxObject_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1192_toString)
HXLINE(1193)		 ::Dynamic value = this->x;
HXDLIN(1193)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1193)		_this->label = HX_("x",78,00,00,00);
HXDLIN(1193)		_this->value = value;
HXLINE(1194)		 ::Dynamic value1 = this->y;
HXDLIN(1194)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1194)		_this1->label = HX_("y",79,00,00,00);
HXDLIN(1194)		_this1->value = value1;
HXLINE(1195)		 ::Dynamic value2 = this->get_width();
HXDLIN(1195)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1195)		_this2->label = HX_("w",77,00,00,00);
HXDLIN(1195)		_this2->value = value2;
HXLINE(1196)		 ::Dynamic value3 = this->get_height();
HXDLIN(1196)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1196)		_this3->label = HX_("h",68,00,00,00);
HXDLIN(1196)		_this3->value = value3;
HXLINE(1197)		 ::Dynamic value4 = this->visible;
HXDLIN(1197)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1197)		_this4->label = HX_("visible",72,78,24,a3);
HXDLIN(1197)		_this4->value = value4;
HXLINE(1198)		 ::Dynamic value5 = this->velocity;
HXDLIN(1198)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1198)		_this5->label = HX_("velocity",1d,02,fe,1e);
HXDLIN(1198)		_this5->value = value5;
HXLINE(1192)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(6)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4)->init(5,_this5));
            	}


Float FlxObject_obj::set_x(Float NewX){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1205_set_x)
HXDLIN(1205)		return (this->x = NewX);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y(Float NewY){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1211_set_y)
HXDLIN(1211)		return (this->y = NewY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width(Float Width){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1225_set_width)
HXDLIN(1225)		return (this->width = Width);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height(Float Height){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1239_set_height)
HXDLIN(1239)		return (this->height = Height);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1245_get_width)
HXDLIN(1245)		return this->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1251_get_height)
HXDLIN(1251)		return this->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1257_get_solid)
HXDLIN(1257)		return ((this->allowCollisions & 4369) > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid(bool Solid){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1262_set_solid)
HXLINE(1263)		int _hx_tmp;
HXDLIN(1263)		if (Solid) {
HXLINE(1263)			_hx_tmp = 4369;
            		}
            		else {
HXLINE(1263)			_hx_tmp = 0;
            		}
HXDLIN(1263)		this->set_allowCollisions(_hx_tmp);
HXLINE(1264)		return Solid;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1270_set_angle)
HXDLIN(1270)		return (this->angle = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves(bool Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1276_set_moves)
HXDLIN(1276)		return (this->moves = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable(bool Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1282_set_immovable)
HXDLIN(1282)		return (this->immovable = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

bool FlxObject_obj::set_pixelPerfectRender(bool Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1288_set_pixelPerfectRender)
HXDLIN(1288)		return ( (bool)((this->pixelPerfectRender = Value)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

int FlxObject_obj::set_allowCollisions(int Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1294_set_allowCollisions)
HXDLIN(1294)		return (this->allowCollisions = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_allowCollisions,return )

 ::flixel::util::FlxPath FlxObject_obj::set_path( ::flixel::util::FlxPath path){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1319_set_path)
HXLINE(1320)		if (::hx::IsInstanceEq( this->path,path )) {
HXLINE(1321)			return path;
            		}
HXLINE(1323)		if (::hx::IsNotNull( this->path )) {
HXLINE(1324)			this->path->object = null();
            		}
HXLINE(1326)		if (::hx::IsNotNull( path )) {
HXLINE(1327)			path->object = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(1328)		return (this->path = path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_path,return )

bool FlxObject_obj::defaultPixelPerfectPosition;

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

 ::flixel::math::FlxRect FlxObject_obj::_firstSeparateFlxRect;

 ::flixel::math::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_93_separate)
HXLINE(  94)		bool separatedX = ::flixel::FlxObject_obj::separateX(Object1,Object2);
HXLINE(  95)		bool separatedY = ::flixel::FlxObject_obj::separateY(Object1,Object2);
HXLINE(  96)		if (!(separatedX)) {
HXLINE(  96)			return separatedY;
            		}
            		else {
HXLINE(  96)			return true;
            		}
HXDLIN(  96)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::updateTouchingFlags( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_108_updateTouchingFlags)
HXLINE( 109)		bool touchingX = ::flixel::FlxObject_obj::updateTouchingFlagsX(Object1,Object2);
HXLINE( 110)		bool touchingY = ::flixel::FlxObject_obj::updateTouchingFlagsY(Object1,Object2);
HXLINE( 111)		if (!(touchingX)) {
HXLINE( 111)			return touchingY;
            		}
            		else {
HXLINE( 111)			return true;
            		}
HXDLIN( 111)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlags,return )

Float FlxObject_obj::computeOverlapX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2,::hx::Null< bool >  __o_checkMaxOverlap){
            		bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_121_computeOverlapX)
HXLINE( 122)		Float overlap = ( (Float)(0) );
HXLINE( 124)		Float obj1delta = (Object1->x - Object1->last->x);
HXLINE( 125)		Float obj2delta = (Object2->x - Object2->last->x);
HXLINE( 127)		if ((obj1delta != obj2delta)) {
HXLINE( 130)			Float obj1deltaAbs;
HXDLIN( 130)			if ((obj1delta > 0)) {
HXLINE( 130)				obj1deltaAbs = obj1delta;
            			}
            			else {
HXLINE( 130)				obj1deltaAbs = -(obj1delta);
            			}
HXLINE( 131)			Float obj2deltaAbs;
HXDLIN( 131)			if ((obj2delta > 0)) {
HXLINE( 131)				obj2deltaAbs = obj2delta;
            			}
            			else {
HXLINE( 131)				obj2deltaAbs = -(obj2delta);
            			}
HXLINE( 133)			 ::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;
HXDLIN( 133)			Float X;
HXDLIN( 133)			if ((obj1delta > 0)) {
HXLINE( 133)				X = obj1delta;
            			}
            			else {
HXLINE( 133)				X = ( (Float)(0) );
            			}
HXDLIN( 133)			Float X1 = (Object1->x - X);
HXDLIN( 133)			Float Y = Object1->last->y;
HXDLIN( 133)			Float Width = (Object1->get_width() + obj1deltaAbs);
HXDLIN( 133)			Float Height = Object1->get_height();
HXDLIN( 133)			_this->x = X1;
HXDLIN( 133)			_this->y = Y;
HXDLIN( 133)			_this->width = Width;
HXDLIN( 133)			_this->height = Height;
HXDLIN( 133)			 ::flixel::math::FlxRect obj1rect = _this;
HXLINE( 135)			 ::flixel::math::FlxRect _this1 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;
HXDLIN( 135)			Float X2;
HXDLIN( 135)			if ((obj2delta > 0)) {
HXLINE( 135)				X2 = obj2delta;
            			}
            			else {
HXLINE( 135)				X2 = ( (Float)(0) );
            			}
HXDLIN( 135)			Float X3 = (Object2->x - X2);
HXDLIN( 135)			Float Y1 = Object2->last->y;
HXDLIN( 135)			Float Width1 = (Object2->get_width() + obj2deltaAbs);
HXDLIN( 135)			Float Height1 = Object2->get_height();
HXDLIN( 135)			_this1->x = X3;
HXDLIN( 135)			_this1->y = Y1;
HXDLIN( 135)			_this1->width = Width1;
HXDLIN( 135)			_this1->height = Height1;
HXDLIN( 135)			 ::flixel::math::FlxRect obj2rect = _this1;
HXLINE( 138)			bool _hx_tmp;
HXDLIN( 138)			bool _hx_tmp1;
HXDLIN( 138)			bool _hx_tmp2;
HXDLIN( 138)			if (((obj1rect->x + obj1rect->width) > obj2rect->x)) {
HXLINE( 138)				_hx_tmp2 = (obj1rect->x < (obj2rect->x + obj2rect->width));
            			}
            			else {
HXLINE( 138)				_hx_tmp2 = false;
            			}
HXDLIN( 138)			if (_hx_tmp2) {
HXLINE( 138)				_hx_tmp1 = ((obj1rect->y + obj1rect->height) > obj2rect->y);
            			}
            			else {
HXLINE( 138)				_hx_tmp1 = false;
            			}
HXDLIN( 138)			if (_hx_tmp1) {
HXLINE( 138)				_hx_tmp = (obj1rect->y < (obj2rect->y + obj2rect->height));
            			}
            			else {
HXLINE( 138)				_hx_tmp = false;
            			}
HXDLIN( 138)			if (_hx_tmp) {
HXLINE( 143)				Float maxOverlap;
HXDLIN( 143)				if (checkMaxOverlap) {
HXLINE( 143)					maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);
            				}
            				else {
HXLINE( 143)					maxOverlap = ( (Float)(0) );
            				}
HXLINE( 146)				if ((obj1delta > obj2delta)) {
HXLINE( 148)					Float Object11 = Object1->x;
HXDLIN( 148)					Float overlap1 = (Object11 + Object1->get_width());
HXDLIN( 148)					overlap = (overlap1 - Object2->x);
HXLINE( 149)					bool _hx_tmp;
HXDLIN( 149)					bool _hx_tmp1;
HXDLIN( 149)					bool _hx_tmp2;
HXDLIN( 149)					if (checkMaxOverlap) {
HXLINE( 149)						_hx_tmp2 = (overlap > maxOverlap);
            					}
            					else {
HXLINE( 149)						_hx_tmp2 = false;
            					}
HXDLIN( 149)					if (!(_hx_tmp2)) {
HXLINE( 149)						_hx_tmp1 = ((Object1->allowCollisions & 16) == 0);
            					}
            					else {
HXLINE( 149)						_hx_tmp1 = true;
            					}
HXDLIN( 149)					if (!(_hx_tmp1)) {
HXLINE( 149)						_hx_tmp = ((Object2->allowCollisions & 1) == 0);
            					}
            					else {
HXLINE( 149)						_hx_tmp = true;
            					}
HXDLIN( 149)					if (_hx_tmp) {
HXLINE( 153)						overlap = ( (Float)(0) );
            					}
            					else {
HXLINE( 157)						 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 157)						Object11->touching = (Object11->touching | 16);
HXLINE( 158)						 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 158)						Object21->touching = (Object21->touching | 1);
            					}
            				}
            				else {
HXLINE( 161)					if ((obj1delta < obj2delta)) {
HXLINE( 163)						Float Object11 = Object1->x;
HXDLIN( 163)						Float overlap1 = (Object11 - Object2->get_width());
HXDLIN( 163)						overlap = (overlap1 - Object2->x);
HXLINE( 164)						bool _hx_tmp;
HXDLIN( 164)						bool _hx_tmp1;
HXDLIN( 164)						bool _hx_tmp2;
HXDLIN( 164)						if (checkMaxOverlap) {
HXLINE( 164)							_hx_tmp2 = (-(overlap) > maxOverlap);
            						}
            						else {
HXLINE( 164)							_hx_tmp2 = false;
            						}
HXDLIN( 164)						if (!(_hx_tmp2)) {
HXLINE( 164)							_hx_tmp1 = ((Object1->allowCollisions & 1) == 0);
            						}
            						else {
HXLINE( 164)							_hx_tmp1 = true;
            						}
HXDLIN( 164)						if (!(_hx_tmp1)) {
HXLINE( 164)							_hx_tmp = ((Object2->allowCollisions & 16) == 0);
            						}
            						else {
HXLINE( 164)							_hx_tmp = true;
            						}
HXDLIN( 164)						if (_hx_tmp) {
HXLINE( 168)							overlap = ( (Float)(0) );
            						}
            						else {
HXLINE( 172)							 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 172)							Object11->touching = (Object11->touching | 1);
HXLINE( 173)							 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 173)							Object21->touching = (Object21->touching | 16);
            						}
            					}
            				}
            			}
            		}
HXLINE( 178)		return overlap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapX,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_189_separateX)
HXLINE( 191)		bool obj1immovable = Object1->immovable;
HXLINE( 192)		bool obj2immovable = Object2->immovable;
HXLINE( 193)		bool _hx_tmp;
HXDLIN( 193)		if (obj1immovable) {
HXLINE( 193)			_hx_tmp = obj2immovable;
            		}
            		else {
HXLINE( 193)			_hx_tmp = false;
            		}
HXDLIN( 193)		if (_hx_tmp) {
HXLINE( 195)			return false;
            		}
HXLINE( 199)		if ((Object1->flixelType == 3)) {
HXLINE( 201)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 202)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateX_dyn(),null(),null());
            		}
HXLINE( 204)		if ((Object2->flixelType == 3)) {
HXLINE( 206)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 207)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateX_dyn(),true,null());
            		}
HXLINE( 210)		Float overlap = ::flixel::FlxObject_obj::computeOverlapX(Object1,Object2,null());
HXLINE( 212)		if ((overlap != 0)) {
HXLINE( 214)			Float obj1v = Object1->velocity->x;
HXLINE( 215)			Float obj2v = Object2->velocity->x;
HXLINE( 217)			bool _hx_tmp;
HXDLIN( 217)			if (!(obj1immovable)) {
HXLINE( 217)				_hx_tmp = !(obj2immovable);
            			}
            			else {
HXLINE( 217)				_hx_tmp = false;
            			}
HXDLIN( 217)			if (_hx_tmp) {
HXLINE( 219)				overlap = (overlap * ((Float)0.5));
HXLINE( 220)				Object1->set_x((Object1->x - overlap));
HXLINE( 221)				Object2->set_x((Object2->x + overlap));
HXLINE( 223)				int obj1velocity;
HXDLIN( 223)				if ((obj2v > 0)) {
HXLINE( 223)					obj1velocity = 1;
            				}
            				else {
HXLINE( 223)					obj1velocity = -1;
            				}
HXDLIN( 223)				Float obj1velocity1 = (::Math_obj::sqrt((((obj2v * obj2v) * Object2->mass) / Object1->mass)) * ( (Float)(obj1velocity) ));
HXLINE( 224)				int obj2velocity;
HXDLIN( 224)				if ((obj1v > 0)) {
HXLINE( 224)					obj2velocity = 1;
            				}
            				else {
HXLINE( 224)					obj2velocity = -1;
            				}
HXDLIN( 224)				Float obj2velocity1 = (::Math_obj::sqrt((((obj1v * obj1v) * Object1->mass) / Object2->mass)) * ( (Float)(obj2velocity) ));
HXLINE( 225)				Float average = ((obj1velocity1 + obj2velocity1) * ((Float)0.5));
HXLINE( 226)				obj1velocity1 = (obj1velocity1 - average);
HXLINE( 227)				obj2velocity1 = (obj2velocity1 - average);
HXLINE( 228)				Object1->velocity->set_x((average + (obj1velocity1 * Object1->elasticity)));
HXLINE( 229)				Object2->velocity->set_x((average + (obj2velocity1 * Object2->elasticity)));
            			}
            			else {
HXLINE( 231)				if (!(obj1immovable)) {
HXLINE( 233)					Object1->set_x((Object1->x - overlap));
HXLINE( 234)					Object1->velocity->set_x((obj2v - (obj1v * Object1->elasticity)));
            				}
            				else {
HXLINE( 236)					if (!(obj2immovable)) {
HXLINE( 238)						Object2->set_x((Object2->x + overlap));
HXLINE( 239)						Object2->velocity->set_x((obj1v - (obj2v * Object2->elasticity)));
            					}
            				}
            			}
HXLINE( 241)			return true;
            		}
HXLINE( 244)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::updateTouchingFlagsX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_255_updateTouchingFlagsX)
HXLINE( 257)		if ((Object1->flixelType == 3)) {
HXLINE( 259)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 260)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::updateTouchingFlagsX_dyn(),null(),null());
            		}
HXLINE( 262)		if ((Object2->flixelType == 3)) {
HXLINE( 264)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 265)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::updateTouchingFlagsX_dyn(),true,null());
            		}
HXLINE( 268)		return (::flixel::FlxObject_obj::computeOverlapX(Object1,Object2,false) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsX,return )

Float FlxObject_obj::computeOverlapY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2,::hx::Null< bool >  __o_checkMaxOverlap){
            		bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_278_computeOverlapY)
HXLINE( 279)		Float overlap = ( (Float)(0) );
HXLINE( 281)		Float obj1delta = (Object1->y - Object1->last->y);
HXLINE( 282)		Float obj2delta = (Object2->y - Object2->last->y);
HXLINE( 284)		if ((obj1delta != obj2delta)) {
HXLINE( 287)			Float obj1deltaAbs;
HXDLIN( 287)			if ((obj1delta > 0)) {
HXLINE( 287)				obj1deltaAbs = obj1delta;
            			}
            			else {
HXLINE( 287)				obj1deltaAbs = -(obj1delta);
            			}
HXLINE( 288)			Float obj2deltaAbs;
HXDLIN( 288)			if ((obj2delta > 0)) {
HXLINE( 288)				obj2deltaAbs = obj2delta;
            			}
            			else {
HXLINE( 288)				obj2deltaAbs = -(obj2delta);
            			}
HXLINE( 290)			 ::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;
HXDLIN( 290)			Float X = Object1->x;
HXDLIN( 290)			Float Y;
HXDLIN( 290)			if ((obj1delta > 0)) {
HXLINE( 290)				Y = obj1delta;
            			}
            			else {
HXLINE( 290)				Y = ( (Float)(0) );
            			}
HXDLIN( 290)			Float Y1 = (Object1->y - Y);
HXDLIN( 290)			Float Width = Object1->get_width();
HXDLIN( 290)			Float Height = (Object1->get_height() + obj1deltaAbs);
HXDLIN( 290)			_this->x = X;
HXDLIN( 290)			_this->y = Y1;
HXDLIN( 290)			_this->width = Width;
HXDLIN( 290)			_this->height = Height;
HXDLIN( 290)			 ::flixel::math::FlxRect obj1rect = _this;
HXLINE( 292)			 ::flixel::math::FlxRect _this1 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;
HXDLIN( 292)			Float X1 = Object2->x;
HXDLIN( 292)			Float Y2;
HXDLIN( 292)			if ((obj2delta > 0)) {
HXLINE( 292)				Y2 = obj2delta;
            			}
            			else {
HXLINE( 292)				Y2 = ( (Float)(0) );
            			}
HXDLIN( 292)			Float Y3 = (Object2->y - Y2);
HXDLIN( 292)			Float Width1 = Object2->get_width();
HXDLIN( 292)			Float Height1 = (Object2->get_height() + obj2deltaAbs);
HXDLIN( 292)			_this1->x = X1;
HXDLIN( 292)			_this1->y = Y3;
HXDLIN( 292)			_this1->width = Width1;
HXDLIN( 292)			_this1->height = Height1;
HXDLIN( 292)			 ::flixel::math::FlxRect obj2rect = _this1;
HXLINE( 295)			bool _hx_tmp;
HXDLIN( 295)			bool _hx_tmp1;
HXDLIN( 295)			bool _hx_tmp2;
HXDLIN( 295)			if (((obj1rect->x + obj1rect->width) > obj2rect->x)) {
HXLINE( 295)				_hx_tmp2 = (obj1rect->x < (obj2rect->x + obj2rect->width));
            			}
            			else {
HXLINE( 295)				_hx_tmp2 = false;
            			}
HXDLIN( 295)			if (_hx_tmp2) {
HXLINE( 295)				_hx_tmp1 = ((obj1rect->y + obj1rect->height) > obj2rect->y);
            			}
            			else {
HXLINE( 295)				_hx_tmp1 = false;
            			}
HXDLIN( 295)			if (_hx_tmp1) {
HXLINE( 295)				_hx_tmp = (obj1rect->y < (obj2rect->y + obj2rect->height));
            			}
            			else {
HXLINE( 295)				_hx_tmp = false;
            			}
HXDLIN( 295)			if (_hx_tmp) {
HXLINE( 300)				Float maxOverlap;
HXDLIN( 300)				if (checkMaxOverlap) {
HXLINE( 300)					maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);
            				}
            				else {
HXLINE( 300)					maxOverlap = ( (Float)(0) );
            				}
HXLINE( 303)				if ((obj1delta > obj2delta)) {
HXLINE( 305)					Float Object11 = Object1->y;
HXDLIN( 305)					Float overlap1 = (Object11 + Object1->get_height());
HXDLIN( 305)					overlap = (overlap1 - Object2->y);
HXLINE( 306)					bool _hx_tmp;
HXDLIN( 306)					bool _hx_tmp1;
HXDLIN( 306)					bool _hx_tmp2;
HXDLIN( 306)					if (checkMaxOverlap) {
HXLINE( 306)						_hx_tmp2 = (overlap > maxOverlap);
            					}
            					else {
HXLINE( 306)						_hx_tmp2 = false;
            					}
HXDLIN( 306)					if (!(_hx_tmp2)) {
HXLINE( 306)						_hx_tmp1 = ((Object1->allowCollisions & 4096) == 0);
            					}
            					else {
HXLINE( 306)						_hx_tmp1 = true;
            					}
HXDLIN( 306)					if (!(_hx_tmp1)) {
HXLINE( 306)						_hx_tmp = ((Object2->allowCollisions & 256) == 0);
            					}
            					else {
HXLINE( 306)						_hx_tmp = true;
            					}
HXDLIN( 306)					if (_hx_tmp) {
HXLINE( 310)						overlap = ( (Float)(0) );
            					}
            					else {
HXLINE( 314)						 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 314)						Object11->touching = (Object11->touching | 4096);
HXLINE( 315)						 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 315)						Object21->touching = (Object21->touching | 256);
            					}
            				}
            				else {
HXLINE( 318)					if ((obj1delta < obj2delta)) {
HXLINE( 320)						Float Object11 = Object1->y;
HXDLIN( 320)						Float overlap1 = (Object11 - Object2->get_height());
HXDLIN( 320)						overlap = (overlap1 - Object2->y);
HXLINE( 321)						bool _hx_tmp;
HXDLIN( 321)						bool _hx_tmp1;
HXDLIN( 321)						bool _hx_tmp2;
HXDLIN( 321)						if (checkMaxOverlap) {
HXLINE( 321)							_hx_tmp2 = (-(overlap) > maxOverlap);
            						}
            						else {
HXLINE( 321)							_hx_tmp2 = false;
            						}
HXDLIN( 321)						if (!(_hx_tmp2)) {
HXLINE( 321)							_hx_tmp1 = ((Object1->allowCollisions & 256) == 0);
            						}
            						else {
HXLINE( 321)							_hx_tmp1 = true;
            						}
HXDLIN( 321)						if (!(_hx_tmp1)) {
HXLINE( 321)							_hx_tmp = ((Object2->allowCollisions & 4096) == 0);
            						}
            						else {
HXLINE( 321)							_hx_tmp = true;
            						}
HXDLIN( 321)						if (_hx_tmp) {
HXLINE( 325)							overlap = ( (Float)(0) );
            						}
            						else {
HXLINE( 329)							 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 329)							Object11->touching = (Object11->touching | 256);
HXLINE( 330)							 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 330)							Object21->touching = (Object21->touching | 4096);
            						}
            					}
            				}
            			}
            		}
HXLINE( 335)		return overlap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapY,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_346_separateY)
HXLINE( 348)		bool obj1immovable = Object1->immovable;
HXLINE( 349)		bool obj2immovable = Object2->immovable;
HXLINE( 350)		bool _hx_tmp;
HXDLIN( 350)		if (obj1immovable) {
HXLINE( 350)			_hx_tmp = obj2immovable;
            		}
            		else {
HXLINE( 350)			_hx_tmp = false;
            		}
HXDLIN( 350)		if (_hx_tmp) {
HXLINE( 352)			return false;
            		}
HXLINE( 356)		if ((Object1->flixelType == 3)) {
HXLINE( 358)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 359)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateY_dyn(),null(),null());
            		}
HXLINE( 361)		if ((Object2->flixelType == 3)) {
HXLINE( 363)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 364)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateY_dyn(),true,null());
            		}
HXLINE( 367)		Float overlap = ::flixel::FlxObject_obj::computeOverlapY(Object1,Object2,null());
HXLINE( 369)		if ((overlap != 0)) {
HXLINE( 371)			Float obj1delta = (Object1->y - Object1->last->y);
HXLINE( 372)			Float obj2delta = (Object2->y - Object2->last->y);
HXLINE( 373)			Float obj1v = Object1->velocity->y;
HXLINE( 374)			Float obj2v = Object2->velocity->y;
HXLINE( 376)			bool _hx_tmp;
HXDLIN( 376)			if (!(obj1immovable)) {
HXLINE( 376)				_hx_tmp = !(obj2immovable);
            			}
            			else {
HXLINE( 376)				_hx_tmp = false;
            			}
HXDLIN( 376)			if (_hx_tmp) {
HXLINE( 378)				overlap = (overlap * ((Float)0.5));
HXLINE( 379)				Object1->set_y((Object1->y - overlap));
HXLINE( 380)				Object2->set_y((Object2->y + overlap));
HXLINE( 382)				int obj1velocity;
HXDLIN( 382)				if ((obj2v > 0)) {
HXLINE( 382)					obj1velocity = 1;
            				}
            				else {
HXLINE( 382)					obj1velocity = -1;
            				}
HXDLIN( 382)				Float obj1velocity1 = (::Math_obj::sqrt((((obj2v * obj2v) * Object2->mass) / Object1->mass)) * ( (Float)(obj1velocity) ));
HXLINE( 383)				int obj2velocity;
HXDLIN( 383)				if ((obj1v > 0)) {
HXLINE( 383)					obj2velocity = 1;
            				}
            				else {
HXLINE( 383)					obj2velocity = -1;
            				}
HXDLIN( 383)				Float obj2velocity1 = (::Math_obj::sqrt((((obj1v * obj1v) * Object1->mass) / Object2->mass)) * ( (Float)(obj2velocity) ));
HXLINE( 384)				Float average = ((obj1velocity1 + obj2velocity1) * ((Float)0.5));
HXLINE( 385)				obj1velocity1 = (obj1velocity1 - average);
HXLINE( 386)				obj2velocity1 = (obj2velocity1 - average);
HXLINE( 387)				Object1->velocity->set_y((average + (obj1velocity1 * Object1->elasticity)));
HXLINE( 388)				Object2->velocity->set_y((average + (obj2velocity1 * Object2->elasticity)));
            			}
            			else {
HXLINE( 390)				if (!(obj1immovable)) {
HXLINE( 392)					Object1->set_y((Object1->y - overlap));
HXLINE( 393)					Object1->velocity->set_y((obj2v - (obj1v * Object1->elasticity)));
HXLINE( 395)					bool _hx_tmp;
HXDLIN( 395)					bool _hx_tmp1;
HXDLIN( 395)					bool _hx_tmp2;
HXDLIN( 395)					if (Object1->collisonXDrag) {
HXLINE( 395)						_hx_tmp2 = Object2->active;
            					}
            					else {
HXLINE( 395)						_hx_tmp2 = false;
            					}
HXDLIN( 395)					if (_hx_tmp2) {
HXLINE( 395)						_hx_tmp1 = Object2->moves;
            					}
            					else {
HXLINE( 395)						_hx_tmp1 = false;
            					}
HXDLIN( 395)					if (_hx_tmp1) {
HXLINE( 395)						_hx_tmp = (obj1delta > obj2delta);
            					}
            					else {
HXLINE( 395)						_hx_tmp = false;
            					}
HXDLIN( 395)					if (_hx_tmp) {
HXLINE( 397)						Object1->set_x((Object1->x + (Object2->x - Object2->last->x)));
            					}
            				}
            				else {
HXLINE( 400)					if (!(obj2immovable)) {
HXLINE( 402)						Object2->set_y((Object2->y + overlap));
HXLINE( 403)						Object2->velocity->set_y((obj1v - (obj2v * Object2->elasticity)));
HXLINE( 405)						bool _hx_tmp;
HXDLIN( 405)						bool _hx_tmp1;
HXDLIN( 405)						bool _hx_tmp2;
HXDLIN( 405)						if (Object2->collisonXDrag) {
HXLINE( 405)							_hx_tmp2 = Object1->active;
            						}
            						else {
HXLINE( 405)							_hx_tmp2 = false;
            						}
HXDLIN( 405)						if (_hx_tmp2) {
HXLINE( 405)							_hx_tmp1 = Object1->moves;
            						}
            						else {
HXLINE( 405)							_hx_tmp1 = false;
            						}
HXDLIN( 405)						if (_hx_tmp1) {
HXLINE( 405)							_hx_tmp = (obj1delta < obj2delta);
            						}
            						else {
HXLINE( 405)							_hx_tmp = false;
            						}
HXDLIN( 405)						if (_hx_tmp) {
HXLINE( 407)							Object2->set_x((Object2->x + (Object1->x - Object1->last->x)));
            						}
            					}
            				}
            			}
HXLINE( 410)			return true;
            		}
HXLINE( 413)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )

bool FlxObject_obj::updateTouchingFlagsY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_424_updateTouchingFlagsY)
HXLINE( 426)		if ((Object1->flixelType == 3)) {
HXLINE( 428)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 429)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::updateTouchingFlagsY_dyn(),null(),null());
            		}
HXLINE( 431)		if ((Object2->flixelType == 3)) {
HXLINE( 433)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 434)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::updateTouchingFlagsY_dyn(),true,null());
            		}
HXLINE( 437)		return (::flixel::FlxObject_obj::computeOverlapY(Object1,Object2,false) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsY,return )


::hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height) {
	::hx::ObjectPtr< FlxObject_obj > __this = new FlxObject_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return __this;
}

::hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height) {
	FlxObject_obj *__this = (FlxObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxObject_obj), true, "flixel.FlxObject"));
	*(void **)__this = FlxObject_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return __this;
}

FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return ::hx::Val( drag ); }
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last ); }
		if (HX_FIELD_EQ(inName,"mass") ) { return ::hx::Val( mass ); }
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return ::hx::Val( hurt_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"moves") ) { return ::hx::Val( moves ); }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_solid() ); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return ::hx::Val( _rect ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		if (HX_FIELD_EQ(inName,"health") ) { return ::hx::Val( health ); }
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return ::hx::Val( velocity ); }
		if (HX_FIELD_EQ(inName,"touching") ) { return ::hx::Val( touching ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_path") ) { return ::hx::Val( set_path_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return ::hx::Val( immovable ); }
		if (HX_FIELD_EQ(inName,"getHitbox") ) { return ::hx::Val( getHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return ::hx::Val( get_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return ::hx::Val( set_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return ::hx::Val( set_moves_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return ::hx::Val( elasticity ); }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return ::hx::Val( maxAngular ); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return ::hx::Val( overlapsAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return ::hx::Val( isTouching_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return ::hx::Val( maxVelocity ); }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return ::hx::Val( angularDrag ); }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return ::hx::Val( wasTouching ); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return ::hx::Val( getMidpoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return ::hx::Val( justTouched_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return ::hx::Val( scrollFactor ); }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return ::hx::Val( acceleration ); }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return ::hx::Val( updateMotion_dyn() ); }
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return ::hx::Val( screenCenter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { return ::hx::Val( collisonXDrag ); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return ::hx::Val( overlapsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return ::hx::Val( inWorldBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return ::hx::Val( set_immovable_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return ::hx::Val( initMotionVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return ::hx::Val( getBoundingBox_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return ::hx::Val( angularVelocity ); }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return ::hx::Val( allowCollisions ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return ::hx::Val( overlapsCallback_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return ::hx::Val( getScreenPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return ::hx::Val( pixelPerfectRender ); }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return ::hx::Val( overlapsAtCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return ::hx::Val( angularAcceleration ); }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return ::hx::Val( set_allowCollisions_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { return ::hx::Val( pixelPerfectPosition ); }
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return ::hx::Val( isPixelPerfectRender_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return ::hx::Val( set_pixelPerfectRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { outValue = separate_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { outValue = separateX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"separateY") ) { outValue = separateY_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { outValue = ( SEPARATE_BIAS ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeOverlapX") ) { outValue = computeOverlapX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"computeOverlapY") ) { outValue = computeOverlapY_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateTouchingFlags") ) { outValue = updateTouchingFlags_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsX") ) { outValue = updateTouchingFlagsX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsY") ) { outValue = updateTouchingFlagsY_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { outValue = ( _firstSeparateFlxRect ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { outValue = ( _secondSeparateFlxRect ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { outValue = ( defaultPixelPerfectPosition ); return true; }
	}
	return false;
}

::hx::Val FlxObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_path(inValue.Cast<  ::flixel::util::FlxPath >()) );path=inValue.Cast<  ::flixel::util::FlxPath >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) );width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) );angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_moves(inValue.Cast< bool >()) );moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_solid(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) );height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_immovable(inValue.Cast< bool >()) );immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { collisonXDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowCollisions(inValue.Cast< int >()) );allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixelPerfectRender(inValue.Cast<  ::Dynamic >()) );pixelPerfectRender=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { pixelPerfectPosition=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=ioValue.Cast< Float >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { defaultPixelPerfectPosition=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("pixelPerfectRender",dd,59,4f,2f));
	outFields->push(HX_("pixelPerfectPosition",f0,7e,5e,3d));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("moves",42,cc,65,0c));
	outFields->push(HX_("immovable",0a,27,70,27));
	outFields->push(HX_("solid",2b,b4,c5,80));
	outFields->push(HX_("scrollFactor",bc,ec,cf,3b));
	outFields->push(HX_("velocity",1d,02,fe,1e));
	outFields->push(HX_("acceleration",40,00,61,9a));
	outFields->push(HX_("drag",f4,2b,70,42));
	outFields->push(HX_("maxVelocity",e1,0c,c4,94));
	outFields->push(HX_("last",56,0a,ad,47));
	outFields->push(HX_("mass",f4,40,56,48));
	outFields->push(HX_("elasticity",79,23,b4,4d));
	outFields->push(HX_("angularVelocity",1f,1f,fe,58));
	outFields->push(HX_("angularAcceleration",42,c6,00,9a));
	outFields->push(HX_("angularDrag",f6,1f,19,9c));
	outFields->push(HX_("maxAngular",9e,28,f6,c2));
	outFields->push(HX_("health",9c,28,06,fd));
	outFields->push(HX_("touching",83,16,25,00));
	outFields->push(HX_("wasTouching",cc,44,e4,5f));
	outFields->push(HX_("allowCollisions",aa,c9,d9,59));
	outFields->push(HX_("collisonXDrag",97,ca,fa,0a));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("_rect",03,69,b8,fe));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxObject_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_("pixelPerfectRender",dd,59,4f,2f)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectPosition),HX_("pixelPerfectPosition",f0,7e,5e,3d)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_("moves",42,cc,65,0c)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_("immovable",0a,27,70,27)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_("scrollFactor",bc,ec,cf,3b)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,velocity),HX_("velocity",1d,02,fe,1e)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,acceleration),HX_("acceleration",40,00,61,9a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,drag),HX_("drag",f4,2b,70,42)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_("maxVelocity",e1,0c,c4,94)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,last),HX_("last",56,0a,ad,47)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_("mass",f4,40,56,48)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_("elasticity",79,23,b4,4d)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_("angularVelocity",1f,1f,fe,58)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_("angularAcceleration",42,c6,00,9a)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_("angularDrag",f6,1f,19,9c)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_("maxAngular",9e,28,f6,c2)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_("health",9c,28,06,fd)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_("touching",83,16,25,00)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_("wasTouching",cc,44,e4,5f)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_("allowCollisions",aa,c9,d9,59)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,collisonXDrag),HX_("collisonXDrag",97,ca,fa,0a)},
	{::hx::fsObject /*  ::flixel::util::FlxPath */ ,(int)offsetof(FlxObject_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxObject_obj,_rect),HX_("_rect",03,69,b8,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxObject_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxObject_obj::defaultPixelPerfectPosition,HX_("defaultPixelPerfectPosition",51,0a,c2,b0)},
	{::hx::fsFloat,(void *) &FlxObject_obj::SEPARATE_BIAS,HX_("SEPARATE_BIAS",15,78,21,a0)},
	{::hx::fsInt,(void *) &FlxObject_obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsInt,(void *) &FlxObject_obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsInt,(void *) &FlxObject_obj::UP,HX_("UP",5b,4a,00,00)},
	{::hx::fsInt,(void *) &FlxObject_obj::DOWN,HX_("DOWN",62,c0,2e,2d)},
	{::hx::fsInt,(void *) &FlxObject_obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &FlxObject_obj::CEILING,HX_("CEILING",dd,32,72,b3)},
	{::hx::fsInt,(void *) &FlxObject_obj::FLOOR,HX_("FLOOR",ac,09,85,80)},
	{::hx::fsInt,(void *) &FlxObject_obj::WALL,HX_("WALL",0a,25,b3,39)},
	{::hx::fsInt,(void *) &FlxObject_obj::ANY,HX_("ANY",cc,96,31,00)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxObject_obj::_firstSeparateFlxRect,HX_("_firstSeparateFlxRect",22,b9,2f,5e)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxObject_obj::_secondSeparateFlxRect,HX_("_secondSeparateFlxRect",c0,bd,fc,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxObject_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("pixelPerfectRender",dd,59,4f,2f),
	HX_("pixelPerfectPosition",f0,7e,5e,3d),
	HX_("angle",d3,43,e2,22),
	HX_("moves",42,cc,65,0c),
	HX_("immovable",0a,27,70,27),
	HX_("scrollFactor",bc,ec,cf,3b),
	HX_("velocity",1d,02,fe,1e),
	HX_("acceleration",40,00,61,9a),
	HX_("drag",f4,2b,70,42),
	HX_("maxVelocity",e1,0c,c4,94),
	HX_("last",56,0a,ad,47),
	HX_("mass",f4,40,56,48),
	HX_("elasticity",79,23,b4,4d),
	HX_("angularVelocity",1f,1f,fe,58),
	HX_("angularAcceleration",42,c6,00,9a),
	HX_("angularDrag",f6,1f,19,9c),
	HX_("maxAngular",9e,28,f6,c2),
	HX_("health",9c,28,06,fd),
	HX_("touching",83,16,25,00),
	HX_("wasTouching",cc,44,e4,5f),
	HX_("allowCollisions",aa,c9,d9,59),
	HX_("collisonXDrag",97,ca,fa,0a),
	HX_("path",a5,e5,51,4a),
	HX_("_point",91,fb,76,c2),
	HX_("_rect",03,69,b8,fe),
	HX_("initVars",dc,5a,00,53),
	HX_("initMotionVars",32,e4,28,65),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("updateMotion",1f,2d,21,cb),
	HX_("draw",04,2c,70,42),
	HX_("overlaps",0c,d3,2a,45),
	HX_("overlapsCallback",f1,14,bf,b4),
	HX_("overlapsAt",1f,e7,ce,03),
	HX_("overlapsAtCallback",04,f4,81,3b),
	HX_("overlapsPoint",a4,c5,bd,35),
	HX_("inWorldBounds",82,46,f2,f1),
	HX_("getScreenPosition",6b,93,88,24),
	HX_("getPosition",5f,63,ee,f0),
	HX_("getMidpoint",7e,d8,fb,50),
	HX_("getHitbox",ce,76,7e,d3),
	HX_("reset",cf,49,c8,e6),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("isPixelPerfectRender",67,1c,f9,26),
	HX_("isTouching",8d,28,d4,7a),
	HX_("justTouched",12,59,b8,91),
	HX_("hurt",0f,5c,17,45),
	HX_("screenCenter",61,2e,f9,e2),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("setSize",83,e1,d7,11),
	HX_("getBoundingBox",11,e8,45,0d),
	HX_("toString",ac,d0,6e,38),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_solid",82,10,6f,c4),
	HX_("set_solid",8e,fc,bf,a7),
	HX_("set_angle",36,8c,dc,49),
	HX_("set_moves",a5,14,60,33),
	HX_("set_immovable",ed,dc,d9,2d),
	HX_("set_pixelPerfectRender",9a,4f,8f,bc),
	HX_("set_allowCollisions",cd,8b,81,21),
	HX_("set_path",a2,fa,69,78),
	::String(null()) };

static void FlxObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

::hx::Class FlxObject_obj::__mClass;

static ::String FlxObject_obj_sStaticFields[] = {
	HX_("defaultPixelPerfectPosition",51,0a,c2,b0),
	HX_("SEPARATE_BIAS",15,78,21,a0),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("UP",5b,4a,00,00),
	HX_("DOWN",62,c0,2e,2d),
	HX_("NONE",b8,da,ca,33),
	HX_("CEILING",dd,32,72,b3),
	HX_("FLOOR",ac,09,85,80),
	HX_("WALL",0a,25,b3,39),
	HX_("ANY",cc,96,31,00),
	HX_("_firstSeparateFlxRect",22,b9,2f,5e),
	HX_("_secondSeparateFlxRect",c0,bd,fc,da),
	HX_("separate",63,1f,1c,07),
	HX_("updateTouchingFlags",fb,01,ac,bd),
	HX_("computeOverlapX",88,a5,ab,dc),
	HX_("separateX",95,57,7f,31),
	HX_("updateTouchingFlagsX",fd,b9,d5,38),
	HX_("computeOverlapY",89,a5,ab,dc),
	HX_("separateY",96,57,7f,31),
	HX_("updateTouchingFlagsY",fe,b9,d5,38),
	::String(null())
};

void FlxObject_obj::__register()
{
	FlxObject_obj _hx_dummy;
	FlxObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxObject",1f,50,95,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxObject_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxObject_obj::__SetStatic;
	__mClass->mMarkFunc = FlxObject_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_26_boot)
HXDLIN(  26)		defaultPixelPerfectPosition = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_33_boot)
HXDLIN(  33)		SEPARATE_BIAS = ((Float)4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_38_boot)
HXDLIN(  38)		LEFT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_43_boot)
HXDLIN(  43)		RIGHT = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_48_boot)
HXDLIN(  48)		UP = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_53_boot)
HXDLIN(  53)		DOWN = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_58_boot)
HXDLIN(  58)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_63_boot)
HXDLIN(  63)		CEILING = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_68_boot)
HXDLIN(  68)		FLOOR = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_73_boot)
HXDLIN(  73)		WALL = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_78_boot)
HXDLIN(  78)		ANY = 4369;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_81_boot)
HXDLIN(  81)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  81)			_this->x = ( (Float)(0) );
HXDLIN(  81)			_this->y = ( (Float)(0) );
HXDLIN(  81)			_this->width = ( (Float)(0) );
HXDLIN(  81)			_this->height = ( (Float)(0) );
HXDLIN(  81)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  81)			rect->_inPool = false;
HXDLIN(  81)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_81_boot)
HXDLIN(  81)		_firstSeparateFlxRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_83_boot)
HXDLIN(  83)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  83)			_this->x = ( (Float)(0) );
HXDLIN(  83)			_this->y = ( (Float)(0) );
HXDLIN(  83)			_this->width = ( (Float)(0) );
HXDLIN(  83)			_this->height = ( (Float)(0) );
HXDLIN(  83)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  83)			rect->_inPool = false;
HXDLIN(  83)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_83_boot)
HXDLIN(  83)		_secondSeparateFlxRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
