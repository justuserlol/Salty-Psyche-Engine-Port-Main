#include <hxcpp.h>

#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_52_unlockAchievement,"Achievements","unlockAchievement",0xddbd5e61,"Achievements.unlockAchievement","Achievements.hx",52,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_59_loadAchievements,"Achievements","loadAchievements",0x7629cad4,"Achievements.loadAchievements","Achievements.hx",59,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_13_boot,"Achievements","boot",0x8eb5af9c,"Achievements.boot","Achievements.hx",13,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_32_boot,"Achievements","boot",0x8eb5af9c,"Achievements.boot","Achievements.hx",32,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_51_boot,"Achievements","boot",0x8eb5af9c,"Achievements.boot","Achievements.hx",51,0xf249f7fa)

void Achievements_obj::__construct() { }

Dynamic Achievements_obj::__CreateEmpty() { return new Achievements_obj; }

void *Achievements_obj::_hx_vtable = 0;

Dynamic Achievements_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Achievements_obj > _hx_result = new Achievements_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Achievements_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x375f4004;
}

::cpp::VirtualArray Achievements_obj::achievementsStuff;

::cpp::VirtualArray Achievements_obj::achievementsUnlocked;

int Achievements_obj::henchmenDeath;

void Achievements_obj::unlockAchievement(int id){
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_52_unlockAchievement)
HXLINE(  54)		::Achievements_obj::achievementsUnlocked->__get(id)->__SetItem(1,true);
HXLINE(  55)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  55)		_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Achievements_obj,unlockAchievement,(void))

void Achievements_obj::loadAchievements(){
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_59_loadAchievements)
HXDLIN(  59)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data )) {
HXLINE(  60)			if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("achievementsUnlocked",67,55,27,1c),::hx::paccDynamic) )) {
HXLINE(  62)				::Array< ::String > savedStuff = ( (::Array< ::String >)(::flixel::FlxG_obj::save->data->__Field(HX_("achievementsUnlocked",67,55,27,1c),::hx::paccDynamic)) );
HXLINE(  63)				{
HXLINE(  63)					int _g = 0;
HXDLIN(  63)					int _g1 = ::Achievements_obj::achievementsUnlocked->get_length();
HXDLIN(  63)					while((_g < _g1)){
HXLINE(  63)						_g = (_g + 1);
HXDLIN(  63)						int i = (_g - 1);
HXLINE(  64)						{
HXLINE(  64)							int _g1 = 0;
HXDLIN(  64)							int _g2 = savedStuff->length;
HXDLIN(  64)							while((_g1 < _g2)){
HXLINE(  64)								_g1 = (_g1 + 1);
HXDLIN(  64)								int j = (_g1 - 1);
HXLINE(  65)								if (::hx::IsEq( ::Achievements_obj::achievementsUnlocked->__get(i)->__GetItem(0),savedStuff->__get(j) )) {
HXLINE(  66)									::Achievements_obj::achievementsUnlocked->__get(i)->__SetItem(1,true);
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE(  71)			bool _hx_tmp;
HXDLIN(  71)			if ((::Achievements_obj::henchmenDeath == 0)) {
HXLINE(  71)				_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("henchmenDeath",f4,76,2a,dd),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  71)				_hx_tmp = false;
            			}
HXDLIN(  71)			if (_hx_tmp) {
HXLINE(  72)				::Achievements_obj::henchmenDeath = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("henchmenDeath",f4,76,2a,dd),::hx::paccDynamic)) );
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Achievements_obj,loadAchievements,(void))


Achievements_obj::Achievements_obj()
{
}

bool Achievements_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"henchmenDeath") ) { outValue = ( henchmenDeath ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadAchievements") ) { outValue = loadAchievements_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"achievementsStuff") ) { outValue = ( achievementsStuff ); return true; }
		if (HX_FIELD_EQ(inName,"unlockAchievement") ) { outValue = unlockAchievement_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"achievementsUnlocked") ) { outValue = ( achievementsUnlocked ); return true; }
	}
	return false;
}

bool Achievements_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"henchmenDeath") ) { henchmenDeath=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"achievementsStuff") ) { achievementsStuff=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"achievementsUnlocked") ) { achievementsUnlocked=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Achievements_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Achievements_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Achievements_obj::achievementsStuff,HX_("achievementsStuff",30,c3,ed,46)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Achievements_obj::achievementsUnlocked,HX_("achievementsUnlocked",67,55,27,1c)},
	{::hx::fsInt,(void *) &Achievements_obj::henchmenDeath,HX_("henchmenDeath",f4,76,2a,dd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Achievements_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Achievements_obj::achievementsStuff,"achievementsStuff");
	HX_MARK_MEMBER_NAME(Achievements_obj::achievementsUnlocked,"achievementsUnlocked");
	HX_MARK_MEMBER_NAME(Achievements_obj::henchmenDeath,"henchmenDeath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Achievements_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Achievements_obj::achievementsStuff,"achievementsStuff");
	HX_VISIT_MEMBER_NAME(Achievements_obj::achievementsUnlocked,"achievementsUnlocked");
	HX_VISIT_MEMBER_NAME(Achievements_obj::henchmenDeath,"henchmenDeath");
};

#endif

::hx::Class Achievements_obj::__mClass;

static ::String Achievements_obj_sStaticFields[] = {
	HX_("achievementsStuff",30,c3,ed,46),
	HX_("achievementsUnlocked",67,55,27,1c),
	HX_("henchmenDeath",f4,76,2a,dd),
	HX_("unlockAchievement",0b,e4,d1,6a),
	HX_("loadAchievements",6a,28,c7,f2),
	::String(null())
};

void Achievements_obj::__register()
{
	Achievements_obj _hx_dummy;
	Achievements_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Achievements",44,ed,7d,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Achievements_obj::__GetStatic;
	__mClass->mSetStaticField = &Achievements_obj::__SetStatic;
	__mClass->mMarkFunc = Achievements_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Achievements_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Achievements_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Achievements_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Achievements_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Achievements_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Achievements_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_13_boot)
HXDLIN(  13)		achievementsStuff = ::cpp::VirtualArray_obj::__new(16)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Freaky on a Friday Night",ad,12,d0,d9))->init(1,HX_("Play on a Friday... Night.",1b,3d,4b,6e))->init(2,true))->init(1,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("She Calls Me Daddy Too",43,38,20,2e))->init(1,HX_("Beat Week 1 on Hard with no Misses.",3a,80,c0,14))->init(2,false))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("No More Tricks",6c,b7,d5,1c))->init(1,HX_("Beat Week 2 on Hard with no Misses.",3b,bb,c7,1d))->init(2,false))->init(3,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Call Me The Hitman",fc,32,c3,c7))->init(1,HX_("Beat Week 3 on Hard with no Misses.",3c,f6,ce,26))->init(2,false))->init(4,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Lady Killer",a1,5f,9f,79))->init(1,HX_("Beat Week 4 on Hard with no Misses.",3d,31,d6,2f))->init(2,false))->init(5,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Missless Christmas",f7,6d,cc,37))->init(1,HX_("Beat Week 5 on Hard with no Misses.",3e,6c,dd,38))->init(2,false))->init(6,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Highscore!!",70,79,53,b1))->init(1,HX_("Beat Week 6 on Hard with no Misses.",3f,a7,e4,41))->init(2,false))->init(7,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("You'll Pay For That...",a0,91,89,56))->init(1,HX_("Beat Week 7 on Hard with no Misses.",40,e2,eb,4a))->init(2,true))->init(8,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("What a Funkin' Disaster!",9b,9a,f3,3d))->init(1,HX_("Complete a Song with a rating lower than 20%.",b8,88,a7,a1))->init(2,false))->init(9,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Perfectionist",2f,2d,d8,1a))->init(1,HX_("Complete a Song with a rating of 100%.",60,20,3e,99))->init(2,false))->init(10,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Roadkill Enthusiast",16,f9,a7,f4))->init(1,HX_("Watch the Henchmen die over 100 times.",23,f4,28,c4))->init(2,false))->init(11,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Oversinging Much...?",7f,24,1b,aa))->init(1,HX_("Hold down a note for 20 seconds.",88,fd,c0,47))->init(2,false))->init(12,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Hyperactive",12,ed,1a,97))->init(1,HX_("Finish a Song without going Idle.",3d,4e,8d,8b))->init(2,false))->init(13,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Just the Two of Us",f0,46,92,7c))->init(1,HX_("Finish a Song pressing only two keys.",34,0f,a6,8a))->init(2,false))->init(14,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Toaster Gamer",b4,2b,0d,33))->init(1,HX_("Have you tried to run the game on a toaster?",97,b9,bf,ff))->init(2,false))->init(15,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Debugger",41,e0,9c,6a))->init(1,HX_("Beat the \"Test\" Stage from the Chart Editor.",15,c5,9f,4a))->init(2,true));
            	}
{
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_32_boot)
HXDLIN(  32)		achievementsUnlocked = ::cpp::VirtualArray_obj::__new(16)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("friday_night_play",9b,1f,4e,c7))->init(1,false))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("week1_nomiss",3f,c5,3b,fe))->init(1,false))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("week2_nomiss",5e,37,6e,37))->init(1,false))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("week3_nomiss",7d,a9,a0,70))->init(1,false))->init(4,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("week4_nomiss",9c,1b,d3,a9))->init(1,false))->init(5,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("week5_nomiss",bb,8d,05,e3))->init(1,false))->init(6,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("week6_nomiss",da,ff,37,1c))->init(1,false))->init(7,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("week7_nomiss",f9,71,6a,55))->init(1,false))->init(8,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("ur_bad",a3,4f,85,aa))->init(1,false))->init(9,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("ur_good",9f,19,79,8d))->init(1,false))->init(10,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("roadkill_enthusiast",15,e2,55,56))->init(1,false))->init(11,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("oversinging",1f,13,8f,78))->init(1,false))->init(12,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("hype",46,63,1a,45))->init(1,false))->init(13,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("two_keys",c7,f4,0a,9b))->init(1,false))->init(14,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("toastie",43,0c,91,5f))->init(1,false))->init(15,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("debugger",21,24,eb,90))->init(1,false));
            	}
{
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_51_boot)
HXDLIN(  51)		henchmenDeath = 0;
            	}
}

