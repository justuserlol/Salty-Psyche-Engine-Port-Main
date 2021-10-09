#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5ddd1b5fef28e4a4_8_new,"flixel.tweens.motion.QuadMotion","new",0xf59e5933,"flixel.tweens.motion.QuadMotion.new","flixel/tweens/motion/QuadMotion.hx",8,0x8023a31c)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddd1b5fef28e4a4_38_setMotion,"flixel.tweens.motion.QuadMotion","setMotion",0xe116648b,"flixel.tweens.motion.QuadMotion.setMotion","flixel/tweens/motion/QuadMotion.hx",38,0x8023a31c)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddd1b5fef28e4a4_62_update,"flixel.tweens.motion.QuadMotion","update",0xec780316,"flixel.tweens.motion.QuadMotion.update","flixel/tweens/motion/QuadMotion.hx",62,0x8023a31c)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddd1b5fef28e4a4_73_get_distance,"flixel.tweens.motion.QuadMotion","get_distance",0x3f988c0b,"flixel.tweens.motion.QuadMotion.get_distance","flixel/tweens/motion/QuadMotion.hx",73,0x8023a31c)
namespace flixel{
namespace tweens{
namespace motion{

void QuadMotion_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_5ddd1b5fef28e4a4_8_new)
HXLINE(  22)		this->_controlY = ((Float)0);
HXLINE(  21)		this->_controlX = ((Float)0);
HXLINE(  20)		this->_toY = ((Float)0);
HXLINE(  19)		this->_toX = ((Float)0);
HXLINE(  18)		this->_fromY = ((Float)0);
HXLINE(  17)		this->_fromX = ((Float)0);
HXLINE(  16)		this->_distance = ((Float)-1);
HXLINE(   8)		super::__construct(Options,manager);
            	}

Dynamic QuadMotion_obj::__CreateEmpty() { return new QuadMotion_obj; }

void *QuadMotion_obj::_hx_vtable = 0;

Dynamic QuadMotion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QuadMotion_obj > _hx_result = new QuadMotion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool QuadMotion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21dceb90) {
		if (inClassId<=(int)0x104846c5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
		} else {
			return inClassId==(int)0x21dceb90;
		}
	} else {
		return inClassId==(int)0x357dd3e3;
	}
}

 ::flixel::tweens::motion::QuadMotion QuadMotion_obj::setMotion(Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,::hx::Null< bool >  __o_UseDuration){
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_5ddd1b5fef28e4a4_38_setMotion)
HXLINE(  39)		this->_distance = ( (Float)(-1) );
HXLINE(  40)		this->x = (this->_fromX = FromX);
HXLINE(  41)		this->y = (this->_fromY = FromY);
HXLINE(  42)		this->_controlX = ControlX;
HXLINE(  43)		this->_controlY = ControlY;
HXLINE(  44)		this->_toX = ToX;
HXLINE(  45)		this->_toY = ToY;
HXLINE(  47)		if (UseDuration) {
HXLINE(  49)			this->duration = DurationOrSpeed;
            		}
            		else {
HXLINE(  53)			this->duration = (this->get_distance() / DurationOrSpeed);
            		}
HXLINE(  56)		this->start();
HXLINE(  58)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(QuadMotion_obj,setMotion,return )

void QuadMotion_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5ddd1b5fef28e4a4_62_update)
HXLINE(  63)		this->super::update(elapsed);
HXLINE(  64)		this->x = ((((this->_fromX * (( (Float)(1) ) - this->scale)) * (( (Float)(1) ) - this->scale)) + (((this->_controlX * ( (Float)(2) )) * (( (Float)(1) ) - this->scale)) * this->scale)) + ((this->_toX * this->scale) * this->scale));
HXLINE(  65)		this->y = ((((this->_fromY * (( (Float)(1) ) - this->scale)) * (( (Float)(1) ) - this->scale)) + (((this->_controlY * ( (Float)(2) )) * (( (Float)(1) ) - this->scale)) * this->scale)) + ((this->_toY * this->scale) * this->scale));
HXLINE(  66)		if (this->finished) {
HXLINE(  68)			this->postUpdate();
            		}
            	}


Float QuadMotion_obj::get_distance(){
            	HX_STACKFRAME(&_hx_pos_5ddd1b5fef28e4a4_73_get_distance)
HXLINE(  74)		if ((this->_distance >= 0)) {
HXLINE(  75)			return this->_distance;
            		}
HXLINE(  77)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  77)		point->_inPool = false;
HXDLIN(  77)		 ::flixel::math::FlxPoint p1 = point;
HXLINE(  78)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  78)		point1->_inPool = false;
HXDLIN(  78)		 ::flixel::math::FlxPoint p2 = point1;
HXLINE(  79)		p1->set_x(((this->x - (( (Float)(2) ) * this->_controlX)) + this->_toX));
HXLINE(  80)		p1->set_y(((this->y - (( (Float)(2) ) * this->_controlY)) + this->_toY));
HXLINE(  81)		p2->set_x(((( (Float)(2) ) * this->_controlX) - (( (Float)(2) ) * this->x)));
HXLINE(  82)		p2->set_y(((( (Float)(2) ) * this->_controlY) - (( (Float)(2) ) * this->y)));
HXLINE(  83)		Float a = (( (Float)(4) ) * ((p1->x * p1->x) + (p1->y * p1->y)));
HXDLIN(  83)		Float b = (( (Float)(4) ) * ((p1->x * p2->x) + (p1->y * p2->y)));
HXDLIN(  83)		Float c = ((p2->x * p2->x) + (p2->y * p2->y));
HXDLIN(  83)		Float abc = (( (Float)(2) ) * ::Math_obj::sqrt(((a + b) + c)));
HXDLIN(  83)		Float a2 = ::Math_obj::sqrt(a);
HXDLIN(  83)		Float a32 = ((( (Float)(2) ) * a) * a2);
HXDLIN(  83)		Float c2 = (( (Float)(2) ) * ::Math_obj::sqrt(c));
HXDLIN(  83)		Float ba = (b / a2);
HXLINE(  92)		p1->put();
HXLINE(  93)		p2->put();
HXLINE(  95)		return ((((a32 * abc) + ((a2 * b) * (abc - c2))) + ((((( (Float)(4) ) * c) * a) - (b * b)) * ::Math_obj::log(((((( (Float)(2) ) * a2) + ba) + abc) / (ba + c2))))) / (( (Float)(4) ) * a32));
            	}


HX_DEFINE_DYNAMIC_FUNC0(QuadMotion_obj,get_distance,return )


::hx::ObjectPtr< QuadMotion_obj > QuadMotion_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< QuadMotion_obj > __this = new QuadMotion_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< QuadMotion_obj > QuadMotion_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	QuadMotion_obj *__this = (QuadMotion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QuadMotion_obj), true, "flixel.tweens.motion.QuadMotion"));
	*(void **)__this = QuadMotion_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

QuadMotion_obj::QuadMotion_obj()
{
}

::hx::Val QuadMotion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { return ::hx::Val( _toX ); }
		if (HX_FIELD_EQ(inName,"_toY") ) { return ::hx::Val( _toY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return ::hx::Val( _fromX ); }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return ::hx::Val( _fromY ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_distance() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return ::hx::Val( _distance ); }
		if (HX_FIELD_EQ(inName,"_controlX") ) { return ::hx::Val( _controlX ); }
		if (HX_FIELD_EQ(inName,"_controlY") ) { return ::hx::Val( _controlY ); }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return ::hx::Val( setMotion_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return ::hx::Val( get_distance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val QuadMotion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controlX") ) { _controlX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controlY") ) { _controlY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("_distance",94,8a,8f,b3));
	outFields->push(HX_("_fromX",ef,5e,75,02));
	outFields->push(HX_("_fromY",f0,5e,75,02));
	outFields->push(HX_("_toX",7e,ab,23,3f));
	outFields->push(HX_("_toY",7f,ab,23,3f));
	outFields->push(HX_("_controlX",ba,7d,52,7f));
	outFields->push(HX_("_controlY",bb,7d,52,7f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo QuadMotion_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(QuadMotion_obj,_distance),HX_("_distance",94,8a,8f,b3)},
	{::hx::fsFloat,(int)offsetof(QuadMotion_obj,_fromX),HX_("_fromX",ef,5e,75,02)},
	{::hx::fsFloat,(int)offsetof(QuadMotion_obj,_fromY),HX_("_fromY",f0,5e,75,02)},
	{::hx::fsFloat,(int)offsetof(QuadMotion_obj,_toX),HX_("_toX",7e,ab,23,3f)},
	{::hx::fsFloat,(int)offsetof(QuadMotion_obj,_toY),HX_("_toY",7f,ab,23,3f)},
	{::hx::fsFloat,(int)offsetof(QuadMotion_obj,_controlX),HX_("_controlX",ba,7d,52,7f)},
	{::hx::fsFloat,(int)offsetof(QuadMotion_obj,_controlY),HX_("_controlY",bb,7d,52,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *QuadMotion_obj_sStaticStorageInfo = 0;
#endif

static ::String QuadMotion_obj_sMemberFields[] = {
	HX_("_distance",94,8a,8f,b3),
	HX_("_fromX",ef,5e,75,02),
	HX_("_fromY",f0,5e,75,02),
	HX_("_toX",7e,ab,23,3f),
	HX_("_toY",7f,ab,23,3f),
	HX_("_controlX",ba,7d,52,7f),
	HX_("_controlY",bb,7d,52,7f),
	HX_("setMotion",78,fb,04,2b),
	HX_("update",09,86,05,87),
	HX_("get_distance",3e,47,13,21),
	::String(null()) };

::hx::Class QuadMotion_obj::__mClass;

void QuadMotion_obj::__register()
{
	QuadMotion_obj _hx_dummy;
	QuadMotion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.motion.QuadMotion",c1,43,2f,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QuadMotion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QuadMotion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuadMotion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuadMotion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
