#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_FlxBaseMultiInput
#include <flixel/addons/ui/FlxBaseMultiInput.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxMultiGamepad
#include <flixel/addons/ui/FlxMultiGamepad.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxMultiGamepadAnalogStick
#include <flixel/addons/ui/FlxMultiGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_XY
#include <flixel/addons/ui/XY.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogStateList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4f7099cfa3ed003_16_new,"flixel.addons.ui.FlxMultiGamepadAnalogStick","new",0x48f9ab69,"flixel.addons.ui.FlxMultiGamepadAnalogStick.new","flixel/addons/ui/FlxMultiGamepadAnalogStick.hx",16,0xc15da7a6)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f7099cfa3ed003_22_destroy,"flixel.addons.ui.FlxMultiGamepadAnalogStick","destroy",0x1350c083,"flixel.addons.ui.FlxMultiGamepadAnalogStick.destroy","flixel/addons/ui/FlxMultiGamepadAnalogStick.hx",22,0xc15da7a6)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f7099cfa3ed003_58_checkJustPressed,"flixel.addons.ui.FlxMultiGamepadAnalogStick","checkJustPressed",0x3a2ce545,"flixel.addons.ui.FlxMultiGamepadAnalogStick.checkJustPressed","flixel/addons/ui/FlxMultiGamepadAnalogStick.hx",58,0xc15da7a6)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f7099cfa3ed003_115_checkJustReleased,"flixel.addons.ui.FlxMultiGamepadAnalogStick","checkJustReleased",0xb3f1c4ba,"flixel.addons.ui.FlxMultiGamepadAnalogStick.checkJustReleased","flixel/addons/ui/FlxMultiGamepadAnalogStick.hx",115,0xc15da7a6)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f7099cfa3ed003_129_checkPressed,"flixel.addons.ui.FlxMultiGamepadAnalogStick","checkPressed",0x99528691,"flixel.addons.ui.FlxMultiGamepadAnalogStick.checkPressed","flixel/addons/ui/FlxMultiGamepadAnalogStick.hx",129,0xc15da7a6)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f7099cfa3ed003_160_checkCombos,"flixel.addons.ui.FlxMultiGamepadAnalogStick","checkCombos",0x8e2d7b56,"flixel.addons.ui.FlxMultiGamepadAnalogStick.checkCombos","flixel/addons/ui/FlxMultiGamepadAnalogStick.hx",160,0xc15da7a6)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f7099cfa3ed003_167_checkForbiddens,"flixel.addons.ui.FlxMultiGamepadAnalogStick","checkForbiddens",0x0e97fccb,"flixel.addons.ui.FlxMultiGamepadAnalogStick.checkForbiddens","flixel/addons/ui/FlxMultiGamepadAnalogStick.hx",167,0xc15da7a6)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f7099cfa3ed003_33_getStickInput,"flixel.addons.ui.FlxMultiGamepadAnalogStick","getStickInput",0x2db9b519,"flixel.addons.ui.FlxMultiGamepadAnalogStick.getStickInput","flixel/addons/ui/FlxMultiGamepadAnalogStick.hx",33,0xc15da7a6)
namespace flixel{
namespace addons{
namespace ui{

void FlxMultiGamepadAnalogStick_obj::__construct( ::flixel::input::gamepad::FlxGamepad Gamepad, ::Dynamic Input,::Array< int > Combos,::Array< int > Forbiddens){
            	HX_STACKFRAME(&_hx_pos_f4f7099cfa3ed003_16_new)
HXLINE(  17)		this->sInput = Input;
HXLINE(  18)		super::__construct(Gamepad, ::Dynamic(Input->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)),Combos,Forbiddens);
            	}

Dynamic FlxMultiGamepadAnalogStick_obj::__CreateEmpty() { return new FlxMultiGamepadAnalogStick_obj; }

void *FlxMultiGamepadAnalogStick_obj::_hx_vtable = 0;

Dynamic FlxMultiGamepadAnalogStick_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMultiGamepadAnalogStick_obj > _hx_result = new FlxMultiGamepadAnalogStick_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxMultiGamepadAnalogStick_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c2c85f1) {
		if (inClassId<=(int)0x017b2705) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x017b2705;
		} else {
			return inClassId==(int)0x2c2c85f1;
		}
	} else {
		return inClassId==(int)0x60c98233;
	}
}

void FlxMultiGamepadAnalogStick_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_f4f7099cfa3ed003_22_destroy)
HXLINE(  23)		this->super::destroy();
HXLINE(  24)		this->sInput = null();
            	}


bool FlxMultiGamepadAnalogStick_obj::checkJustPressed(){
            	HX_STACKFRAME(&_hx_pos_f4f7099cfa3ed003_58_checkJustPressed)
HXLINE(  59)		if (::hx::IsNull( this->gamepad )) {
HXLINE(  60)			return false;
            		}
HXLINE(  61)		Float dz = this->gamepad->get_deadZone();
HXLINE(  62)		switch((int)(( (int)(this->sInput->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ))){
            			case (int)19: {
HXLINE(  65)				if (::hx::IsPointerEq( this->sInput->__Field(HX_("axis",a1,1c,79,40),::hx::paccDynamic),::flixel::addons::ui::XY_obj::X_dyn() )) {
HXLINE(  67)					 ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList _this = this->gamepad->analog->justMoved;
HXDLIN(  67)					 ::flixel::input::gamepad::FlxGamepadAnalogStick stick = _this->gamepad->mapping->getAnalogStick(19);
HXDLIN(  67)					bool _hx_tmp;
HXDLIN(  67)					if (::hx::IsNull( stick )) {
HXLINE(  67)						_hx_tmp = false;
            					}
            					else {
HXLINE(  67)						 ::flixel::input::gamepad::FlxGamepadButton button = _this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  67)						if (::hx::IsNotNull( button )) {
HXLINE(  67)							_hx_tmp = button->hasState(_this->status);
            						}
            						else {
HXLINE(  67)							_hx_tmp = false;
            						}
            					}
HXDLIN(  67)					if (_hx_tmp) {
HXLINE(  69)						if (( (bool)(this->sInput->__Field(HX_("positive",b9,a6,fa,ca),::hx::paccDynamic)) )) {
HXLINE(  69)							 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN(  69)							return (_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(19)) > dz);
            						}
            						else {
HXLINE(  69)							 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN(  69)							return (_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(19)) < -(dz));
            						}
            					}
            					else {
HXLINE(  73)						return false;
            					}
            				}
            				else {
HXLINE(  78)					 ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList _this = this->gamepad->analog->justMoved;
HXDLIN(  78)					 ::flixel::input::gamepad::FlxGamepadAnalogStick stick = _this->gamepad->mapping->getAnalogStick(19);
HXDLIN(  78)					bool _hx_tmp;
HXDLIN(  78)					if (::hx::IsNull( stick )) {
HXLINE(  78)						_hx_tmp = false;
            					}
            					else {
HXLINE(  78)						 ::flixel::input::gamepad::FlxGamepadButton button = _this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  78)						if (::hx::IsNotNull( button )) {
HXLINE(  78)							_hx_tmp = button->hasState(_this->status);
            						}
            						else {
HXLINE(  78)							_hx_tmp = false;
            						}
            					}
HXDLIN(  78)					if (_hx_tmp) {
HXLINE(  80)						if (( (bool)(this->sInput->__Field(HX_("positive",b9,a6,fa,ca),::hx::paccDynamic)) )) {
HXLINE(  80)							 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN(  80)							return (_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) > dz);
            						}
            						else {
HXLINE(  80)							 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN(  80)							return (_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) < -(dz));
            						}
            					}
            					else {
HXLINE(  84)						return false;
            					}
            				}
            			}
            			break;
            			case (int)20: {
HXLINE(  88)				if (::hx::IsPointerEq( this->sInput->__Field(HX_("axis",a1,1c,79,40),::hx::paccDynamic),::flixel::addons::ui::XY_obj::X_dyn() )) {
HXLINE(  90)					 ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList _this = this->gamepad->analog->justMoved;
HXDLIN(  90)					 ::flixel::input::gamepad::FlxGamepadAnalogStick stick = _this->gamepad->mapping->getAnalogStick(20);
HXDLIN(  90)					bool _hx_tmp;
HXDLIN(  90)					if (::hx::IsNull( stick )) {
HXLINE(  90)						_hx_tmp = false;
            					}
            					else {
HXLINE(  90)						 ::flixel::input::gamepad::FlxGamepadButton button = _this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  90)						if (::hx::IsNotNull( button )) {
HXLINE(  90)							_hx_tmp = button->hasState(_this->status);
            						}
            						else {
HXLINE(  90)							_hx_tmp = false;
            						}
            					}
HXDLIN(  90)					if (_hx_tmp) {
HXLINE(  92)						if (( (bool)(this->sInput->__Field(HX_("positive",b9,a6,fa,ca),::hx::paccDynamic)) )) {
HXLINE(  92)							 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN(  92)							return (_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(20)) > dz);
            						}
            						else {
HXLINE(  92)							 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN(  92)							return (_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(20)) < -(dz));
            						}
            					}
            					else {
HXLINE(  96)						return false;
            					}
            				}
            				else {
HXLINE( 101)					 ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList _this = this->gamepad->analog->justMoved;
HXDLIN( 101)					 ::flixel::input::gamepad::FlxGamepadAnalogStick stick = _this->gamepad->mapping->getAnalogStick(20);
HXDLIN( 101)					bool _hx_tmp;
HXDLIN( 101)					if (::hx::IsNull( stick )) {
HXLINE( 101)						_hx_tmp = false;
            					}
            					else {
HXLINE( 101)						 ::flixel::input::gamepad::FlxGamepadButton button = _this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 101)						if (::hx::IsNotNull( button )) {
HXLINE( 101)							_hx_tmp = button->hasState(_this->status);
            						}
            						else {
HXLINE( 101)							_hx_tmp = false;
            						}
            					}
HXDLIN( 101)					if (_hx_tmp) {
HXLINE( 103)						if (( (bool)(this->sInput->__Field(HX_("positive",b9,a6,fa,ca),::hx::paccDynamic)) )) {
HXLINE( 103)							 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 103)							return (_this->getYAxisRaw(_this->mapping->getAnalogStick(20)) > dz);
            						}
            						else {
HXLINE( 103)							 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 103)							return (_this->getYAxisRaw(_this->mapping->getAnalogStick(20)) < -(dz));
            						}
            					}
            					else {
HXLINE( 107)						return false;
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 110)				return false;
            			}
            		}
HXLINE(  62)		return false;
            	}


bool FlxMultiGamepadAnalogStick_obj::checkJustReleased(){
            	HX_STACKFRAME(&_hx_pos_f4f7099cfa3ed003_115_checkJustReleased)
HXLINE( 116)		if (::hx::IsNull( this->gamepad )) {
HXLINE( 117)			return false;
            		}
HXLINE( 118)		switch((int)(( (int)(this->sInput->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ))){
            			case (int)19: {
HXLINE( 121)				if (::hx::IsPointerEq( this->sInput->__Field(HX_("axis",a1,1c,79,40),::hx::paccDynamic),::flixel::addons::ui::XY_obj::X_dyn() )) {
HXLINE( 121)					 ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList _this = this->gamepad->analog->justReleased;
HXDLIN( 121)					 ::flixel::input::gamepad::FlxGamepadAnalogStick stick = _this->gamepad->mapping->getAnalogStick(19);
HXDLIN( 121)					if (::hx::IsNull( stick )) {
HXLINE( 121)						return false;
            					}
            					else {
HXLINE( 121)						 ::flixel::input::gamepad::FlxGamepadButton button = _this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 121)						if (::hx::IsNotNull( button )) {
HXLINE( 121)							return button->hasState(_this->status);
            						}
            						else {
HXLINE( 121)							return false;
            						}
            					}
            				}
            				else {
HXLINE( 121)					 ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList _this = this->gamepad->analog->justReleased;
HXDLIN( 121)					 ::flixel::input::gamepad::FlxGamepadAnalogStick stick = _this->gamepad->mapping->getAnalogStick(19);
HXDLIN( 121)					if (::hx::IsNull( stick )) {
HXLINE( 121)						return false;
            					}
            					else {
HXLINE( 121)						 ::flixel::input::gamepad::FlxGamepadButton button = _this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 121)						if (::hx::IsNotNull( button )) {
HXLINE( 121)							return button->hasState(_this->status);
            						}
            						else {
HXLINE( 121)							return false;
            						}
            					}
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 123)				if (::hx::IsPointerEq( this->sInput->__Field(HX_("axis",a1,1c,79,40),::hx::paccDynamic),::flixel::addons::ui::XY_obj::X_dyn() )) {
HXLINE( 123)					 ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList _this = this->gamepad->analog->justReleased;
HXDLIN( 123)					 ::flixel::input::gamepad::FlxGamepadAnalogStick stick = _this->gamepad->mapping->getAnalogStick(20);
HXDLIN( 123)					if (::hx::IsNull( stick )) {
HXLINE( 123)						return false;
            					}
            					else {
HXLINE( 123)						 ::flixel::input::gamepad::FlxGamepadButton button = _this->gamepad->buttons->__get(stick->x).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 123)						if (::hx::IsNotNull( button )) {
HXLINE( 123)							return button->hasState(_this->status);
            						}
            						else {
HXLINE( 123)							return false;
            						}
            					}
            				}
            				else {
HXLINE( 123)					 ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList _this = this->gamepad->analog->justReleased;
HXDLIN( 123)					 ::flixel::input::gamepad::FlxGamepadAnalogStick stick = _this->gamepad->mapping->getAnalogStick(20);
HXDLIN( 123)					if (::hx::IsNull( stick )) {
HXLINE( 123)						return false;
            					}
            					else {
HXLINE( 123)						 ::flixel::input::gamepad::FlxGamepadButton button = _this->gamepad->buttons->__get(stick->y).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 123)						if (::hx::IsNotNull( button )) {
HXLINE( 123)							return button->hasState(_this->status);
            						}
            						else {
HXLINE( 123)							return false;
            						}
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 124)				return false;
            			}
            		}
HXLINE( 118)		return false;
            	}


bool FlxMultiGamepadAnalogStick_obj::checkPressed(){
            	HX_STACKFRAME(&_hx_pos_f4f7099cfa3ed003_129_checkPressed)
HXLINE( 130)		if (::hx::IsNull( this->gamepad )) {
HXLINE( 131)			return false;
            		}
HXLINE( 132)		bool value = false;
HXLINE( 133)		Float dz = this->gamepad->get_deadZone();
HXLINE( 134)		switch((int)(( (int)(this->sInput->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ))){
            			case (int)19: {
HXLINE( 137)				if (::hx::IsPointerEq( this->sInput->__Field(HX_("axis",a1,1c,79,40),::hx::paccDynamic),::flixel::addons::ui::XY_obj::X_dyn() )) {
HXLINE( 139)					if (( (bool)(this->sInput->__Field(HX_("positive",b9,a6,fa,ca),::hx::paccDynamic)) )) {
HXLINE( 139)						 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 139)						return (_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(19)) > dz);
            					}
            					else {
HXLINE( 139)						 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 139)						return (_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(19)) < -(dz));
            					}
            				}
            				else {
HXLINE( 143)					if (( (bool)(this->sInput->__Field(HX_("positive",b9,a6,fa,ca),::hx::paccDynamic)) )) {
HXLINE( 143)						 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 143)						return (_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) > dz);
            					}
            					else {
HXLINE( 143)						 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 143)						return (_this->getYAxisRaw(_this->mapping->getAnalogStick(19)) < -(dz));
            					}
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 146)				if (::hx::IsPointerEq( this->sInput->__Field(HX_("axis",a1,1c,79,40),::hx::paccDynamic),::flixel::addons::ui::XY_obj::X_dyn() )) {
HXLINE( 148)					if (( (bool)(this->sInput->__Field(HX_("positive",b9,a6,fa,ca),::hx::paccDynamic)) )) {
HXLINE( 148)						 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 148)						return (_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(20)) > dz);
            					}
            					else {
HXLINE( 148)						 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 148)						return (_this->getAnalogXAxisValue(_this->mapping->getAnalogStick(20)) < -(dz));
            					}
            				}
            				else {
HXLINE( 152)					if (( (bool)(this->sInput->__Field(HX_("positive",b9,a6,fa,ca),::hx::paccDynamic)) )) {
HXLINE( 152)						 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 152)						return (_this->getYAxisRaw(_this->mapping->getAnalogStick(20)) > dz);
            					}
            					else {
HXLINE( 152)						 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad->analog->value->gamepad;
HXDLIN( 152)						return (_this->getYAxisRaw(_this->mapping->getAnalogStick(20)) < -(dz));
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 154)				value = false;
HXDLIN( 154)				return value;
            			}
            		}
HXLINE( 134)		return false;
            	}


bool FlxMultiGamepadAnalogStick_obj::checkCombos(bool value){
            	HX_STACKFRAME(&_hx_pos_f4f7099cfa3ed003_160_checkCombos)
HXLINE( 161)		if (::hx::IsNull( this->gamepad )) {
HXLINE( 162)			return false;
            		}
HXLINE( 163)		return (this->gamepad->checkButtonArrayState(this->combos,1) == value);
            	}


bool FlxMultiGamepadAnalogStick_obj::checkForbiddens(bool value){
            	HX_STACKFRAME(&_hx_pos_f4f7099cfa3ed003_167_checkForbiddens)
HXLINE( 168)		if (::hx::IsNull( this->gamepad )) {
HXLINE( 169)			return false;
            		}
HXLINE( 170)		return (this->gamepad->checkButtonArrayState(this->forbiddens,1) == value);
            	}


 ::Dynamic FlxMultiGamepadAnalogStick_obj::getStickInput(::String str){
            	HX_STACKFRAME(&_hx_pos_f4f7099cfa3ed003_33_getStickInput)
HXLINE(  34)		str = str.toLowerCase();
HXLINE(  35)		::String _hx_switch_0 = str;
            		if (  (_hx_switch_0==HX_("left_analog_stick_x_minus",e3,59,89,34)) ){
HXLINE(  38)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("positive",b9,a6,fa,ca),false)
            				->setFixed(1,HX_("id",db,5b,00,00),19)
            				->setFixed(2,HX_("axis",a1,1c,79,40),::flixel::addons::ui::XY_obj::X_dyn()));
HXDLIN(  38)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("left_analog_stick_x_plus",47,95,44,eb)) ){
HXLINE(  40)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("positive",b9,a6,fa,ca),true)
            				->setFixed(1,HX_("id",db,5b,00,00),19)
            				->setFixed(2,HX_("axis",a1,1c,79,40),::flixel::addons::ui::XY_obj::X_dyn()));
HXDLIN(  40)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("left_analog_stick_y_minus",a4,d0,1e,5e)) ){
HXLINE(  42)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("positive",b9,a6,fa,ca),false)
            				->setFixed(1,HX_("id",db,5b,00,00),19)
            				->setFixed(2,HX_("axis",a1,1c,79,40),::flixel::addons::ui::XY_obj::Y_dyn()));
HXDLIN(  42)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("left_analog_stick_y_plus",a6,f1,9f,51)) ){
HXLINE(  44)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("positive",b9,a6,fa,ca),true)
            				->setFixed(1,HX_("id",db,5b,00,00),19)
            				->setFixed(2,HX_("axis",a1,1c,79,40),::flixel::addons::ui::XY_obj::Y_dyn()));
HXDLIN(  44)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("right_analog_stick_x_minus",ee,57,58,fe)) ){
HXLINE(  46)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("positive",b9,a6,fa,ca),false)
            				->setFixed(1,HX_("id",db,5b,00,00),20)
            				->setFixed(2,HX_("axis",a1,1c,79,40),::flixel::addons::ui::XY_obj::X_dyn()));
HXDLIN(  46)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("right_analog_stick_x_plus",9c,61,c8,74)) ){
HXLINE(  48)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("positive",b9,a6,fa,ca),true)
            				->setFixed(1,HX_("id",db,5b,00,00),20)
            				->setFixed(2,HX_("axis",a1,1c,79,40),::flixel::addons::ui::XY_obj::X_dyn()));
HXDLIN(  48)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("right_analog_stick_y_minus",af,ce,ed,27)) ){
HXLINE(  50)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("positive",b9,a6,fa,ca),false)
            				->setFixed(1,HX_("id",db,5b,00,00),20)
            				->setFixed(2,HX_("axis",a1,1c,79,40),::flixel::addons::ui::XY_obj::Y_dyn()));
HXDLIN(  50)			goto _hx_goto_7;
            		}
            		if (  (_hx_switch_0==HX_("right_analog_stick_y_plus",fb,bd,23,db)) ){
HXLINE(  52)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("positive",b9,a6,fa,ca),true)
            				->setFixed(1,HX_("id",db,5b,00,00),20)
            				->setFixed(2,HX_("axis",a1,1c,79,40),::flixel::addons::ui::XY_obj::Y_dyn()));
HXDLIN(  52)			goto _hx_goto_7;
            		}
            		_hx_goto_7:;
HXLINE(  54)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMultiGamepadAnalogStick_obj,getStickInput,return )


::hx::ObjectPtr< FlxMultiGamepadAnalogStick_obj > FlxMultiGamepadAnalogStick_obj::__new( ::flixel::input::gamepad::FlxGamepad Gamepad, ::Dynamic Input,::Array< int > Combos,::Array< int > Forbiddens) {
	::hx::ObjectPtr< FlxMultiGamepadAnalogStick_obj > __this = new FlxMultiGamepadAnalogStick_obj();
	__this->__construct(Gamepad,Input,Combos,Forbiddens);
	return __this;
}

::hx::ObjectPtr< FlxMultiGamepadAnalogStick_obj > FlxMultiGamepadAnalogStick_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad Gamepad, ::Dynamic Input,::Array< int > Combos,::Array< int > Forbiddens) {
	FlxMultiGamepadAnalogStick_obj *__this = (FlxMultiGamepadAnalogStick_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMultiGamepadAnalogStick_obj), true, "flixel.addons.ui.FlxMultiGamepadAnalogStick"));
	*(void **)__this = FlxMultiGamepadAnalogStick_obj::_hx_vtable;
	__this->__construct(Gamepad,Input,Combos,Forbiddens);
	return __this;
}

FlxMultiGamepadAnalogStick_obj::FlxMultiGamepadAnalogStick_obj()
{
}

void FlxMultiGamepadAnalogStick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMultiGamepadAnalogStick);
	HX_MARK_MEMBER_NAME(sInput,"sInput");
	 ::flixel::addons::ui::FlxMultiGamepad_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMultiGamepadAnalogStick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sInput,"sInput");
	 ::flixel::addons::ui::FlxMultiGamepad_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxMultiGamepadAnalogStick_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sInput") ) { return ::hx::Val( sInput ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkCombos") ) { return ::hx::Val( checkCombos_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkPressed") ) { return ::hx::Val( checkPressed_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkForbiddens") ) { return ::hx::Val( checkForbiddens_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkJustPressed") ) { return ::hx::Val( checkJustPressed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkJustReleased") ) { return ::hx::Val( checkJustReleased_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxMultiGamepadAnalogStick_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"getStickInput") ) { outValue = getStickInput_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxMultiGamepadAnalogStick_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sInput") ) { sInput=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMultiGamepadAnalogStick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sInput",97,b2,55,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxMultiGamepadAnalogStick_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMultiGamepadAnalogStick_obj,sInput),HX_("sInput",97,b2,55,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxMultiGamepadAnalogStick_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxMultiGamepadAnalogStick_obj_sMemberFields[] = {
	HX_("sInput",97,b2,55,4c),
	HX_("destroy",fa,2c,86,24),
	HX_("checkJustPressed",ee,b1,87,a7),
	HX_("checkJustReleased",f1,0b,0a,f6),
	HX_("checkPressed",ba,8a,6d,27),
	HX_("checkCombos",4d,ef,37,a9),
	HX_("checkForbiddens",42,38,51,c3),
	::String(null()) };

::hx::Class FlxMultiGamepadAnalogStick_obj::__mClass;

static ::String FlxMultiGamepadAnalogStick_obj_sStaticFields[] = {
	HX_("getStickInput",d0,54,42,f7),
	::String(null())
};

void FlxMultiGamepadAnalogStick_obj::__register()
{
	FlxMultiGamepadAnalogStick_obj _hx_dummy;
	FlxMultiGamepadAnalogStick_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxMultiGamepadAnalogStick",f7,c2,3b,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMultiGamepadAnalogStick_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxMultiGamepadAnalogStick_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMultiGamepadAnalogStick_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMultiGamepadAnalogStick_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMultiGamepadAnalogStick_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMultiGamepadAnalogStick_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
