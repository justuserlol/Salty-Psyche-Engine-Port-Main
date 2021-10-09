#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_675b1da24ab88520_6_new,"AttachedText","new",0xd558f3c3,"AttachedText.new","AttachedText.hx",6,0x8061f50d)
HX_LOCAL_STACK_FRAME(_hx_pos_675b1da24ab88520_19_update,"AttachedText","update",0x47086286,"AttachedText.update","AttachedText.hx",19,0x8061f50d)

void AttachedText_obj::__construct(::String __o_text, ::Dynamic __o_offsetX, ::Dynamic __o_offsetY, ::Dynamic __o_bold){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic offsetX = __o_offsetX;
            		if (::hx::IsNull(__o_offsetX)) offsetX = 0;
            		 ::Dynamic offsetY = __o_offsetY;
            		if (::hx::IsNull(__o_offsetY)) offsetY = 0;
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = false;
            	HX_STACKFRAME(&_hx_pos_675b1da24ab88520_6_new)
HXLINE(  11)		this->isAlt = false;
HXLINE(   9)		this->offsetY = ((Float)0);
HXLINE(   8)		this->offsetX = ((Float)0);
HXLINE(  13)		super::__construct(0,0,text,bold,null(),null(),null());
HXLINE(  14)		this->isMenuItem = false;
HXLINE(  15)		this->offsetX = ( (Float)(offsetX) );
HXLINE(  16)		this->offsetY = ( (Float)(offsetY) );
            	}

Dynamic AttachedText_obj::__CreateEmpty() { return new AttachedText_obj; }

void *AttachedText_obj::_hx_vtable = 0;

Dynamic AttachedText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AttachedText_obj > _hx_result = new AttachedText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool AttachedText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3fa6a911) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x3fa6a911;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x567b2b93 || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

void AttachedText_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_675b1da24ab88520_19_update)
HXLINE(  20)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  21)			this->setPosition((this->sprTracker->x + this->offsetX),(this->sprTracker->y + this->offsetY));
            		}
HXLINE(  23)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< AttachedText_obj > AttachedText_obj::__new(::String __o_text, ::Dynamic __o_offsetX, ::Dynamic __o_offsetY, ::Dynamic __o_bold) {
	::hx::ObjectPtr< AttachedText_obj > __this = new AttachedText_obj();
	__this->__construct(__o_text,__o_offsetX,__o_offsetY,__o_bold);
	return __this;
}

::hx::ObjectPtr< AttachedText_obj > AttachedText_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_text, ::Dynamic __o_offsetX, ::Dynamic __o_offsetY, ::Dynamic __o_bold) {
	AttachedText_obj *__this = (AttachedText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AttachedText_obj), true, "AttachedText"));
	*(void **)__this = AttachedText_obj::_hx_vtable;
	__this->__construct(__o_text,__o_offsetX,__o_offsetY,__o_bold);
	return __this;
}

AttachedText_obj::AttachedText_obj()
{
}

void AttachedText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachedText);
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(isAlt,"isAlt");
	 ::Alphabet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AttachedText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(isAlt,"isAlt");
	 ::Alphabet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AttachedText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isAlt") ) { return ::hx::Val( isAlt ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AttachedText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isAlt") ) { isAlt=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachedText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("isAlt",5f,23,48,c1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AttachedText_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(AttachedText_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(AttachedText_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(AttachedText_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(AttachedText_obj,isAlt),HX_("isAlt",5f,23,48,c1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AttachedText_obj_sStaticStorageInfo = 0;
#endif

static ::String AttachedText_obj_sMemberFields[] = {
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("sprTracker",03,a3,e2,78),
	HX_("isAlt",5f,23,48,c1),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class AttachedText_obj::__mClass;

void AttachedText_obj::__register()
{
	AttachedText_obj _hx_dummy;
	AttachedText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AttachedText",51,56,c5,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AttachedText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AttachedText_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttachedText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttachedText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

