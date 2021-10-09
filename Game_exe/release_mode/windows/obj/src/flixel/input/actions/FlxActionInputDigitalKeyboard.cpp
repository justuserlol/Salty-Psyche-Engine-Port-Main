#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalKeyboard
#include <flixel/input/actions/FlxActionInputDigitalKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2337e63586580f23_189_new,"flixel.input.actions.FlxActionInputDigitalKeyboard","new",0xe0efc6c8,"flixel.input.actions.FlxActionInputDigitalKeyboard.new","flixel/input/actions/FlxActionInputDigital.hx",189,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_2337e63586580f23_194_check,"flixel.input.actions.FlxActionInputDigitalKeyboard","check",0x7e0af930,"flixel.input.actions.FlxActionInputDigitalKeyboard.check","flixel/input/actions/FlxActionInputDigital.hx",194,0x47a4ecd2)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputDigitalKeyboard_obj::__construct(int Key,int Trigger){
            	HX_STACKFRAME(&_hx_pos_2337e63586580f23_189_new)
HXDLIN( 189)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn(),Key,Trigger,null());
            	}

Dynamic FlxActionInputDigitalKeyboard_obj::__CreateEmpty() { return new FlxActionInputDigitalKeyboard_obj; }

void *FlxActionInputDigitalKeyboard_obj::_hx_vtable = 0;

Dynamic FlxActionInputDigitalKeyboard_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputDigitalKeyboard_obj > _hx_result = new FlxActionInputDigitalKeyboard_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxActionInputDigitalKeyboard_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20308a99) {
		if (inClassId<=(int)0x1600da07) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1600da07;
		} else {
			return inClassId==(int)0x20308a99;
		}
	} else {
		return inClassId==(int)0x7a98a622;
	}
}

bool FlxActionInputDigitalKeyboard_obj::check( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_2337e63586580f23_194_check)
HXDLIN( 194)		switch((int)(this->trigger)){
            			case (int)-1: {
HXLINE( 200)				return ::flixel::FlxG_obj::keys->checkStatus(this->inputID,-1);
            			}
            			break;
            			case (int)0: {
HXLINE( 198)				if (!(::flixel::FlxG_obj::keys->checkStatus(this->inputID,0))) {
HXLINE( 198)					return ::flixel::FlxG_obj::keys->checkStatus(this->inputID,-1);
            				}
            				else {
HXLINE( 198)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 197)				if (!(::flixel::FlxG_obj::keys->checkStatus(this->inputID,1))) {
HXLINE( 197)					return ::flixel::FlxG_obj::keys->checkStatus(this->inputID,2);
            				}
            				else {
HXLINE( 197)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 199)				return ::flixel::FlxG_obj::keys->checkStatus(this->inputID,2);
            			}
            			break;
            			default:{
HXLINE( 202)				return false;
            			}
            		}
HXLINE( 194)		return false;
            	}



::hx::ObjectPtr< FlxActionInputDigitalKeyboard_obj > FlxActionInputDigitalKeyboard_obj::__new(int Key,int Trigger) {
	::hx::ObjectPtr< FlxActionInputDigitalKeyboard_obj > __this = new FlxActionInputDigitalKeyboard_obj();
	__this->__construct(Key,Trigger);
	return __this;
}

::hx::ObjectPtr< FlxActionInputDigitalKeyboard_obj > FlxActionInputDigitalKeyboard_obj::__alloc(::hx::Ctx *_hx_ctx,int Key,int Trigger) {
	FlxActionInputDigitalKeyboard_obj *__this = (FlxActionInputDigitalKeyboard_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputDigitalKeyboard_obj), true, "flixel.input.actions.FlxActionInputDigitalKeyboard"));
	*(void **)__this = FlxActionInputDigitalKeyboard_obj::_hx_vtable;
	__this->__construct(Key,Trigger);
	return __this;
}

FlxActionInputDigitalKeyboard_obj::FlxActionInputDigitalKeyboard_obj()
{
}

::hx::Val FlxActionInputDigitalKeyboard_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxActionInputDigitalKeyboard_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxActionInputDigitalKeyboard_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputDigitalKeyboard_obj_sMemberFields[] = {
	HX_("check",c8,98,b6,45),
	::String(null()) };

::hx::Class FlxActionInputDigitalKeyboard_obj::__mClass;

void FlxActionInputDigitalKeyboard_obj::__register()
{
	FlxActionInputDigitalKeyboard_obj _hx_dummy;
	FlxActionInputDigitalKeyboard_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputDigitalKeyboard",d6,02,cb,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputDigitalKeyboard_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputDigitalKeyboard_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputDigitalKeyboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputDigitalKeyboard_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
