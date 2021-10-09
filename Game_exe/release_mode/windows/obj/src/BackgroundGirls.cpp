#include <hxcpp.h>

#ifndef INCLUDED_BackgroundGirls
#include <BackgroundGirls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0cad68011be830e6_6_new,"BackgroundGirls","new",0x9440151b,"BackgroundGirls.new","BackgroundGirls.hx",6,0x75c246b5)
HX_LOCAL_STACK_FRAME(_hx_pos_0cad68011be830e6_24_getScared,"BackgroundGirls","getScared",0x19260451,"BackgroundGirls.getScared","BackgroundGirls.hx",24,0x75c246b5)
HX_LOCAL_STACK_FRAME(_hx_pos_0cad68011be830e6_31_dance,"BackgroundGirls","dance",0x6f96acae,"BackgroundGirls.dance","BackgroundGirls.hx",31,0x75c246b5)

void BackgroundGirls_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_0cad68011be830e6_6_new)
HXLINE(  21)		this->danceDir = false;
HXLINE(  10)		super::__construct(x,y,null());
HXLINE(  13)		::String library = null();
HXDLIN(  13)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("weeb/bgFreaks",d9,71,bd,0f));
HXDLIN(  13)		bool xmlExists = false;
HXDLIN(  13)		if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("weeb/bgFreaks",d9,71,bd,0f)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  13)			xmlExists = true;
            		}
HXDLIN(  13)		 ::Dynamic _hx_tmp;
HXDLIN(  13)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  13)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE(  13)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("weeb/bgFreaks",d9,71,bd,0f));
HXDLIN(  13)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  13)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE(  13)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bgFreaks",d9,71,bd,0f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN(  13)		::String _hx_tmp1;
HXDLIN(  13)		if (xmlExists) {
HXLINE(  13)			_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("weeb/bgFreaks",d9,71,bd,0f)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  13)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bgFreaks",d9,71,bd,0f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  13)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  15)		 ::flixel::animation::FlxAnimationController _hx_tmp2 = this->animation;
HXDLIN(  15)		_hx_tmp2->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("BG girls group",1b,d2,55,9d),::CoolUtil_obj::numberArray(14,null()),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  16)		 ::flixel::animation::FlxAnimationController _hx_tmp3 = this->animation;
HXDLIN(  16)		_hx_tmp3->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("BG girls group",1b,d2,55,9d),::CoolUtil_obj::numberArray(30,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  18)		this->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            	}

Dynamic BackgroundGirls_obj::__CreateEmpty() { return new BackgroundGirls_obj; }

void *BackgroundGirls_obj::_hx_vtable = 0;

Dynamic BackgroundGirls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackgroundGirls_obj > _hx_result = new BackgroundGirls_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BackgroundGirls_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10bdbe3d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10bdbe3d;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void BackgroundGirls_obj::getScared(){
            	HX_STACKFRAME(&_hx_pos_0cad68011be830e6_24_getScared)
HXLINE(  25)		 ::flixel::animation::FlxAnimationController _hx_tmp = this->animation;
HXDLIN(  25)		_hx_tmp->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("BG fangirls dissuaded",b1,42,22,06),::CoolUtil_obj::numberArray(14,null()),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  26)		 ::flixel::animation::FlxAnimationController _hx_tmp1 = this->animation;
HXDLIN(  26)		_hx_tmp1->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("BG fangirls dissuaded",b1,42,22,06),::CoolUtil_obj::numberArray(30,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  27)		this->dance();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundGirls_obj,getScared,(void))

void BackgroundGirls_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_0cad68011be830e6_31_dance)
HXLINE(  32)		this->danceDir = !(this->danceDir);
HXLINE(  34)		if (this->danceDir) {
HXLINE(  35)			this->animation->play(HX_("danceRight",a9,7f,a6,91),true,null(),null());
            		}
            		else {
HXLINE(  37)			this->animation->play(HX_("danceLeft",da,cc,f9,df),true,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundGirls_obj,dance,(void))


::hx::ObjectPtr< BackgroundGirls_obj > BackgroundGirls_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< BackgroundGirls_obj > __this = new BackgroundGirls_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< BackgroundGirls_obj > BackgroundGirls_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	BackgroundGirls_obj *__this = (BackgroundGirls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackgroundGirls_obj), true, "BackgroundGirls"));
	*(void **)__this = BackgroundGirls_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

BackgroundGirls_obj::BackgroundGirls_obj()
{
}

::hx::Val BackgroundGirls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"danceDir") ) { return ::hx::Val( danceDir ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getScared") ) { return ::hx::Val( getScared_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BackgroundGirls_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"danceDir") ) { danceDir=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundGirls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("danceDir",da,33,3a,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BackgroundGirls_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BackgroundGirls_obj,danceDir),HX_("danceDir",da,33,3a,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BackgroundGirls_obj_sStaticStorageInfo = 0;
#endif

static ::String BackgroundGirls_obj_sMemberFields[] = {
	HX_("danceDir",da,33,3a,58),
	HX_("getScared",56,01,81,b8),
	HX_("dance",33,83,83,d4),
	::String(null()) };

::hx::Class BackgroundGirls_obj::__mClass;

void BackgroundGirls_obj::__register()
{
	BackgroundGirls_obj _hx_dummy;
	BackgroundGirls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("BackgroundGirls",a9,eb,7a,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BackgroundGirls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BackgroundGirls_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackgroundGirls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackgroundGirls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

