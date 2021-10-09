#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
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
#ifndef INCLUDED_PauseSubState
#include <PauseSubState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17d383cbce329512_16_new,"PauseSubState","new",0x00d575d9,"PauseSubState.new","PauseSubState.hx",16,0x953dc7b7)
static const ::String _hx_array_data_08e59567_3[] = {
	HX_("Resumir",81,39,a9,38),HX_("Reniciar",e5,22,35,6c),HX_("Mudar Dificuldade",bd,ea,ad,93),HX_("Modo Praticando",9a,41,08,dd),HX_("Robo Jogando",64,ef,c6,1e),HX_("Sair Para o Menu",a7,7d,59,1a),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_118_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",118,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_193_destroy,"PauseSubState","destroy",0xc2ba82f3,"PauseSubState.destroy","PauseSubState.hx",193,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_200_changeSelection,"PauseSubState","changeSelection",0x8f960fb5,"PauseSubState.changeSelection","PauseSubState.hx",200,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_228_regenMenu,"PauseSubState","regenMenu",0xfb4cc935,"PauseSubState.regenMenu","PauseSubState.hx",228,0x953dc7b7)

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_16_new)
HXLINE(  23)		this->curSelected = 0;
HXLINE(  22)		this->difficultyChoices = ::Array_obj< ::String >::__new(0);
HXLINE(  21)		this->menuItemsOG = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_3,6);
HXLINE(  20)		this->menuItems = ::Array_obj< ::String >::__new(0);
HXLINE(  31)		super::__construct();
HXLINE(  32)		this->menuItems = this->menuItemsOG;
HXLINE(  34)		{
HXLINE(  34)			int _g = 0;
HXDLIN(  34)			int _g1 = ::CoolUtil_obj::difficultyStuff->get_length();
HXDLIN(  34)			while((_g < _g1)){
HXLINE(  34)				_g = (_g + 1);
HXDLIN(  34)				int i = (_g - 1);
HXLINE(  35)				::String diff = (HX_("",00,00,00,00) + ::CoolUtil_obj::difficultyStuff->__get(i)->__GetItem(0));
HXLINE(  36)				this->difficultyChoices->push(diff);
            			}
            		}
HXLINE(  38)		this->difficultyChoices->push(HX_("BACK",27,a2,d1,2b));
HXLINE(  40)		 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  40)		::String library = null();
HXDLIN(  40)		this->pauseMusic = _hx_tmp->loadEmbedded(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),true,true,null());
HXLINE(  41)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  42)		 ::flixel::_hx_system::FlxSound _hx_tmp1 = this->pauseMusic;
HXDLIN(  42)		 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  42)		_hx_tmp1->play(false,_hx_tmp2->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  44)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  46)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  47)		bg->set_alpha(( (Float)(0) ));
HXLINE(  48)		bg->scrollFactor->set(null(),null());
HXLINE(  49)		this->add(bg);
HXLINE(  51)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  52)		levelInfo->set_text((levelInfo->text + ::PlayState_obj::displaySongName));
HXLINE(  53)		levelInfo->scrollFactor->set(null(),null());
HXLINE(  54)		levelInfo->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  55)		levelInfo->updateHitbox();
HXLINE(  56)		this->add(levelInfo);
HXLINE(  58)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("",00,00,00,00),32,null());
HXLINE(  59)		::String levelDifficulty1 = levelDifficulty->text;
HXDLIN(  59)		levelDifficulty->set_text((levelDifficulty1 + ::CoolUtil_obj::difficultyString()));
HXLINE(  60)		levelDifficulty->scrollFactor->set(null(),null());
HXLINE(  61)		levelDifficulty->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  62)		levelDifficulty->updateHitbox();
HXLINE(  63)		this->add(levelDifficulty);
HXLINE(  65)		 ::flixel::text::FlxText blueballedTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,79,0,HX_("",00,00,00,00),32,null());
HXLINE(  66)		blueballedTxt->set_text((HX_("Blueballed: ",fe,a6,48,b4) + ::PlayState_obj::deathCounter));
HXLINE(  67)		blueballedTxt->scrollFactor->set(null(),null());
HXLINE(  68)		blueballedTxt->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  69)		blueballedTxt->updateHitbox();
HXLINE(  70)		this->add(blueballedTxt);
HXLINE(  72)		this->practiceText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("PRACTICE MODE",e8,14,ba,86),32,null());
HXLINE(  73)		this->practiceText->scrollFactor->set(null(),null());
HXLINE(  74)		this->practiceText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  75)		 ::flixel::text::FlxText _hx_tmp3 = this->practiceText;
HXDLIN(  75)		int _hx_tmp4 = ::flixel::FlxG_obj::width;
HXDLIN(  75)		_hx_tmp3->set_x((( (Float)(_hx_tmp4) ) - (this->practiceText->get_width() + 20)));
HXLINE(  76)		this->practiceText->updateHitbox();
HXLINE(  77)		this->practiceText->set_visible(::PlayState_obj::practiceMode);
HXLINE(  78)		this->add(this->practiceText);
HXLINE(  80)		this->botplayText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,(::flixel::FlxG_obj::height - 40),0,HX_("BOTPLAY",5b,cf,7d,e1),32,null());
HXLINE(  81)		this->botplayText->scrollFactor->set(null(),null());
HXLINE(  82)		this->botplayText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  83)		 ::flixel::text::FlxText _hx_tmp5 = this->botplayText;
HXDLIN(  83)		int _hx_tmp6 = ::flixel::FlxG_obj::width;
HXDLIN(  83)		_hx_tmp5->set_x((( (Float)(_hx_tmp6) ) - (this->botplayText->get_width() + 20)));
HXLINE(  84)		this->botplayText->updateHitbox();
HXLINE(  85)		this->botplayText->set_visible(::PlayState_obj::cpuControlled);
HXLINE(  86)		this->add(this->botplayText);
HXLINE(  88)		blueballedTxt->set_alpha(( (Float)(0) ));
HXLINE(  89)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE(  90)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE(  92)		int _hx_tmp7 = ::flixel::FlxG_obj::width;
HXDLIN(  92)		levelInfo->set_x((( (Float)(_hx_tmp7) ) - (levelInfo->get_width() + 20)));
HXLINE(  93)		int _hx_tmp8 = ::flixel::FlxG_obj::width;
HXDLIN(  93)		levelDifficulty->set_x((( (Float)(_hx_tmp8) ) - (levelDifficulty->get_width() + 20)));
HXLINE(  94)		int _hx_tmp9 = ::flixel::FlxG_obj::width;
HXDLIN(  94)		blueballedTxt->set_x((( (Float)(_hx_tmp9) ) - (blueballedTxt->get_width() + 20)));
HXLINE(  96)		::flixel::tweens::FlxTween_obj::tween(bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  97)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  98)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  99)		::flixel::tweens::FlxTween_obj::tween(blueballedTxt, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(blueballedTxt->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.7))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 101)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 102)		this->add(this->grpMenuShit);
HXLINE( 104)		{
HXLINE( 104)			int _g2 = 0;
HXDLIN( 104)			int _g3 = this->menuItems->length;
HXDLIN( 104)			while((_g2 < _g3)){
HXLINE( 104)				_g2 = (_g2 + 1);
HXDLIN( 104)				int i = (_g2 - 1);
HXLINE( 106)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 107)				songText->isMenuItem = true;
HXLINE( 108)				songText->targetY = ( (Float)(i) );
HXLINE( 109)				this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 112)		this->changeSelection(null());
HXLINE( 114)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x519cdafb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x519cdafb;
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

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_118_update)
HXLINE( 119)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE( 120)			 ::flixel::_hx_system::FlxSound fh = this->pauseMusic;
HXDLIN( 120)			fh->set_volume((fh->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE( 122)		this->super::update(elapsed);
HXLINE( 124)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 125)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 126)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 128)		if (upP) {
HXLINE( 130)			this->changeSelection(-1);
            		}
HXLINE( 132)		if (downP) {
HXLINE( 134)			this->changeSelection(1);
            		}
HXLINE( 137)		if (accepted) {
HXLINE( 139)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 140)			{
HXLINE( 140)				int _g = 0;
HXDLIN( 140)				int _g1 = (this->difficultyChoices->length - 1);
HXDLIN( 140)				while((_g < _g1)){
HXLINE( 140)					_g = (_g + 1);
HXDLIN( 140)					int i = (_g - 1);
HXLINE( 141)					if ((this->difficultyChoices->__get(i) == daSelected)) {
HXLINE( 142)						::String name = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
HXLINE( 143)						::String poop = ::Highscore_obj::formatSong(name,this->curSelected);
HXLINE( 144)						::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop,name);
HXLINE( 145)						::PlayState_obj::storyDifficulty = this->curSelected;
HXLINE( 146)						::MusicBeatState_obj::resetState();
HXLINE( 147)						::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 148)						::PlayState_obj::changedDifficulty = true;
HXLINE( 149)						::PlayState_obj::cpuControlled = false;
HXLINE( 150)						return;
            					}
            				}
            			}
HXLINE( 154)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("BACK",27,a2,d1,2b)) ){
HXLINE( 186)				this->menuItems = this->menuItemsOG;
HXLINE( 187)				this->regenMenu();
HXLINE( 185)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Modo Praticando",9a,41,08,dd)) ){
HXLINE( 162)				::PlayState_obj::practiceMode = !(::PlayState_obj::practiceMode);
HXLINE( 163)				::PlayState_obj::usedPractice = true;
HXLINE( 164)				this->practiceText->set_visible(::PlayState_obj::practiceMode);
HXLINE( 161)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Mudar Dificuldade",bd,ea,ad,93)) ){
HXLINE( 159)				this->menuItems = this->difficultyChoices;
HXLINE( 160)				this->regenMenu();
HXLINE( 158)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Reniciar",e5,22,35,6c)) ){
HXLINE( 166)				::MusicBeatState_obj::resetState();
HXLINE( 167)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 165)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Resumir",81,39,a9,38)) ){
HXLINE( 157)				this->close();
HXDLIN( 157)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Robo Jogando",64,ef,c6,1e)) ){
HXLINE( 169)				::PlayState_obj::cpuControlled = !(::PlayState_obj::cpuControlled);
HXLINE( 170)				::PlayState_obj::usedPractice = true;
HXLINE( 171)				this->botplayText->set_visible(::PlayState_obj::cpuControlled);
HXLINE( 168)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Sair Para o Menu",a7,7d,59,1a)) ){
HXLINE( 173)				::PlayState_obj::deathCounter = 0;
HXLINE( 174)				::PlayState_obj::seenCutscene = false;
HXLINE( 175)				if (::PlayState_obj::isStoryMode) {
HXLINE( 176)					::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				else {
HXLINE( 178)					::MusicBeatState_obj::switchState( ::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            				}
HXLINE( 180)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 180)				::String library = null();
HXDLIN( 180)				_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
HXLINE( 181)				::PlayState_obj::usedPractice = false;
HXLINE( 182)				::PlayState_obj::changedDifficulty = false;
HXLINE( 183)				::PlayState_obj::cpuControlled = false;
HXLINE( 172)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
            		}
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_193_destroy)
HXLINE( 194)		this->pauseMusic->destroy();
HXLINE( 196)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_200_changeSelection)
HXLINE( 201)		 ::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 201)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 203)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 203)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 205)		if ((this->curSelected < 0)) {
HXLINE( 206)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 207)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 208)			this->curSelected = 0;
            		}
HXLINE( 210)		int bullShit = 0;
HXLINE( 212)		{
HXLINE( 212)			int _g = 0;
HXDLIN( 212)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 212)			while((_g < _g1->length)){
HXLINE( 212)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 212)				_g = (_g + 1);
HXLINE( 214)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 215)				bullShit = (bullShit + 1);
HXLINE( 217)				item->set_alpha(((Float)0.6));
HXLINE( 220)				if ((item->targetY == 0)) {
HXLINE( 222)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))

void PauseSubState_obj::regenMenu(){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_228_regenMenu)
HXLINE( 229)		{
HXLINE( 229)			int _g = 0;
HXDLIN( 229)			int _g1 = this->grpMenuShit->members->get_length();
HXDLIN( 229)			while((_g < _g1)){
HXLINE( 229)				_g = (_g + 1);
HXDLIN( 229)				int i = (_g - 1);
HXLINE( 230)				this->grpMenuShit->remove(Dynamic( this->grpMenuShit->members->__get(0)).StaticCast<  ::Alphabet >(),true).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 232)		{
HXLINE( 232)			int _g2 = 0;
HXDLIN( 232)			int _g3 = this->menuItems->length;
HXDLIN( 232)			while((_g2 < _g3)){
HXLINE( 232)				_g2 = (_g2 + 1);
HXDLIN( 232)				int i = (_g2 - 1);
HXLINE( 233)				 ::Alphabet item =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 234)				item->isMenuItem = true;
HXLINE( 235)				item->targetY = ( (Float)(i) );
HXLINE( 236)				this->grpMenuShit->add(item).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 238)		this->curSelected = 0;
HXLINE( 239)		this->changeSelection(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,regenMenu,(void))


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_MARK_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(practiceText,"practiceText");
	HX_MARK_MEMBER_NAME(botplayText,"botplayText");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_VISIT_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(practiceText,"practiceText");
	HX_VISIT_MEMBER_NAME(botplayText,"botplayText");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"regenMenu") ) { return ::hx::Val( regenMenu_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { return ::hx::Val( menuItemsOG ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"botplayText") ) { return ::hx::Val( botplayText ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { return ::hx::Val( practiceText ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { return ::hx::Val( difficultyChoices ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { menuItemsOG=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"botplayText") ) { botplayText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { practiceText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { difficultyChoices=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("menuItemsOG",39,55,bf,30));
	outFields->push(HX_("difficultyChoices",f7,9c,00,1a));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("practiceText",08,73,28,84));
	outFields->push(HX_("botplayText",c8,cd,df,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItemsOG),HX_("menuItemsOG",39,55,bf,30)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,difficultyChoices),HX_("difficultyChoices",f7,9c,00,1a)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,practiceText),HX_("practiceText",08,73,28,84)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,botplayText),HX_("botplayText",c8,cd,df,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PauseSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("menuItemsOG",39,55,bf,30),
	HX_("difficultyChoices",f7,9c,00,1a),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("practiceText",08,73,28,84),
	HX_("botplayText",c8,cd,df,87),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	HX_("regenMenu",fc,42,dc,26),
	::String(null()) };

::hx::Class PauseSubState_obj::__mClass;

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseSubState",67,95,e5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

