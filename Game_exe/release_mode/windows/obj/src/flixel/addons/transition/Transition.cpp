#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_Transition
#include <flixel/addons/transition/Transition.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionEffect
#include <flixel/addons/transition/TransitionEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionFade
#include <flixel/addons/transition/TransitionFade.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionTiles
#include <flixel/addons/transition/TransitionTiles.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab83fa44df0ac8ad_30_new,"flixel.addons.transition.Transition","new",0xa22822f7,"flixel.addons.transition.Transition.new","flixel/addons/transition/Transition.hx",30,0x569ccdd8)
HX_LOCAL_STACK_FRAME(_hx_pos_ab83fa44df0ac8ad_38_update,"flixel.addons.transition.Transition","update",0x58ffabd2,"flixel.addons.transition.Transition.update","flixel/addons/transition/Transition.hx",38,0x569ccdd8)
HX_LOCAL_STACK_FRAME(_hx_pos_ab83fa44df0ac8ad_44_destroy,"flixel.addons.transition.Transition","destroy",0x0d6d1711,"flixel.addons.transition.Transition.destroy","flixel/addons/transition/Transition.hx",44,0x569ccdd8)
HX_LOCAL_STACK_FRAME(_hx_pos_ab83fa44df0ac8ad_53_start,"flixel.addons.transition.Transition","start",0x818adab9,"flixel.addons.transition.Transition.start","flixel/addons/transition/Transition.hx",53,0x569ccdd8)
HX_LOCAL_STACK_FRAME(_hx_pos_ab83fa44df0ac8ad_58_setStatus,"flixel.addons.transition.Transition","setStatus",0x85aa3a4b,"flixel.addons.transition.Transition.setStatus","flixel/addons/transition/Transition.hx",58,0x569ccdd8)
HX_LOCAL_STACK_FRAME(_hx_pos_ab83fa44df0ac8ad_63_createEffect,"flixel.addons.transition.Transition","createEffect",0x4cf6bd36,"flixel.addons.transition.Transition.createEffect","flixel/addons/transition/Transition.hx",63,0x569ccdd8)
HX_LOCAL_STACK_FRAME(_hx_pos_ab83fa44df0ac8ad_75_get_finishCallback,"flixel.addons.transition.Transition","get_finishCallback",0xc796b14a,"flixel.addons.transition.Transition.get_finishCallback","flixel/addons/transition/Transition.hx",75,0x569ccdd8)
HX_LOCAL_STACK_FRAME(_hx_pos_ab83fa44df0ac8ad_84_set_finishCallback,"flixel.addons.transition.Transition","set_finishCallback",0xa445e3be,"flixel.addons.transition.Transition.set_finishCallback","flixel/addons/transition/Transition.hx",84,0x569ccdd8)
namespace flixel{
namespace addons{
namespace transition{

void Transition_obj::__construct( ::flixel::addons::transition::TransitionData data){
            	HX_STACKFRAME(&_hx_pos_ab83fa44df0ac8ad_30_new)
HXLINE(  31)		super::__construct(0);
HXLINE(  32)		this->_effect = this->createEffect(data);
HXLINE(  33)		this->_effect->scrollFactor->set(0,0);
HXLINE(  34)		this->add(this->_effect);
            	}

Dynamic Transition_obj::__CreateEmpty() { return new Transition_obj; }

void *Transition_obj::_hx_vtable = 0;

Dynamic Transition_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Transition_obj > _hx_result = new Transition_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Transition_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x30aafc19) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x30aafc19;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void Transition_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ab83fa44df0ac8ad_38_update)
HXLINE(  39)		this->super::update(elapsed);
HXLINE(  40)		this->_effect->update(elapsed);
            	}


void Transition_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ab83fa44df0ac8ad_44_destroy)
HXLINE(  45)		this->super::destroy();
HXLINE(  46)		this->set_finishCallback(null());
HXLINE(  47)		this->_effect->destroy();
HXLINE(  48)		this->_effect = null();
            	}


void Transition_obj::start(int NewStatus){
            	HX_STACKFRAME(&_hx_pos_ab83fa44df0ac8ad_53_start)
HXDLIN(  53)		this->_effect->start(NewStatus);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transition_obj,start,(void))

void Transition_obj::setStatus(int NewStatus){
            	HX_STACKFRAME(&_hx_pos_ab83fa44df0ac8ad_58_setStatus)
HXDLIN(  58)		this->_effect->setStatus(NewStatus);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transition_obj,setStatus,(void))

 ::flixel::addons::transition::TransitionEffect Transition_obj::createEffect( ::flixel::addons::transition::TransitionData Data){
            	HX_GC_STACKFRAME(&_hx_pos_ab83fa44df0ac8ad_63_createEffect)
HXDLIN(  63)		::String _hx_switch_0 = Data->type;
            		if (  (_hx_switch_0==HX_("fade",7c,b5,b5,43)) ){
HXLINE(  68)			return  ::flixel::addons::transition::TransitionFade_obj::__alloc( HX_CTX ,Data);
HXDLIN(  68)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("tiles",85,fd,34,10)) ){
HXLINE(  66)			return  ::flixel::addons::transition::TransitionTiles_obj::__alloc( HX_CTX ,Data);
HXDLIN(  66)			goto _hx_goto_5;
            		}
            		/* default */{
HXLINE(  70)			return null();
            		}
            		_hx_goto_5:;
HXLINE(  63)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transition_obj,createEffect,return )

 ::Dynamic Transition_obj::get_finishCallback(){
            	HX_STACKFRAME(&_hx_pos_ab83fa44df0ac8ad_75_get_finishCallback)
HXLINE(  76)		if (::hx::IsNotNull( this->_effect )) {
HXLINE(  78)			return this->_effect->finishCallback;
            		}
HXLINE(  80)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transition_obj,get_finishCallback,return )

 ::Dynamic Transition_obj::set_finishCallback( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_ab83fa44df0ac8ad_84_set_finishCallback)
HXLINE(  85)		if (::hx::IsNotNull( this->_effect )) {
HXLINE(  87)			this->_effect->finishCallback = f;
HXLINE(  88)			return f;
            		}
HXLINE(  90)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transition_obj,set_finishCallback,return )


::hx::ObjectPtr< Transition_obj > Transition_obj::__new( ::flixel::addons::transition::TransitionData data) {
	::hx::ObjectPtr< Transition_obj > __this = new Transition_obj();
	__this->__construct(data);
	return __this;
}

::hx::ObjectPtr< Transition_obj > Transition_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData data) {
	Transition_obj *__this = (Transition_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Transition_obj), true, "flixel.addons.transition.Transition"));
	*(void **)__this = Transition_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

Transition_obj::Transition_obj()
{
}

void Transition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transition);
	HX_MARK_MEMBER_NAME(_effect,"_effect");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Transition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_effect,"_effect");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Transition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { return ::hx::Val( _effect ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setStatus") ) { return ::hx::Val( setStatus_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createEffect") ) { return ::hx::Val( createEffect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_finishCallback() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_finishCallback") ) { return ::hx::Val( get_finishCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_finishCallback") ) { return ::hx::Val( set_finishCallback_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Transition_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_effect") ) { _effect=inValue.Cast<  ::flixel::addons::transition::TransitionEffect >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_finishCallback(inValue.Cast<  ::Dynamic >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_effect",30,6c,1a,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Transition_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::transition::TransitionEffect */ ,(int)offsetof(Transition_obj,_effect),HX_("_effect",30,6c,1a,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Transition_obj_sStaticStorageInfo = 0;
#endif

static ::String Transition_obj_sMemberFields[] = {
	HX_("_effect",30,6c,1a,cf),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("start",62,74,0b,84),
	HX_("setStatus",74,5c,a3,65),
	HX_("createEffect",ad,9a,f8,82),
	HX_("get_finishCallback",01,82,56,50),
	HX_("set_finishCallback",75,b4,05,2d),
	::String(null()) };

::hx::Class Transition_obj::__mClass;

void Transition_obj::__register()
{
	Transition_obj _hx_dummy;
	Transition_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.transition.Transition",85,db,97,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Transition_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Transition_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Transition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Transition_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition
