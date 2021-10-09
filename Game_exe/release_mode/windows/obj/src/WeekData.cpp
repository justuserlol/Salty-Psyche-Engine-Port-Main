#include <hxcpp.h>

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_66_getCurrentWeekNumber,"WeekData","getCurrentWeekNumber",0xa38b9410,"WeekData.getCurrentWeekNumber","WeekData.hx",66,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_69_getWeekNumber,"WeekData","getWeekNumber",0x43617203,"WeekData.getWeekNumber","WeekData.hx",69,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_82_getWeekDirectory,"WeekData","getWeekDirectory",0x9d994773,"WeekData.getWeekDirectory","WeekData.hx",82,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_7_boot,"WeekData","boot",0xedf07642,"WeekData.boot","WeekData.hx",7,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_20_boot,"WeekData","boot",0xedf07642,"WeekData.boot","WeekData.hx",20,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_37_boot,"WeekData","boot",0xedf07642,"WeekData.boot","WeekData.hx",37,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_51_boot,"WeekData","boot",0xedf07642,"WeekData.boot","WeekData.hx",51,0xa959a920)

void WeekData_obj::__construct() { }

Dynamic WeekData_obj::__CreateEmpty() { return new WeekData_obj; }

void *WeekData_obj::_hx_vtable = 0;

Dynamic WeekData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WeekData_obj > _hx_result = new WeekData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WeekData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ed59b1e;
}

::cpp::VirtualArray WeekData_obj::songsNames;

::cpp::VirtualArray WeekData_obj::weekNumber;

::Array< ::String > WeekData_obj::loadDirectory;

::Array< ::String > WeekData_obj::weekResetName;

int WeekData_obj::getCurrentWeekNumber(){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_66_getCurrentWeekNumber)
HXDLIN(  66)		return ::WeekData_obj::getWeekNumber(::PlayState_obj::storyWeek);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getCurrentWeekNumber,return )

int WeekData_obj::getWeekNumber(int num){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_69_getWeekNumber)
HXLINE(  70)		int value = 0;
HXLINE(  71)		if ((num < ::WeekData_obj::weekNumber->get_length())) {
HXLINE(  72)			value = num;
HXLINE(  73)			if (::hx::IsNotNull( ::WeekData_obj::weekNumber->__get(num) )) {
HXLINE(  74)				value = ( (int)(::WeekData_obj::weekNumber->__get(num)) );
            			}
            		}
HXLINE(  78)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,getWeekNumber,return )

::String WeekData_obj::getWeekDirectory(){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_82_getWeekDirectory)
HXLINE(  83)		::String value = ::WeekData_obj::loadDirectory->__get(::PlayState_obj::storyWeek);
HXLINE(  84)		if (::hx::IsNull( value )) {
HXLINE(  85)			value = (HX_("week",f4,5f,f5,4e) + ::WeekData_obj::getCurrentWeekNumber());
            		}
HXLINE(  87)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getWeekDirectory,return )


WeekData_obj::WeekData_obj()
{
}

bool WeekData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"songsNames") ) { outValue = ( songsNames ); return true; }
		if (HX_FIELD_EQ(inName,"weekNumber") ) { outValue = ( weekNumber ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadDirectory") ) { outValue = ( loadDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"weekResetName") ) { outValue = ( weekResetName ); return true; }
		if (HX_FIELD_EQ(inName,"getWeekNumber") ) { outValue = getWeekNumber_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWeekDirectory") ) { outValue = getWeekDirectory_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getCurrentWeekNumber") ) { outValue = getCurrentWeekNumber_dyn(); return true; }
	}
	return false;
}

bool WeekData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"songsNames") ) { songsNames=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
		if (HX_FIELD_EQ(inName,"weekNumber") ) { weekNumber=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadDirectory") ) { loadDirectory=ioValue.Cast< ::Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"weekResetName") ) { weekResetName=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WeekData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo WeekData_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &WeekData_obj::songsNames,HX_("songsNames",ea,af,ac,4b)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &WeekData_obj::weekNumber,HX_("weekNumber",dd,c9,4a,64)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &WeekData_obj::loadDirectory,HX_("loadDirectory",67,c3,aa,92)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &WeekData_obj::weekResetName,HX_("weekResetName",26,5d,9f,c4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void WeekData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeekData_obj::songsNames,"songsNames");
	HX_MARK_MEMBER_NAME(WeekData_obj::weekNumber,"weekNumber");
	HX_MARK_MEMBER_NAME(WeekData_obj::loadDirectory,"loadDirectory");
	HX_MARK_MEMBER_NAME(WeekData_obj::weekResetName,"weekResetName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WeekData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeekData_obj::songsNames,"songsNames");
	HX_VISIT_MEMBER_NAME(WeekData_obj::weekNumber,"weekNumber");
	HX_VISIT_MEMBER_NAME(WeekData_obj::loadDirectory,"loadDirectory");
	HX_VISIT_MEMBER_NAME(WeekData_obj::weekResetName,"weekResetName");
};

#endif

::hx::Class WeekData_obj::__mClass;

static ::String WeekData_obj_sStaticFields[] = {
	HX_("songsNames",ea,af,ac,4b),
	HX_("weekNumber",dd,c9,4a,64),
	HX_("loadDirectory",67,c3,aa,92),
	HX_("weekResetName",26,5d,9f,c4),
	HX_("getCurrentWeekNumber",00,82,f5,62),
	HX_("getWeekNumber",13,26,bd,c0),
	HX_("getWeekDirectory",63,7d,19,b0),
	::String(null())
};

void WeekData_obj::__register()
{
	WeekData_obj _hx_dummy;
	WeekData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WeekData",5e,a8,44,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeekData_obj::__GetStatic;
	__mClass->mSetStaticField = &WeekData_obj::__SetStatic;
	__mClass->mMarkFunc = WeekData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WeekData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< WeekData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WeekData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WeekData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WeekData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WeekData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_7_boot)
HXDLIN(   7)		songsNames = ::cpp::VirtualArray_obj::__new(7)->init(0,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("best-girl",65,91,48,8e)))->init(1,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Daddys-Girl",52,72,43,90))->init(1,HX_("Salty-Love",5c,37,67,bb))->init(2,HX_("Daughter-Complex",ab,da,db,ab)))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Sweet-n-Spooky",a7,d0,46,62))->init(1,HX_("Sour-n-Scary",e5,2d,2d,f9))->init(2,HX_("Opheebop",3c,94,98,d7)))->init(3,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Protect",ef,5c,d8,c9))->init(1,HX_("Defend",56,e7,75,9b))->init(2,HX_("Safeguard",58,c0,e0,9f)))->init(4,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Indie-Star",64,32,42,61))->init(1,HX_("Rising-Star",39,db,24,8b))->init(2,HX_("Superstar",ad,9e,cc,0b)))->init(5,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Order-Up",3a,88,c5,99))->init(1,HX_("Rush-Hour",b9,c1,97,11))->init(2,HX_("Freedom",36,01,15,5e)))->init(6,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Buckets",a9,20,fc,c7))->init(1,HX_("Logarithms",4e,1c,74,a8))->init(2,HX_("Terminal",9c,dd,9c,c9)));
            	}
{
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_20_boot)
HXDLIN(  20)		weekNumber = ::cpp::VirtualArray_obj::__new(7)->init(0,null())->init(1,null())->init(2,null())->init(3,null())->init(4,null())->init(5,null())->init(6,null());
            	}
{
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_37_boot)
HXDLIN(  37)		loadDirectory = ::Array_obj< ::String >::__new(7)->init(0,HX_("tutorial",9e,8f,b5,82))->init(1,null())->init(2,null())->init(3,null())->init(4,null())->init(5,null())->init(6,null());
            	}
{
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_51_boot)
HXDLIN(  51)		weekResetName = ::Array_obj< ::String >::__new(7)->init(0,HX_("Tutorial",be,4b,67,5c))->init(1,null())->init(2,null())->init(3,null())->init(4,null())->init(5,null())->init(6,null());
            	}
}

