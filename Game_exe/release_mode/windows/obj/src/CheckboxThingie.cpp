#include <hxcpp.h>

#ifndef INCLUDED_CheckboxThingie
#include <CheckboxThingie.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1a771b91f5674cb2_10_new,"CheckboxThingie","new",0xd54b7799,"CheckboxThingie.new","CheckboxThingie.hx",10,0x380f3df7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a771b91f5674cb2_22_update,"CheckboxThingie","update",0x6ebd6870,"CheckboxThingie.update","CheckboxThingie.hx",22,0x380f3df7)
HX_LOCAL_STACK_FRAME(_hx_pos_1a771b91f5674cb2_39_set_daValue,"CheckboxThingie","set_daValue",0xf384c210,"CheckboxThingie.set_daValue","CheckboxThingie.hx",39,0x380f3df7)

void CheckboxThingie_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		 ::Dynamic checked = __o_checked;
            		if (::hx::IsNull(__o_checked)) checked = false;
            	HX_STACKFRAME(&_hx_pos_1a771b91f5674cb2_10_new)
HXLINE(  11)		super::__construct(x,y,null());
HXLINE(  13)		::String library = null();
HXDLIN(  13)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("checkboxThingie",47,af,bb,5d));
HXDLIN(  13)		bool xmlExists = false;
HXDLIN(  13)		if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("checkboxThingie",47,af,bb,5d)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  13)			xmlExists = true;
            		}
HXDLIN(  13)		 ::Dynamic _hx_tmp;
HXDLIN(  13)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  13)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE(  13)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("checkboxThingie",47,af,bb,5d));
HXDLIN(  13)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  13)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE(  13)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("checkboxThingie",47,af,bb,5d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN(  13)		::String _hx_tmp1;
HXDLIN(  13)		if (xmlExists) {
HXLINE(  13)			_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("checkboxThingie",47,af,bb,5d)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  13)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("checkboxThingie",47,af,bb,5d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  13)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  14)		this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("Check Box unselected",41,b2,d3,33),24,false,null(),null());
HXLINE(  15)		this->animation->addByPrefix(HX_("checked",27,b3,24,13),HX_("Check Box selecting animation",9d,c3,45,0c),24,false,null(),null());
HXLINE(  16)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  17)		this->setGraphicSize(::Std_obj::_hx_int((((Float)0.6) * this->get_width())),null());
HXLINE(  18)		this->updateHitbox();
HXLINE(  19)		this->set_daValue(( (bool)(checked) ));
            	}

Dynamic CheckboxThingie_obj::__CreateEmpty() { return new CheckboxThingie_obj; }

void *CheckboxThingie_obj::_hx_vtable = 0;

Dynamic CheckboxThingie_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CheckboxThingie_obj > _hx_result = new CheckboxThingie_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CheckboxThingie_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x178a89bb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x178a89bb;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void CheckboxThingie_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1a771b91f5674cb2_22_update)
HXLINE(  30)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  31)			this->setPosition((this->sprTracker->x - ( (Float)(130) )),(this->sprTracker->y + 30));
            		}
HXLINE(  36)		this->super::update(elapsed);
            	}


bool CheckboxThingie_obj::set_daValue(bool value){
            	HX_STACKFRAME(&_hx_pos_1a771b91f5674cb2_39_set_daValue)
HXLINE(  40)		if (value) {
HXLINE(  41)			if ((this->animation->_curAnim->name != HX_("checked",27,b3,24,13))) {
HXLINE(  42)				this->animation->play(HX_("checked",27,b3,24,13),true,null(),null());
            			}
            		}
            		else {
HXLINE(  46)			this->animation->play(HX_("static",ae,dc,fb,05),null(),null(),null());
            		}
HXLINE(  49)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckboxThingie_obj,set_daValue,return )


::hx::ObjectPtr< CheckboxThingie_obj > CheckboxThingie_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked) {
	::hx::ObjectPtr< CheckboxThingie_obj > __this = new CheckboxThingie_obj();
	__this->__construct(__o_x,__o_y,__o_checked);
	return __this;
}

::hx::ObjectPtr< CheckboxThingie_obj > CheckboxThingie_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked) {
	CheckboxThingie_obj *__this = (CheckboxThingie_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CheckboxThingie_obj), true, "CheckboxThingie"));
	*(void **)__this = CheckboxThingie_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_checked);
	return __this;
}

CheckboxThingie_obj::CheckboxThingie_obj()
{
}

void CheckboxThingie_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CheckboxThingie);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(daValue,"daValue");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckboxThingie_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(daValue,"daValue");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CheckboxThingie_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"daValue") ) { return ::hx::Val( daValue ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_daValue") ) { return ::hx::Val( set_daValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CheckboxThingie_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"daValue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_daValue(inValue.Cast< bool >()) );daValue=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckboxThingie_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("daValue",b4,52,e6,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CheckboxThingie_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CheckboxThingie_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(CheckboxThingie_obj,daValue),HX_("daValue",b4,52,e6,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CheckboxThingie_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckboxThingie_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("daValue",b4,52,e6,cb),
	HX_("update",09,86,05,87),
	HX_("set_daValue",d7,b9,4d,5c),
	::String(null()) };

::hx::Class CheckboxThingie_obj::__mClass;

void CheckboxThingie_obj::__register()
{
	CheckboxThingie_obj _hx_dummy;
	CheckboxThingie_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CheckboxThingie",27,b7,47,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CheckboxThingie_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CheckboxThingie_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckboxThingie_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckboxThingie_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

