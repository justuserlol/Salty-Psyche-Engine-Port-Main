#include <hxcpp.h>

#ifndef INCLUDED_AttachedSprite
#include <AttachedSprite.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e3aec02706941d87_7_new,"AttachedSprite","new",0x6dc8c01b,"AttachedSprite.new","AttachedSprite.hx",7,0x6337fbb5)
HX_LOCAL_STACK_FRAME(_hx_pos_e3aec02706941d87_34_update,"AttachedSprite","update",0x6faadd2e,"AttachedSprite.update","AttachedSprite.hx",34,0x6337fbb5)

void AttachedSprite_obj::__construct(::String file,::String anim,::String library, ::Dynamic __o_loop){
            		 ::Dynamic loop = __o_loop;
            		if (::hx::IsNull(__o_loop)) loop = false;
            	HX_STACKFRAME(&_hx_pos_e3aec02706941d87_7_new)
HXLINE(  17)		this->copyVisible = false;
HXLINE(  16)		this->copyAlpha = true;
HXLINE(  15)		this->copyAngle = true;
HXLINE(  13)		this->alphaAdd = ((Float)0);
HXLINE(  12)		this->angleAdd = ((Float)0);
HXLINE(  11)		this->yAdd = ((Float)0);
HXLINE(  10)		this->xAdd = ((Float)0);
HXLINE(  21)		super::__construct(null(),null(),null());
HXLINE(  22)		if (::hx::IsNotNull( anim )) {
HXLINE(  23)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(file);
HXDLIN(  23)			bool xmlExists = false;
HXDLIN(  23)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + file) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  23)				xmlExists = true;
            			}
HXDLIN(  23)			 ::Dynamic _hx_tmp;
HXDLIN(  23)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  23)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  23)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(file);
HXDLIN(  23)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  23)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  23)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + file) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  23)			::String _hx_tmp1;
HXDLIN(  23)			if (xmlExists) {
HXLINE(  23)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + file) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  23)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + file) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  23)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  24)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),anim,24,loop,null(),null());
HXLINE(  25)			this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
            		else {
HXLINE(  27)			::String library = null();
HXDLIN(  27)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(file);
HXDLIN(  27)			 ::Dynamic _hx_tmp;
HXDLIN(  27)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  27)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE(  27)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + file) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
HXDLIN(  27)			this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
            		}
HXLINE(  29)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  30)		this->scrollFactor->set(null(),null());
            	}

Dynamic AttachedSprite_obj::__CreateEmpty() { return new AttachedSprite_obj; }

void *AttachedSprite_obj::_hx_vtable = 0;

Dynamic AttachedSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AttachedSprite_obj > _hx_result = new AttachedSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool AttachedSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x607d9969) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x607d9969;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AttachedSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_e3aec02706941d87_34_update)
HXLINE(  35)		this->super::update(elapsed);
HXLINE(  37)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  38)			this->setPosition((this->sprTracker->x + this->xAdd),(this->sprTracker->y + this->yAdd));
HXLINE(  39)			this->scrollFactor->set(this->sprTracker->scrollFactor->x,this->sprTracker->scrollFactor->y);
HXLINE(  41)			if (this->copyAngle) {
HXLINE(  42)				this->set_angle((this->sprTracker->angle + this->angleAdd));
            			}
HXLINE(  44)			if (this->copyAlpha) {
HXLINE(  45)				this->set_alpha((this->sprTracker->alpha + this->alphaAdd));
            			}
HXLINE(  47)			if (this->copyVisible) {
HXLINE(  48)				this->set_visible(this->sprTracker->visible);
            			}
            		}
            	}



::hx::ObjectPtr< AttachedSprite_obj > AttachedSprite_obj::__new(::String file,::String anim,::String library, ::Dynamic __o_loop) {
	::hx::ObjectPtr< AttachedSprite_obj > __this = new AttachedSprite_obj();
	__this->__construct(file,anim,library,__o_loop);
	return __this;
}

::hx::ObjectPtr< AttachedSprite_obj > AttachedSprite_obj::__alloc(::hx::Ctx *_hx_ctx,::String file,::String anim,::String library, ::Dynamic __o_loop) {
	AttachedSprite_obj *__this = (AttachedSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AttachedSprite_obj), true, "AttachedSprite"));
	*(void **)__this = AttachedSprite_obj::_hx_vtable;
	__this->__construct(file,anim,library,__o_loop);
	return __this;
}

AttachedSprite_obj::AttachedSprite_obj()
{
}

void AttachedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachedSprite);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(xAdd,"xAdd");
	HX_MARK_MEMBER_NAME(yAdd,"yAdd");
	HX_MARK_MEMBER_NAME(angleAdd,"angleAdd");
	HX_MARK_MEMBER_NAME(alphaAdd,"alphaAdd");
	HX_MARK_MEMBER_NAME(copyAngle,"copyAngle");
	HX_MARK_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_MARK_MEMBER_NAME(copyVisible,"copyVisible");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AttachedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(xAdd,"xAdd");
	HX_VISIT_MEMBER_NAME(yAdd,"yAdd");
	HX_VISIT_MEMBER_NAME(angleAdd,"angleAdd");
	HX_VISIT_MEMBER_NAME(alphaAdd,"alphaAdd");
	HX_VISIT_MEMBER_NAME(copyAngle,"copyAngle");
	HX_VISIT_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_VISIT_MEMBER_NAME(copyVisible,"copyVisible");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AttachedSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { return ::hx::Val( xAdd ); }
		if (HX_FIELD_EQ(inName,"yAdd") ) { return ::hx::Val( yAdd ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"angleAdd") ) { return ::hx::Val( angleAdd ); }
		if (HX_FIELD_EQ(inName,"alphaAdd") ) { return ::hx::Val( alphaAdd ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyAngle") ) { return ::hx::Val( copyAngle ); }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { return ::hx::Val( copyAlpha ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyVisible") ) { return ::hx::Val( copyVisible ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AttachedSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { xAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAdd") ) { yAdd=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"angleAdd") ) { angleAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaAdd") ) { alphaAdd=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyAngle") ) { copyAngle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { copyAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyVisible") ) { copyVisible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("xAdd",89,44,83,4f));
	outFields->push(HX_("yAdd",28,7b,2c,50));
	outFields->push(HX_("angleAdd",0e,4c,53,2b));
	outFields->push(HX_("alphaAdd",63,71,1f,21));
	outFields->push(HX_("copyAngle",de,67,dd,a8));
	outFields->push(HX_("copyAlpha",69,cb,91,a7));
	outFields->push(HX_("copyVisible",3d,f5,38,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AttachedSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(AttachedSprite_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsFloat,(int)offsetof(AttachedSprite_obj,xAdd),HX_("xAdd",89,44,83,4f)},
	{::hx::fsFloat,(int)offsetof(AttachedSprite_obj,yAdd),HX_("yAdd",28,7b,2c,50)},
	{::hx::fsFloat,(int)offsetof(AttachedSprite_obj,angleAdd),HX_("angleAdd",0e,4c,53,2b)},
	{::hx::fsFloat,(int)offsetof(AttachedSprite_obj,alphaAdd),HX_("alphaAdd",63,71,1f,21)},
	{::hx::fsBool,(int)offsetof(AttachedSprite_obj,copyAngle),HX_("copyAngle",de,67,dd,a8)},
	{::hx::fsBool,(int)offsetof(AttachedSprite_obj,copyAlpha),HX_("copyAlpha",69,cb,91,a7)},
	{::hx::fsBool,(int)offsetof(AttachedSprite_obj,copyVisible),HX_("copyVisible",3d,f5,38,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AttachedSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String AttachedSprite_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("xAdd",89,44,83,4f),
	HX_("yAdd",28,7b,2c,50),
	HX_("angleAdd",0e,4c,53,2b),
	HX_("alphaAdd",63,71,1f,21),
	HX_("copyAngle",de,67,dd,a8),
	HX_("copyAlpha",69,cb,91,a7),
	HX_("copyVisible",3d,f5,38,f9),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class AttachedSprite_obj::__mClass;

void AttachedSprite_obj::__register()
{
	AttachedSprite_obj _hx_dummy;
	AttachedSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AttachedSprite",a9,16,92,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AttachedSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AttachedSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttachedSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttachedSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

