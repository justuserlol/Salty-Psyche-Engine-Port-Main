#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_8_new,"HealthIcon","new",0x9b7badc7,"HealthIcon.new","HealthIcon.hx",8,0xf7836789)
static const ::String _hx_array_data_f8f9be55_1[] = {
	HX_("bf-pixel",fd,03,90,37),HX_("senpai",3c,df,8d,6b),HX_("spirit",31,bb,a9,bd),
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_28_update,"HealthIcon","update",0x767ac302,"HealthIcon.update","HealthIcon.hx",28,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_36_swapOldIcon,"HealthIcon","swapOldIcon",0xe3496dd4,"HealthIcon.swapOldIcon","HealthIcon.hx",36,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_41_changeIcon,"HealthIcon","changeIcon",0xd785ca82,"HealthIcon.changeIcon","HealthIcon.hx",41,0xf7836789)
static const int _hx_array_data_f8f9be55_6[] = {
	(int)0,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_62_getCharacter,"HealthIcon","getCharacter",0x409335ec,"HealthIcon.getCharacter","HealthIcon.hx",62,0xf7836789)

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_8_new)
HXLINE(  16)		this->noAntialiasing = ::Array_obj< ::String >::fromData( _hx_array_data_f8f9be55_1,3);
HXLINE(  13)		this->_hx_char = HX_("",00,00,00,00);
HXLINE(  12)		this->isPlayer = false;
HXLINE(  11)		this->isOldIcon = false;
HXLINE(  20)		super::__construct(null(),null(),null());
HXLINE(  21)		this->isOldIcon = (_hx_char == HX_("bf-old",5e,ba,eb,07));
HXLINE(  22)		this->isPlayer = isPlayer;
HXLINE(  23)		this->changeIcon(_hx_char);
HXLINE(  24)		this->scrollFactor->set(null(),null());
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10bce115) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10bce115;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_28_update)
HXLINE(  29)		this->super::update(elapsed);
HXLINE(  31)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  32)			Float _hx_tmp = this->sprTracker->x;
HXDLIN(  32)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN(  32)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}


void HealthIcon_obj::swapOldIcon(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_36_swapOldIcon)
HXDLIN(  36)		if ((this->isOldIcon = !(this->isOldIcon))) {
HXDLIN(  36)			this->changeIcon(HX_("bf-old",5e,ba,eb,07));
            		}
            		else {
HXLINE(  37)			this->changeIcon(HX_("bf",c4,55,00,00));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,swapOldIcon,(void))

void HealthIcon_obj::changeIcon(::String _hx_char){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_41_changeIcon)
HXDLIN(  41)		if ((this->_hx_char != _hx_char)) {
HXLINE(  42)			::String name = (HX_("icons/icon-",5f,da,21,72) + _hx_char);
HXLINE(  43)			::String key = ((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e));
HXDLIN(  43)			bool _hx_tmp;
HXDLIN(  43)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(key,HX_("IMAGE",3b,57,57,3b),null()),null())) {
HXLINE(  43)				_hx_tmp = true;
            			}
            			else {
HXLINE(  43)				if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key))) {
HXLINE(  43)					_hx_tmp = true;
            				}
            				else {
HXLINE(  43)					_hx_tmp = false;
            				}
            			}
HXDLIN(  43)			if (!(_hx_tmp)) {
HXLINE(  43)				name = HX_("icons/icon-face",7c,aa,dd,e7);
            			}
HXLINE(  44)			::String library = null();
HXDLIN(  44)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(name);
HXDLIN(  44)			 ::Dynamic file;
HXDLIN(  44)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  44)				file = imageToReturn;
            			}
            			else {
HXLINE(  44)				file = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
HXLINE(  46)			this->loadGraphic(file,true,150,150,null(),null());
HXLINE(  47)			this->animation->add(_hx_char,::Array_obj< int >::fromData( _hx_array_data_f8f9be55_6,2),0,false,this->isPlayer,null());
HXLINE(  48)			this->animation->play(_hx_char,null(),null(),null());
HXLINE(  49)			this->_hx_char = _hx_char;
HXLINE(  51)			this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  52)			{
HXLINE(  52)				int _g = 0;
HXDLIN(  52)				int _g1 = this->noAntialiasing->length;
HXDLIN(  52)				while((_g < _g1)){
HXLINE(  52)					_g = (_g + 1);
HXDLIN(  52)					int i = (_g - 1);
HXLINE(  53)					if ((_hx_char == this->noAntialiasing->__get(i))) {
HXLINE(  54)						this->set_antialiasing(false);
HXLINE(  55)						goto _hx_goto_4;
            					}
            				}
            				_hx_goto_4:;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthIcon_obj,changeIcon,(void))

::String HealthIcon_obj::getCharacter(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_62_getCharacter)
HXDLIN(  62)		return this->_hx_char;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,getCharacter,return )


::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(noAntialiasing,"noAntialiasing");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(noAntialiasing,"noAntialiasing");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { return ::hx::Val( isOldIcon ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return ::hx::Val( changeIcon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swapOldIcon") ) { return ::hx::Val( swapOldIcon_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getCharacter") ) { return ::hx::Val( getCharacter_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"noAntialiasing") ) { return ::hx::Val( noAntialiasing ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { isOldIcon=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"noAntialiasing") ) { noAntialiasing=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("isOldIcon",f6,08,f6,fe));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("noAntialiasing",d5,a0,b5,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isOldIcon),HX_("isOldIcon",f6,08,f6,fe)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(HealthIcon_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(HealthIcon_obj,noAntialiasing),HX_("noAntialiasing",d5,a0,b5,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HealthIcon_obj_sStaticStorageInfo = 0;
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("isOldIcon",f6,08,f6,fe),
	HX_("isPlayer",eb,86,22,90),
	HX_("char",d6,5e,bf,41),
	HX_("noAntialiasing",d5,a0,b5,f5),
	HX_("update",09,86,05,87),
	HX_("swapOldIcon",6d,51,5b,02),
	HX_("changeIcon",09,1d,fc,1f),
	HX_("getCharacter",33,78,28,51),
	::String(null()) };

::hx::Class HealthIcon_obj::__mClass;

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HealthIcon",55,be,f9,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

