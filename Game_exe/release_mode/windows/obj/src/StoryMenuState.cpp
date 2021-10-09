#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MenuCharacter
#include <MenuCharacter.h>
#endif
#ifndef INCLUDED_MenuItem
#include <MenuItem.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_ResetScoreSubState
#include <ResetScoreSubState.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f93022dfbe651d27_22_new,"StoryMenuState","new",0xec20accf,"StoryMenuState.new","StoryMenuState.hx",22,0xd8e12181)
static const ::String _hx_array_data_4260995d_1[] = {
	HX_("stage",be,6a,0b,84),HX_("stage",be,6a,0b,84),HX_("halloween",8d,bb,38,50),HX_("philly",28,77,5e,ef),HX_("limo",1f,17,b3,47),HX_("christmas",82,3d,f6,d3),HX_("school",74,b8,c8,40),
};
static const ::String _hx_array_data_4260995d_2[] = {
	HX_("",00,00,00,00),HX_("Daddy Dearest",10,1a,50,52),HX_("Spooky Month",4b,8f,09,84),HX_("PICO",e5,b0,18,35),HX_("MOMMY MUST MURDER",75,22,f0,98),HX_("RED SNOW",d2,d3,a0,5b),HX_("hating simulator ft. moawling",03,af,db,4f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_94_create,"StoryMenuState","create",0xac12b9ed,"StoryMenuState.create","StoryMenuState.hx",94,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_220_closeSubState,"StoryMenuState","closeSubState",0x2b9a7578,"StoryMenuState.closeSubState","StoryMenuState.hx",220,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_240_update,"StoryMenuState","update",0xb708d8fa,"StoryMenuState.update","StoryMenuState.hx",240,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_227_update,"StoryMenuState","update",0xb708d8fa,"StoryMenuState.update","StoryMenuState.hx",227,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_300_selectWeek,"StoryMenuState","selectWeek",0x4a36f481,"StoryMenuState.selectWeek","StoryMenuState.hx",300,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_333_selectWeek,"StoryMenuState","selectWeek",0x4a36f481,"StoryMenuState.selectWeek","StoryMenuState.hx",333,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_349_changeDifficulty,"StoryMenuState","changeDifficulty",0xd5c0d9fc,"StoryMenuState.changeDifficulty","StoryMenuState.hx",349,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_341_changeDifficulty,"StoryMenuState","changeDifficulty",0xd5c0d9fc,"StoryMenuState.changeDifficulty","StoryMenuState.hx",341,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_368_changeWeek,"StoryMenuState","changeWeek",0xb5e4b4f5,"StoryMenuState.changeWeek","StoryMenuState.hx",368,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_404_updateText,"StoryMenuState","updateText",0x9254d6c7,"StoryMenuState.updateText","StoryMenuState.hx",404,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_28_boot,"StoryMenuState","boot",0xa88f88e3,"StoryMenuState.boot","StoryMenuState.hx",28,0xd8e12181)
static const bool _hx_array_data_4260995d_20[] = {
	1,1,1,1,1,1,1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_74_boot,"StoryMenuState","boot",0xa88f88e3,"StoryMenuState.boot","StoryMenuState.hx",74,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_79_boot,"StoryMenuState","boot",0xa88f88e3,"StoryMenuState.boot","StoryMenuState.hx",79,0xd8e12181)

void StoryMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_22_new)
HXLINE( 365)		this->intendedScore = 0;
HXLINE( 364)		this->lerpScore = 0;
HXLINE( 296)		this->stopspamming = false;
HXLINE( 295)		this->selectedWeek = false;
HXLINE( 294)		this->movedBack = false;
HXLINE(  62)		this->weekBackground = ::Array_obj< ::String >::fromData( _hx_array_data_4260995d_1,7);
HXLINE(  51)		this->weekNames = ::Array_obj< ::String >::fromData( _hx_array_data_4260995d_2,7);
HXLINE(  40)		this->weekCharacters = ::cpp::VirtualArray_obj::__new(7)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("dad",47,36,4c,00))->init(1,HX_("bf",c4,55,00,00))->init(2,HX_("gf",1f,5a,00,00)))->init(1,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("dad",47,36,4c,00))->init(1,HX_("bf",c4,55,00,00))->init(2,HX_("gf",1f,5a,00,00)))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("spooky",eb,bd,9e,c1))->init(1,HX_("bf",c4,55,00,00))->init(2,HX_("gf",1f,5a,00,00)))->init(3,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("pico",e5,e8,57,4a))->init(1,HX_("bf",c4,55,00,00))->init(2,HX_("gf",1f,5a,00,00)))->init(4,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("mom",cb,16,53,00))->init(1,HX_("bf",c4,55,00,00))->init(2,HX_("gf",1f,5a,00,00)))->init(5,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("parents-christmas",fe,94,c5,32))->init(1,HX_("bf",c4,55,00,00))->init(2,HX_("gf",1f,5a,00,00)))->init(6,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("senpai",3c,df,8d,6b))->init(1,HX_("bf",c4,55,00,00))->init(2,HX_("gf",1f,5a,00,00)));
HXLINE(  22)		super::__construct(TransIn,TransOut);
            	}

Dynamic StoryMenuState_obj::__CreateEmpty() { return new StoryMenuState_obj; }

void *StoryMenuState_obj::_hx_vtable = 0;

Dynamic StoryMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StoryMenuState_obj > _hx_result = new StoryMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool StoryMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x244c1c1d) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x244c1c1d;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void StoryMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_94_create)
HXLINE(  95)		this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE(  96)		this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE(  98)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE( 100)		this->scoreText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,10,0,HX_("SCORE: 49324858",a3,72,f5,b2),36,null());
HXLINE( 101)		this->scoreText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,null(),null(),null(),null(),null());
HXLINE( 103)		this->txtWeekTitle =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.7)),10,0,HX_("",00,00,00,00),32,null());
HXLINE( 104)		this->txtWeekTitle->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE( 105)		this->txtWeekTitle->set_alpha(((Float)0.7));
HXLINE( 107)		 ::flixel::text::FlxText rankText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,10,null(),null(),null(),null());
HXLINE( 108)		rankText->set_text(HX_("RANK: GREAT",9b,ee,9f,70));
HXLINE( 109)		rankText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE( 110)		rankText->set_size(::Std_obj::_hx_int(( (Float)(this->scoreText->_defaultFormat->size) )));
HXLINE( 111)		rankText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 113)		::String library = null();
HXDLIN( 113)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("campaign_menu_UI_assets",fd,f3,ba,6a));
HXDLIN( 113)		bool xmlExists = false;
HXDLIN( 113)		if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 113)			xmlExists = true;
            		}
HXDLIN( 113)		 ::Dynamic ui_tex;
HXDLIN( 113)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 113)			ui_tex = imageLoaded;
            		}
            		else {
HXLINE( 113)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("campaign_menu_UI_assets",fd,f3,ba,6a));
HXDLIN( 113)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 113)				ui_tex = imageToReturn;
            			}
            			else {
HXLINE( 113)				ui_tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN( 113)		::String ui_tex1;
HXDLIN( 113)		if (xmlExists) {
HXLINE( 113)			ui_tex1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 113)			ui_tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 113)		 ::flixel::graphics::frames::FlxAtlasFrames ui_tex2 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(ui_tex,ui_tex1);
HXLINE( 114)		this->bgSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,56,null());
HXLINE( 115)		this->bgSprite->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 117)		this->grpWeekText =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 118)		this->add(this->grpWeekText);
HXLINE( 120)		 ::flixel::FlxSprite blackBarThingie =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,56,-16777216,null(),null());
HXLINE( 121)		this->add(blackBarThingie);
HXLINE( 123)		this->grpWeekCharacters =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 125)		this->grpLocks =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 126)		this->add(this->grpLocks);
HXLINE( 130)		::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE( 133)		{
HXLINE( 133)			int _g = 0;
HXDLIN( 133)			int _g1 = ::WeekData_obj::songsNames->get_length();
HXDLIN( 133)			while((_g < _g1)){
HXLINE( 133)				_g = (_g + 1);
HXDLIN( 133)				int i = (_g - 1);
HXLINE( 135)				 ::MenuItem weekThing =  ::MenuItem_obj::__alloc( HX_CTX ,( (Float)(0) ),(this->bgSprite->y + 396),i);
HXLINE( 136)				Float weekThing1 = weekThing->y;
HXDLIN( 136)				weekThing->set_y((weekThing1 + ((weekThing->get_height() + 20) * ( (Float)(i) ))));
HXLINE( 137)				weekThing->targetY = ( (Float)(i) );
HXLINE( 138)				this->grpWeekText->add(weekThing).StaticCast<  ::MenuItem >();
HXLINE( 140)				weekThing->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 141)				weekThing->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 145)				bool _hx_tmp;
HXDLIN( 145)				if ((i < ::StoryMenuState_obj::weekUnlocked->length)) {
HXLINE( 145)					_hx_tmp = !(::StoryMenuState_obj::weekUnlocked->__get(i));
            				}
            				else {
HXLINE( 145)					_hx_tmp = false;
            				}
HXDLIN( 145)				if (_hx_tmp) {
HXLINE( 147)					Float lock = (weekThing->get_width() + 10);
HXDLIN( 147)					 ::flixel::FlxSprite lock1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(lock + weekThing->x),null(),null());
HXLINE( 148)					lock1->set_frames(ui_tex2);
HXLINE( 149)					lock1->animation->addByPrefix(HX_("lock",eb,9b,b7,47),HX_("lock",eb,9b,b7,47),null(),null(),null(),null());
HXLINE( 150)					lock1->animation->play(HX_("lock",eb,9b,b7,47),null(),null(),null());
HXLINE( 151)					lock1->ID = i;
HXLINE( 152)					lock1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 153)					this->grpLocks->add(lock1).StaticCast<  ::flixel::FlxSprite >();
            				}
            			}
            		}
HXLINE( 157)		{
HXLINE( 158)			{
HXLINE( 159)				 ::MenuCharacter weekCharacterThing =  ::MenuCharacter_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) - ( (Float)(150) )),( (::String)(this->weekCharacters->__get(0)->__GetItem(0)) ));
HXLINE( 160)				weekCharacterThing->set_y((weekCharacterThing->y + 70));
HXLINE( 161)				weekCharacterThing->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 162)				this->grpWeekCharacters->add(weekCharacterThing).StaticCast<  ::MenuCharacter >();
            			}
HXLINE( 158)			{
HXLINE( 159)				 ::MenuCharacter weekCharacterThing1 =  ::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(2) )) - ( (Float)(150) )),( (::String)(this->weekCharacters->__get(0)->__GetItem(1)) ));
HXLINE( 160)				weekCharacterThing1->set_y((weekCharacterThing1->y + 70));
HXLINE( 161)				weekCharacterThing1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 162)				this->grpWeekCharacters->add(weekCharacterThing1).StaticCast<  ::MenuCharacter >();
            			}
HXLINE( 158)			{
HXLINE( 159)				 ::MenuCharacter weekCharacterThing2 =  ::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(3) )) - ( (Float)(150) )),( (::String)(this->weekCharacters->__get(0)->__GetItem(2)) ));
HXLINE( 160)				weekCharacterThing2->set_y((weekCharacterThing2->y + 70));
HXLINE( 161)				weekCharacterThing2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 162)				this->grpWeekCharacters->add(weekCharacterThing2).StaticCast<  ::MenuCharacter >();
            			}
            		}
HXLINE( 165)		this->difficultySelectors =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 166)		this->add(this->difficultySelectors);
HXLINE( 168)		Float _hx_tmp = Dynamic( this->grpWeekText->members->__get(0)).StaticCast<  ::MenuItem >()->x;
HXDLIN( 168)		Float _hx_tmp1 = ((_hx_tmp + Dynamic( this->grpWeekText->members->__get(0)).StaticCast<  ::MenuItem >()->get_width()) + 10);
HXDLIN( 168)		this->leftArrow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,_hx_tmp1,(Dynamic( this->grpWeekText->members->__get(0)).StaticCast<  ::MenuItem >()->y + 10),null());
HXLINE( 169)		this->leftArrow->set_frames(ui_tex2);
HXLINE( 170)		this->leftArrow->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow left",be,05,f8,94),null(),null(),null(),null());
HXLINE( 171)		this->leftArrow->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("arrow push left",f6,7a,62,0c),null(),null(),null(),null());
HXLINE( 172)		this->leftArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 173)		this->leftArrow->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 174)		this->difficultySelectors->add(this->leftArrow).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 176)		this->sprDifficultyGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 177)		this->add(this->sprDifficultyGroup);
HXLINE( 180)		{
HXLINE( 180)			int _g2 = 0;
HXDLIN( 180)			int _g3 = ::CoolUtil_obj::difficultyStuff->get_length();
HXDLIN( 180)			while((_g2 < _g3)){
HXLINE( 180)				_g2 = (_g2 + 1);
HXDLIN( 180)				int i = (_g2 - 1);
HXLINE( 181)				 ::flixel::FlxSprite sprDifficulty =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->leftArrow->x + 60),this->leftArrow->y,null());
HXDLIN( 181)				::String key = (HX_("menudifficulties/",b7,09,b6,65) + ::CoolUtil_obj::difficultyStuff->__get(i)->__GetItem(0)->__Field(HX_("toLowerCase",56,4c,64,b8),::hx::paccDynamic)());
HXDLIN( 181)				::String library = null();
HXDLIN( 181)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 181)				 ::Dynamic sprDifficulty1;
HXDLIN( 181)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 181)					sprDifficulty1 = imageToReturn;
            				}
            				else {
HXLINE( 181)					sprDifficulty1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN( 181)				 ::flixel::FlxSprite sprDifficulty2 = sprDifficulty->loadGraphic(sprDifficulty1,null(),null(),null(),null(),null());
HXLINE( 182)				Float sprDifficulty3 = sprDifficulty2->x;
HXDLIN( 182)				sprDifficulty2->set_x((sprDifficulty3 + ((( (Float)(308) ) - sprDifficulty2->get_width()) / ( (Float)(2) ))));
HXLINE( 183)				sprDifficulty2->ID = i;
HXLINE( 184)				sprDifficulty2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 185)				this->sprDifficultyGroup->add(sprDifficulty2).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE( 187)		this->changeDifficulty(null());
HXLINE( 189)		this->difficultySelectors->add(this->sprDifficultyGroup).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 191)		this->rightArrow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->leftArrow->x + 376),this->leftArrow->y,null());
HXLINE( 192)		this->rightArrow->set_frames(ui_tex2);
HXLINE( 193)		this->rightArrow->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow right",45,0e,1a,3b),null(),null(),null(),null());
HXLINE( 194)		this->rightArrow->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("arrow push right",0d,2a,d6,40),24,false,null(),null());
HXLINE( 195)		this->rightArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 196)		this->rightArrow->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 197)		this->difficultySelectors->add(this->rightArrow).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 199)		this->add(this->bgSprite);
HXLINE( 200)		this->add(this->grpWeekCharacters);
HXLINE( 202)		 ::flixel::FlxSprite tracksSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.07)),(this->bgSprite->y + 435),null());
HXDLIN( 202)		::String library1 = null();
HXDLIN( 202)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("Menu_Tracks",68,85,99,50));
HXDLIN( 202)		 ::Dynamic tracksSprite1;
HXDLIN( 202)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 202)			tracksSprite1 = imageToReturn;
            		}
            		else {
HXLINE( 202)			tracksSprite1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Menu_Tracks",68,85,99,50)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            		}
HXDLIN( 202)		 ::flixel::FlxSprite tracksSprite2 = tracksSprite->loadGraphic(tracksSprite1,null(),null(),null(),null(),null());
HXLINE( 203)		tracksSprite2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 204)		this->add(tracksSprite2);
HXLINE( 206)		this->txtTracklist =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.05)),(tracksSprite2->y + 60),0,HX_("",00,00,00,00),32,null());
HXLINE( 207)		this->txtTracklist->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 208)		this->txtTracklist->set_font(rankText->_font);
HXLINE( 209)		this->txtTracklist->set_color(-1747081);
HXLINE( 210)		this->add(this->txtTracklist);
HXLINE( 212)		this->add(this->scoreText);
HXLINE( 213)		this->add(this->txtWeekTitle);
HXLINE( 215)		this->changeWeek(null());
HXLINE( 217)		this->super::create();
            	}


void StoryMenuState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_220_closeSubState)
HXLINE( 221)		this->persistentUpdate = true;
HXLINE( 222)		this->changeWeek(null());
HXLINE( 223)		this->super::closeSubState();
            	}


void StoryMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::StoryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite lock){
            			HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_240_update)
HXLINE( 240)			lock->set_y(Dynamic( _gthis->grpWeekText->members->__get(lock->ID)).StaticCast<  ::MenuItem >()->y);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_227_update)
HXDLIN( 227)		 ::StoryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 229)		Float a = ( (Float)(this->lerpScore) );
HXDLIN( 229)		Float b = ( (Float)(this->intendedScore) );
HXDLIN( 229)		this->lerpScore = ::Math_obj::floor((a + (::CoolUtil_obj::boundTo((elapsed * ( (Float)(30) )),( (Float)(0) ),( (Float)(1) )) * (b - a))));
HXLINE( 230)		if ((::Math_obj::abs(( (Float)((this->intendedScore - this->lerpScore)) )) < 10)) {
HXLINE( 230)			this->lerpScore = this->intendedScore;
            		}
HXLINE( 232)		this->scoreText->set_text((HX_("WEEK SCORE:",74,77,1e,67) + this->lerpScore));
HXLINE( 236)		this->difficultySelectors->set_visible(::StoryMenuState_obj::weekUnlocked->__get(::StoryMenuState_obj::curWeek));
HXLINE( 238)		this->grpLocks->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 243)		bool _hx_tmp;
HXDLIN( 243)		if (!(this->movedBack)) {
HXLINE( 243)			_hx_tmp = !(this->selectedWeek);
            		}
            		else {
HXLINE( 243)			_hx_tmp = false;
            		}
HXDLIN( 243)		if (_hx_tmp) {
HXLINE( 245)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 247)				this->changeWeek(-1);
HXLINE( 248)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 248)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 251)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 253)				this->changeWeek(1);
HXLINE( 254)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 254)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 257)			if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 258)				this->rightArrow->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            			}
            			else {
HXLINE( 260)				this->rightArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
HXLINE( 262)			if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 263)				this->leftArrow->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            			}
            			else {
HXLINE( 265)				this->leftArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
HXLINE( 267)			if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 268)				this->changeDifficulty(1);
            			}
HXLINE( 269)			if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 270)				this->changeDifficulty(-1);
            			}
HXLINE( 272)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 274)				this->selectWeek();
            			}
            			else {
HXLINE( 276)				if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 278)					this->persistentUpdate = false;
HXLINE( 279)					this->openSubState( ::ResetScoreSubState_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),::StoryMenuState_obj::curDifficulty,HX_("",00,00,00,00),::StoryMenuState_obj::curWeek));
HXLINE( 280)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 280)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
            			}
            		}
HXLINE( 284)		bool _hx_tmp1;
HXDLIN( 284)		bool _hx_tmp2;
HXDLIN( 284)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 284)			_hx_tmp2 = !(this->movedBack);
            		}
            		else {
HXLINE( 284)			_hx_tmp2 = false;
            		}
HXDLIN( 284)		if (_hx_tmp2) {
HXLINE( 284)			_hx_tmp1 = !(this->selectedWeek);
            		}
            		else {
HXLINE( 284)			_hx_tmp1 = false;
            		}
HXDLIN( 284)		if (_hx_tmp1) {
HXLINE( 286)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 286)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 287)			this->movedBack = true;
HXLINE( 288)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 291)		this->super::update(elapsed);
            	}


void StoryMenuState_obj::selectWeek(){
            	HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_300_selectWeek)
HXDLIN( 300)		bool _hx_tmp;
HXDLIN( 300)		if ((::StoryMenuState_obj::curWeek < ::StoryMenuState_obj::weekUnlocked->length)) {
HXDLIN( 300)			_hx_tmp = ::StoryMenuState_obj::weekUnlocked->__get(::StoryMenuState_obj::curWeek);
            		}
            		else {
HXDLIN( 300)			_hx_tmp = true;
            		}
HXDLIN( 300)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_333_selectWeek)
HXLINE( 334)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true));
HXLINE( 335)				::FreeplayState_obj::destroyFreeplayVocals();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 302)			if ((this->stopspamming == false)) {
HXLINE( 304)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 304)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 306)				Dynamic( this->grpWeekText->members->__get(::StoryMenuState_obj::curWeek)).StaticCast<  ::MenuItem >()->startFlashing();
HXLINE( 307)				Dynamic( this->grpWeekCharacters->members->__get(1)).StaticCast<  ::MenuCharacter >()->animation->play(HX_("confirm",00,9d,39,10),null(),null(),null());
HXLINE( 308)				this->stopspamming = true;
            			}
HXLINE( 312)			::Array< ::String > songArray = ::Array_obj< ::String >::__new(0);
HXLINE( 313)			::cpp::VirtualArray leWeek = ( (::cpp::VirtualArray)(::WeekData_obj::songsNames->__get(::StoryMenuState_obj::curWeek)) );
HXLINE( 314)			{
HXLINE( 314)				int _g = 0;
HXDLIN( 314)				int _g1 = leWeek->get_length();
HXDLIN( 314)				while((_g < _g1)){
HXLINE( 314)					_g = (_g + 1);
HXDLIN( 314)					int i = (_g - 1);
HXLINE( 315)					songArray->push(leWeek->__get(i));
            				}
            			}
HXLINE( 319)			::PlayState_obj::storyPlaylist = songArray;
HXLINE( 320)			::PlayState_obj::isStoryMode = true;
HXLINE( 321)			this->selectedWeek = true;
HXLINE( 323)			::String diffic = ( (::String)(::CoolUtil_obj::difficultyStuff->__get(::StoryMenuState_obj::curDifficulty)->__GetItem(1)) );
HXLINE( 324)			if (::hx::IsNull( diffic )) {
HXLINE( 324)				diffic = HX_("",00,00,00,00);
            			}
HXLINE( 326)			::PlayState_obj::storyDifficulty = ::StoryMenuState_obj::curDifficulty;
HXLINE( 328)			::String _hx_tmp = (::PlayState_obj::storyPlaylist->__get(0).toLowerCase() + diffic);
HXDLIN( 328)			::PlayState_obj::SONG = ::Song_obj::loadFromJson(_hx_tmp,::PlayState_obj::storyPlaylist->__get(0).toLowerCase());
HXLINE( 329)			::PlayState_obj::storyWeek = ::StoryMenuState_obj::curWeek;
HXLINE( 330)			::PlayState_obj::campaignScore = 0;
HXLINE( 331)			::PlayState_obj::campaignMisses = 0;
HXLINE( 332)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0()),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoryMenuState_obj,selectWeek,(void))

void StoryMenuState_obj::changeDifficulty(::hx::Null< int >  __o_change){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::StoryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_349_changeDifficulty)
HXLINE( 350)			spr->set_visible(false);
HXLINE( 351)			if ((::StoryMenuState_obj::curDifficulty == spr->ID)) {
HXLINE( 352)				spr->set_visible(true);
HXLINE( 353)				spr->set_alpha(( (Float)(0) ));
HXLINE( 354)				spr->set_y((_gthis->leftArrow->y - ( (Float)(15) )));
HXLINE( 355)				::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("y",79,00,00,00),(_gthis->leftArrow->y + 15))
            					->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.07),null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_341_changeDifficulty)
HXDLIN( 341)		 ::StoryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 342)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::StoryMenuState >();
HXDLIN( 342)		::StoryMenuState_obj::curDifficulty = (::StoryMenuState_obj::curDifficulty + change);
HXLINE( 344)		if ((::StoryMenuState_obj::curDifficulty < 0)) {
HXLINE( 345)			::StoryMenuState_obj::curDifficulty = (::CoolUtil_obj::difficultyStuff->get_length() - 1);
            		}
HXLINE( 346)		if ((::StoryMenuState_obj::curDifficulty >= ::CoolUtil_obj::difficultyStuff->get_length())) {
HXLINE( 347)			::StoryMenuState_obj::curDifficulty = 0;
            		}
HXLINE( 349)		this->sprDifficultyGroup->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE( 360)		int _hx_tmp1 = ::WeekData_obj::getWeekNumber(::StoryMenuState_obj::curWeek);
HXDLIN( 360)		this->intendedScore = ::Highscore_obj::getWeekScore(_hx_tmp1,::StoryMenuState_obj::curDifficulty);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StoryMenuState_obj,changeDifficulty,(void))

void StoryMenuState_obj::changeWeek(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_368_changeWeek)
HXLINE( 369)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::StoryMenuState >();
HXDLIN( 369)		::StoryMenuState_obj::curWeek = (::StoryMenuState_obj::curWeek + change);
HXLINE( 371)		if ((::StoryMenuState_obj::curWeek >= ::WeekData_obj::songsNames->get_length())) {
HXLINE( 372)			::StoryMenuState_obj::curWeek = 0;
            		}
HXLINE( 373)		if ((::StoryMenuState_obj::curWeek < 0)) {
HXLINE( 374)			::StoryMenuState_obj::curWeek = (::WeekData_obj::songsNames->get_length() - 1);
            		}
HXLINE( 376)		::String leName = HX_("",00,00,00,00);
HXLINE( 377)		if ((::StoryMenuState_obj::curWeek < this->weekNames->length)) {
HXLINE( 378)			leName = this->weekNames->__get(::StoryMenuState_obj::curWeek);
            		}
HXLINE( 381)		 ::flixel::text::FlxText _hx_tmp1 = this->txtWeekTitle;
HXDLIN( 381)		_hx_tmp1->set_text(leName.toUpperCase());
HXLINE( 382)		 ::flixel::text::FlxText _hx_tmp2 = this->txtWeekTitle;
HXDLIN( 382)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN( 382)		_hx_tmp2->set_x((( (Float)(_hx_tmp3) ) - (this->txtWeekTitle->get_width() + 10)));
HXLINE( 384)		int bullShit = 0;
HXLINE( 386)		{
HXLINE( 386)			int _g = 0;
HXDLIN( 386)			::Array< ::Dynamic> _g1 = this->grpWeekText->members;
HXDLIN( 386)			while((_g < _g1->length)){
HXLINE( 386)				 ::MenuItem item = _g1->__get(_g).StaticCast<  ::MenuItem >();
HXDLIN( 386)				_g = (_g + 1);
HXLINE( 388)				item->targetY = ( (Float)((bullShit - ::StoryMenuState_obj::curWeek)) );
HXLINE( 389)				bool _hx_tmp;
HXDLIN( 389)				if ((item->targetY == 0)) {
HXLINE( 389)					_hx_tmp = ::StoryMenuState_obj::weekUnlocked->__get(::StoryMenuState_obj::curWeek);
            				}
            				else {
HXLINE( 389)					_hx_tmp = false;
            				}
HXDLIN( 389)				if (_hx_tmp) {
HXLINE( 390)					item->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 392)					item->set_alpha(((Float)0.6));
            				}
HXLINE( 393)				bullShit = (bullShit + 1);
            			}
            		}
HXLINE( 396)		::String assetName = this->weekBackground->__get(0);
HXLINE( 397)		if ((::StoryMenuState_obj::curWeek < this->weekBackground->length)) {
HXLINE( 397)			assetName = this->weekBackground->__get(::StoryMenuState_obj::curWeek);
            		}
HXLINE( 399)		 ::flixel::FlxSprite _hx_tmp4 = this->bgSprite;
HXDLIN( 399)		::String key = (HX_("menubackgrounds/menu_",57,51,99,49) + assetName);
HXDLIN( 399)		::String library = null();
HXDLIN( 399)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 399)		 ::Dynamic _hx_tmp5;
HXDLIN( 399)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 399)			_hx_tmp5 = imageToReturn;
            		}
            		else {
HXLINE( 399)			_hx_tmp5 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN( 399)		_hx_tmp4->loadGraphic(_hx_tmp5,null(),null(),null(),null(),null());
HXLINE( 400)		this->updateText();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StoryMenuState_obj,changeWeek,(void))

void StoryMenuState_obj::updateText(){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_404_updateText)
HXLINE( 405)		::Array< ::String > weekArray = ( (::Array< ::String >)(this->weekCharacters->__get(0)) );
HXLINE( 406)		if ((::StoryMenuState_obj::curWeek < this->weekCharacters->get_length())) {
HXLINE( 406)			weekArray = ( (::Array< ::String >)(this->weekCharacters->__get(::StoryMenuState_obj::curWeek)) );
            		}
HXLINE( 408)		{
HXLINE( 408)			int _g = 0;
HXDLIN( 408)			int _g1 = this->grpWeekCharacters->length;
HXDLIN( 408)			while((_g < _g1)){
HXLINE( 408)				_g = (_g + 1);
HXDLIN( 408)				int i = (_g - 1);
HXLINE( 409)				Dynamic( this->grpWeekCharacters->members->__get(i)).StaticCast<  ::MenuCharacter >()->changeCharacter(weekArray->__get(i));
            			}
            		}
HXLINE( 412)		::Array< ::String > stringThing = ( (::Array< ::String >)(::WeekData_obj::songsNames->__get(::StoryMenuState_obj::curWeek)) );
HXLINE( 414)		this->txtTracklist->set_text(HX_("",00,00,00,00));
HXLINE( 415)		{
HXLINE( 415)			int _g2 = 0;
HXDLIN( 415)			int _g3 = stringThing->length;
HXDLIN( 415)			while((_g2 < _g3)){
HXLINE( 415)				_g2 = (_g2 + 1);
HXDLIN( 415)				int i = (_g2 - 1);
HXLINE( 417)				 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 417)				fh->set_text((fh->text + (stringThing->__get(i) + HX_("\n",0a,00,00,00))));
            			}
            		}
HXLINE( 420)		 ::flixel::text::FlxText _hx_tmp = this->txtTracklist;
HXDLIN( 420)		_hx_tmp->set_text(::StringTools_obj::replace(this->txtTracklist->text,HX_("-",2d,00,00,00),HX_(" ",20,00,00,00)));
HXLINE( 421)		 ::flixel::text::FlxText _hx_tmp1 = this->txtTracklist;
HXDLIN( 421)		_hx_tmp1->set_text(this->txtTracklist->text.toUpperCase());
HXLINE( 423)		this->txtTracklist->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 424)		 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 424)		fh->set_x((fh->x - (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))));
HXLINE( 427)		int _hx_tmp2 = ::WeekData_obj::getWeekNumber(::StoryMenuState_obj::curWeek);
HXDLIN( 427)		this->intendedScore = ::Highscore_obj::getWeekScore(_hx_tmp2,::StoryMenuState_obj::curDifficulty);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoryMenuState_obj,updateText,(void))

::Array< bool > StoryMenuState_obj::weekUnlocked;

int StoryMenuState_obj::curDifficulty;

int StoryMenuState_obj::curWeek;


::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< StoryMenuState_obj > __this = new StoryMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	StoryMenuState_obj *__this = (StoryMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StoryMenuState_obj), true, "StoryMenuState"));
	*(void **)__this = StoryMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

StoryMenuState_obj::StoryMenuState_obj()
{
}

void StoryMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StoryMenuState);
	HX_MARK_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_MARK_MEMBER_NAME(weekNames,"weekNames");
	HX_MARK_MEMBER_NAME(weekBackground,"weekBackground");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_MARK_MEMBER_NAME(bgSprite,"bgSprite");
	HX_MARK_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_MARK_MEMBER_NAME(grpWeekText,"grpWeekText");
	HX_MARK_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_MARK_MEMBER_NAME(grpLocks,"grpLocks");
	HX_MARK_MEMBER_NAME(difficultySelectors,"difficultySelectors");
	HX_MARK_MEMBER_NAME(sprDifficultyGroup,"sprDifficultyGroup");
	HX_MARK_MEMBER_NAME(leftArrow,"leftArrow");
	HX_MARK_MEMBER_NAME(rightArrow,"rightArrow");
	HX_MARK_MEMBER_NAME(movedBack,"movedBack");
	HX_MARK_MEMBER_NAME(selectedWeek,"selectedWeek");
	HX_MARK_MEMBER_NAME(stopspamming,"stopspamming");
	HX_MARK_MEMBER_NAME(lerpScore,"lerpScore");
	HX_MARK_MEMBER_NAME(intendedScore,"intendedScore");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StoryMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_VISIT_MEMBER_NAME(weekNames,"weekNames");
	HX_VISIT_MEMBER_NAME(weekBackground,"weekBackground");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_VISIT_MEMBER_NAME(bgSprite,"bgSprite");
	HX_VISIT_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_VISIT_MEMBER_NAME(grpWeekText,"grpWeekText");
	HX_VISIT_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_VISIT_MEMBER_NAME(grpLocks,"grpLocks");
	HX_VISIT_MEMBER_NAME(difficultySelectors,"difficultySelectors");
	HX_VISIT_MEMBER_NAME(sprDifficultyGroup,"sprDifficultyGroup");
	HX_VISIT_MEMBER_NAME(leftArrow,"leftArrow");
	HX_VISIT_MEMBER_NAME(rightArrow,"rightArrow");
	HX_VISIT_MEMBER_NAME(movedBack,"movedBack");
	HX_VISIT_MEMBER_NAME(selectedWeek,"selectedWeek");
	HX_VISIT_MEMBER_NAME(stopspamming,"stopspamming");
	HX_VISIT_MEMBER_NAME(lerpScore,"lerpScore");
	HX_VISIT_MEMBER_NAME(intendedScore,"intendedScore");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StoryMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgSprite") ) { return ::hx::Val( bgSprite ); }
		if (HX_FIELD_EQ(inName,"grpLocks") ) { return ::hx::Val( grpLocks ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weekNames") ) { return ::hx::Val( weekNames ); }
		if (HX_FIELD_EQ(inName,"scoreText") ) { return ::hx::Val( scoreText ); }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { return ::hx::Val( leftArrow ); }
		if (HX_FIELD_EQ(inName,"movedBack") ) { return ::hx::Val( movedBack ); }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { return ::hx::Val( lerpScore ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightArrow") ) { return ::hx::Val( rightArrow ); }
		if (HX_FIELD_EQ(inName,"selectWeek") ) { return ::hx::Val( selectWeek_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeWeek") ) { return ::hx::Val( changeWeek_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateText") ) { return ::hx::Val( updateText_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpWeekText") ) { return ::hx::Val( grpWeekText ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { return ::hx::Val( txtWeekTitle ); }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { return ::hx::Val( txtTracklist ); }
		if (HX_FIELD_EQ(inName,"selectedWeek") ) { return ::hx::Val( selectedWeek ); }
		if (HX_FIELD_EQ(inName,"stopspamming") ) { return ::hx::Val( stopspamming ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"intendedScore") ) { return ::hx::Val( intendedScore ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { return ::hx::Val( weekCharacters ); }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { return ::hx::Val( weekBackground ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"changeDifficulty") ) { return ::hx::Val( changeDifficulty_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { return ::hx::Val( grpWeekCharacters ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sprDifficultyGroup") ) { return ::hx::Val( sprDifficultyGroup ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"difficultySelectors") ) { return ::hx::Val( difficultySelectors ); }
	}
	return super::__Field(inName,inCallProp);
}

bool StoryMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curWeek") ) { outValue = ( curWeek ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weekUnlocked") ) { outValue = ( weekUnlocked ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { outValue = ( curDifficulty ); return true; }
	}
	return false;
}

::hx::Val StoryMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bgSprite") ) { bgSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpLocks") ) { grpLocks=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weekNames") ) { weekNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { leftArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movedBack") ) { movedBack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { lerpScore=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightArrow") ) { rightArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpWeekText") ) { grpWeekText=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { txtWeekTitle=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { txtTracklist=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedWeek") ) { selectedWeek=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stopspamming") ) { stopspamming=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedScore") ) { intendedScore=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { weekCharacters=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { weekBackground=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { grpWeekCharacters=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sprDifficultyGroup") ) { sprDifficultyGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"difficultySelectors") ) { difficultySelectors=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StoryMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curWeek") ) { curWeek=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weekUnlocked") ) { weekUnlocked=ioValue.Cast< ::Array< bool > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { curDifficulty=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void StoryMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("weekCharacters",be,b5,7f,1d));
	outFields->push(HX_("weekNames",34,4b,f8,f8));
	outFields->push(HX_("weekBackground",02,f1,ce,ed));
	outFields->push(HX_("scoreText",1f,7d,bd,dc));
	outFields->push(HX_("txtWeekTitle",74,f4,3f,69));
	outFields->push(HX_("bgSprite",aa,c7,9c,98));
	outFields->push(HX_("txtTracklist",d9,6f,f5,3e));
	outFields->push(HX_("grpWeekText",c6,97,1f,d2));
	outFields->push(HX_("grpWeekCharacters",83,fc,76,59));
	outFields->push(HX_("grpLocks",03,78,f1,5b));
	outFields->push(HX_("difficultySelectors",b9,fa,53,88));
	outFields->push(HX_("sprDifficultyGroup",4f,e5,95,d1));
	outFields->push(HX_("leftArrow",42,68,6f,3a));
	outFields->push(HX_("rightArrow",4d,60,54,28));
	outFields->push(HX_("movedBack",fa,67,95,ea));
	outFields->push(HX_("selectedWeek",ef,7f,8f,df));
	outFields->push(HX_("stopspamming",e0,83,63,4e));
	outFields->push(HX_("lerpScore",5b,81,4d,e7));
	outFields->push(HX_("intendedScore",a7,fd,7c,89));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StoryMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(StoryMenuState_obj,weekCharacters),HX_("weekCharacters",be,b5,7f,1d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(StoryMenuState_obj,weekNames),HX_("weekNames",34,4b,f8,f8)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(StoryMenuState_obj,weekBackground),HX_("weekBackground",02,f1,ce,ed)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,scoreText),HX_("scoreText",1f,7d,bd,dc)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,txtWeekTitle),HX_("txtWeekTitle",74,f4,3f,69)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,bgSprite),HX_("bgSprite",aa,c7,9c,98)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(StoryMenuState_obj,txtTracklist),HX_("txtTracklist",d9,6f,f5,3e)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,grpWeekText),HX_("grpWeekText",c6,97,1f,d2)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,grpWeekCharacters),HX_("grpWeekCharacters",83,fc,76,59)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,grpLocks),HX_("grpLocks",03,78,f1,5b)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,difficultySelectors),HX_("difficultySelectors",b9,fa,53,88)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(StoryMenuState_obj,sprDifficultyGroup),HX_("sprDifficultyGroup",4f,e5,95,d1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,leftArrow),HX_("leftArrow",42,68,6f,3a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,rightArrow),HX_("rightArrow",4d,60,54,28)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,movedBack),HX_("movedBack",fa,67,95,ea)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,selectedWeek),HX_("selectedWeek",ef,7f,8f,df)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,stopspamming),HX_("stopspamming",e0,83,63,4e)},
	{::hx::fsInt,(int)offsetof(StoryMenuState_obj,lerpScore),HX_("lerpScore",5b,81,4d,e7)},
	{::hx::fsInt,(int)offsetof(StoryMenuState_obj,intendedScore),HX_("intendedScore",a7,fd,7c,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo StoryMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< bool > */ ,(void *) &StoryMenuState_obj::weekUnlocked,HX_("weekUnlocked",37,64,c4,a5)},
	{::hx::fsInt,(void *) &StoryMenuState_obj::curDifficulty,HX_("curDifficulty",db,b7,38,a7)},
	{::hx::fsInt,(void *) &StoryMenuState_obj::curWeek,HX_("curWeek",94,d1,0a,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String StoryMenuState_obj_sMemberFields[] = {
	HX_("weekCharacters",be,b5,7f,1d),
	HX_("weekNames",34,4b,f8,f8),
	HX_("weekBackground",02,f1,ce,ed),
	HX_("scoreText",1f,7d,bd,dc),
	HX_("txtWeekTitle",74,f4,3f,69),
	HX_("bgSprite",aa,c7,9c,98),
	HX_("txtTracklist",d9,6f,f5,3e),
	HX_("grpWeekText",c6,97,1f,d2),
	HX_("grpWeekCharacters",83,fc,76,59),
	HX_("grpLocks",03,78,f1,5b),
	HX_("difficultySelectors",b9,fa,53,88),
	HX_("sprDifficultyGroup",4f,e5,95,d1),
	HX_("leftArrow",42,68,6f,3a),
	HX_("rightArrow",4d,60,54,28),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("movedBack",fa,67,95,ea),
	HX_("selectedWeek",ef,7f,8f,df),
	HX_("stopspamming",e0,83,63,4e),
	HX_("selectWeek",10,d5,90,bd),
	HX_("changeDifficulty",cb,0f,40,d4),
	HX_("lerpScore",5b,81,4d,e7),
	HX_("intendedScore",a7,fd,7c,89),
	HX_("changeWeek",84,95,3e,29),
	HX_("updateText",56,b7,ae,05),
	::String(null()) };

static void StoryMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StoryMenuState_obj::weekUnlocked,"weekUnlocked");
	HX_MARK_MEMBER_NAME(StoryMenuState_obj::curDifficulty,"curDifficulty");
	HX_MARK_MEMBER_NAME(StoryMenuState_obj::curWeek,"curWeek");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StoryMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StoryMenuState_obj::weekUnlocked,"weekUnlocked");
	HX_VISIT_MEMBER_NAME(StoryMenuState_obj::curDifficulty,"curDifficulty");
	HX_VISIT_MEMBER_NAME(StoryMenuState_obj::curWeek,"curWeek");
};

#endif

::hx::Class StoryMenuState_obj::__mClass;

static ::String StoryMenuState_obj_sStaticFields[] = {
	HX_("weekUnlocked",37,64,c4,a5),
	HX_("curDifficulty",db,b7,38,a7),
	HX_("curWeek",94,d1,0a,ba),
	::String(null())
};

void StoryMenuState_obj::__register()
{
	StoryMenuState_obj _hx_dummy;
	StoryMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StoryMenuState",5d,99,60,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StoryMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &StoryMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = StoryMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StoryMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StoryMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StoryMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StoryMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StoryMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StoryMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StoryMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_28_boot)
HXDLIN(  28)		weekUnlocked = ::Array_obj< bool >::fromData( _hx_array_data_4260995d_20,7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_74_boot)
HXDLIN(  74)		curDifficulty = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_79_boot)
HXDLIN(  79)		curWeek = 0;
            	}
}

