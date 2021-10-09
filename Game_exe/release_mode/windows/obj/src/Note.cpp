#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ChartingState
#include <ChartingState.h>
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
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_12_new,"Note","new",0x1cc75604,"Note.new","Note.hx",12,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_42_set_noteType,"Note","set_noteType",0x43779525,"Note.set_noteType","Note.hx",42,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_189_reloadNote,"Note","reloadNote",0x1599eec7,"Note.reloadNote","Note.hx",189,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_226_loadNoteAnims,"Note","loadNoteAnims",0x493f5f8e,"Note.loadNoteAnims","Note.hx",226,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_250_loadPixelNoteAnims,"Note","loadPixelNoteAnims",0xefd7042c,"Note.loadPixelNoteAnims","Note.hx",250,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_269_update,"Note","update",0xca3a1ee5,"Note.update","Note.hx",269,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_36_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",36,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_37_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",37,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_38_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",38,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_39_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",39,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_40_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",40,0x1a8855ec)

void Note_obj::__construct(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor){
            		 ::Dynamic sustainNote = __o_sustainNote;
            		if (::hx::IsNull(__o_sustainNote)) sustainNote = false;
            		 ::Dynamic inEditor = __o_inEditor;
            		if (::hx::IsNull(__o_inEditor)) inEditor = false;
            	HX_GC_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_12_new)
HXLINE(  61)		this->isPixel = false;
HXLINE(  34)		this->earlyHitMult = ((Float)0.5);
HXLINE(  33)		this->inEditor = false;
HXLINE(  30)		this->eventVal2 = HX_("",00,00,00,00);
HXLINE(  29)		this->eventVal1 = HX_("",00,00,00,00);
HXLINE(  28)		this->eventName = HX_("",00,00,00,00);
HXLINE(  26)		this->noteType = 0;
HXLINE(  25)		this->isSustainNote = false;
HXLINE(  24)		this->sustainLength = ((Float)0);
HXLINE(  21)		this->ignoreNote = false;
HXLINE(  20)		this->wasGoodHit = false;
HXLINE(  19)		this->tooLate = false;
HXLINE(  18)		this->canBeHit = false;
HXLINE(  17)		this->noteData = 0;
HXLINE(  16)		this->mustPress = false;
HXLINE(  14)		this->strumTime = ((Float)0);
HXLINE(  64)		super::__construct(null(),null(),null());
HXLINE(  66)		if (::hx::IsNull( prevNote )) {
HXLINE(  67)			prevNote = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  69)		this->prevNote = prevNote;
HXLINE(  70)		this->isSustainNote = ( (bool)(sustainNote) );
HXLINE(  71)		this->inEditor = ( (bool)(inEditor) );
HXLINE(  73)		int _hx_tmp;
HXDLIN(  73)		if (::ClientPrefs_obj::middleScroll) {
HXLINE(  73)			_hx_tmp = ::PlayState_obj::STRUM_X_MIDDLESCROLL;
            		}
            		else {
HXLINE(  73)			_hx_tmp = ::PlayState_obj::STRUM_X;
            		}
HXDLIN(  73)		this->set_x((this->x + (_hx_tmp + 50)));
HXLINE(  75)		this->set_y((this->y - ( (Float)(2000) )));
HXLINE(  76)		this->strumTime = strumTime;
HXLINE(  77)		if (!(( (bool)(inEditor) ))) {
HXLINE(  77)			 ::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  77)			_hx_tmp->strumTime = (_hx_tmp->strumTime + ::ClientPrefs_obj::noteOffset);
            		}
HXLINE(  79)		this->noteData = noteData;
HXLINE(  81)		::String daStage = ::PlayState_obj::curStage;
HXLINE(  83)		::String _hx_switch_0 = daStage;
            		if (  (_hx_switch_0==HX_("school",74,b8,c8,40)) ||  (_hx_switch_0==HX_("schoolEvil",28,a1,f5,f7)) ){
HXLINE(  86)			if (this->isSustainNote) {
HXLINE(  88)				::String library = null();
HXDLIN(  88)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/NOTE_assetsENDS",4f,a6,2c,b1));
HXDLIN(  88)				 ::Dynamic _hx_tmp;
HXDLIN(  88)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  88)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  88)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/NOTE_assetsENDS",4f,a6,2c,b1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN(  88)				this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
HXLINE(  89)				this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE(  90)				this->set_height((this->get_height() / ( (Float)(2) )));
HXLINE(  91)				::String library1 = null();
HXDLIN(  91)				 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/NOTE_assetsENDS",4f,a6,2c,b1));
HXDLIN(  91)				 ::Dynamic _hx_tmp1;
HXDLIN(  91)				if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE(  91)					_hx_tmp1 = imageToReturn1;
            				}
            				else {
HXLINE(  91)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/NOTE_assetsENDS",4f,a6,2c,b1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            				}
HXDLIN(  91)				int _hx_tmp2 = ::Math_obj::floor(this->get_width());
HXDLIN(  91)				this->loadGraphic(_hx_tmp1,true,_hx_tmp2,::Math_obj::floor(this->get_height()),null(),null());
            			}
            			else {
HXLINE(  93)				::String library = null();
HXDLIN(  93)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/NOTE_assets",97,ea,16,8b));
HXDLIN(  93)				 ::Dynamic _hx_tmp;
HXDLIN(  93)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  93)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  93)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/NOTE_assets",97,ea,16,8b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN(  93)				this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
HXLINE(  94)				this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE(  95)				this->set_height((this->get_height() / ( (Float)(5) )));
HXLINE(  96)				::String library1 = null();
HXDLIN(  96)				 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/NOTE_assets",97,ea,16,8b));
HXDLIN(  96)				 ::Dynamic _hx_tmp1;
HXDLIN(  96)				if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE(  96)					_hx_tmp1 = imageToReturn1;
            				}
            				else {
HXLINE(  96)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/NOTE_assets",97,ea,16,8b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            				}
HXDLIN(  96)				int _hx_tmp2 = ::Math_obj::floor(this->get_width());
HXDLIN(  96)				this->loadGraphic(_hx_tmp1,true,_hx_tmp2,::Math_obj::floor(this->get_height()),null(),null());
            			}
HXLINE(  98)			this->loadPixelNoteAnims();
HXLINE( 100)			Float _hx_tmp = this->get_width();
HXDLIN( 100)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE( 101)			this->updateHitbox();
HXLINE( 102)			this->isPixel = true;
HXLINE(  85)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE( 105)			::String library = null();
HXDLIN( 105)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("NOTE_assets",70,3c,09,f7));
HXDLIN( 105)			bool xmlExists = false;
HXDLIN( 105)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 105)				xmlExists = true;
            			}
HXDLIN( 105)			 ::Dynamic _hx_tmp;
HXDLIN( 105)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 105)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 105)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("NOTE_assets",70,3c,09,f7));
HXDLIN( 105)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 105)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE( 105)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN( 105)			::String _hx_tmp1;
HXDLIN( 105)			if (xmlExists) {
HXLINE( 105)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 105)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 105)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 106)			this->loadNoteAnims();
HXLINE( 107)			this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            		}
            		_hx_goto_0:;
HXLINE( 110)		if ((noteData > -1)) {
HXLINE( 111)			this->colorSwap =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 112)			this->shader = this->colorSwap->shader;
HXLINE( 114)			this->colorSwap->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(noteData,4)).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE( 115)			this->colorSwap->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(noteData,4)).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE( 116)			this->colorSwap->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(noteData,4)).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
HXLINE( 118)			this->set_x((this->x + (::Note_obj::swagWidth * ( (Float)(::hx::Mod(noteData,4)) ))));
HXLINE( 119)			if (!(this->isSustainNote)) {
HXLINE( 120)				::String animToPlay = HX_("",00,00,00,00);
HXLINE( 121)				switch((int)(::hx::Mod(noteData,4))){
            					case (int)0: {
HXLINE( 124)						animToPlay = HX_("purple",3c,f6,89,71);
            					}
            					break;
            					case (int)1: {
HXLINE( 126)						animToPlay = HX_("blue",9a,42,19,41);
            					}
            					break;
            					case (int)2: {
HXLINE( 128)						animToPlay = HX_("green",c3,0e,ed,99);
            					}
            					break;
            					case (int)3: {
HXLINE( 130)						animToPlay = HX_("red",51,d9,56,00);
            					}
            					break;
            				}
HXLINE( 132)				this->animation->play((animToPlay + HX_("Scroll",2d,4c,f9,7b)),null(),null(),null());
            			}
            		}
HXLINE( 138)		bool _hx_tmp1;
HXDLIN( 138)		if (this->isSustainNote) {
HXLINE( 138)			_hx_tmp1 = ::hx::IsNotNull( prevNote );
            		}
            		else {
HXLINE( 138)			_hx_tmp1 = false;
            		}
HXDLIN( 138)		if (_hx_tmp1) {
HXLINE( 140)			this->set_alpha(((Float)0.6));
HXLINE( 141)			if (::ClientPrefs_obj::downScroll) {
HXLINE( 141)				this->set_flipY(true);
            			}
HXLINE( 143)			Float _hx_tmp = this->x;
HXDLIN( 143)			this->set_x((_hx_tmp + (this->get_width() / ( (Float)(2) ))));
HXLINE( 145)			switch((int)(noteData)){
            				case (int)0: {
HXLINE( 148)					this->animation->play(HX_("purpleholdend",40,d5,15,5b),null(),null(),null());
            				}
            				break;
            				case (int)1: {
HXLINE( 150)					this->animation->play(HX_("blueholdend",a2,f0,cd,25),null(),null(),null());
            				}
            				break;
            				case (int)2: {
HXLINE( 152)					this->animation->play(HX_("greenholdend",99,eb,5f,39),null(),null(),null());
            				}
            				break;
            				case (int)3: {
HXLINE( 154)					this->animation->play(HX_("redholdend",cb,ae,1e,ea),null(),null(),null());
            				}
            				break;
            			}
HXLINE( 157)			this->updateHitbox();
HXLINE( 159)			Float _hx_tmp1 = this->x;
HXDLIN( 159)			this->set_x((_hx_tmp1 - (this->get_width() / ( (Float)(2) ))));
HXLINE( 161)			if (::StringTools_obj::startsWith(::PlayState_obj::curStage,HX_("school",74,b8,c8,40))) {
HXLINE( 162)				this->set_x((this->x + 30));
            			}
HXLINE( 164)			if (prevNote->isSustainNote) {
HXLINE( 166)				switch((int)(prevNote->noteData)){
            					case (int)0: {
HXLINE( 169)						prevNote->animation->play(HX_("purplehold",7b,8d,da,cd),null(),null(),null());
            					}
            					break;
            					case (int)1: {
HXLINE( 171)						prevNote->animation->play(HX_("bluehold",d9,60,aa,a4),null(),null(),null());
            					}
            					break;
            					case (int)2: {
HXLINE( 173)						prevNote->animation->play(HX_("greenhold",82,f5,c1,bc),null(),null(),null());
            					}
            					break;
            					case (int)3: {
HXLINE( 175)						prevNote->animation->play(HX_("redhold",10,1f,bf,bf),null(),null(),null());
            					}
            					break;
            				}
HXLINE( 178)				 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 178)				fh->set_y((fh->y * (((::Conductor_obj::stepCrochet / ( (Float)(100) )) * ((Float)1.5)) * ( (Float)(::PlayState_obj::SONG->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ))));
HXLINE( 179)				prevNote->updateHitbox();
            			}
            		}
            		else {
HXLINE( 182)			if (!(this->isSustainNote)) {
HXLINE( 183)				this->earlyHitMult = ( (Float)(1) );
            			}
            		}
HXLINE( 186)		bool _hx_tmp2;
HXDLIN( 186)		if (!(this->isPixel)) {
HXLINE( 186)			_hx_tmp2 = (noteData > -1);
            		}
            		else {
HXLINE( 186)			_hx_tmp2 = false;
            		}
HXDLIN( 186)		if (_hx_tmp2) {
HXLINE( 186)			this->reloadNote(null(),null());
            		}
            	}

Dynamic Note_obj::__CreateEmpty() { return new Note_obj; }

void *Note_obj::_hx_vtable = 0;

Dynamic Note_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Note_obj > _hx_result = new Note_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Note_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x08363a36) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08363a36;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

int Note_obj::set_noteType(int value){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_42_set_noteType)
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		if ((this->noteData > -1)) {
HXLINE(  43)			_hx_tmp = (this->noteType != value);
            		}
            		else {
HXLINE(  43)			_hx_tmp = false;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  44)			if ((value == 3)) {
HXLINE(  46)				this->reloadNote(HX_("HURT",0f,24,d8,2f),null());
HXLINE(  47)				this->colorSwap->set_hue(( (Float)(0) ));
HXLINE(  48)				this->colorSwap->set_saturation(( (Float)(0) ));
HXLINE(  49)				this->colorSwap->set_brightness(( (Float)(0) ));
            			}
            			else {
HXLINE(  52)				this->colorSwap->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(this->noteData,4)).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE(  53)				this->colorSwap->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(this->noteData,4)).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE(  54)				this->colorSwap->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(this->noteData,4)).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
            			}
HXLINE(  56)			this->noteType = value;
            		}
HXLINE(  58)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,set_noteType,return )

void Note_obj::reloadNote(::String __o_prefix,::String __o_suffix){
            		::String prefix = __o_prefix;
            		if (::hx::IsNull(__o_prefix)) prefix = HX_("",00,00,00,00);
            		::String suffix = __o_suffix;
            		if (::hx::IsNull(__o_suffix)) suffix = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_189_reloadNote)
HXLINE( 190)		::String skin = ( (::String)(::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) );
HXLINE( 191)		bool _hx_tmp;
HXDLIN( 191)		if (::hx::IsNotNull( skin )) {
HXLINE( 191)			_hx_tmp = (skin.length < 1);
            		}
            		else {
HXLINE( 191)			_hx_tmp = true;
            		}
HXDLIN( 191)		if (_hx_tmp) {
HXLINE( 192)			skin = HX_("NOTE_assets",70,3c,09,f7);
            		}
HXLINE( 195)		::String animName = null();
HXLINE( 196)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 197)			animName = this->animation->_curAnim->name;
            		}
HXLINE( 200)		::String blahblah = ((prefix + skin) + suffix);
HXLINE( 201)		if (this->isPixel) {
HXLINE( 202)			if (this->isSustainNote) {
HXLINE( 203)				::String key = ((HX_("weeb/pixelUI/",79,62,e4,09) + blahblah) + HX_("ENDS",38,24,d7,2d));
HXDLIN( 203)				::String library = null();
HXDLIN( 203)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 203)				 ::Dynamic _hx_tmp;
HXDLIN( 203)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 203)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE( 203)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN( 203)				this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
HXLINE( 204)				this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE( 205)				this->set_height((this->get_height() / ( (Float)(2) )));
HXLINE( 206)				::String key1 = ((HX_("weeb/pixelUI/",79,62,e4,09) + blahblah) + HX_("ENDS",38,24,d7,2d));
HXDLIN( 206)				::String library1 = null();
HXDLIN( 206)				 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(key1);
HXDLIN( 206)				 ::Dynamic _hx_tmp1;
HXDLIN( 206)				if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE( 206)					_hx_tmp1 = imageToReturn1;
            				}
            				else {
HXLINE( 206)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key1) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            				}
HXDLIN( 206)				int _hx_tmp2 = ::Math_obj::floor(this->get_width());
HXDLIN( 206)				this->loadGraphic(_hx_tmp1,true,_hx_tmp2,::Math_obj::floor(this->get_height()),null(),null());
            			}
            			else {
HXLINE( 208)				::String key = (HX_("weeb/pixelUI/",79,62,e4,09) + blahblah);
HXDLIN( 208)				::String library = null();
HXDLIN( 208)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 208)				 ::Dynamic _hx_tmp;
HXDLIN( 208)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 208)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE( 208)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN( 208)				this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
HXLINE( 209)				this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE( 210)				this->set_height((this->get_height() / ( (Float)(5) )));
HXLINE( 211)				::String key1 = (HX_("weeb/pixelUI/",79,62,e4,09) + blahblah);
HXDLIN( 211)				::String library1 = null();
HXDLIN( 211)				 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(key1);
HXDLIN( 211)				 ::Dynamic _hx_tmp1;
HXDLIN( 211)				if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE( 211)					_hx_tmp1 = imageToReturn1;
            				}
            				else {
HXLINE( 211)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key1) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            				}
HXDLIN( 211)				int _hx_tmp2 = ::Math_obj::floor(this->get_width());
HXDLIN( 211)				this->loadGraphic(_hx_tmp1,true,_hx_tmp2,::Math_obj::floor(this->get_height()),null(),null());
            			}
HXLINE( 213)			this->loadPixelNoteAnims();
            		}
            		else {
HXLINE( 215)			::String library = null();
HXDLIN( 215)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(blahblah);
HXDLIN( 215)			bool xmlExists = false;
HXDLIN( 215)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + blahblah) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 215)				xmlExists = true;
            			}
HXDLIN( 215)			 ::Dynamic _hx_tmp;
HXDLIN( 215)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 215)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 215)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(blahblah);
HXDLIN( 215)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 215)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE( 215)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + blahblah) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN( 215)			::String _hx_tmp1;
HXDLIN( 215)			if (xmlExists) {
HXLINE( 215)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + blahblah) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 215)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + blahblah) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 215)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 216)			this->loadNoteAnims();
            		}
HXLINE( 218)		this->animation->play(animName,true,null(),null());
HXLINE( 220)		if (this->inEditor) {
HXLINE( 221)			this->setGraphicSize(::ChartingState_obj::GRID_SIZE,::ChartingState_obj::GRID_SIZE);
HXLINE( 222)			this->updateHitbox();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Note_obj,reloadNote,(void))

void Note_obj::loadNoteAnims(){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_226_loadNoteAnims)
HXLINE( 227)		this->animation->addByPrefix(HX_("greenScroll",30,4f,fe,9e),HX_("green0",0d,dc,7f,15),null(),null(),null(),null());
HXLINE( 228)		this->animation->addByPrefix(HX_("redScroll",3e,78,c3,3a),HX_("red0",bf,4d,a7,4b),null(),null(),null(),null());
HXLINE( 229)		this->animation->addByPrefix(HX_("blueScroll",47,7e,59,a2),HX_("blue0",56,04,01,b5),null(),null(),null(),null());
HXLINE( 230)		this->animation->addByPrefix(HX_("purpleScroll",69,97,67,99),HX_("purple0",74,7e,2d,e7),null(),null(),null(),null());
HXLINE( 232)		if (this->isSustainNote) {
HXLINE( 234)			this->animation->addByPrefix(HX_("purpleholdend",40,d5,15,5b),HX_("pruple end hold",6e,7c,17,3a),null(),null(),null(),null());
HXLINE( 235)			this->animation->addByPrefix(HX_("greenholdend",99,eb,5f,39),HX_("green hold end",77,4d,45,46),null(),null(),null(),null());
HXLINE( 236)			this->animation->addByPrefix(HX_("redholdend",cb,ae,1e,ea),HX_("red hold end",29,c1,a0,b6),null(),null(),null(),null());
HXLINE( 237)			this->animation->addByPrefix(HX_("blueholdend",a2,f0,cd,25),HX_("blue hold end",c0,66,05,ae),null(),null(),null(),null());
HXLINE( 239)			this->animation->addByPrefix(HX_("purplehold",7b,8d,da,cd),HX_("purple hold piece",b1,8b,b1,d3),null(),null(),null(),null());
HXLINE( 240)			this->animation->addByPrefix(HX_("greenhold",82,f5,c1,bc),HX_("green hold piece",8a,42,68,ae),null(),null(),null(),null());
HXLINE( 241)			this->animation->addByPrefix(HX_("redhold",10,1f,bf,bf),HX_("red hold piece",bc,86,4d,83),null(),null(),null(),null());
HXLINE( 242)			this->animation->addByPrefix(HX_("bluehold",d9,60,aa,a4),HX_("blue hold piece",13,00,58,99),null(),null(),null(),null());
            		}
HXLINE( 245)		this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.7))),null());
HXLINE( 246)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,loadNoteAnims,(void))

void Note_obj::loadPixelNoteAnims(){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_250_loadPixelNoteAnims)
HXDLIN( 250)		if (this->isSustainNote) {
HXLINE( 251)			this->animation->add(HX_("purpleholdend",40,d5,15,5b),::Array_obj< int >::__new(1)->init(0,(::Note_obj::PURP_NOTE + 4)),null(),null(),null(),null());
HXLINE( 252)			this->animation->add(HX_("greenholdend",99,eb,5f,39),::Array_obj< int >::__new(1)->init(0,(::Note_obj::GREEN_NOTE + 4)),null(),null(),null(),null());
HXLINE( 253)			this->animation->add(HX_("redholdend",cb,ae,1e,ea),::Array_obj< int >::__new(1)->init(0,(::Note_obj::RED_NOTE + 4)),null(),null(),null(),null());
HXLINE( 254)			this->animation->add(HX_("blueholdend",a2,f0,cd,25),::Array_obj< int >::__new(1)->init(0,(::Note_obj::BLUE_NOTE + 4)),null(),null(),null(),null());
HXLINE( 256)			this->animation->add(HX_("purplehold",7b,8d,da,cd),::Array_obj< int >::__new(1)->init(0,::Note_obj::PURP_NOTE),null(),null(),null(),null());
HXLINE( 257)			this->animation->add(HX_("greenhold",82,f5,c1,bc),::Array_obj< int >::__new(1)->init(0,::Note_obj::GREEN_NOTE),null(),null(),null(),null());
HXLINE( 258)			this->animation->add(HX_("redhold",10,1f,bf,bf),::Array_obj< int >::__new(1)->init(0,::Note_obj::RED_NOTE),null(),null(),null(),null());
HXLINE( 259)			this->animation->add(HX_("bluehold",d9,60,aa,a4),::Array_obj< int >::__new(1)->init(0,::Note_obj::BLUE_NOTE),null(),null(),null(),null());
            		}
            		else {
HXLINE( 261)			this->animation->add(HX_("greenScroll",30,4f,fe,9e),::Array_obj< int >::__new(1)->init(0,(::Note_obj::GREEN_NOTE + 4)),null(),null(),null(),null());
HXLINE( 262)			this->animation->add(HX_("redScroll",3e,78,c3,3a),::Array_obj< int >::__new(1)->init(0,(::Note_obj::RED_NOTE + 4)),null(),null(),null(),null());
HXLINE( 263)			this->animation->add(HX_("blueScroll",47,7e,59,a2),::Array_obj< int >::__new(1)->init(0,(::Note_obj::BLUE_NOTE + 4)),null(),null(),null(),null());
HXLINE( 264)			this->animation->add(HX_("purpleScroll",69,97,67,99),::Array_obj< int >::__new(1)->init(0,(::Note_obj::PURP_NOTE + 4)),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,loadPixelNoteAnims,(void))

void Note_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_269_update)
HXLINE( 270)		this->super::update(elapsed);
HXLINE( 272)		if (this->mustPress) {
HXLINE( 274)			bool _hx_tmp;
HXDLIN( 274)			if ((this->strumTime > (::Conductor_obj::songPosition - ::Conductor_obj::safeZoneOffset))) {
HXLINE( 274)				_hx_tmp = (this->strumTime < (::Conductor_obj::songPosition + (::Conductor_obj::safeZoneOffset * this->earlyHitMult)));
            			}
            			else {
HXLINE( 274)				_hx_tmp = false;
            			}
HXDLIN( 274)			if (_hx_tmp) {
HXLINE( 276)				this->canBeHit = true;
            			}
            			else {
HXLINE( 278)				this->canBeHit = false;
            			}
HXLINE( 280)			bool _hx_tmp1;
HXDLIN( 280)			if ((this->strumTime < (::Conductor_obj::songPosition - ::Conductor_obj::safeZoneOffset))) {
HXLINE( 280)				_hx_tmp1 = !(this->wasGoodHit);
            			}
            			else {
HXLINE( 280)				_hx_tmp1 = false;
            			}
HXDLIN( 280)			if (_hx_tmp1) {
HXLINE( 281)				this->tooLate = true;
            			}
            		}
            		else {
HXLINE( 285)			this->canBeHit = false;
HXLINE( 287)			if ((this->strumTime <= ::Conductor_obj::songPosition)) {
HXLINE( 288)				this->wasGoodHit = true;
            			}
            		}
HXLINE( 291)		if (this->tooLate) {
HXLINE( 293)			if ((this->alpha > ((Float)0.3))) {
HXLINE( 294)				this->set_alpha(((Float)0.3));
            			}
            		}
            	}


Float Note_obj::swagWidth;

int Note_obj::PURP_NOTE;

int Note_obj::GREEN_NOTE;

int Note_obj::BLUE_NOTE;

int Note_obj::RED_NOTE;


::hx::ObjectPtr< Note_obj > Note_obj::__new(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor) {
	::hx::ObjectPtr< Note_obj > __this = new Note_obj();
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inEditor);
	return __this;
}

::hx::ObjectPtr< Note_obj > Note_obj::__alloc(::hx::Ctx *_hx_ctx,Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor) {
	Note_obj *__this = (Note_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Note_obj), true, "Note"));
	*(void **)__this = Note_obj::_hx_vtable;
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inEditor);
	return __this;
}

Note_obj::Note_obj()
{
}

void Note_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Note);
	HX_MARK_MEMBER_NAME(strumTime,"strumTime");
	HX_MARK_MEMBER_NAME(mustPress,"mustPress");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(canBeHit,"canBeHit");
	HX_MARK_MEMBER_NAME(tooLate,"tooLate");
	HX_MARK_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_MARK_MEMBER_NAME(ignoreNote,"ignoreNote");
	HX_MARK_MEMBER_NAME(prevNote,"prevNote");
	HX_MARK_MEMBER_NAME(sustainLength,"sustainLength");
	HX_MARK_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_MARK_MEMBER_NAME(noteType,"noteType");
	HX_MARK_MEMBER_NAME(eventName,"eventName");
	HX_MARK_MEMBER_NAME(eventVal1,"eventVal1");
	HX_MARK_MEMBER_NAME(eventVal2,"eventVal2");
	HX_MARK_MEMBER_NAME(colorSwap,"colorSwap");
	HX_MARK_MEMBER_NAME(inEditor,"inEditor");
	HX_MARK_MEMBER_NAME(earlyHitMult,"earlyHitMult");
	HX_MARK_MEMBER_NAME(isPixel,"isPixel");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Note_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strumTime,"strumTime");
	HX_VISIT_MEMBER_NAME(mustPress,"mustPress");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(canBeHit,"canBeHit");
	HX_VISIT_MEMBER_NAME(tooLate,"tooLate");
	HX_VISIT_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_VISIT_MEMBER_NAME(ignoreNote,"ignoreNote");
	HX_VISIT_MEMBER_NAME(prevNote,"prevNote");
	HX_VISIT_MEMBER_NAME(sustainLength,"sustainLength");
	HX_VISIT_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_VISIT_MEMBER_NAME(noteType,"noteType");
	HX_VISIT_MEMBER_NAME(eventName,"eventName");
	HX_VISIT_MEMBER_NAME(eventVal1,"eventVal1");
	HX_VISIT_MEMBER_NAME(eventVal2,"eventVal2");
	HX_VISIT_MEMBER_NAME(colorSwap,"colorSwap");
	HX_VISIT_MEMBER_NAME(inEditor,"inEditor");
	HX_VISIT_MEMBER_NAME(earlyHitMult,"earlyHitMult");
	HX_VISIT_MEMBER_NAME(isPixel,"isPixel");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Note_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { return ::hx::Val( tooLate ); }
		if (HX_FIELD_EQ(inName,"isPixel") ) { return ::hx::Val( isPixel ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { return ::hx::Val( canBeHit ); }
		if (HX_FIELD_EQ(inName,"prevNote") ) { return ::hx::Val( prevNote ); }
		if (HX_FIELD_EQ(inName,"noteType") ) { return ::hx::Val( noteType ); }
		if (HX_FIELD_EQ(inName,"inEditor") ) { return ::hx::Val( inEditor ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { return ::hx::Val( strumTime ); }
		if (HX_FIELD_EQ(inName,"mustPress") ) { return ::hx::Val( mustPress ); }
		if (HX_FIELD_EQ(inName,"eventName") ) { return ::hx::Val( eventName ); }
		if (HX_FIELD_EQ(inName,"eventVal1") ) { return ::hx::Val( eventVal1 ); }
		if (HX_FIELD_EQ(inName,"eventVal2") ) { return ::hx::Val( eventVal2 ); }
		if (HX_FIELD_EQ(inName,"colorSwap") ) { return ::hx::Val( colorSwap ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { return ::hx::Val( wasGoodHit ); }
		if (HX_FIELD_EQ(inName,"ignoreNote") ) { return ::hx::Val( ignoreNote ); }
		if (HX_FIELD_EQ(inName,"reloadNote") ) { return ::hx::Val( reloadNote_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"earlyHitMult") ) { return ::hx::Val( earlyHitMult ); }
		if (HX_FIELD_EQ(inName,"set_noteType") ) { return ::hx::Val( set_noteType_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sustainLength") ) { return ::hx::Val( sustainLength ); }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { return ::hx::Val( isSustainNote ); }
		if (HX_FIELD_EQ(inName,"loadNoteAnims") ) { return ::hx::Val( loadNoteAnims_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadPixelNoteAnims") ) { return ::hx::Val( loadPixelNoteAnims_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Note_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RED_NOTE") ) { outValue = ( RED_NOTE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { outValue = ( swagWidth ); return true; }
		if (HX_FIELD_EQ(inName,"PURP_NOTE") ) { outValue = ( PURP_NOTE ); return true; }
		if (HX_FIELD_EQ(inName,"BLUE_NOTE") ) { outValue = ( BLUE_NOTE ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"GREEN_NOTE") ) { outValue = ( GREEN_NOTE ); return true; }
	}
	return false;
}

::hx::Val Note_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { tooLate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isPixel") ) { isPixel=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { canBeHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevNote") ) { prevNote=inValue.Cast<  ::Note >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_noteType(inValue.Cast< int >()) );noteType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inEditor") ) { inEditor=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { strumTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustPress") ) { mustPress=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventName") ) { eventName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventVal1") ) { eventVal1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventVal2") ) { eventVal2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorSwap") ) { colorSwap=inValue.Cast<  ::ColorSwap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { wasGoodHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreNote") ) { ignoreNote=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"earlyHitMult") ) { earlyHitMult=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sustainLength") ) { sustainLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { isSustainNote=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Note_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RED_NOTE") ) { RED_NOTE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { swagWidth=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"PURP_NOTE") ) { PURP_NOTE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BLUE_NOTE") ) { BLUE_NOTE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"GREEN_NOTE") ) { GREEN_NOTE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Note_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strumTime",f6,2d,21,f4));
	outFields->push(HX_("mustPress",ba,d4,17,60));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("canBeHit",20,a6,d1,1e));
	outFields->push(HX_("tooLate",da,77,57,55));
	outFields->push(HX_("wasGoodHit",ed,7a,9b,17));
	outFields->push(HX_("ignoreNote",24,ee,32,49));
	outFields->push(HX_("prevNote",85,f8,d7,11));
	outFields->push(HX_("sustainLength",e9,a1,9c,7c));
	outFields->push(HX_("isSustainNote",6b,1e,77,c3));
	outFields->push(HX_("noteType",cc,17,3c,5c));
	outFields->push(HX_("eventName",85,7b,0c,f8));
	outFields->push(HX_("eventVal1",6a,2f,56,fd));
	outFields->push(HX_("eventVal2",6b,2f,56,fd));
	outFields->push(HX_("colorSwap",96,b5,cb,27));
	outFields->push(HX_("inEditor",72,8b,5b,c4));
	outFields->push(HX_("earlyHitMult",80,a9,e2,17));
	outFields->push(HX_("isPixel",3c,6a,29,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Note_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Note_obj,strumTime),HX_("strumTime",f6,2d,21,f4)},
	{::hx::fsBool,(int)offsetof(Note_obj,mustPress),HX_("mustPress",ba,d4,17,60)},
	{::hx::fsInt,(int)offsetof(Note_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsBool,(int)offsetof(Note_obj,canBeHit),HX_("canBeHit",20,a6,d1,1e)},
	{::hx::fsBool,(int)offsetof(Note_obj,tooLate),HX_("tooLate",da,77,57,55)},
	{::hx::fsBool,(int)offsetof(Note_obj,wasGoodHit),HX_("wasGoodHit",ed,7a,9b,17)},
	{::hx::fsBool,(int)offsetof(Note_obj,ignoreNote),HX_("ignoreNote",24,ee,32,49)},
	{::hx::fsObject /*  ::Note */ ,(int)offsetof(Note_obj,prevNote),HX_("prevNote",85,f8,d7,11)},
	{::hx::fsFloat,(int)offsetof(Note_obj,sustainLength),HX_("sustainLength",e9,a1,9c,7c)},
	{::hx::fsBool,(int)offsetof(Note_obj,isSustainNote),HX_("isSustainNote",6b,1e,77,c3)},
	{::hx::fsInt,(int)offsetof(Note_obj,noteType),HX_("noteType",cc,17,3c,5c)},
	{::hx::fsString,(int)offsetof(Note_obj,eventName),HX_("eventName",85,7b,0c,f8)},
	{::hx::fsString,(int)offsetof(Note_obj,eventVal1),HX_("eventVal1",6a,2f,56,fd)},
	{::hx::fsString,(int)offsetof(Note_obj,eventVal2),HX_("eventVal2",6b,2f,56,fd)},
	{::hx::fsObject /*  ::ColorSwap */ ,(int)offsetof(Note_obj,colorSwap),HX_("colorSwap",96,b5,cb,27)},
	{::hx::fsBool,(int)offsetof(Note_obj,inEditor),HX_("inEditor",72,8b,5b,c4)},
	{::hx::fsFloat,(int)offsetof(Note_obj,earlyHitMult),HX_("earlyHitMult",80,a9,e2,17)},
	{::hx::fsBool,(int)offsetof(Note_obj,isPixel),HX_("isPixel",3c,6a,29,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Note_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Note_obj::swagWidth,HX_("swagWidth",1c,87,d9,a6)},
	{::hx::fsInt,(void *) &Note_obj::PURP_NOTE,HX_("PURP_NOTE",ee,97,79,1e)},
	{::hx::fsInt,(void *) &Note_obj::GREEN_NOTE,HX_("GREEN_NOTE",4e,c6,8e,9c)},
	{::hx::fsInt,(void *) &Note_obj::BLUE_NOTE,HX_("BLUE_NOTE",f7,42,53,a9)},
	{::hx::fsInt,(void *) &Note_obj::RED_NOTE,HX_("RED_NOTE",00,15,92,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Note_obj_sMemberFields[] = {
	HX_("strumTime",f6,2d,21,f4),
	HX_("mustPress",ba,d4,17,60),
	HX_("noteData",3c,7b,96,51),
	HX_("canBeHit",20,a6,d1,1e),
	HX_("tooLate",da,77,57,55),
	HX_("wasGoodHit",ed,7a,9b,17),
	HX_("ignoreNote",24,ee,32,49),
	HX_("prevNote",85,f8,d7,11),
	HX_("sustainLength",e9,a1,9c,7c),
	HX_("isSustainNote",6b,1e,77,c3),
	HX_("noteType",cc,17,3c,5c),
	HX_("eventName",85,7b,0c,f8),
	HX_("eventVal1",6a,2f,56,fd),
	HX_("eventVal2",6b,2f,56,fd),
	HX_("colorSwap",96,b5,cb,27),
	HX_("inEditor",72,8b,5b,c4),
	HX_("earlyHitMult",80,a9,e2,17),
	HX_("set_noteType",49,ef,4e,26),
	HX_("isPixel",3c,6a,29,5f),
	HX_("reloadNote",eb,b7,11,94),
	HX_("loadNoteAnims",ea,e4,d6,e2),
	HX_("loadPixelNoteAnims",50,91,b2,72),
	HX_("update",09,86,05,87),
	::String(null()) };

static void Note_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_MARK_MEMBER_NAME(Note_obj::PURP_NOTE,"PURP_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::GREEN_NOTE,"GREEN_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::BLUE_NOTE,"BLUE_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::RED_NOTE,"RED_NOTE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Note_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_VISIT_MEMBER_NAME(Note_obj::PURP_NOTE,"PURP_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::GREEN_NOTE,"GREEN_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::BLUE_NOTE,"BLUE_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::RED_NOTE,"RED_NOTE");
};

#endif

::hx::Class Note_obj::__mClass;

static ::String Note_obj_sStaticFields[] = {
	HX_("swagWidth",1c,87,d9,a6),
	HX_("PURP_NOTE",ee,97,79,1e),
	HX_("GREEN_NOTE",4e,c6,8e,9c),
	HX_("BLUE_NOTE",f7,42,53,a9),
	HX_("RED_NOTE",00,15,92,9e),
	::String(null())
};

void Note_obj::__register()
{
	Note_obj _hx_dummy;
	Note_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Note",12,44,e3,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Note_obj::__GetStatic;
	__mClass->mSetStaticField = &Note_obj::__SetStatic;
	__mClass->mMarkFunc = Note_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Note_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Note_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Note_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Note_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Note_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Note_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Note_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_36_boot)
HXDLIN(  36)		swagWidth = ((Float)112.);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_37_boot)
HXDLIN(  37)		PURP_NOTE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_38_boot)
HXDLIN(  38)		GREEN_NOTE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_39_boot)
HXDLIN(  39)		BLUE_NOTE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_40_boot)
HXDLIN(  40)		RED_NOTE = 3;
            	}
}

