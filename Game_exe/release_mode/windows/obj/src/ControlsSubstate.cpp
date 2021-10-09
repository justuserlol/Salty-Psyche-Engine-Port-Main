#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_ControlsSubstate
#include <ControlsSubstate.h>
#endif
#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0105b02946ff30ba_400_new,"ControlsSubstate","new",0xe75631b9,"ControlsSubstate.new","OptionsState.hx",400,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_467_update,"ControlsSubstate","update",0xc5c9c250,"ControlsSubstate.update","OptionsState.hx",467,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_482_update,"ControlsSubstate","update",0xc5c9c250,"ControlsSubstate.update","OptionsState.hx",482,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_542_changeSelection,"ControlsSubstate","changeSelection",0xda311b95,"ControlsSubstate.changeSelection","OptionsState.hx",542,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_576_changeAlt,"ControlsSubstate","changeAlt",0x496f0fb2,"ControlsSubstate.changeAlt","OptionsState.hx",576,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_589_unselectableCheck,"ControlsSubstate","unselectableCheck",0xa3530332,"ControlsSubstate.unselectableCheck","OptionsState.hx",589,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_602_getSelectedKey,"ControlsSubstate","getSelectedKey",0x6ffb7055,"ControlsSubstate.getSelectedKey","OptionsState.hx",602,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_612_addBindTexts,"ControlsSubstate","addBindTexts",0xea2c254f,"ControlsSubstate.addBindTexts","OptionsState.hx",612,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_627_reloadKeys,"ControlsSubstate","reloadKeys",0x6f13edb4,"ControlsSubstate.reloadKeys","OptionsState.hx",627,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_401_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",401,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_402_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",402,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_404_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",404,0x342db2ab)

void ControlsSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0105b02946ff30ba_400_new)
HXLINE( 466)		this->bindingTime = ((Float)0);
HXLINE( 465)		this->leaving = false;
HXLINE( 430)		this->nextAccept = 5;
HXLINE( 429)		this->rebindingKey = -1;
HXLINE( 428)		this->controlArray = ::Array_obj< int >::__new(0);
HXLINE( 427)		this->grpInputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 406)		this->optionShit = ::Array_obj< ::String >::__new(18)->init(0,HX_("NOTES",21,14,b9,1d))->init(1,::ClientPrefs_obj::keyBinds->__get(0)->__GetItem(1))->init(2,::ClientPrefs_obj::keyBinds->__get(1)->__GetItem(1))->init(3,::ClientPrefs_obj::keyBinds->__get(2)->__GetItem(1))->init(4,::ClientPrefs_obj::keyBinds->__get(3)->__GetItem(1))->init(5,HX_("",00,00,00,00))->init(6,HX_("UI",54,4a,00,00))->init(7,::ClientPrefs_obj::keyBinds->__get(4)->__GetItem(1))->init(8,::ClientPrefs_obj::keyBinds->__get(5)->__GetItem(1))->init(9,::ClientPrefs_obj::keyBinds->__get(6)->__GetItem(1))->init(10,::ClientPrefs_obj::keyBinds->__get(7)->__GetItem(1))->init(11,HX_("",00,00,00,00))->init(12,::ClientPrefs_obj::keyBinds->__get(8)->__GetItem(1))->init(13,::ClientPrefs_obj::keyBinds->__get(9)->__GetItem(1))->init(14,::ClientPrefs_obj::keyBinds->__get(10)->__GetItem(1))->init(15,::ClientPrefs_obj::keyBinds->__get(11)->__GetItem(1))->init(16,HX_("",00,00,00,00))->init(17,::ControlsSubstate_obj::defaultKey);
HXLINE( 433)		super::__construct();
HXLINE( 434)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 435)		this->add(this->grpOptions);
HXLINE( 437)		this->controlArray = ::ClientPrefs_obj::lastControls->copy();
HXLINE( 438)		{
HXLINE( 438)			int _g = 0;
HXDLIN( 438)			int _g1 = this->optionShit->length;
HXDLIN( 438)			while((_g < _g1)){
HXLINE( 438)				_g = (_g + 1);
HXDLIN( 438)				int i = (_g - 1);
HXLINE( 439)				bool isCentered = false;
HXLINE( 440)				bool isDefaultKey = (this->optionShit->__get(i) == ::ControlsSubstate_obj::defaultKey);
HXLINE( 441)				if (this->unselectableCheck(i,true)) {
HXLINE( 442)					isCentered = true;
            				}
HXLINE( 445)				bool optionText;
HXDLIN( 445)				if (isCentered) {
HXLINE( 445)					optionText = isDefaultKey;
            				}
            				else {
HXLINE( 445)					optionText = true;
            				}
HXDLIN( 445)				 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((10 * i)) ),this->optionShit->__get(i),optionText,false,null(),null());
HXLINE( 446)				optionText1->isMenuItem = true;
HXLINE( 447)				if (isCentered) {
HXLINE( 448)					optionText1->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 449)					optionText1->forceX = optionText1->x;
HXLINE( 450)					optionText1->yAdd = ( (Float)(-55) );
            				}
            				else {
HXLINE( 452)					optionText1->forceX = ( (Float)(200) );
            				}
HXLINE( 454)				optionText1->yMult = ( (Float)(60) );
HXLINE( 455)				optionText1->targetY = ( (Float)(i) );
HXLINE( 456)				this->grpOptions->add(optionText1).StaticCast<  ::Alphabet >();
HXLINE( 458)				if (!(isCentered)) {
HXLINE( 459)					this->addBindTexts(optionText1);
            				}
            			}
            		}
HXLINE( 462)		this->changeSelection(null());
            	}

Dynamic ControlsSubstate_obj::__CreateEmpty() { return new ControlsSubstate_obj; }

void *ControlsSubstate_obj::_hx_vtable = 0;

Dynamic ControlsSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlsSubstate_obj > _hx_result = new ControlsSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ControlsSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x1b849407) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1b849407;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void ControlsSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_467_update)
HXLINE( 468)		if ((this->rebindingKey < 0)) {
HXLINE( 469)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 470)				this->changeSelection(-1);
            			}
HXLINE( 472)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 473)				this->changeSelection(1);
            			}
HXLINE( 475)			bool _hx_tmp;
HXDLIN( 475)			if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 475)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            			}
            			else {
HXLINE( 475)				_hx_tmp = true;
            			}
HXDLIN( 475)			if (_hx_tmp) {
HXLINE( 476)				this->changeAlt();
            			}
HXLINE( 479)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::Alphabet spr){
            					HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_482_update)
HXLINE( 482)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 480)				::ClientPrefs_obj::reloadControls(this->controlArray);
HXLINE( 481)				this->grpOptions->forEachAlive( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 484)				{
HXLINE( 484)					int _g = 0;
HXDLIN( 484)					int _g1 = this->grpInputs->length;
HXDLIN( 484)					while((_g < _g1)){
HXLINE( 484)						_g = (_g + 1);
HXDLIN( 484)						int i = (_g - 1);
HXLINE( 485)						 ::AttachedText spr = this->grpInputs->__get(i).StaticCast<  ::AttachedText >();
HXLINE( 486)						if (::hx::IsNotNull( spr )) {
HXLINE( 487)							spr->set_alpha(( (Float)(0) ));
            						}
            					}
            				}
HXLINE( 490)				this->close();
HXLINE( 491)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 491)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 494)			bool _hx_tmp1;
HXDLIN( 494)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 494)				_hx_tmp1 = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 494)				_hx_tmp1 = false;
            			}
HXDLIN( 494)			if (_hx_tmp1) {
HXLINE( 495)				if ((this->optionShit->__get(::ControlsSubstate_obj::curSelected) == ::ControlsSubstate_obj::defaultKey)) {
HXLINE( 496)					this->controlArray = ::ClientPrefs_obj::defaultKeys->copy();
HXLINE( 497)					this->reloadKeys();
HXLINE( 498)					this->changeSelection(null());
HXLINE( 499)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 499)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 501)					this->bindingTime = ( (Float)(0) );
HXLINE( 502)					this->rebindingKey = this->getSelectedKey();
HXLINE( 503)					if ((this->rebindingKey > -1)) {
HXLINE( 504)						this->grpInputs->__get(this->rebindingKey).StaticCast<  ::AttachedText >()->set_visible(false);
HXLINE( 505)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 505)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            					else {
HXLINE( 508)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 508)						_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE( 513)			int keyPressed = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 514)			if ((keyPressed > -1)) {
HXLINE( 515)				this->controlArray[this->rebindingKey] = keyPressed;
HXLINE( 516)				int opposite;
HXDLIN( 516)				if ((::hx::Mod(this->rebindingKey,2) == 1)) {
HXLINE( 516)					opposite = -1;
            				}
            				else {
HXLINE( 516)					opposite = 1;
            				}
HXDLIN( 516)				int opposite1 = (this->rebindingKey + opposite);
HXLINE( 517)				::haxe::Log_obj::trace((((HX_("Rebinded key with ID: ",69,95,2c,83) + this->rebindingKey) + HX_(", Opposite is: ",d5,1f,23,21)) + opposite1),::hx::SourceInfo(HX_("source/OptionsState.hx",37,96,2b,d1),517,HX_("ControlsSubstate",47,e1,a2,45),HX_("update",09,86,05,87)));
HXLINE( 518)				if ((this->controlArray->__get(opposite1) == this->controlArray->__get(this->rebindingKey))) {
HXLINE( 519)					this->controlArray[opposite1] = -1;
            				}
HXLINE( 522)				this->reloadKeys();
HXLINE( 523)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 523)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 524)				this->rebindingKey = -1;
            			}
HXLINE( 527)			 ::ControlsSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 527)			_hx_tmp->bindingTime = (_hx_tmp->bindingTime + elapsed);
HXLINE( 528)			if ((this->bindingTime > 5)) {
HXLINE( 529)				this->grpInputs->__get(this->rebindingKey).StaticCast<  ::AttachedText >()->set_visible(true);
HXLINE( 530)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 530)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 531)				this->rebindingKey = -1;
HXLINE( 532)				this->bindingTime = ( (Float)(0) );
            			}
            		}
HXLINE( 536)		if ((this->nextAccept > 0)) {
HXLINE( 537)			 ::ControlsSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 537)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 539)		this->super::update(elapsed);
            	}


void ControlsSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_542_changeSelection)
HXLINE( 543)		while(true){
HXLINE( 544)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ControlsSubstate >();
HXDLIN( 544)			::ControlsSubstate_obj::curSelected = (::ControlsSubstate_obj::curSelected + change);
HXLINE( 545)			if ((::ControlsSubstate_obj::curSelected < 0)) {
HXLINE( 546)				::ControlsSubstate_obj::curSelected = (this->optionShit->length - 1);
            			}
HXLINE( 547)			if ((::ControlsSubstate_obj::curSelected >= this->optionShit->length)) {
HXLINE( 548)				::ControlsSubstate_obj::curSelected = 0;
            			}
HXLINE( 543)			if (!(this->unselectableCheck(::ControlsSubstate_obj::curSelected,null()))) {
HXLINE( 543)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
HXLINE( 551)		int bullShit = 0;
HXLINE( 553)		{
HXLINE( 553)			int _g = 0;
HXDLIN( 553)			int _g1 = this->grpInputs->length;
HXDLIN( 553)			while((_g < _g1)){
HXLINE( 553)				_g = (_g + 1);
HXDLIN( 553)				int i = (_g - 1);
HXLINE( 554)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 557)		{
HXLINE( 557)			int _g2 = 0;
HXDLIN( 557)			::Array< ::Dynamic> _g3 = this->grpOptions->members;
HXDLIN( 557)			while((_g2 < _g3->length)){
HXLINE( 557)				 ::Alphabet item = _g3->__get(_g2).StaticCast<  ::Alphabet >();
HXDLIN( 557)				_g2 = (_g2 + 1);
HXLINE( 558)				item->targetY = ( (Float)((bullShit - ::ControlsSubstate_obj::curSelected)) );
HXLINE( 559)				bullShit = (bullShit + 1);
HXLINE( 561)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 562)					item->set_alpha(((Float)0.6));
HXLINE( 563)					if ((item->targetY == 0)) {
HXLINE( 564)						item->set_alpha(( (Float)(1) ));
HXLINE( 565)						{
HXLINE( 565)							int _g = 0;
HXDLIN( 565)							int _g1 = this->grpInputs->length;
HXDLIN( 565)							while((_g < _g1)){
HXLINE( 565)								_g = (_g + 1);
HXDLIN( 565)								int i = (_g - 1);
HXLINE( 566)								bool _hx_tmp;
HXDLIN( 566)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 566)									_hx_tmp = (this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->isAlt == ::ControlsSubstate_obj::curAlt);
            								}
            								else {
HXLINE( 566)									_hx_tmp = false;
            								}
HXDLIN( 566)								if (_hx_tmp) {
HXLINE( 567)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 573)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 573)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlsSubstate_obj,changeSelection,(void))

void ControlsSubstate_obj::changeAlt(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_576_changeAlt)
HXLINE( 577)		::ControlsSubstate_obj::curAlt = !(::ControlsSubstate_obj::curAlt);
HXLINE( 578)		{
HXLINE( 578)			int _g = 0;
HXDLIN( 578)			int _g1 = this->grpInputs->length;
HXDLIN( 578)			while((_g < _g1)){
HXLINE( 578)				_g = (_g + 1);
HXDLIN( 578)				int i = (_g - 1);
HXLINE( 579)				if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::ControlsSubstate_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 580)					this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 581)					if ((this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->isAlt == ::ControlsSubstate_obj::curAlt)) {
HXLINE( 582)						this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE( 586)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 586)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,changeAlt,(void))

bool ControlsSubstate_obj::unselectableCheck(int num, ::Dynamic __o_checkDefaultKey){
            		 ::Dynamic checkDefaultKey = __o_checkDefaultKey;
            		if (::hx::IsNull(__o_checkDefaultKey)) checkDefaultKey = false;
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_589_unselectableCheck)
HXLINE( 590)		if ((this->optionShit->__get(num) == ::ControlsSubstate_obj::defaultKey)) {
HXLINE( 591)			return ( (bool)(checkDefaultKey) );
            		}
HXLINE( 594)		{
HXLINE( 594)			int _g = 0;
HXDLIN( 594)			int _g1 = ::ClientPrefs_obj::keyBinds->get_length();
HXDLIN( 594)			while((_g < _g1)){
HXLINE( 594)				_g = (_g + 1);
HXDLIN( 594)				int i = (_g - 1);
HXLINE( 595)				if (::hx::IsEq( ::ClientPrefs_obj::keyBinds->__get(i)->__GetItem(1),this->optionShit->__get(num) )) {
HXLINE( 596)					return false;
            				}
            			}
            		}
HXLINE( 599)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubstate_obj,unselectableCheck,return )

int ControlsSubstate_obj::getSelectedKey(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_602_getSelectedKey)
HXLINE( 603)		int altValue;
HXDLIN( 603)		if (::ControlsSubstate_obj::curAlt) {
HXLINE( 603)			altValue = 1;
            		}
            		else {
HXLINE( 603)			altValue = 0;
            		}
HXLINE( 604)		{
HXLINE( 604)			int _g = 0;
HXDLIN( 604)			int _g1 = ::ClientPrefs_obj::keyBinds->get_length();
HXDLIN( 604)			while((_g < _g1)){
HXLINE( 604)				_g = (_g + 1);
HXDLIN( 604)				int i = (_g - 1);
HXLINE( 605)				if (::hx::IsEq( ::ClientPrefs_obj::keyBinds->__get(i)->__GetItem(1),this->optionShit->__get(::ControlsSubstate_obj::curSelected) )) {
HXLINE( 606)					return ((i * 2) + altValue);
            				}
            			}
            		}
HXLINE( 609)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,getSelectedKey,return )

void ControlsSubstate_obj::addBindTexts( ::Alphabet optionText){
            	HX_GC_STACKFRAME(&_hx_pos_0105b02946ff30ba_612_addBindTexts)
HXLINE( 613)		 ::AttachedText text1 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(this->controlArray->__get(this->grpInputs->length)),400,-55,null());
HXLINE( 614)		text1->setPosition((optionText->x + 400),(optionText->y - ( (Float)(55) )));
HXLINE( 615)		text1->sprTracker = optionText;
HXLINE( 616)		this->grpInputs->push(text1);
HXLINE( 617)		this->add(text1);
HXLINE( 619)		 ::AttachedText text2 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(this->controlArray->__get(this->grpInputs->length)),650,-55,null());
HXLINE( 620)		text2->setPosition((optionText->x + 650),(optionText->y - ( (Float)(55) )));
HXLINE( 621)		text2->sprTracker = optionText;
HXLINE( 622)		text2->isAlt = true;
HXLINE( 623)		this->grpInputs->push(text2);
HXLINE( 624)		this->add(text2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlsSubstate_obj,addBindTexts,(void))

void ControlsSubstate_obj::reloadKeys(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_627_reloadKeys)
HXLINE( 628)		while((this->grpInputs->length > 0)){
HXLINE( 629)			 ::AttachedText item = this->grpInputs->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 630)			this->grpInputs->remove(item);
HXLINE( 631)			this->remove(item,null());
            		}
HXLINE( 634)		{
HXLINE( 634)			int _g = 0;
HXDLIN( 634)			int _g1 = this->grpOptions->length;
HXDLIN( 634)			while((_g < _g1)){
HXLINE( 634)				_g = (_g + 1);
HXDLIN( 634)				int i = (_g - 1);
HXLINE( 635)				if (!(this->unselectableCheck(i,true))) {
HXLINE( 636)					this->addBindTexts(Dynamic( this->grpOptions->members->__get(i)).StaticCast<  ::Alphabet >());
            				}
            			}
            		}
HXLINE( 641)		int bullShit = 0;
HXLINE( 642)		{
HXLINE( 642)			int _g2 = 0;
HXDLIN( 642)			int _g3 = this->grpInputs->length;
HXDLIN( 642)			while((_g2 < _g3)){
HXLINE( 642)				_g2 = (_g2 + 1);
HXDLIN( 642)				int i = (_g2 - 1);
HXLINE( 643)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 646)		{
HXLINE( 646)			int _g4 = 0;
HXDLIN( 646)			::Array< ::Dynamic> _g5 = this->grpOptions->members;
HXDLIN( 646)			while((_g4 < _g5->length)){
HXLINE( 646)				 ::Alphabet item = _g5->__get(_g4).StaticCast<  ::Alphabet >();
HXDLIN( 646)				_g4 = (_g4 + 1);
HXLINE( 647)				item->targetY = ( (Float)((bullShit - ::ControlsSubstate_obj::curSelected)) );
HXLINE( 648)				bullShit = (bullShit + 1);
HXLINE( 650)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 651)					item->set_alpha(((Float)0.6));
HXLINE( 652)					if ((item->targetY == 0)) {
HXLINE( 653)						item->set_alpha(( (Float)(1) ));
HXLINE( 654)						{
HXLINE( 654)							int _g = 0;
HXDLIN( 654)							int _g1 = this->grpInputs->length;
HXDLIN( 654)							while((_g < _g1)){
HXLINE( 654)								_g = (_g + 1);
HXDLIN( 654)								int i = (_g - 1);
HXLINE( 655)								bool _hx_tmp;
HXDLIN( 655)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 655)									_hx_tmp = (this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->isAlt == ::ControlsSubstate_obj::curAlt);
            								}
            								else {
HXLINE( 655)									_hx_tmp = false;
            								}
HXDLIN( 655)								if (_hx_tmp) {
HXLINE( 656)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,reloadKeys,(void))

int ControlsSubstate_obj::curSelected;

bool ControlsSubstate_obj::curAlt;

::String ControlsSubstate_obj::defaultKey;


::hx::ObjectPtr< ControlsSubstate_obj > ControlsSubstate_obj::__new() {
	::hx::ObjectPtr< ControlsSubstate_obj > __this = new ControlsSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ControlsSubstate_obj > ControlsSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ControlsSubstate_obj *__this = (ControlsSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlsSubstate_obj), true, "ControlsSubstate"));
	*(void **)__this = ControlsSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ControlsSubstate_obj::ControlsSubstate_obj()
{
}

void ControlsSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlsSubstate);
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(grpInputs,"grpInputs");
	HX_MARK_MEMBER_NAME(controlArray,"controlArray");
	HX_MARK_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(leaving,"leaving");
	HX_MARK_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlsSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(grpInputs,"grpInputs");
	HX_VISIT_MEMBER_NAME(controlArray,"controlArray");
	HX_VISIT_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(leaving,"leaving");
	HX_VISIT_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ControlsSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { return ::hx::Val( leaving ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { return ::hx::Val( grpInputs ); }
		if (HX_FIELD_EQ(inName,"changeAlt") ) { return ::hx::Val( changeAlt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"reloadKeys") ) { return ::hx::Val( reloadKeys_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { return ::hx::Val( bindingTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"controlArray") ) { return ::hx::Val( controlArray ); }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { return ::hx::Val( rebindingKey ); }
		if (HX_FIELD_EQ(inName,"addBindTexts") ) { return ::hx::Val( addBindTexts_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getSelectedKey") ) { return ::hx::Val( getSelectedKey_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ControlsSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { outValue = ( curAlt ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { outValue = ( defaultKey ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val ControlsSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { leaving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { grpInputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { bindingTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"controlArray") ) { controlArray=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { rebindingKey=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ControlsSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { curAlt=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { defaultKey=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ControlsSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("grpInputs",ee,3e,7e,59));
	outFields->push(HX_("controlArray",fc,20,68,ea));
	outFields->push(HX_("rebindingKey",cd,70,6f,a8));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("leaving",f4,09,47,15));
	outFields->push(HX_("bindingTime",f2,09,cb,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ControlsSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ControlsSubstate_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(ControlsSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubstate_obj,grpInputs),HX_("grpInputs",ee,3e,7e,59)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ControlsSubstate_obj,controlArray),HX_("controlArray",fc,20,68,ea)},
	{::hx::fsInt,(int)offsetof(ControlsSubstate_obj,rebindingKey),HX_("rebindingKey",cd,70,6f,a8)},
	{::hx::fsInt,(int)offsetof(ControlsSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsBool,(int)offsetof(ControlsSubstate_obj,leaving),HX_("leaving",f4,09,47,15)},
	{::hx::fsFloat,(int)offsetof(ControlsSubstate_obj,bindingTime),HX_("bindingTime",f2,09,cb,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ControlsSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ControlsSubstate_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &ControlsSubstate_obj::curAlt,HX_("curAlt",89,9b,c2,3e)},
	{::hx::fsString,(void *) &ControlsSubstate_obj::defaultKey,HX_("defaultKey",5e,97,fe,25)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ControlsSubstate_obj_sMemberFields[] = {
	HX_("optionShit",d5,2d,ee,91),
	HX_("grpOptions",f9,45,d8,00),
	HX_("grpInputs",ee,3e,7e,59),
	HX_("controlArray",fc,20,68,ea),
	HX_("rebindingKey",cd,70,6f,a8),
	HX_("nextAccept",5b,44,38,c0),
	HX_("leaving",f4,09,47,15),
	HX_("bindingTime",f2,09,cb,be),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeAlt",99,a5,f7,1d),
	HX_("unselectableCheck",19,58,ce,19),
	HX_("getSelectedKey",0e,15,a7,b7),
	HX_("addBindTexts",c8,f9,1e,b0),
	HX_("reloadKeys",ed,81,0e,92),
	::String(null()) };

static void ControlsSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::curAlt,"curAlt");
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::defaultKey,"defaultKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlsSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::curAlt,"curAlt");
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::defaultKey,"defaultKey");
};

#endif

::hx::Class ControlsSubstate_obj::__mClass;

static ::String ControlsSubstate_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("curAlt",89,9b,c2,3e),
	HX_("defaultKey",5e,97,fe,25),
	::String(null())
};

void ControlsSubstate_obj::__register()
{
	ControlsSubstate_obj _hx_dummy;
	ControlsSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ControlsSubstate",47,e1,a2,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ControlsSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &ControlsSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = ControlsSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ControlsSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlsSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlsSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlsSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlsSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlsSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ControlsSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_401_boot)
HXDLIN( 401)		curSelected = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_402_boot)
HXDLIN( 402)		curAlt = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_404_boot)
HXDLIN( 404)		defaultKey = HX_("Reset to Default Keys",47,5b,97,3d);
            	}
}

