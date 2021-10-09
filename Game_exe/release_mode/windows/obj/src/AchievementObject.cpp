#include <hxcpp.h>

#ifndef INCLUDED_AchievementObject
#include <AchievementObject.h>
#endif
#ifndef INCLUDED_Achievements
#include <Achievements.h>
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
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_158_new,"AchievementObject","new",0xc9fc6060,"AchievementObject.new","Achievements.hx",158,0xf249f7fa)
HX_DEFINE_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_156_new,"AchievementObject","new",0xc9fc6060,"AchievementObject.new","Achievements.hx",156,0xf249f7fa)
HX_DEFINE_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_115_new,"AchievementObject","new",0xc9fc6060,"AchievementObject.new","Achievements.hx",115,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_06f1837ed6a36c4d_167_destroy,"AchievementObject","destroy",0x95b6bcfa,"AchievementObject.destroy","Achievements.hx",167,0xf249f7fa)

void AchievementObject_obj::__construct(int id, ::flixel::FlxCamera camera){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::AchievementObject,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::AchievementObject,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_158_new)
HXLINE( 159)				_gthis->alphaTween = null();
HXLINE( 160)				_gthis->remove(_gthis,null()).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 161)				if (::hx::IsNotNull( _gthis->onFinish )) {
HXLINE( 161)					_gthis->onFinish();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_156_new)
HXLINE( 156)			_gthis->alphaTween = ::flixel::tweens::FlxTween_obj::tween(_gthis, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)2.5))
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_115_new)
HXLINE( 116)		this->onFinish = null();
HXLINE( 119)		 ::AchievementObject _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 120)		super::__construct(this->x,this->y,null());
HXLINE( 121)		::ClientPrefs_obj::saveSettings();
HXLINE( 122)		 ::flixel::FlxSprite achievementBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,60,50,null())->makeGraphic(420,120,-16777216,null(),null());
HXLINE( 123)		achievementBG->scrollFactor->set(null(),null());
HXLINE( 125)		 ::flixel::FlxSprite achievementIcon =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(achievementBG->x + 10),(achievementBG->y + 10),null());
HXDLIN( 125)		::String library = null();
HXDLIN( 125)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("achievementgrid",b5,fa,02,8a));
HXDLIN( 125)		 ::Dynamic achievementIcon1;
HXDLIN( 125)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 125)			achievementIcon1 = imageToReturn;
            		}
            		else {
HXLINE( 125)			achievementIcon1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("achievementgrid",b5,fa,02,8a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN( 125)		 ::flixel::FlxSprite achievementIcon2 = achievementIcon->loadGraphic(achievementIcon1,true,150,150,null(),null());
HXLINE( 126)		achievementIcon2->animation->add(HX_("icon",79,e7,b2,45),::Array_obj< int >::__new(1)->init(0,id),0,false,false,null());
HXLINE( 127)		achievementIcon2->animation->play(HX_("icon",79,e7,b2,45),null(),null(),null());
HXLINE( 128)		achievementIcon2->scrollFactor->set(null(),null());
HXLINE( 129)		achievementIcon2->setGraphicSize(::Std_obj::_hx_int((achievementIcon2->get_width() * ((Float)0.66666666666666663))),null());
HXLINE( 130)		achievementIcon2->updateHitbox();
HXLINE( 131)		achievementIcon2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 133)		Float achievementIcon3 = achievementIcon2->x;
HXDLIN( 133)		Float achievementName = ((achievementIcon3 + achievementIcon2->get_width()) + 20);
HXDLIN( 133)		 ::flixel::text::FlxText achievementName1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,achievementName,(achievementIcon2->y + 16),280,( (::String)(::Achievements_obj::achievementsStuff->__get(id)->__GetItem(0)) ),16,null());
HXLINE( 134)		achievementName1->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),16,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 135)		achievementName1->scrollFactor->set(null(),null());
HXLINE( 137)		 ::flixel::text::FlxText achievementText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,achievementName1->x,(achievementName1->y + 32),280,( (::String)(::Achievements_obj::achievementsStuff->__get(id)->__GetItem(1)) ),16,null());
HXLINE( 138)		achievementText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),16,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE( 139)		achievementText->scrollFactor->set(null(),null());
HXLINE( 141)		this->add(achievementBG);
HXLINE( 142)		this->add(achievementName1);
HXLINE( 143)		this->add(achievementText);
HXLINE( 144)		this->add(achievementIcon2);
HXLINE( 146)		::Array< ::Dynamic> cam = ::flixel::FlxCamera_obj::_defaultCameras;
HXLINE( 147)		if (::hx::IsNotNull( camera )) {
HXLINE( 148)			cam = ::Array_obj< ::Dynamic>::__new(1)->init(0,camera);
            		}
HXLINE( 150)		this->set_alpha(( (Float)(0) ));
HXLINE( 151)		achievementBG->set_cameras(cam);
HXLINE( 152)		achievementName1->set_cameras(cam);
HXLINE( 153)		achievementText->set_cameras(cam);
HXLINE( 154)		achievementIcon2->set_cameras(cam);
HXLINE( 155)		this->alphaTween = ::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))));
            	}

Dynamic AchievementObject_obj::__CreateEmpty() { return new AchievementObject_obj; }

void *AchievementObject_obj::_hx_vtable = 0;

Dynamic AchievementObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AchievementObject_obj > _hx_result = new AchievementObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AchievementObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6f8fa5ae) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x6f8fa5ae;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AchievementObject_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_06f1837ed6a36c4d_167_destroy)
HXLINE( 168)		if (::hx::IsNotNull( this->alphaTween )) {
HXLINE( 169)			this->alphaTween->cancel();
            		}
HXLINE( 171)		this->super::destroy();
            	}



::hx::ObjectPtr< AchievementObject_obj > AchievementObject_obj::__new(int id, ::flixel::FlxCamera camera) {
	::hx::ObjectPtr< AchievementObject_obj > __this = new AchievementObject_obj();
	__this->__construct(id,camera);
	return __this;
}

::hx::ObjectPtr< AchievementObject_obj > AchievementObject_obj::__alloc(::hx::Ctx *_hx_ctx,int id, ::flixel::FlxCamera camera) {
	AchievementObject_obj *__this = (AchievementObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AchievementObject_obj), true, "AchievementObject"));
	*(void **)__this = AchievementObject_obj::_hx_vtable;
	__this->__construct(id,camera);
	return __this;
}

AchievementObject_obj::AchievementObject_obj()
{
}

void AchievementObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AchievementObject);
	HX_MARK_MEMBER_NAME(onFinish,"onFinish");
	HX_MARK_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AchievementObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onFinish,"onFinish");
	HX_VISIT_MEMBER_NAME(alphaTween,"alphaTween");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AchievementObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { return ::hx::Val( onFinish ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaTween") ) { return ::hx::Val( alphaTween ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AchievementObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { onFinish=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alphaTween") ) { alphaTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AchievementObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphaTween",2d,fe,15,3a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AchievementObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AchievementObject_obj,onFinish),HX_("onFinish",d2,36,2c,66)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(AchievementObject_obj,alphaTween),HX_("alphaTween",2d,fe,15,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AchievementObject_obj_sStaticStorageInfo = 0;
#endif

static ::String AchievementObject_obj_sMemberFields[] = {
	HX_("onFinish",d2,36,2c,66),
	HX_("alphaTween",2d,fe,15,3a),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class AchievementObject_obj::__mClass;

void AchievementObject_obj::__register()
{
	AchievementObject_obj _hx_dummy;
	AchievementObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AchievementObject",6e,f0,f4,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AchievementObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AchievementObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AchievementObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AchievementObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

