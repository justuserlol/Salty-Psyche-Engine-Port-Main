#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_DialogueBoxPsych
#include <DialogueBoxPsych.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_128129519e640548_17_new,"DialogueBoxPsych","new",0x1a49b57a,"DialogueBoxPsych.new","DialogueBoxPsych.hx",17,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_1[] = {
	HX_("left",07,08,b0,47),HX_("center",d5,25,db,05),HX_("right",dc,0b,64,e9),
};
static const ::String _hx_array_data_c9b73088_2[] = {
	HX_("normal",27,72,69,30),HX_("angry",21,49,e2,22),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_39_addCharacter,"DialogueBoxPsych","addCharacter",0xe55ba4ee,"DialogueBoxPsych.addCharacter","DialogueBoxPsych.hx",39,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_104_spawnCharacters,"DialogueBoxPsych","spawnCharacters",0xbe2056df,"DialogueBoxPsych.spawnCharacters","DialogueBoxPsych.hx",104,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_146_update,"DialogueBoxPsych","update",0xc33c4d2f,"DialogueBoxPsych.update","DialogueBoxPsych.hx",146,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_18[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
static const ::String _hx_array_data_c9b73088_19[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_279_startNextDialog,"DialogueBoxPsych","startNextDialog",0x95e56137,"DialogueBoxPsych.startNextDialog","DialogueBoxPsych.hx",279,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_332_updateBoxOffsets,"DialogueBoxPsych","updateBoxOffsets",0xb38f5cc4,"DialogueBoxPsych.updateBoxOffsets","DialogueBoxPsych.hx",332,0xf6ef1736)

void DialogueBoxPsych_obj::__construct(::Array< ::String > dialogueList,::String song){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_17_new)
HXLINE( 277)		this->lastBoxType = HX_("",00,00,00,00);
HXLINE( 276)		this->lastCharacter = -1;
HXLINE( 144)		this->daText = null();
HXLINE( 143)		this->scrollSpeed = 4500;
HXLINE( 142)		this->textY = 430;
HXLINE( 141)		this->textX = 90;
HXLINE( 101)		this->dialogueEnded = false;
HXLINE( 100)		this->dialogueStarted = false;
HXLINE(  36)		this->charPositionList = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_1,3);
HXLINE(  35)		this->textBoxTypes = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_2,2);
HXLINE(  33)		this->offsetPos = ((Float)-600);
HXLINE(  32)		this->currentText = 1;
HXLINE(  30)		this->arrayPosition = ::Array_obj< int >::__new(0);
HXLINE(  29)		this->arrayStartPos = ::Array_obj< Float >::__new(0);
HXLINE(  28)		this->arrayCharacters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  26)		this->textToType = HX_("",00,00,00,00);
HXLINE(  24)		this->bgFade = null();
HXLINE(  23)		this->nextDialogueThing = null();
HXLINE(  20)		this->dialogueList = ::Array_obj< ::String >::__new(0);
HXLINE(  64)		super::__construct(null(),null(),null());
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if (::hx::IsNotNull( song )) {
HXLINE(  66)			_hx_tmp = (song != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  67)			::String library = null();
HXDLIN(  67)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + song) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE(  68)			{
HXLINE(  68)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  68)				 ::Dynamic onComplete = null();
HXDLIN(  68)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  68)					_this->play(null(),null(),null());
            				}
HXDLIN(  68)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  68)					_this->fadeTween->cancel();
            				}
HXDLIN(  68)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),2, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE(  71)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-500,-500,null());
HXDLIN(  71)		this->bgFade = _hx_tmp1->makeGraphic((::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),-1,null(),null());
HXLINE(  72)		this->bgFade->scrollFactor->set(null(),null());
HXLINE(  73)		this->bgFade->set_visible(true);
HXLINE(  74)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE(  75)		this->add(this->bgFade);
HXLINE(  77)		this->dialogueList = dialogueList;
HXLINE(  78)		this->spawnCharacters(dialogueList->__get(0).split(HX_(" ",20,00,00,00)));
HXLINE(  80)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,70,370,null());
HXLINE(  81)		 ::flixel::FlxSprite _hx_tmp2 = this->box;
HXDLIN(  81)		::String library = null();
HXDLIN(  81)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("speech_bubble",49,db,97,da));
HXDLIN(  81)		bool xmlExists = false;
HXDLIN(  81)		if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  81)			xmlExists = true;
            		}
HXDLIN(  81)		 ::Dynamic _hx_tmp3;
HXDLIN(  81)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  81)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE(  81)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("speech_bubble",49,db,97,da));
HXDLIN(  81)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  81)				_hx_tmp3 = imageToReturn;
            			}
            			else {
HXLINE(  81)				_hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN(  81)		::String _hx_tmp4;
HXDLIN(  81)		if (xmlExists) {
HXLINE(  81)			_hx_tmp4 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  81)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  81)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE(  82)		this->box->scrollFactor->set(null(),null());
HXLINE(  83)		this->box->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  84)		this->box->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("speech bubble normal",bd,d5,bc,a7),24,null(),null(),null());
HXLINE(  85)		this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Speech Bubble Normal Open",0d,59,3f,7c),24,false,null(),null());
HXLINE(  86)		this->box->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("AHH speech bubble",eb,de,b2,20),24,null(),null(),null());
HXLINE(  87)		this->box->animation->addByPrefix(HX_("angryOpen",8b,1d,01,b1),HX_("speech bubble loud open",42,35,10,f0),24,false,null(),null());
HXLINE(  88)		this->box->animation->addByPrefix(HX_("center-normal",df,c0,ab,9c),HX_("speech bubble middle",eb,36,b2,c3),24,null(),null(),null());
HXLINE(  89)		this->box->animation->addByPrefix(HX_("center-normalOpen",49,4c,74,58),HX_("Speech Bubble Middle Open",1f,f1,94,ea),24,false,null(),null());
HXLINE(  90)		this->box->animation->addByPrefix(HX_("center-angry",69,39,92,b0),HX_("AHH Speech Bubble middle",ea,0b,3d,74),24,null(),null(),null());
HXLINE(  91)		this->box->animation->addByPrefix(HX_("center-angryOpen",d3,d1,42,e2),HX_("speech bubble Middle loud open",c3,b9,85,ee),24,false,null(),null());
HXLINE(  92)		this->box->set_visible(false);
HXLINE(  93)		 ::flixel::FlxSprite _hx_tmp5 = this->box;
HXDLIN(  93)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int((this->box->get_width() * ((Float)0.9))),null());
HXLINE(  94)		this->box->updateHitbox();
HXLINE(  95)		this->add(this->box);
HXLINE(  97)		this->startNextDialog();
            	}

Dynamic DialogueBoxPsych_obj::__CreateEmpty() { return new DialogueBoxPsych_obj; }

void *DialogueBoxPsych_obj::_hx_vtable = 0;

Dynamic DialogueBoxPsych_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBoxPsych_obj > _hx_result = new DialogueBoxPsych_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBoxPsych_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7d24723c || inClassId==(int)0x7dab0655;
	}
}

void DialogueBoxPsych_obj::addCharacter( ::flixel::FlxSprite _hx_char,::String name){
            	HX_STACKFRAME(&_hx_pos_128129519e640548_39_addCharacter)
HXLINE(  40)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE(  42)			::String library = null();
HXDLIN(  42)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("dialogue/BF_Dialogue",9c,df,64,be));
HXDLIN(  42)			bool xmlExists = false;
HXDLIN(  42)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/BF_Dialogue",9c,df,64,be)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  42)				xmlExists = true;
            			}
HXDLIN(  42)			 ::Dynamic _hx_tmp;
HXDLIN(  42)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  42)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  42)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("dialogue/BF_Dialogue",9c,df,64,be));
HXDLIN(  42)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  42)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  42)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/BF_Dialogue",9c,df,64,be)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  42)			::String _hx_tmp1;
HXDLIN(  42)			if (xmlExists) {
HXLINE(  42)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/BF_Dialogue",9c,df,64,be)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  42)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/BF_Dialogue",9c,df,64,be)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  42)			_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  43)			_hx_char->animation->addByPrefix(HX_("talkIdle",60,92,75,a7),HX_("BFTalk",10,51,6a,e9),24,true,null(),null());
HXLINE(  44)			_hx_char->animation->addByPrefix(HX_("talk",2c,b9,f6,4c),HX_("bftalkloop",54,1f,52,67),24,true,null(),null());
HXLINE(  45)			_hx_char->set_flipX(!(_hx_char->flipX));
HXLINE(  41)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("psychic",d5,09,aa,19)) ){
HXLINE(  48)			::String library = null();
HXDLIN(  48)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("dialogue/Psy_Dialogue",78,87,f5,cd));
HXDLIN(  48)			bool xmlExists = false;
HXDLIN(  48)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Psy_Dialogue",78,87,f5,cd)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  48)				xmlExists = true;
            			}
HXDLIN(  48)			 ::Dynamic _hx_tmp;
HXDLIN(  48)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  48)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  48)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("dialogue/Psy_Dialogue",78,87,f5,cd));
HXDLIN(  48)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  48)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  48)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Psy_Dialogue",78,87,f5,cd)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  48)			::String _hx_tmp1;
HXDLIN(  48)			if (xmlExists) {
HXLINE(  48)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Psy_Dialogue",78,87,f5,cd)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  48)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Psy_Dialogue",78,87,f5,cd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  48)			_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  49)			_hx_char->animation->addByPrefix(HX_("talkIdle",60,92,75,a7),HX_("PSYtalk",22,69,f4,b9),24,true,null(),null());
HXLINE(  50)			_hx_char->animation->addByPrefix(HX_("talk",2c,b9,f6,4c),HX_("PSY loop",ce,7d,86,a5),24,true,null(),null());
HXLINE(  51)			_hx_char->animation->addByPrefix(HX_("angryIdle",d5,c0,00,ad),HX_("PSY angry",77,ee,0f,da),24,true,null(),null());
HXLINE(  52)			_hx_char->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("PSY ANGRY loop",cd,b4,8e,fc),24,true,null(),null());
HXLINE(  53)			_hx_char->animation->addByPrefix(HX_("unamusedIdle",76,18,ed,11),HX_("PSY unamused",ac,d0,3f,67),24,true,null(),null());
HXLINE(  54)			_hx_char->animation->addByPrefix(HX_("unamused",42,fc,3f,db),HX_("PSY UNAMUSED loop",58,e6,aa,11),24,true,null(),null());
HXLINE(  55)			_hx_char->set_y((_hx_char->y - ( (Float)(140) )));
HXLINE(  47)			goto _hx_goto_3;
            		}
            		_hx_goto_3:;
HXLINE(  57)		_hx_char->animation->play(HX_("talkIdle",60,92,75,a7),true,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(DialogueBoxPsych_obj,addCharacter,(void))

void DialogueBoxPsych_obj::spawnCharacters(::Array< ::String > splitSpace){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_104_spawnCharacters)
HXDLIN( 104)		int _g = 0;
HXDLIN( 104)		int _g1 = splitSpace->length;
HXDLIN( 104)		while((_g < _g1)){
HXDLIN( 104)			_g = (_g + 1);
HXDLIN( 104)			int i = (_g - 1);
HXLINE( 105)			::Array< ::String > splitName = splitSpace->__get(i).split(HX_(":",3a,00,00,00));
HXLINE( 106)			Float y = ( (Float)(180) );
HXLINE( 107)			Float x = ( (Float)(50) );
HXLINE( 108)			 ::flixel::FlxSprite _hx_char =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,x,y,null());
HXLINE( 109)			_hx_char->set_x((_hx_char->x + this->offsetPos));
HXLINE( 110)			this->addCharacter(_hx_char,splitName->__get(0));
HXLINE( 112)			_hx_char->setGraphicSize(::Std_obj::_hx_int((_hx_char->get_width() * ((Float)0.7))),null());
HXLINE( 113)			_hx_char->updateHitbox();
HXLINE( 114)			_hx_char->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 115)			_hx_char->scrollFactor->set(null(),null());
HXLINE( 116)			_hx_char->set_alpha(( (Float)(0) ));
HXLINE( 117)			this->add(_hx_char);
HXLINE( 119)			bool saveY = false;
HXLINE( 120)			int pos = 0;
HXLINE( 121)			::String _hx_switch_0 = splitName->__get(1);
            			if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 123)				pos = 1;
HXLINE( 124)				_hx_char->set_x((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )));
HXLINE( 125)				Float char1 = _hx_char->x;
HXDLIN( 125)				_hx_char->set_x((char1 - (_hx_char->get_width() / ( (Float)(2) ))));
HXLINE( 126)				y = _hx_char->y;
HXLINE( 127)				_hx_char->set_y(( (Float)((::flixel::FlxG_obj::height + 50)) ));
HXLINE( 128)				saveY = true;
HXLINE( 122)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 130)				pos = 2;
HXLINE( 131)				_hx_char->set_flipX(!(_hx_char->flipX));
HXLINE( 132)				int x1 = ::flixel::FlxG_obj::width;
HXDLIN( 132)				x = ((( (Float)(x1) ) - _hx_char->get_width()) - ( (Float)(100) ));
HXLINE( 133)				_hx_char->set_x((x - this->offsetPos));
HXLINE( 129)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE( 135)			this->arrayCharacters->push(_hx_char);
HXLINE( 136)			Float _hx_tmp;
HXDLIN( 136)			if (saveY) {
HXLINE( 136)				_hx_tmp = y;
            			}
            			else {
HXLINE( 136)				_hx_tmp = x;
            			}
HXDLIN( 136)			this->arrayStartPos->push(_hx_tmp);
HXLINE( 137)			this->arrayPosition->push(pos);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,spawnCharacters,(void))

void DialogueBoxPsych_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_146_update)
HXLINE( 147)		if (!(this->dialogueEnded)) {
HXLINE( 148)			 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 148)			fh->set_alpha((fh->alpha + (((Float)0.5) * elapsed)));
HXLINE( 149)			if ((this->bgFade->alpha > ((Float)0.5))) {
HXLINE( 149)				this->bgFade->set_alpha(((Float)0.5));
            			}
HXLINE( 151)			if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 152)				if (!(this->daText->finishedText)) {
HXLINE( 153)					if (::hx::IsNotNull( this->daText )) {
HXLINE( 154)						this->daText->killTheTimer();
HXLINE( 155)						this->remove(this->daText,null());
            					}
HXLINE( 157)					this->daText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),this->textToType,false,true,((Float)0.0),((Float)0.7));
HXLINE( 158)					this->daText->set_x(( (Float)(this->textX) ));
HXLINE( 159)					this->daText->set_y(( (Float)(this->textY) ));
HXLINE( 160)					this->add(this->daText);
            				}
            				else {
HXLINE( 161)					if ((this->currentText >= this->dialogueList->length)) {
HXLINE( 162)						this->dialogueEnded = true;
HXLINE( 163)						{
HXLINE( 163)							int _g = 0;
HXDLIN( 163)							int _g1 = this->textBoxTypes->length;
HXDLIN( 163)							while((_g < _g1)){
HXLINE( 163)								_g = (_g + 1);
HXDLIN( 163)								int i = (_g - 1);
HXLINE( 164)								::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_18,2);
HXLINE( 165)								::String animName = this->box->animation->_curAnim->name;
HXLINE( 166)								{
HXLINE( 166)									int _g1 = 0;
HXDLIN( 166)									int _g2 = checkArray->length;
HXDLIN( 166)									while((_g1 < _g2)){
HXLINE( 166)										_g1 = (_g1 + 1);
HXDLIN( 166)										int j = (_g1 - 1);
HXLINE( 167)										bool _hx_tmp;
HXDLIN( 167)										if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 167)											_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            										}
            										else {
HXLINE( 167)											_hx_tmp = true;
            										}
HXDLIN( 167)										if (_hx_tmp) {
HXLINE( 168)											this->box->animation->play(((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)),true,null(),null());
            										}
            									}
            								}
            							}
            						}
HXLINE( 173)						this->box->animation->_curAnim->set_curFrame((this->box->animation->_curAnim->frames->length - 1));
HXLINE( 174)						this->box->animation->_curAnim->reverse();
HXLINE( 175)						this->remove(this->daText,null());
HXLINE( 176)						this->daText = null();
HXLINE( 177)						this->updateBoxOffsets();
HXLINE( 178)						{
HXLINE( 178)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 178)							 ::Dynamic To = 0;
HXDLIN( 178)							 ::Dynamic onComplete = null();
HXDLIN( 178)							if (::hx::IsNull( To )) {
HXLINE( 178)								To = 0;
            							}
HXDLIN( 178)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 178)								_this->fadeTween->cancel();
            							}
HXDLIN( 178)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),1, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
            					}
            					else {
HXLINE( 180)						this->startNextDialog();
            					}
            				}
HXLINE( 182)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 182)				_hx_tmp->play(::Paths_obj::sound(HX_("dialogueClose",80,e3,49,e3),null()),null(),null(),null(),null(),null());
            			}
            			else {
HXLINE( 183)				if (this->daText->finishedText) {
HXLINE( 184)					 ::flixel::FlxSprite _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 185)					bool _hx_tmp;
HXDLIN( 185)					bool _hx_tmp1;
HXDLIN( 185)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 185)						_hx_tmp1 = !(::StringTools_obj::endsWith(_hx_char->animation->_curAnim->name,HX_("Idle",34,d3,8c,30)));
            					}
            					else {
HXLINE( 185)						_hx_tmp1 = false;
            					}
HXDLIN( 185)					if (_hx_tmp1) {
HXLINE( 185)						_hx_tmp = (_hx_char->animation->_curAnim->curFrame >= (_hx_char->animation->_curAnim->frames->length - 1));
            					}
            					else {
HXLINE( 185)						_hx_tmp = false;
            					}
HXDLIN( 185)					if (_hx_tmp) {
HXLINE( 186)						_hx_char->animation->play((_hx_char->animation->_curAnim->name + HX_("Idle",34,d3,8c,30)),null(),null(),null());
            					}
            				}
            			}
HXLINE( 190)			if (this->box->animation->_curAnim->finished) {
HXLINE( 191)				{
HXLINE( 191)					int _g = 0;
HXDLIN( 191)					int _g1 = this->textBoxTypes->length;
HXDLIN( 191)					while((_g < _g1)){
HXLINE( 191)						_g = (_g + 1);
HXDLIN( 191)						int i = (_g - 1);
HXLINE( 192)						::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_19,2);
HXLINE( 193)						::String animName = this->box->animation->_curAnim->name;
HXLINE( 194)						{
HXLINE( 194)							int _g1 = 0;
HXDLIN( 194)							int _g2 = checkArray->length;
HXDLIN( 194)							while((_g1 < _g2)){
HXLINE( 194)								_g1 = (_g1 + 1);
HXDLIN( 194)								int j = (_g1 - 1);
HXLINE( 195)								bool _hx_tmp;
HXDLIN( 195)								if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 195)									_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            								}
            								else {
HXLINE( 195)									_hx_tmp = true;
            								}
HXDLIN( 195)								if (_hx_tmp) {
HXLINE( 196)									this->box->animation->play((checkArray->__get(j) + this->textBoxTypes->__get(i)),true,null(),null());
            								}
            							}
            						}
            					}
            				}
HXLINE( 200)				this->updateBoxOffsets();
            			}
HXLINE( 203)			bool _hx_tmp;
HXDLIN( 203)			if ((this->lastCharacter != -1)) {
HXLINE( 203)				_hx_tmp = (this->arrayCharacters->length > 0);
            			}
            			else {
HXLINE( 203)				_hx_tmp = false;
            			}
HXDLIN( 203)			if (_hx_tmp) {
HXLINE( 204)				int _g = 0;
HXDLIN( 204)				int _g1 = this->arrayCharacters->length;
HXDLIN( 204)				while((_g < _g1)){
HXLINE( 204)					_g = (_g + 1);
HXDLIN( 204)					int i = (_g - 1);
HXLINE( 205)					 ::flixel::FlxSprite _hx_char = this->arrayCharacters->__get(i).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 206)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 207)						if ((i != this->lastCharacter)) {
HXLINE( 208)							::String _hx_switch_0 = this->charPositionList->__get(this->arrayPosition->__get(i));
            							if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 213)								_hx_char->set_y((_hx_char->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 214)								if ((_hx_char->y > (::flixel::FlxG_obj::height + 50))) {
HXLINE( 214)									_hx_char->set_y(( (Float)((::flixel::FlxG_obj::height + 50)) ));
            								}
HXLINE( 212)								goto _hx_goto_13;
            							}
            							if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 210)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 211)								if ((_hx_char->x < (this->arrayStartPos->__get(i) + this->offsetPos))) {
HXLINE( 211)									_hx_char->set_x((this->arrayStartPos->__get(i) + this->offsetPos));
            								}
HXLINE( 209)								goto _hx_goto_13;
            							}
            							if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 216)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 217)								if ((_hx_char->x > (this->arrayStartPos->__get(i) - this->offsetPos))) {
HXLINE( 217)									_hx_char->set_x((this->arrayStartPos->__get(i) - this->offsetPos));
            								}
HXLINE( 215)								goto _hx_goto_13;
            							}
            							_hx_goto_13:;
HXLINE( 219)							_hx_char->set_alpha((_hx_char->alpha - (( (Float)(3) ) * elapsed)));
HXLINE( 220)							if ((_hx_char->alpha < 0)) {
HXLINE( 220)								_hx_char->set_alpha(( (Float)(0) ));
            							}
            						}
            						else {
HXLINE( 222)							::String _hx_switch_1 = this->charPositionList->__get(this->arrayPosition->__get(i));
            							if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 227)								_hx_char->set_y((_hx_char->y - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 228)								if ((_hx_char->y < this->arrayStartPos->__get(i))) {
HXLINE( 228)									_hx_char->set_y(this->arrayStartPos->__get(i));
            								}
HXLINE( 226)								goto _hx_goto_14;
            							}
            							if (  (_hx_switch_1==HX_("left",07,08,b0,47)) ){
HXLINE( 224)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 225)								if ((_hx_char->x > this->arrayStartPos->__get(i))) {
HXLINE( 225)									_hx_char->set_x(this->arrayStartPos->__get(i));
            								}
HXLINE( 223)								goto _hx_goto_14;
            							}
            							if (  (_hx_switch_1==HX_("right",dc,0b,64,e9)) ){
HXLINE( 230)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 231)								if ((_hx_char->x < this->arrayStartPos->__get(i))) {
HXLINE( 231)									_hx_char->set_x(this->arrayStartPos->__get(i));
            								}
HXLINE( 229)								goto _hx_goto_14;
            							}
            							_hx_goto_14:;
HXLINE( 233)							_hx_char->set_alpha((_hx_char->alpha + (( (Float)(3) ) * elapsed)));
HXLINE( 234)							if ((_hx_char->alpha > 1)) {
HXLINE( 234)								_hx_char->set_alpha(( (Float)(1) ));
            							}
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->box )) {
HXLINE( 240)				_hx_tmp = (this->box->animation->_curAnim->curFrame <= 0);
            			}
            			else {
HXLINE( 240)				_hx_tmp = false;
            			}
HXDLIN( 240)			if (_hx_tmp) {
HXLINE( 241)				this->remove(this->box,null());
HXLINE( 242)				this->box = null();
            			}
HXLINE( 245)			if (::hx::IsNotNull( this->bgFade )) {
HXLINE( 246)				 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 246)				fh->set_alpha((fh->alpha - (((Float)0.5) * elapsed)));
HXLINE( 247)				if ((this->bgFade->alpha <= 0)) {
HXLINE( 248)					this->remove(this->bgFade,null());
HXLINE( 249)					this->bgFade = null();
            				}
            			}
HXLINE( 253)			{
HXLINE( 253)				int _g = 0;
HXDLIN( 253)				int _g1 = this->arrayCharacters->length;
HXDLIN( 253)				while((_g < _g1)){
HXLINE( 253)					_g = (_g + 1);
HXDLIN( 253)					int i = (_g - 1);
HXLINE( 254)					 ::flixel::FlxSprite leChar = this->arrayCharacters->__get(i).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 255)					if (::hx::IsNotNull( leChar )) {
HXLINE( 256)						int _hx_tmp;
HXDLIN( 256)						if ((i == 1)) {
HXLINE( 256)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 256)							_hx_tmp = -1;
            						}
HXDLIN( 256)						leChar->set_x((leChar->x + (( (Float)((this->scrollSpeed * _hx_tmp)) ) * elapsed)));
HXLINE( 257)						leChar->set_alpha((leChar->alpha - (elapsed * ( (Float)(10) ))));
            					}
            				}
            			}
HXLINE( 261)			bool _hx_tmp1;
HXDLIN( 261)			if (::hx::IsNull( this->box )) {
HXLINE( 261)				_hx_tmp1 = ::hx::IsNull( this->bgFade );
            			}
            			else {
HXLINE( 261)				_hx_tmp1 = false;
            			}
HXDLIN( 261)			if (_hx_tmp1) {
HXLINE( 262)				{
HXLINE( 262)					int _g = 0;
HXDLIN( 262)					int _g1 = this->arrayCharacters->length;
HXDLIN( 262)					while((_g < _g1)){
HXLINE( 262)						_g = (_g + 1);
HXDLIN( 262)						int i = (_g - 1);
HXLINE( 263)						 ::flixel::FlxSprite leChar = this->arrayCharacters->__get(0).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 264)						if (::hx::IsNotNull( leChar )) {
HXLINE( 265)							this->arrayCharacters->remove(leChar);
HXLINE( 266)							this->remove(leChar,null());
            						}
            					}
            				}
HXLINE( 269)				this->finishThing();
HXLINE( 270)				this->kill();
            			}
            		}
HXLINE( 273)		this->super::update(elapsed);
            	}


void DialogueBoxPsych_obj::startNextDialog(){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_279_startNextDialog)
HXLINE( 280)		::Array< ::String > splitName = this->dialogueList->__get(this->currentText).split(HX_(":",3a,00,00,00));
HXLINE( 281)		int character = ( (int)(::Std_obj::parseInt(splitName->__get(1))) );
HXLINE( 282)		Float speed = ::Std_obj::parseFloat(splitName->__get(3));
HXLINE( 284)		::String animName = splitName->__get(4);
HXLINE( 285)		::String boxType = this->textBoxTypes->__get(0);
HXLINE( 286)		{
HXLINE( 286)			int _g = 0;
HXDLIN( 286)			int _g1 = this->textBoxTypes->length;
HXDLIN( 286)			while((_g < _g1)){
HXLINE( 286)				_g = (_g + 1);
HXDLIN( 286)				int i = (_g - 1);
HXLINE( 287)				if ((this->textBoxTypes->__get(i) == animName)) {
HXLINE( 288)					boxType = animName;
            				}
            			}
            		}
HXLINE( 292)		this->textToType = splitName->__get(5);
HXLINE( 294)		this->box->set_visible(true);
HXLINE( 296)		::String centerPrefix = HX_("",00,00,00,00);
HXLINE( 297)		if ((this->charPositionList->__get(this->arrayPosition->__get(character)) == HX_("center",d5,25,db,05))) {
HXLINE( 297)			centerPrefix = HX_("center-",b8,f4,e5,19);
            		}
HXLINE( 299)		if ((character != this->lastCharacter)) {
HXLINE( 300)			this->box->animation->play(((centerPrefix + boxType) + HX_("Open",ea,2f,8d,34)),true,null(),null());
HXLINE( 301)			this->updateBoxOffsets();
HXLINE( 302)			this->box->set_flipX((this->charPositionList->__get(this->arrayPosition->__get(character)) == HX_("left",07,08,b0,47)));
            		}
            		else {
HXLINE( 303)			if ((boxType != this->lastBoxType)) {
HXLINE( 304)				this->box->animation->play((centerPrefix + boxType),true,null(),null());
HXLINE( 305)				this->updateBoxOffsets();
            			}
            		}
HXLINE( 307)		this->lastCharacter = character;
HXLINE( 308)		this->lastBoxType = boxType;
HXLINE( 310)		if (::hx::IsNotNull( this->daText )) {
HXLINE( 311)			this->daText->killTheTimer();
HXLINE( 312)			this->remove(this->daText,null());
            		}
HXLINE( 314)		this->daText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(this->textX) ),( (Float)(this->textY) ),this->textToType,false,true,speed,((Float)0.7));
HXLINE( 315)		this->add(this->daText);
HXLINE( 317)		 ::flixel::FlxSprite _hx_char = this->arrayCharacters->__get(character).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 318)		if (::hx::IsNotNull( _hx_char )) {
HXLINE( 319)			_hx_char->animation->play(splitName->__get(2),true,null(),null());
HXLINE( 320)			Float rate = (( (Float)(24) ) - (((speed - ((Float)0.05)) / ( (Float)(5) )) * ( (Float)(480) )));
HXLINE( 321)			if ((rate < 12)) {
HXLINE( 321)				rate = ( (Float)(12) );
            			}
            			else {
HXLINE( 322)				if ((rate > 48)) {
HXLINE( 322)					rate = ( (Float)(48) );
            				}
            			}
HXLINE( 323)			_hx_char->animation->_curAnim->set_frameRate(rate);
            		}
HXLINE( 325)		this->currentText++;
HXLINE( 327)		if (::hx::IsNotNull( this->nextDialogueThing )) {
HXLINE( 328)			this->nextDialogueThing();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,startNextDialog,(void))

void DialogueBoxPsych_obj::updateBoxOffsets(){
            	HX_STACKFRAME(&_hx_pos_128129519e640548_332_updateBoxOffsets)
HXLINE( 333)		this->box->centerOffsets(null());
HXLINE( 334)		this->box->updateHitbox();
HXLINE( 335)		if (::StringTools_obj::startsWith(this->box->animation->_curAnim->name,HX_("angry",21,49,e2,22))) {
HXLINE( 336)			this->box->offset->set(50,65);
            		}
            		else {
HXLINE( 337)			if (::StringTools_obj::startsWith(this->box->animation->_curAnim->name,HX_("center-angry",69,39,92,b0))) {
HXLINE( 338)				this->box->offset->set(50,30);
            			}
            			else {
HXLINE( 340)				this->box->offset->set(10,0);
            			}
            		}
HXLINE( 343)		if (!(this->box->flipX)) {
HXLINE( 343)			 ::flixel::math::FlxPoint fh = this->box->offset;
HXDLIN( 343)			fh->set_y((fh->y + 10));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,updateBoxOffsets,(void))


::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__new(::Array< ::String > dialogueList,::String song) {
	::hx::ObjectPtr< DialogueBoxPsych_obj > __this = new DialogueBoxPsych_obj();
	__this->__construct(dialogueList,song);
	return __this;
}

::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::String > dialogueList,::String song) {
	DialogueBoxPsych_obj *__this = (DialogueBoxPsych_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBoxPsych_obj), true, "DialogueBoxPsych"));
	*(void **)__this = DialogueBoxPsych_obj::_hx_vtable;
	__this->__construct(dialogueList,song);
	return __this;
}

DialogueBoxPsych_obj::DialogueBoxPsych_obj()
{
}

void DialogueBoxPsych_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBoxPsych);
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(textToType,"textToType");
	HX_MARK_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_MARK_MEMBER_NAME(arrayStartPos,"arrayStartPos");
	HX_MARK_MEMBER_NAME(arrayPosition,"arrayPosition");
	HX_MARK_MEMBER_NAME(currentText,"currentText");
	HX_MARK_MEMBER_NAME(offsetPos,"offsetPos");
	HX_MARK_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_MARK_MEMBER_NAME(charPositionList,"charPositionList");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_MARK_MEMBER_NAME(textX,"textX");
	HX_MARK_MEMBER_NAME(textY,"textY");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(daText,"daText");
	HX_MARK_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_MARK_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBoxPsych_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(textToType,"textToType");
	HX_VISIT_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_VISIT_MEMBER_NAME(arrayStartPos,"arrayStartPos");
	HX_VISIT_MEMBER_NAME(arrayPosition,"arrayPosition");
	HX_VISIT_MEMBER_NAME(currentText,"currentText");
	HX_VISIT_MEMBER_NAME(offsetPos,"offsetPos");
	HX_VISIT_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_VISIT_MEMBER_NAME(charPositionList,"charPositionList");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_VISIT_MEMBER_NAME(textX,"textX");
	HX_VISIT_MEMBER_NAME(textY,"textY");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(daText,"daText");
	HX_VISIT_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_VISIT_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBoxPsych_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { return ::hx::Val( textX ); }
		if (HX_FIELD_EQ(inName,"textY") ) { return ::hx::Val( textY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"daText") ) { return ::hx::Val( daText ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { return ::hx::Val( offsetPos ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { return ::hx::Val( textToType ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"currentText") ) { return ::hx::Val( currentText ); }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { return ::hx::Val( lastBoxType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { return ::hx::Val( textBoxTypes ); }
		if (HX_FIELD_EQ(inName,"addCharacter") ) { return ::hx::Val( addCharacter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"arrayStartPos") ) { return ::hx::Val( arrayStartPos ); }
		if (HX_FIELD_EQ(inName,"arrayPosition") ) { return ::hx::Val( arrayPosition ); }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { return ::hx::Val( dialogueEnded ); }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { return ::hx::Val( lastCharacter ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { return ::hx::Val( arrayCharacters ); }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
		if (HX_FIELD_EQ(inName,"spawnCharacters") ) { return ::hx::Val( spawnCharacters_dyn() ); }
		if (HX_FIELD_EQ(inName,"startNextDialog") ) { return ::hx::Val( startNextDialog_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"charPositionList") ) { return ::hx::Val( charPositionList ); }
		if (HX_FIELD_EQ(inName,"updateBoxOffsets") ) { return ::hx::Val( updateBoxOffsets_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { return ::hx::Val( nextDialogueThing ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogueBoxPsych_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { textX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textY") ) { textY=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"daText") ) { daText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { offsetPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { textToType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentText") ) { currentText=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { lastBoxType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { textBoxTypes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"arrayStartPos") ) { arrayStartPos=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrayPosition") ) { arrayPosition=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { dialogueEnded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { lastCharacter=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { arrayCharacters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"charPositionList") ) { charPositionList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { nextDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogueBoxPsych_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("textToType",62,de,b2,b9));
	outFields->push(HX_("arrayCharacters",a3,23,67,53));
	outFields->push(HX_("arrayStartPos",0b,f5,d6,c4));
	outFields->push(HX_("arrayPosition",62,8b,38,4d));
	outFields->push(HX_("currentText",86,a5,8b,85));
	outFields->push(HX_("offsetPos",c1,3b,c0,41));
	outFields->push(HX_("textBoxTypes",3b,d8,65,ca));
	outFields->push(HX_("charPositionList",9d,85,5e,97));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("dialogueEnded",c2,14,61,0b));
	outFields->push(HX_("textX",0b,4b,99,0d));
	outFields->push(HX_("textY",0c,4b,99,0d));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("daText",ca,52,61,0d));
	outFields->push(HX_("lastCharacter",73,b6,0a,40));
	outFields->push(HX_("lastBoxType",af,f2,77,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBoxPsych_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBoxPsych_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,nextDialogueThing),HX_("nextDialogueThing",c3,c2,a1,d9)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,textToType),HX_("textToType",62,de,b2,b9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DialogueBoxPsych_obj,arrayCharacters),HX_("arrayCharacters",a3,23,67,53)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(DialogueBoxPsych_obj,arrayStartPos),HX_("arrayStartPos",0b,f5,d6,c4)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(DialogueBoxPsych_obj,arrayPosition),HX_("arrayPosition",62,8b,38,4d)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,currentText),HX_("currentText",86,a5,8b,85)},
	{::hx::fsFloat,(int)offsetof(DialogueBoxPsych_obj,offsetPos),HX_("offsetPos",c1,3b,c0,41)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,textBoxTypes),HX_("textBoxTypes",3b,d8,65,ca)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,charPositionList),HX_("charPositionList",9d,85,5e,97)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueEnded),HX_("dialogueEnded",c2,14,61,0b)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,textX),HX_("textX",0b,4b,99,0d)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,textY),HX_("textY",0c,4b,99,0d)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBoxPsych_obj,daText),HX_("daText",ca,52,61,0d)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,lastCharacter),HX_("lastCharacter",73,b6,0a,40)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,lastBoxType),HX_("lastBoxType",af,f2,77,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DialogueBoxPsych_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogueBoxPsych_obj_sMemberFields[] = {
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("finishThing",9b,aa,8e,36),
	HX_("nextDialogueThing",c3,c2,a1,d9),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("box",0b,be,4a,00),
	HX_("textToType",62,de,b2,b9),
	HX_("arrayCharacters",a3,23,67,53),
	HX_("arrayStartPos",0b,f5,d6,c4),
	HX_("arrayPosition",62,8b,38,4d),
	HX_("currentText",86,a5,8b,85),
	HX_("offsetPos",c1,3b,c0,41),
	HX_("textBoxTypes",3b,d8,65,ca),
	HX_("charPositionList",9d,85,5e,97),
	HX_("addCharacter",48,fd,25,41),
	HX_("dialogueStarted",09,77,22,70),
	HX_("dialogueEnded",c2,14,61,0b),
	HX_("spawnCharacters",c5,32,da,c2),
	HX_("textX",0b,4b,99,0d),
	HX_("textY",0c,4b,99,0d),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("daText",ca,52,61,0d),
	HX_("update",09,86,05,87),
	HX_("lastCharacter",73,b6,0a,40),
	HX_("lastBoxType",af,f2,77,51),
	HX_("startNextDialog",1d,3d,9f,9a),
	HX_("updateBoxOffsets",1e,ea,75,d1),
	::String(null()) };

::hx::Class DialogueBoxPsych_obj::__mClass;

void DialogueBoxPsych_obj::__register()
{
	DialogueBoxPsych_obj _hx_dummy;
	DialogueBoxPsych_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBoxPsych",88,30,b7,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBoxPsych_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBoxPsych_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBoxPsych_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

