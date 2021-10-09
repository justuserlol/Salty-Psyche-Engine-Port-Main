#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_NotesSubstate
#include <NotesSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30acc222447c2979_133_new,"NotesSubstate","new",0xd3cddfc4,"NotesSubstate.new","OptionsState.hx",133,0x342db2ab)
static const Float _hx_array_data_06f1edd2_2[] = {
	(Float)240,(Float)90,
};
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_192_update,"NotesSubstate","update",0xc8182d25,"NotesSubstate.update","OptionsState.hx",192,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_297_update,"NotesSubstate","update",0xc8182d25,"NotesSubstate.update","OptionsState.hx",297,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_300_update,"NotesSubstate","update",0xc8182d25,"NotesSubstate.update","OptionsState.hx",300,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_314_changeSelection,"NotesSubstate","changeSelection",0xf1bb2e20,"NotesSubstate.changeSelection","OptionsState.hx",314,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_344_changeType,"NotesSubstate","changeType",0x637c8d66,"NotesSubstate.changeType","OptionsState.hx",344,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_363_resetValue,"NotesSubstate","resetValue",0x567f1c3e,"NotesSubstate.resetValue","OptionsState.hx",363,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_373_updateValue,"NotesSubstate","updateValue",0x803efc0c,"NotesSubstate.updateValue","OptionsState.hx",373,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_135_boot,"NotesSubstate","boot",0x786eec4e,"NotesSubstate.boot","OptionsState.hx",135,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_136_boot,"NotesSubstate","boot",0x786eec4e,"NotesSubstate.boot","OptionsState.hx",136,0x342db2ab)

void NotesSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_30acc222447c2979_133_new)
HXLINE( 191)		this->hsvTextOffsets = ::Array_obj< Float >::fromData( _hx_array_data_06f1edd2_2,2);
HXLINE( 190)		this->changingNote = false;
HXLINE( 145)		this->posX = 250;
HXLINE( 143)		this->nextAccept = 5;
HXLINE( 141)		this->holdTime = ((Float)0);
HXLINE( 140)		this->curValue = ((Float)0);
HXLINE( 139)		this->shaderArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 147)		super::__construct();
HXLINE( 149)		this->grpNotes =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 150)		this->add(this->grpNotes);
HXLINE( 151)		this->grpNumbers =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 152)		this->add(this->grpNumbers);
HXLINE( 154)		{
HXLINE( 154)			int _g = 0;
HXDLIN( 154)			int _g1 = ::ClientPrefs_obj::arrowHSV->length;
HXDLIN( 154)			while((_g < _g1)){
HXLINE( 154)				_g = (_g + 1);
HXDLIN( 154)				int i = (_g - 1);
HXLINE( 155)				Float yPos = ( (Float)(((165 * i) + 35)) );
HXLINE( 156)				{
HXLINE( 156)					{
HXLINE( 157)						 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),yPos,::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)),null(),null(),null(),null());
HXLINE( 158)						optionText->set_x((( (Float)((this->posX + 100)) ) - (( (Float)((optionText->lettersArray->length * 90)) ) / ( (Float)(2) ))));
HXLINE( 159)						this->grpNumbers->add(optionText).StaticCast<  ::Alphabet >();
            					}
HXLINE( 156)					{
HXLINE( 157)						 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),yPos,::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)),null(),null(),null(),null());
HXLINE( 158)						optionText1->set_x((( (Float)(((this->posX + 225) + 100)) ) - (( (Float)((optionText1->lettersArray->length * 90)) ) / ( (Float)(2) ))));
HXLINE( 159)						this->grpNumbers->add(optionText1).StaticCast<  ::Alphabet >();
            					}
HXLINE( 156)					{
HXLINE( 157)						 ::Alphabet optionText2 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),yPos,::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)),null(),null(),null(),null());
HXLINE( 158)						optionText2->set_x((( (Float)(((this->posX + 450) + 100)) ) - (( (Float)((optionText2->lettersArray->length * 90)) ) / ( (Float)(2) ))));
HXLINE( 159)						this->grpNumbers->add(optionText2).StaticCast<  ::Alphabet >();
            					}
            				}
HXLINE( 162)				 ::flixel::FlxSprite note =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->posX - 70),yPos,null());
HXLINE( 163)				::String library = null();
HXDLIN( 163)				 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("NOTE_assets",70,3c,09,f7));
HXDLIN( 163)				bool xmlExists = false;
HXDLIN( 163)				if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 163)					xmlExists = true;
            				}
HXDLIN( 163)				 ::Dynamic _hx_tmp;
HXDLIN( 163)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 163)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 163)					 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("NOTE_assets",70,3c,09,f7));
HXDLIN( 163)					if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 163)						_hx_tmp = imageToReturn;
            					}
            					else {
HXLINE( 163)						_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            					}
            				}
HXDLIN( 163)				::String _hx_tmp1;
HXDLIN( 163)				if (xmlExists) {
HXLINE( 163)					_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))));
            				}
            				else {
HXLINE( 163)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            				}
HXDLIN( 163)				note->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 164)				switch((int)(i)){
            					case (int)0: {
HXLINE( 166)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("purple0",74,7e,2d,e7),null(),null(),null(),null());
            					}
            					break;
            					case (int)1: {
HXLINE( 168)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("blue0",56,04,01,b5),null(),null(),null(),null());
            					}
            					break;
            					case (int)2: {
HXLINE( 170)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("green0",0d,dc,7f,15),null(),null(),null(),null());
            					}
            					break;
            					case (int)3: {
HXLINE( 172)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("red0",bf,4d,a7,4b),null(),null(),null(),null());
            					}
            					break;
            				}
HXLINE( 174)				note->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 175)				note->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 176)				this->grpNotes->add(note).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 178)				 ::ColorSwap newShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 179)				note->shader = newShader->shader;
HXLINE( 180)				newShader->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE( 181)				newShader->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE( 182)				newShader->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
HXLINE( 183)				this->shaderArray->push(newShader);
            			}
            		}
HXLINE( 185)		this->hsvText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("Hue    Saturation  Brightness",7b,47,68,9c),false,false,0,((Float)0.65));
HXLINE( 186)		this->add(this->hsvText);
HXLINE( 187)		this->changeSelection(null());
            	}

Dynamic NotesSubstate_obj::__CreateEmpty() { return new NotesSubstate_obj; }

void *NotesSubstate_obj::_hx_vtable = 0;

Dynamic NotesSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotesSubstate_obj > _hx_result = new NotesSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotesSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x4fa93366) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x4fa93366;
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

void NotesSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_192_update)
HXLINE( 193)		if (this->changingNote) {
HXLINE( 194)			if ((this->holdTime < ((Float)0.5))) {
HXLINE( 195)				if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 196)					this->updateValue(-1);
HXLINE( 197)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 197)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 198)					if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 199)						this->updateValue(1);
HXLINE( 200)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 200)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            					else {
HXLINE( 201)						if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 202)							this->resetValue(::NotesSubstate_obj::curSelected,::NotesSubstate_obj::typeSelected);
HXLINE( 203)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 203)							_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            					}
            				}
HXLINE( 205)				bool _hx_tmp;
HXDLIN( 205)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 205)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 205)					_hx_tmp = true;
            				}
HXDLIN( 205)				if (_hx_tmp) {
HXLINE( 206)					this->holdTime = ( (Float)(0) );
            				}
            				else {
HXLINE( 207)					bool _hx_tmp;
HXDLIN( 207)					if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 207)						_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            					}
            					else {
HXLINE( 207)						_hx_tmp = true;
            					}
HXDLIN( 207)					if (_hx_tmp) {
HXLINE( 208)						 ::NotesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 208)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            			}
            			else {
HXLINE( 211)				Float add = ( (Float)(90) );
HXLINE( 212)				switch((int)(::NotesSubstate_obj::typeSelected)){
            					case (int)1: case (int)2: {
HXLINE( 213)						add = ( (Float)(50) );
            					}
            					break;
            				}
HXLINE( 215)				if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 216)					this->updateValue((elapsed * -(add)));
            				}
            				else {
HXLINE( 217)					if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 218)						this->updateValue((elapsed * add));
            					}
            				}
HXLINE( 220)				bool _hx_tmp;
HXDLIN( 220)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 220)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 220)					_hx_tmp = true;
            				}
HXDLIN( 220)				if (_hx_tmp) {
HXLINE( 221)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 221)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 222)					this->holdTime = ( (Float)(0) );
            				}
            			}
            		}
            		else {
HXLINE( 226)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 227)				this->changeSelection(-1);
HXLINE( 228)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 228)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 230)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 231)				this->changeSelection(1);
HXLINE( 232)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 232)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 234)			if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 235)				this->changeType(-1);
HXLINE( 236)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 236)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 238)			if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 239)				this->changeType(1);
HXLINE( 240)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 240)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 242)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 243)				{
HXLINE( 244)					this->resetValue(::NotesSubstate_obj::curSelected,0);
HXDLIN( 244)					this->resetValue(::NotesSubstate_obj::curSelected,1);
HXDLIN( 244)					this->resetValue(::NotesSubstate_obj::curSelected,2);
            				}
HXLINE( 246)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 246)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 248)			bool _hx_tmp;
HXDLIN( 248)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 248)				_hx_tmp = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 248)				_hx_tmp = false;
            			}
HXDLIN( 248)			if (_hx_tmp) {
HXLINE( 249)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 249)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 250)				this->changingNote = true;
HXLINE( 251)				this->holdTime = ( (Float)(0) );
HXLINE( 252)				{
HXLINE( 252)					int _g = 0;
HXDLIN( 252)					int _g1 = this->grpNumbers->length;
HXDLIN( 252)					while((_g < _g1)){
HXLINE( 252)						_g = (_g + 1);
HXDLIN( 252)						int i = (_g - 1);
HXLINE( 253)						 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 254)						item->set_alpha(( (Float)(0) ));
HXLINE( 255)						if ((((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected) == i)) {
HXLINE( 256)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 259)				{
HXLINE( 259)					int _g2 = 0;
HXDLIN( 259)					int _g3 = this->grpNotes->length;
HXDLIN( 259)					while((_g2 < _g3)){
HXLINE( 259)						_g2 = (_g2 + 1);
HXDLIN( 259)						int i = (_g2 - 1);
HXLINE( 260)						 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 261)						item->set_alpha(( (Float)(0) ));
HXLINE( 262)						if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 263)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 266)				this->super::update(elapsed);
HXLINE( 267)				return;
            			}
            		}
HXLINE( 271)		Float lerpVal = ::CoolUtil_obj::boundTo((elapsed * ((Float)9.6)),( (Float)(0) ),( (Float)(1) ));
HXLINE( 272)		{
HXLINE( 272)			int _g = 0;
HXDLIN( 272)			int _g1 = this->grpNotes->length;
HXDLIN( 272)			while((_g < _g1)){
HXLINE( 272)				_g = (_g + 1);
HXDLIN( 272)				int i = (_g - 1);
HXLINE( 273)				 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 274)				Float intendedPos = ( (Float)((this->posX - 70)) );
HXLINE( 275)				if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 276)					Float a = item->x;
HXDLIN( 276)					item->set_x((a + (lerpVal * ((intendedPos + 100) - a))));
            				}
            				else {
HXLINE( 278)					Float a = item->x;
HXDLIN( 278)					item->set_x((a + (lerpVal * (intendedPos - a))));
            				}
HXLINE( 280)				{
HXLINE( 280)					{
HXLINE( 281)						 ::Alphabet item2 = Dynamic( this->grpNumbers->members->__get((i * 3))).StaticCast<  ::Alphabet >();
HXLINE( 282)						item2->set_x((((item->x + 265) + (225 * ::hx::Mod(0,3))) - (( (Float)((30 * item2->lettersArray->length)) ) / ( (Float)(2) ))));
HXLINE( 283)						if ((::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0) < 0)) {
HXLINE( 284)							item2->set_x((item2->x - ( (Float)(20) )));
            						}
            					}
HXLINE( 280)					{
HXLINE( 281)						 ::Alphabet item21 = Dynamic( this->grpNumbers->members->__get(((i * 3) + 1))).StaticCast<  ::Alphabet >();
HXLINE( 282)						item21->set_x((((item->x + 265) + (225 * ::hx::Mod(1,3))) - (( (Float)((30 * item21->lettersArray->length)) ) / ( (Float)(2) ))));
HXLINE( 283)						if ((::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1) < 0)) {
HXLINE( 284)							item21->set_x((item21->x - ( (Float)(20) )));
            						}
            					}
HXLINE( 280)					{
HXLINE( 281)						 ::Alphabet item22 = Dynamic( this->grpNumbers->members->__get(((i * 3) + 2))).StaticCast<  ::Alphabet >();
HXLINE( 282)						item22->set_x((((item->x + 265) + (225 * ::hx::Mod(2,3))) - (( (Float)((30 * item22->lettersArray->length)) ) / ( (Float)(2) ))));
HXLINE( 283)						if ((::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2) < 0)) {
HXLINE( 284)							item22->set_x((item22->x - ( (Float)(20) )));
            						}
            					}
            				}
HXLINE( 288)				if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 289)					this->hsvText->setPosition((item->x + this->hsvTextOffsets->__get(0)),(item->y - this->hsvTextOffsets->__get(1)));
            				}
            			}
            		}
HXLINE( 293)		bool _hx_tmp;
HXDLIN( 293)		if (!(::PlayerSettings_obj::player1->controls->_back->check())) {
HXLINE( 293)			if (this->changingNote) {
HXLINE( 293)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_accept->check();
            			}
            			else {
HXLINE( 293)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 293)			_hx_tmp = true;
            		}
HXDLIN( 293)		if (_hx_tmp) {
HXLINE( 294)			this->changeSelection(null());
HXLINE( 295)			if (!(this->changingNote)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::Alphabet spr){
            					HX_STACKFRAME(&_hx_pos_30acc222447c2979_297_update)
HXLINE( 297)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            				void _hx_run( ::flixel::FlxSprite spr){
            					HX_STACKFRAME(&_hx_pos_30acc222447c2979_300_update)
HXLINE( 300)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 296)				this->grpNumbers->forEachAlive( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 299)				this->grpNotes->forEachAlive( ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 302)				this->close();
            			}
HXLINE( 304)			this->changingNote = false;
HXLINE( 305)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 305)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 308)		if ((this->nextAccept > 0)) {
HXLINE( 309)			 ::NotesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 309)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 311)		this->super::update(elapsed);
            	}


void NotesSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_314_changeSelection)
HXLINE( 315)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::NotesSubstate >();
HXDLIN( 315)		::NotesSubstate_obj::curSelected = (::NotesSubstate_obj::curSelected + change);
HXLINE( 316)		if ((::NotesSubstate_obj::curSelected < 0)) {
HXLINE( 317)			::NotesSubstate_obj::curSelected = (::ClientPrefs_obj::arrowHSV->length - 1);
            		}
HXLINE( 318)		if ((::NotesSubstate_obj::curSelected >= ::ClientPrefs_obj::arrowHSV->length)) {
HXLINE( 319)			::NotesSubstate_obj::curSelected = 0;
            		}
HXLINE( 321)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::NotesSubstate_obj::curSelected).StaticCast< ::Array< int > >()->__get(::NotesSubstate_obj::typeSelected)) );
HXLINE( 322)		this->updateValue(null());
HXLINE( 324)		{
HXLINE( 324)			int _g = 0;
HXDLIN( 324)			int _g1 = this->grpNumbers->length;
HXDLIN( 324)			while((_g < _g1)){
HXLINE( 324)				_g = (_g + 1);
HXDLIN( 324)				int i = (_g - 1);
HXLINE( 325)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 326)				item->set_alpha(((Float)0.6));
HXLINE( 327)				if ((((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected) == i)) {
HXLINE( 328)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 331)		{
HXLINE( 331)			int _g2 = 0;
HXDLIN( 331)			int _g3 = this->grpNotes->length;
HXDLIN( 331)			while((_g2 < _g3)){
HXLINE( 331)				_g2 = (_g2 + 1);
HXDLIN( 331)				int i = (_g2 - 1);
HXLINE( 332)				 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 333)				item->set_alpha(((Float)0.6));
HXLINE( 334)				item->scale->set(1,1);
HXLINE( 335)				if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 336)					item->set_alpha(( (Float)(1) ));
HXLINE( 337)					item->scale->set(((Float)1.2),((Float)1.2));
HXLINE( 338)					this->hsvText->setPosition((item->x + this->hsvTextOffsets->__get(0)),(item->y - this->hsvTextOffsets->__get(1)));
            				}
            			}
            		}
HXLINE( 341)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 341)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubstate_obj,changeSelection,(void))

void NotesSubstate_obj::changeType(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_344_changeType)
HXLINE( 345)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::NotesSubstate >();
HXDLIN( 345)		::NotesSubstate_obj::typeSelected = (::NotesSubstate_obj::typeSelected + change);
HXLINE( 346)		if ((::NotesSubstate_obj::typeSelected < 0)) {
HXLINE( 347)			::NotesSubstate_obj::typeSelected = 2;
            		}
HXLINE( 348)		if ((::NotesSubstate_obj::typeSelected > 2)) {
HXLINE( 349)			::NotesSubstate_obj::typeSelected = 0;
            		}
HXLINE( 351)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::NotesSubstate_obj::curSelected).StaticCast< ::Array< int > >()->__get(::NotesSubstate_obj::typeSelected)) );
HXLINE( 352)		this->updateValue(null());
HXLINE( 354)		{
HXLINE( 354)			int _g = 0;
HXDLIN( 354)			int _g1 = this->grpNumbers->length;
HXDLIN( 354)			while((_g < _g1)){
HXLINE( 354)				_g = (_g + 1);
HXDLIN( 354)				int i = (_g - 1);
HXLINE( 355)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 356)				item->set_alpha(((Float)0.6));
HXLINE( 357)				if ((((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected) == i)) {
HXLINE( 358)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubstate_obj,changeType,(void))

void NotesSubstate_obj::resetValue(int selected,int type){
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_363_resetValue)
HXLINE( 364)		this->curValue = ( (Float)(0) );
HXLINE( 365)		::ClientPrefs_obj::arrowHSV->__get(selected).StaticCast< ::Array< int > >()[type] = 0;
HXLINE( 366)		switch((int)(type)){
            			case (int)0: {
HXLINE( 367)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_hue(( (Float)(0) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 368)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_saturation(( (Float)(0) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 369)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_brightness(( (Float)(0) ));
            			}
            			break;
            		}
HXLINE( 371)		Dynamic( this->grpNumbers->members->__get(((selected * 3) + type))).StaticCast<  ::Alphabet >()->changeText(HX_("0",30,00,00,00),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(NotesSubstate_obj,resetValue,(void))

void NotesSubstate_obj::updateValue(::hx::Null< Float >  __o_change){
            		Float change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_373_updateValue)
HXLINE( 374)		 ::NotesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 374)		_hx_tmp->curValue = (_hx_tmp->curValue + change);
HXLINE( 375)		int roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 376)		Float max = ( (Float)(180) );
HXLINE( 377)		switch((int)(::NotesSubstate_obj::typeSelected)){
            			case (int)1: case (int)2: {
HXLINE( 378)				max = ( (Float)(100) );
            			}
            			break;
            		}
HXLINE( 381)		if ((roundedValue < -(max))) {
HXLINE( 382)			this->curValue = -(max);
            		}
            		else {
HXLINE( 383)			if ((roundedValue > max)) {
HXLINE( 384)				this->curValue = max;
            			}
            		}
HXLINE( 386)		roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 387)		::ClientPrefs_obj::arrowHSV->__get(::NotesSubstate_obj::curSelected).StaticCast< ::Array< int > >()[::NotesSubstate_obj::typeSelected] = roundedValue;
HXLINE( 389)		switch((int)(::NotesSubstate_obj::typeSelected)){
            			case (int)0: {
HXLINE( 390)				this->shaderArray->__get(::NotesSubstate_obj::curSelected).StaticCast<  ::ColorSwap >()->set_hue((( (Float)(roundedValue) ) / ( (Float)(360) )));
            			}
            			break;
            			case (int)1: {
HXLINE( 391)				this->shaderArray->__get(::NotesSubstate_obj::curSelected).StaticCast<  ::ColorSwap >()->set_saturation((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            			case (int)2: {
HXLINE( 392)				this->shaderArray->__get(::NotesSubstate_obj::curSelected).StaticCast<  ::ColorSwap >()->set_brightness((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            		}
HXLINE( 394)		 ::Alphabet _hx_tmp1 = Dynamic( this->grpNumbers->members->__get(((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected))).StaticCast<  ::Alphabet >();
HXDLIN( 394)		_hx_tmp1->changeText(::Std_obj::string(roundedValue),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubstate_obj,updateValue,(void))

int NotesSubstate_obj::curSelected;

int NotesSubstate_obj::typeSelected;


::hx::ObjectPtr< NotesSubstate_obj > NotesSubstate_obj::__new() {
	::hx::ObjectPtr< NotesSubstate_obj > __this = new NotesSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NotesSubstate_obj > NotesSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NotesSubstate_obj *__this = (NotesSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotesSubstate_obj), true, "NotesSubstate"));
	*(void **)__this = NotesSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NotesSubstate_obj::NotesSubstate_obj()
{
}

void NotesSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotesSubstate);
	HX_MARK_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_MARK_MEMBER_NAME(grpNotes,"grpNotes");
	HX_MARK_MEMBER_NAME(shaderArray,"shaderArray");
	HX_MARK_MEMBER_NAME(curValue,"curValue");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(hsvText,"hsvText");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(posX,"posX");
	HX_MARK_MEMBER_NAME(changingNote,"changingNote");
	HX_MARK_MEMBER_NAME(hsvTextOffsets,"hsvTextOffsets");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NotesSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_VISIT_MEMBER_NAME(grpNotes,"grpNotes");
	HX_VISIT_MEMBER_NAME(shaderArray,"shaderArray");
	HX_VISIT_MEMBER_NAME(curValue,"curValue");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(hsvText,"hsvText");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(posX,"posX");
	HX_VISIT_MEMBER_NAME(changingNote,"changingNote");
	HX_VISIT_MEMBER_NAME(hsvTextOffsets,"hsvTextOffsets");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NotesSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { return ::hx::Val( posX ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hsvText") ) { return ::hx::Val( hsvText ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { return ::hx::Val( grpNotes ); }
		if (HX_FIELD_EQ(inName,"curValue") ) { return ::hx::Val( curValue ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { return ::hx::Val( grpNumbers ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"changeType") ) { return ::hx::Val( changeType_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetValue") ) { return ::hx::Val( resetValue_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { return ::hx::Val( shaderArray ); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return ::hx::Val( updateValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { return ::hx::Val( changingNote ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hsvTextOffsets") ) { return ::hx::Val( hsvTextOffsets ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NotesSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { outValue = ( typeSelected ); return true; }
	}
	return false;
}

::hx::Val NotesSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { posX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hsvText") ) { hsvText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { grpNotes=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curValue") ) { curValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { grpNumbers=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { shaderArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { changingNote=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hsvTextOffsets") ) { hsvTextOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NotesSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { typeSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void NotesSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpNumbers",25,7c,95,ca));
	outFields->push(HX_("grpNotes",1c,82,cb,82));
	outFields->push(HX_("shaderArray",34,18,bc,fc));
	outFields->push(HX_("curValue",d1,79,66,79));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("hsvText",58,29,de,08));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("posX",44,84,5c,4a));
	outFields->push(HX_("changingNote",3f,d5,59,d6));
	outFields->push(HX_("hsvTextOffsets",08,63,36,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NotesSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubstate_obj,grpNumbers),HX_("grpNumbers",25,7c,95,ca)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubstate_obj,grpNotes),HX_("grpNotes",1c,82,cb,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NotesSubstate_obj,shaderArray),HX_("shaderArray",34,18,bc,fc)},
	{::hx::fsFloat,(int)offsetof(NotesSubstate_obj,curValue),HX_("curValue",d1,79,66,79)},
	{::hx::fsFloat,(int)offsetof(NotesSubstate_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(NotesSubstate_obj,hsvText),HX_("hsvText",58,29,de,08)},
	{::hx::fsInt,(int)offsetof(NotesSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsInt,(int)offsetof(NotesSubstate_obj,posX),HX_("posX",44,84,5c,4a)},
	{::hx::fsBool,(int)offsetof(NotesSubstate_obj,changingNote),HX_("changingNote",3f,d5,59,d6)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(NotesSubstate_obj,hsvTextOffsets),HX_("hsvTextOffsets",08,63,36,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NotesSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &NotesSubstate_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(void *) &NotesSubstate_obj::typeSelected,HX_("typeSelected",35,23,d0,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NotesSubstate_obj_sMemberFields[] = {
	HX_("grpNumbers",25,7c,95,ca),
	HX_("grpNotes",1c,82,cb,82),
	HX_("shaderArray",34,18,bc,fc),
	HX_("curValue",d1,79,66,79),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("hsvText",58,29,de,08),
	HX_("nextAccept",5b,44,38,c0),
	HX_("posX",44,84,5c,4a),
	HX_("changingNote",3f,d5,59,d6),
	HX_("hsvTextOffsets",08,63,36,51),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeType",4a,28,52,27),
	HX_("resetValue",22,b7,54,1a),
	HX_("updateValue",a8,e8,50,17),
	::String(null()) };

static void NotesSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotesSubstate_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(NotesSubstate_obj::typeSelected,"typeSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NotesSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotesSubstate_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(NotesSubstate_obj::typeSelected,"typeSelected");
};

#endif

::hx::Class NotesSubstate_obj::__mClass;

static ::String NotesSubstate_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("typeSelected",35,23,d0,98),
	::String(null())
};

void NotesSubstate_obj::__register()
{
	NotesSubstate_obj _hx_dummy;
	NotesSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("NotesSubstate",d2,ed,f1,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NotesSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &NotesSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = NotesSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NotesSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotesSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotesSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NotesSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotesSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotesSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NotesSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_135_boot)
HXDLIN( 135)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_136_boot)
HXDLIN( 136)		typeSelected = 0;
            	}
}

