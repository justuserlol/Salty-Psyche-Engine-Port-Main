#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
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
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
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
#ifndef INCLUDED_SongMetadata
#include <SongMetadata.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86166a84e8de7ace_22_new,"FreeplayState","new",0xc894eea3,"FreeplayState.new","FreeplayState.hx",22,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_59_create,"FreeplayState","create",0x931e5499,"FreeplayState.create","FreeplayState.hx",59,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_176_closeSubState,"FreeplayState","closeSubState",0xd27ac84c,"FreeplayState.closeSubState","FreeplayState.hx",176,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_183_addSong,"FreeplayState","addSong",0x9e966259,"FreeplayState.addSong","FreeplayState.hx",183,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_187_addWeek,"FreeplayState","addWeek",0xa1339e78,"FreeplayState.addWeek","FreeplayState.hx",187,0x0d86f62d)
static const ::String _hx_array_data_b3f26131_10[] = {
	HX_("bf",c4,55,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_204_update,"FreeplayState","update",0x9e1473a6,"FreeplayState.update","FreeplayState.hx",204,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_311_changeDiff,"FreeplayState","changeDiff",0x302511b2,"FreeplayState.changeDiff","FreeplayState.hx",311,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_330_changeSelection,"FreeplayState","changeSelection",0xbe8c8f7f,"FreeplayState.changeSelection","FreeplayState.hx",330,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_348_changeSelection,"FreeplayState","changeSelection",0xbe8c8f7f,"FreeplayState.changeSelection","FreeplayState.hx",348,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_386_positionHighscore,"FreeplayState","positionHighscore",0xe71f084a,"FreeplayState.positionHighscore","FreeplayState.hx",386,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_302_destroyFreeplayVocals,"FreeplayState","destroyFreeplayVocals",0x5af9fabb,"FreeplayState.destroyFreeplayVocals","FreeplayState.hx",302,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_25_boot,"FreeplayState","boot",0xb1d4e08f,"FreeplayState.boot","FreeplayState.hx",25,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_37_boot,"FreeplayState","boot",0xb1d4e08f,"FreeplayState.boot","FreeplayState.hx",37,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_38_boot,"FreeplayState","boot",0xb1d4e08f,"FreeplayState.boot","FreeplayState.hx",38,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_52_boot,"FreeplayState","boot",0xb1d4e08f,"FreeplayState.boot","FreeplayState.hx",52,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_202_boot,"FreeplayState","boot",0xb1d4e08f,"FreeplayState.boot","FreeplayState.hx",202,0x0d86f62d)

void FreeplayState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_22_new)
HXLINE( 201)		this->instPlaying = -1;
HXLINE(  51)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  49)		this->curPlaying = false;
HXLINE(  46)		this->intendedRating = ((Float)0);
HXLINE(  45)		this->intendedScore = 0;
HXLINE(  44)		this->lerpRating = ((Float)0);
HXLINE(  43)		this->lerpScore = 0;
HXLINE(  34)		this->songs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  22)		super::__construct(TransIn,TransOut);
            	}

Dynamic FreeplayState_obj::__CreateEmpty() { return new FreeplayState_obj; }

void *FreeplayState_obj::_hx_vtable = 0;

Dynamic FreeplayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FreeplayState_obj > _hx_result = new FreeplayState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FreeplayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f09868d) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x5f09868d;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void FreeplayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_59_create)
HXLINE(  60)		this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE(  61)		this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE(  62)		::String library = null();
HXDLIN(  62)		::Array< ::String > initSonglist = ::CoolUtil_obj::coolTextFile(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("freeplaySonglist",73,3b,dc,de)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  63)		{
HXLINE(  63)			int _g = 0;
HXDLIN(  63)			int _g1 = initSonglist->length;
HXDLIN(  63)			while((_g < _g1)){
HXLINE(  63)				_g = (_g + 1);
HXDLIN(  63)				int i = (_g - 1);
HXLINE(  65)				::Array< ::String > songArray = initSonglist->__get(i).split(HX_(":",3a,00,00,00));
HXLINE(  66)				this->addSong(songArray->__get(0),0,songArray->__get(1));
HXLINE(  67)				this->songs->__get((this->songs->length - 1)).StaticCast<  ::SongMetadata >()->color = ( (int)(::Std_obj::parseInt(songArray->__get(2))) );
            			}
            		}
HXLINE(  69)		::String library1 = null();
HXDLIN(  69)		::Array< ::String > colorsList = ::CoolUtil_obj::coolTextFile(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("freeplayColors",70,02,58,d6)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library1));
HXLINE(  70)		{
HXLINE(  70)			int _g2 = 0;
HXDLIN(  70)			int _g3 = colorsList->length;
HXDLIN(  70)			while((_g2 < _g3)){
HXLINE(  70)				_g2 = (_g2 + 1);
HXDLIN(  70)				int i = (_g2 - 1);
HXLINE(  72)				::Array< int > _hx_tmp = ::FreeplayState_obj::coolColors;
HXDLIN(  72)				_hx_tmp->push(::Std_obj::parseInt(colorsList->__get(i)));
            			}
            		}
HXLINE(  85)		::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  88)		{
HXLINE(  88)			int _g4 = 1;
HXDLIN(  88)			int _g5 = ::WeekData_obj::songsNames->get_length();
HXDLIN(  88)			while((_g4 < _g5)){
HXLINE(  88)				_g4 = (_g4 + 1);
HXDLIN(  88)				int i = (_g4 - 1);
HXLINE(  90)				if (::StoryMenuState_obj::weekUnlocked->__get(i)) {
HXLINE(  92)					this->addWeek(( (::Array< ::String >)(::WeekData_obj::songsNames->__get(i)) ),i,( (::Array< ::String >)(::FreeplayState_obj::songsHeads->__get((i - 1))) ));
            				}
            			}
            		}
HXLINE(  99)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  99)		::String library2 = null();
HXDLIN(  99)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  99)		 ::Dynamic _hx_tmp1;
HXDLIN(  99)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  99)			_hx_tmp1 = imageToReturn;
            		}
            		else {
HXLINE(  99)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
            		}
HXDLIN(  99)		this->bg = _hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE( 100)		this->add(this->bg);
HXLINE( 102)		this->grpSongs =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 103)		this->add(this->grpSongs);
HXLINE( 105)		{
HXLINE( 105)			int _g6 = 0;
HXDLIN( 105)			int _g7 = this->songs->length;
HXDLIN( 105)			while((_g6 < _g7)){
HXLINE( 105)				_g6 = (_g6 + 1);
HXDLIN( 105)				int i = (_g6 - 1);
HXLINE( 107)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->songs->__get(i).StaticCast<  ::SongMetadata >()->songName,true,false,null(),null());
HXLINE( 108)				songText->isMenuItem = true;
HXLINE( 109)				songText->targetY = ( (Float)(i) );
HXLINE( 110)				this->grpSongs->add(songText).StaticCast<  ::Alphabet >();
HXLINE( 112)				 ::HealthIcon icon =  ::HealthIcon_obj::__alloc( HX_CTX ,this->songs->__get(i).StaticCast<  ::SongMetadata >()->songCharacter,null());
HXLINE( 113)				icon->sprTracker = songText;
HXLINE( 116)				this->iconArray->push(icon);
HXLINE( 117)				this->add(icon);
            			}
            		}
HXLINE( 124)		this->scoreText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.7)),5,0,HX_("",00,00,00,00),32,null());
HXLINE( 125)		this->scoreText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE( 127)		this->scoreBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->scoreText->x - ( (Float)(6) )),0,null())->makeGraphic(1,66,-16777216,null(),null());
HXLINE( 128)		this->scoreBG->set_alpha(((Float)0.6));
HXLINE( 129)		this->add(this->scoreBG);
HXLINE( 131)		this->diffText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->scoreText->x,(this->scoreText->y + 36),0,HX_("",00,00,00,00),24,null());
HXLINE( 132)		this->diffText->set_font(this->scoreText->_font);
HXLINE( 133)		this->add(this->diffText);
HXLINE( 135)		this->add(this->scoreText);
HXLINE( 137)		this->bg->set_color(this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->color);
HXLINE( 138)		this->intendedColor = this->bg->color;
HXLINE( 139)		this->changeSelection(null());
HXLINE( 140)		this->changeDiff(null());
HXLINE( 142)		 ::Alphabet swag =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),HX_("swag",8a,2a,5e,4c),null(),null(),null(),null());
HXLINE( 161)		 ::flixel::FlxSprite textBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 26),null())->makeGraphic(::flixel::FlxG_obj::width,26,-16777216,null(),null());
HXLINE( 162)		textBG->set_alpha(((Float)0.6));
HXLINE( 163)		this->add(textBG);
HXLINE( 165)		::String leText = HX_("Press SPACE to listen to this Song / Press RESET to Reset your Score and Accuracy.",a5,1d,81,bc);
HXLINE( 169)		 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,textBG->x,(textBG->y + 4),::flixel::FlxG_obj::width,leText,18,null());
HXLINE( 170)		text->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),18,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE( 171)		text->scrollFactor->set(null(),null());
HXLINE( 172)		this->add(text);
HXLINE( 173)		this->super::create();
            	}


void FreeplayState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_176_closeSubState)
HXLINE( 177)		this->changeSelection(null());
HXLINE( 178)		this->super::closeSubState();
            	}


void FreeplayState_obj::addSong(::String songName,int weekNum,::String songCharacter){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_183_addSong)
HXDLIN( 183)		::Array< ::Dynamic> _hx_tmp = this->songs;
HXDLIN( 183)		_hx_tmp->push( ::SongMetadata_obj::__alloc( HX_CTX ,songName,weekNum,songCharacter));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FreeplayState_obj,addSong,(void))

void FreeplayState_obj::addWeek(::Array< ::String > songs,int weekNum,::Array< ::String > songCharacters){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_187_addWeek)
HXLINE( 188)		if (::hx::IsNull( songCharacters )) {
HXLINE( 189)			songCharacters = ::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_10,1);
            		}
HXLINE( 191)		int num = 0;
HXLINE( 192)		{
HXLINE( 192)			int _g = 0;
HXDLIN( 192)			while((_g < songs->length)){
HXLINE( 192)				::String song = songs->__get(_g);
HXDLIN( 192)				_g = (_g + 1);
HXLINE( 194)				this->addSong(song,weekNum,songCharacters->__get(num));
HXLINE( 196)				if ((songCharacters->length != 1)) {
HXLINE( 197)					num = (num + 1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FreeplayState_obj,addWeek,(void))

void FreeplayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_204_update)
HXLINE( 205)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 207)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 207)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 210)		Float a = ( (Float)(this->lerpScore) );
HXDLIN( 210)		Float b = ( (Float)(this->intendedScore) );
HXDLIN( 210)		this->lerpScore = ::Math_obj::floor((a + (::CoolUtil_obj::boundTo((elapsed * ( (Float)(24) )),( (Float)(0) ),( (Float)(1) )) * (b - a))));
HXLINE( 211)		Float a1 = this->lerpRating;
HXDLIN( 211)		Float b1 = this->intendedRating;
HXDLIN( 211)		this->lerpRating = (a1 + (::CoolUtil_obj::boundTo((elapsed * ( (Float)(12) )),( (Float)(0) ),( (Float)(1) )) * (b1 - a1)));
HXLINE( 213)		if ((::Math_obj::abs(( (Float)((this->lerpScore - this->intendedScore)) )) <= 10)) {
HXLINE( 214)			this->lerpScore = this->intendedScore;
            		}
HXLINE( 215)		if ((::Math_obj::abs((this->lerpRating - this->intendedRating)) <= ((Float)0.01))) {
HXLINE( 216)			this->lerpRating = this->intendedRating;
            		}
HXLINE( 218)		this->scoreText->set_text(((((HX_("PERSONAL BEST: ",2a,a1,aa,1d) + this->lerpScore) + HX_(" (",08,1c,00,00)) + ::Math_obj::floor((this->lerpRating * ( (Float)(100) )))) + HX_("%)",64,20,00,00)));
HXLINE( 219)		this->positionHighscore();
HXLINE( 221)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 222)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 223)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 224)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 224)		bool space = _this->keyManager->checkStatus(32,_this->status);
HXLINE( 226)		if (upP) {
HXLINE( 228)			this->changeSelection(-1);
            		}
HXLINE( 230)		if (downP) {
HXLINE( 232)			this->changeSelection(1);
            		}
HXLINE( 235)		if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 236)			this->changeDiff(-1);
            		}
HXLINE( 237)		if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 238)			this->changeDiff(1);
            		}
HXLINE( 240)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 242)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 243)				this->colorTween->cancel();
            			}
HXLINE( 245)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 245)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 246)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 250)		bool _hx_tmp;
HXDLIN( 250)		if (space) {
HXLINE( 250)			_hx_tmp = (this->instPlaying != ::FreeplayState_obj::curSelected);
            		}
            		else {
HXLINE( 250)			_hx_tmp = false;
            		}
HXDLIN( 250)		if (_hx_tmp) {
HXLINE( 252)			::FreeplayState_obj::destroyFreeplayVocals();
HXLINE( 253)			::String poop = this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase();
HXDLIN( 253)			::String poop1 = ::Highscore_obj::formatSong(poop,::FreeplayState_obj::curDifficulty);
HXLINE( 254)			::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop1,this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase());
HXLINE( 255)			if (( (bool)(::PlayState_obj::SONG->__Field(HX_("needsVoices",be,05,e9,0d),::hx::paccDynamic)) )) {
HXLINE( 256)				 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN( 256)				::FreeplayState_obj::vocals = _hx_tmp->loadEmbedded((((HX_("songs:assets/songs/",c1,ed,e6,7e) + ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase()) + HX_("/Voices.",1e,f6,e5,90)) + HX_("ogg",4f,94,54,00)),null(),null(),null());
            			}
            			else {
HXLINE( 258)				::FreeplayState_obj::vocals =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
            			}
HXLINE( 260)			::flixel::FlxG_obj::sound->list->add(::FreeplayState_obj::vocals).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE( 261)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 261)			_hx_tmp->playMusic((((HX_("songs:assets/songs/",c1,ed,e6,7e) + ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00)),((Float)0.7),null(),null());
HXLINE( 262)			::FreeplayState_obj::vocals->play(null(),null(),null());
HXLINE( 263)			::FreeplayState_obj::vocals->persist = true;
HXLINE( 264)			::FreeplayState_obj::vocals->looped = true;
HXLINE( 265)			::FreeplayState_obj::vocals->set_volume(((Float)0.7));
HXLINE( 266)			this->instPlaying = ::FreeplayState_obj::curSelected;
            		}
            		else {
HXLINE( 268)			if (accepted) {
HXLINE( 270)				::String songLowercase = this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase();
HXLINE( 271)				::String poop = ::Highscore_obj::formatSong(songLowercase,::FreeplayState_obj::curDifficulty);
HXLINE( 272)				::String library = null();
HXDLIN( 272)				if (!(::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + ((songLowercase + HX_("/",2f,00,00,00)) + poop)) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library),null()))) {
HXLINE( 273)					poop = songLowercase;
HXLINE( 274)					::FreeplayState_obj::curDifficulty = 1;
HXLINE( 275)					::haxe::Log_obj::trace(HX_("Couldnt find file",ca,cf,b2,d5),::hx::SourceInfo(HX_("source/FreeplayState.hx",21,2d,b0,ce),275,HX_("FreeplayState",31,61,f2,b3),HX_("update",09,86,05,87)));
            				}
HXLINE( 277)				::haxe::Log_obj::trace(poop,::hx::SourceInfo(HX_("source/FreeplayState.hx",21,2d,b0,ce),277,HX_("FreeplayState",31,61,f2,b3),HX_("update",09,86,05,87)));
HXLINE( 279)				::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop,songLowercase);
HXLINE( 280)				::PlayState_obj::isStoryMode = false;
HXLINE( 281)				::PlayState_obj::storyDifficulty = ::FreeplayState_obj::curDifficulty;
HXLINE( 283)				::PlayState_obj::storyWeek = this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->week;
HXLINE( 284)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 284)				::String _hx_tmp1 = (HX_("CURRENT WEEK: ",c1,cc,39,35) + ::WeekData_obj::getCurrentWeekNumber());
HXDLIN( 284)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/FreeplayState.hx",21,2d,b0,ce),284,HX_("FreeplayState",31,61,f2,b3),HX_("update",09,86,05,87)));
HXLINE( 285)				if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 286)					this->colorTween->cancel();
            				}
HXLINE( 288)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXLINE( 290)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 292)				::FreeplayState_obj::destroyFreeplayVocals();
            			}
            			else {
HXLINE( 294)				if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 296)					this->openSubState( ::ResetScoreSubState_obj::__alloc( HX_CTX ,this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->songName,::FreeplayState_obj::curDifficulty,this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->songCharacter,null()));
HXLINE( 297)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 297)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
            			}
            		}
HXLINE( 299)		this->super::update(elapsed);
            	}


void FreeplayState_obj::changeDiff(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_311_changeDiff)
HXLINE( 312)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::FreeplayState >();
HXDLIN( 312)		::FreeplayState_obj::curDifficulty = (::FreeplayState_obj::curDifficulty + change);
HXLINE( 314)		if ((::FreeplayState_obj::curDifficulty < 0)) {
HXLINE( 315)			::FreeplayState_obj::curDifficulty = (::CoolUtil_obj::difficultyStuff->get_length() - 1);
            		}
HXLINE( 316)		if ((::FreeplayState_obj::curDifficulty >= ::CoolUtil_obj::difficultyStuff->get_length())) {
HXLINE( 317)			::FreeplayState_obj::curDifficulty = 0;
            		}
HXLINE( 320)		this->intendedScore = ::Highscore_obj::getScore(this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->songName,::FreeplayState_obj::curDifficulty);
HXLINE( 321)		this->intendedRating = ::Highscore_obj::getRating(this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->songName,::FreeplayState_obj::curDifficulty);
HXLINE( 324)		::PlayState_obj::storyDifficulty = ::FreeplayState_obj::curDifficulty;
HXLINE( 325)		 ::flixel::text::FlxText _hx_tmp1 = this->diffText;
HXDLIN( 325)		_hx_tmp1->set_text(((HX_("< ",64,34,00,00) + ::CoolUtil_obj::difficultyString()) + HX_(" >",1e,1c,00,00)));
HXLINE( 326)		this->positionHighscore();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FreeplayState_obj,changeDiff,(void))

void FreeplayState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_330_changeSelection)
HXDLIN( 330)		 ::FreeplayState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 331)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 331)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 333)		 ::Dynamic _hx_tmp1 = ::hx::ClassOf< ::FreeplayState >();
HXDLIN( 333)		::FreeplayState_obj::curSelected = (::FreeplayState_obj::curSelected + change);
HXLINE( 335)		if ((::FreeplayState_obj::curSelected < 0)) {
HXLINE( 336)			::FreeplayState_obj::curSelected = (this->songs->length - 1);
            		}
HXLINE( 337)		if ((::FreeplayState_obj::curSelected >= this->songs->length)) {
HXLINE( 338)			::FreeplayState_obj::curSelected = 0;
            		}
HXLINE( 340)		int newColor = this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->color;
HXLINE( 341)		if ((newColor != this->intendedColor)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::FreeplayState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_348_changeSelection)
HXLINE( 348)				_gthis->colorTween = null();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 342)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 343)				this->colorTween->cancel();
            			}
HXLINE( 345)			this->intendedColor = newColor;
HXLINE( 346)			this->colorTween = ::flixel::tweens::FlxTween_obj::color(this->bg,1,this->bg->color,this->intendedColor, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
HXLINE( 356)		this->intendedScore = ::Highscore_obj::getScore(this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->songName,::FreeplayState_obj::curDifficulty);
HXLINE( 357)		this->intendedRating = ::Highscore_obj::getRating(this->songs->__get(::FreeplayState_obj::curSelected).StaticCast<  ::SongMetadata >()->songName,::FreeplayState_obj::curDifficulty);
HXLINE( 360)		int bullShit = 0;
HXLINE( 362)		{
HXLINE( 362)			int _g = 0;
HXDLIN( 362)			int _g1 = this->iconArray->length;
HXDLIN( 362)			while((_g < _g1)){
HXLINE( 362)				_g = (_g + 1);
HXDLIN( 362)				int i = (_g - 1);
HXLINE( 364)				this->iconArray->__get(i).StaticCast<  ::HealthIcon >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 367)		this->iconArray->__get(::FreeplayState_obj::curSelected).StaticCast<  ::HealthIcon >()->set_alpha(( (Float)(1) ));
HXLINE( 369)		{
HXLINE( 369)			int _g2 = 0;
HXDLIN( 369)			::Array< ::Dynamic> _g3 = this->grpSongs->members;
HXDLIN( 369)			while((_g2 < _g3->length)){
HXLINE( 369)				 ::Alphabet item = _g3->__get(_g2).StaticCast<  ::Alphabet >();
HXDLIN( 369)				_g2 = (_g2 + 1);
HXLINE( 371)				item->targetY = ( (Float)((bullShit - ::FreeplayState_obj::curSelected)) );
HXLINE( 372)				bullShit = (bullShit + 1);
HXLINE( 374)				item->set_alpha(((Float)0.6));
HXLINE( 377)				if ((item->targetY == 0)) {
HXLINE( 379)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 383)		this->changeDiff(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FreeplayState_obj,changeSelection,(void))

void FreeplayState_obj::positionHighscore(){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_386_positionHighscore)
HXLINE( 387)		 ::flixel::text::FlxText _hx_tmp = this->scoreText;
HXDLIN( 387)		int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN( 387)		_hx_tmp->set_x(((( (Float)(_hx_tmp1) ) - this->scoreText->get_width()) - ( (Float)(6) )));
HXLINE( 389)		this->scoreBG->scale->set_x(((( (Float)(::flixel::FlxG_obj::width) ) - this->scoreText->x) + 6));
HXLINE( 390)		this->scoreBG->set_x((( (Float)(::flixel::FlxG_obj::width) ) - (this->scoreBG->scale->x / ( (Float)(2) ))));
HXLINE( 391)		 ::flixel::text::FlxText _hx_tmp2 = this->diffText;
HXDLIN( 391)		Float _hx_tmp3 = this->scoreBG->x;
HXDLIN( 391)		_hx_tmp2->set_x(( (Float)(::Std_obj::_hx_int((_hx_tmp3 + (this->scoreBG->get_width() / ( (Float)(2) ))))) ));
HXLINE( 392)		 ::flixel::text::FlxText fh = this->diffText;
HXDLIN( 392)		Float fh1 = fh->x;
HXDLIN( 392)		fh->set_x((fh1 - (this->diffText->get_width() / ( (Float)(2) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FreeplayState_obj,positionHighscore,(void))

::cpp::VirtualArray FreeplayState_obj::songsHeads;

int FreeplayState_obj::curSelected;

int FreeplayState_obj::curDifficulty;

::Array< int > FreeplayState_obj::coolColors;

 ::flixel::_hx_system::FlxSound FreeplayState_obj::vocals;

void FreeplayState_obj::destroyFreeplayVocals(){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_302_destroyFreeplayVocals)
HXLINE( 303)		if (::hx::IsNotNull( ::FreeplayState_obj::vocals )) {
HXLINE( 304)			{
HXLINE( 304)				 ::flixel::_hx_system::FlxSound _this = ::FreeplayState_obj::vocals;
HXDLIN( 304)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 305)			::FreeplayState_obj::vocals->destroy();
            		}
HXLINE( 307)		::FreeplayState_obj::vocals = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FreeplayState_obj,destroyFreeplayVocals,(void))


::hx::ObjectPtr< FreeplayState_obj > FreeplayState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FreeplayState_obj > __this = new FreeplayState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FreeplayState_obj > FreeplayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FreeplayState_obj *__this = (FreeplayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FreeplayState_obj), true, "FreeplayState"));
	*(void **)__this = FreeplayState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FreeplayState_obj::FreeplayState_obj()
{
}

void FreeplayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FreeplayState);
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(scoreBG,"scoreBG");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(diffText,"diffText");
	HX_MARK_MEMBER_NAME(lerpScore,"lerpScore");
	HX_MARK_MEMBER_NAME(lerpRating,"lerpRating");
	HX_MARK_MEMBER_NAME(intendedScore,"intendedScore");
	HX_MARK_MEMBER_NAME(intendedRating,"intendedRating");
	HX_MARK_MEMBER_NAME(grpSongs,"grpSongs");
	HX_MARK_MEMBER_NAME(curPlaying,"curPlaying");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(intendedColor,"intendedColor");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	HX_MARK_MEMBER_NAME(instPlaying,"instPlaying");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FreeplayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(scoreBG,"scoreBG");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(diffText,"diffText");
	HX_VISIT_MEMBER_NAME(lerpScore,"lerpScore");
	HX_VISIT_MEMBER_NAME(lerpRating,"lerpRating");
	HX_VISIT_MEMBER_NAME(intendedScore,"intendedScore");
	HX_VISIT_MEMBER_NAME(intendedRating,"intendedRating");
	HX_VISIT_MEMBER_NAME(grpSongs,"grpSongs");
	HX_VISIT_MEMBER_NAME(curPlaying,"curPlaying");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(intendedColor,"intendedColor");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	HX_VISIT_MEMBER_NAME(instPlaying,"instPlaying");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FreeplayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scoreBG") ) { return ::hx::Val( scoreBG ); }
		if (HX_FIELD_EQ(inName,"addSong") ) { return ::hx::Val( addSong_dyn() ); }
		if (HX_FIELD_EQ(inName,"addWeek") ) { return ::hx::Val( addWeek_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		if (HX_FIELD_EQ(inName,"diffText") ) { return ::hx::Val( diffText ); }
		if (HX_FIELD_EQ(inName,"grpSongs") ) { return ::hx::Val( grpSongs ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return ::hx::Val( scoreText ); }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { return ::hx::Val( lerpScore ); }
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lerpRating") ) { return ::hx::Val( lerpRating ); }
		if (HX_FIELD_EQ(inName,"curPlaying") ) { return ::hx::Val( curPlaying ); }
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		if (HX_FIELD_EQ(inName,"changeDiff") ) { return ::hx::Val( changeDiff_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instPlaying") ) { return ::hx::Val( instPlaying ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedScore") ) { return ::hx::Val( intendedScore ); }
		if (HX_FIELD_EQ(inName,"intendedColor") ) { return ::hx::Val( intendedColor ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"intendedRating") ) { return ::hx::Val( intendedRating ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"positionHighscore") ) { return ::hx::Val( positionHighscore_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FreeplayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vocals") ) { outValue = ( vocals ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"songsHeads") ) { outValue = ( songsHeads ); return true; }
		if (HX_FIELD_EQ(inName,"coolColors") ) { outValue = ( coolColors ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { outValue = ( curDifficulty ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"destroyFreeplayVocals") ) { outValue = destroyFreeplayVocals_dyn(); return true; }
	}
	return false;
}

::hx::Val FreeplayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scoreBG") ) { scoreBG=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffText") ) { diffText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpSongs") ) { grpSongs=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { lerpScore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lerpRating") ) { lerpRating=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curPlaying") ) { curPlaying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instPlaying") ) { instPlaying=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedScore") ) { intendedScore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intendedColor") ) { intendedColor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"intendedRating") ) { intendedRating=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FreeplayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vocals") ) { vocals=ioValue.Cast<  ::flixel::_hx_system::FlxSound >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"songsHeads") ) { songsHeads=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
		if (HX_FIELD_EQ(inName,"coolColors") ) { coolColors=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { curDifficulty=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FreeplayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("scoreBG",97,a5,9a,78));
	outFields->push(HX_("scoreText",1f,7d,bd,dc));
	outFields->push(HX_("diffText",52,3b,1b,21));
	outFields->push(HX_("lerpScore",5b,81,4d,e7));
	outFields->push(HX_("lerpRating",f4,6d,a2,f2));
	outFields->push(HX_("intendedScore",a7,fd,7c,89));
	outFields->push(HX_("intendedRating",28,b4,ff,39));
	outFields->push(HX_("grpSongs",d9,dc,c7,63));
	outFields->push(HX_("curPlaying",ce,61,01,95));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("intendedColor",b8,fb,ff,5a));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	outFields->push(HX_("instPlaying",48,98,f0,7f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FreeplayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FreeplayState_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FreeplayState_obj,scoreBG),HX_("scoreBG",97,a5,9a,78)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,scoreText),HX_("scoreText",1f,7d,bd,dc)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,diffText),HX_("diffText",52,3b,1b,21)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,lerpScore),HX_("lerpScore",5b,81,4d,e7)},
	{::hx::fsFloat,(int)offsetof(FreeplayState_obj,lerpRating),HX_("lerpRating",f4,6d,a2,f2)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,intendedScore),HX_("intendedScore",a7,fd,7c,89)},
	{::hx::fsFloat,(int)offsetof(FreeplayState_obj,intendedRating),HX_("intendedRating",28,b4,ff,39)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(FreeplayState_obj,grpSongs),HX_("grpSongs",d9,dc,c7,63)},
	{::hx::fsBool,(int)offsetof(FreeplayState_obj,curPlaying),HX_("curPlaying",ce,61,01,95)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FreeplayState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FreeplayState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,intendedColor),HX_("intendedColor",b8,fb,ff,5a)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(FreeplayState_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,instPlaying),HX_("instPlaying",48,98,f0,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FreeplayState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &FreeplayState_obj::songsHeads,HX_("songsHeads",75,f3,e0,d9)},
	{::hx::fsInt,(void *) &FreeplayState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(void *) &FreeplayState_obj::curDifficulty,HX_("curDifficulty",db,b7,38,a7)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &FreeplayState_obj::coolColors,HX_("coolColors",59,b1,81,26)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(void *) &FreeplayState_obj::vocals,HX_("vocals",5e,10,51,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FreeplayState_obj_sMemberFields[] = {
	HX_("songs",fe,36,c7,80),
	HX_("selector",1f,33,6d,b1),
	HX_("scoreBG",97,a5,9a,78),
	HX_("scoreText",1f,7d,bd,dc),
	HX_("diffText",52,3b,1b,21),
	HX_("lerpScore",5b,81,4d,e7),
	HX_("lerpRating",f4,6d,a2,f2),
	HX_("intendedScore",a7,fd,7c,89),
	HX_("intendedRating",28,b4,ff,39),
	HX_("grpSongs",d9,dc,c7,63),
	HX_("curPlaying",ce,61,01,95),
	HX_("iconArray",60,3f,53,5f),
	HX_("bg",c5,55,00,00),
	HX_("intendedColor",b8,fb,ff,5a),
	HX_("colorTween",08,c2,dc,3d),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("addSong",96,66,95,88),
	HX_("addWeek",b5,a2,32,8b),
	HX_("instPlaying",48,98,f0,7f),
	HX_("update",09,86,05,87),
	HX_("changeDiff",95,91,b2,1c),
	HX_("changeSelection",bc,98,b5,48),
	HX_("positionHighscore",c7,9a,8a,14),
	::String(null()) };

static void FreeplayState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FreeplayState_obj::songsHeads,"songsHeads");
	HX_MARK_MEMBER_NAME(FreeplayState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(FreeplayState_obj::curDifficulty,"curDifficulty");
	HX_MARK_MEMBER_NAME(FreeplayState_obj::coolColors,"coolColors");
	HX_MARK_MEMBER_NAME(FreeplayState_obj::vocals,"vocals");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FreeplayState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FreeplayState_obj::songsHeads,"songsHeads");
	HX_VISIT_MEMBER_NAME(FreeplayState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(FreeplayState_obj::curDifficulty,"curDifficulty");
	HX_VISIT_MEMBER_NAME(FreeplayState_obj::coolColors,"coolColors");
	HX_VISIT_MEMBER_NAME(FreeplayState_obj::vocals,"vocals");
};

#endif

::hx::Class FreeplayState_obj::__mClass;

static ::String FreeplayState_obj_sStaticFields[] = {
	HX_("songsHeads",75,f3,e0,d9),
	HX_("curSelected",fb,eb,ab,32),
	HX_("curDifficulty",db,b7,38,a7),
	HX_("coolColors",59,b1,81,26),
	HX_("vocals",5e,10,51,59),
	HX_("destroyFreeplayVocals",b8,0f,ad,93),
	::String(null())
};

void FreeplayState_obj::__register()
{
	FreeplayState_obj _hx_dummy;
	FreeplayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FreeplayState",31,61,f2,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FreeplayState_obj::__GetStatic;
	__mClass->mSetStaticField = &FreeplayState_obj::__SetStatic;
	__mClass->mMarkFunc = FreeplayState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FreeplayState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FreeplayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FreeplayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FreeplayState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FreeplayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FreeplayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FreeplayState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_25_boot)
HXDLIN(  25)		songsHeads = ::cpp::VirtualArray_obj::__new(6)->init(0,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("dad",47,36,4c,00)))->init(1,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("spooky",eb,bd,9e,c1))->init(1,HX_("spooky",eb,bd,9e,c1))->init(2,HX_("monster",1a,54,b0,b8)))->init(2,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("pico",e5,e8,57,4a)))->init(3,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("mom",cb,16,53,00)))->init(4,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("parents",09,80,c6,e0))->init(1,HX_("parents",09,80,c6,e0))->init(2,HX_("monster",1a,54,b0,b8)))->init(5,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("senpai",3c,df,8d,6b))->init(1,HX_("senpai",3c,df,8d,6b))->init(2,HX_("spirit",31,bb,a9,bd)));
            	}
{
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_37_boot)
HXDLIN(  37)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_38_boot)
HXDLIN(  38)		curDifficulty = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_52_boot)
HXDLIN(  52)		coolColors = ::Array_obj< int >::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_202_boot)
HXDLIN( 202)		vocals = null();
            	}
}

