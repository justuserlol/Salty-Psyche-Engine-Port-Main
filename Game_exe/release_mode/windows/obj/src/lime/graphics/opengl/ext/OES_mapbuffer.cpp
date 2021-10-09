#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_mapbuffer
#include <lime/graphics/opengl/ext/OES_mapbuffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c25d4af8f239f11a_4_new,"lime.graphics.opengl.ext.OES_mapbuffer","new",0x321fb62a,"lime.graphics.opengl.ext.OES_mapbuffer.new","lime/graphics/opengl/ext/OES_mapbuffer.hx",4,0x4ed60928)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_mapbuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c25d4af8f239f11a_4_new)
HXLINE(   9)		this->BUFFER_MAP_POINTER_OES = 35005;
HXLINE(   8)		this->BUFFER_MAPPED_OES = 35004;
HXLINE(   7)		this->BUFFER_ACCESS_OES = 35003;
HXLINE(   6)		this->WRITE_ONLY_OES = 35001;
            	}

Dynamic OES_mapbuffer_obj::__CreateEmpty() { return new OES_mapbuffer_obj; }

void *OES_mapbuffer_obj::_hx_vtable = 0;

Dynamic OES_mapbuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_mapbuffer_obj > _hx_result = new OES_mapbuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_mapbuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x404f464c;
}


OES_mapbuffer_obj::OES_mapbuffer_obj()
{
}

::hx::Val OES_mapbuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"WRITE_ONLY_OES") ) { return ::hx::Val( WRITE_ONLY_OES ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFER_ACCESS_OES") ) { return ::hx::Val( BUFFER_ACCESS_OES ); }
		if (HX_FIELD_EQ(inName,"BUFFER_MAPPED_OES") ) { return ::hx::Val( BUFFER_MAPPED_OES ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"BUFFER_MAP_POINTER_OES") ) { return ::hx::Val( BUFFER_MAP_POINTER_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_mapbuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"WRITE_ONLY_OES") ) { WRITE_ONLY_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFER_ACCESS_OES") ) { BUFFER_ACCESS_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_MAPPED_OES") ) { BUFFER_MAPPED_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"BUFFER_MAP_POINTER_OES") ) { BUFFER_MAP_POINTER_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_mapbuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("WRITE_ONLY_OES",aa,29,b5,d7));
	outFields->push(HX_("BUFFER_ACCESS_OES",41,5b,45,fb));
	outFields->push(HX_("BUFFER_MAPPED_OES",d0,4c,da,cd));
	outFields->push(HX_("BUFFER_MAP_POINTER_OES",99,e4,3a,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_mapbuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_mapbuffer_obj,WRITE_ONLY_OES),HX_("WRITE_ONLY_OES",aa,29,b5,d7)},
	{::hx::fsInt,(int)offsetof(OES_mapbuffer_obj,BUFFER_ACCESS_OES),HX_("BUFFER_ACCESS_OES",41,5b,45,fb)},
	{::hx::fsInt,(int)offsetof(OES_mapbuffer_obj,BUFFER_MAPPED_OES),HX_("BUFFER_MAPPED_OES",d0,4c,da,cd)},
	{::hx::fsInt,(int)offsetof(OES_mapbuffer_obj,BUFFER_MAP_POINTER_OES),HX_("BUFFER_MAP_POINTER_OES",99,e4,3a,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_mapbuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_mapbuffer_obj_sMemberFields[] = {
	HX_("WRITE_ONLY_OES",aa,29,b5,d7),
	HX_("BUFFER_ACCESS_OES",41,5b,45,fb),
	HX_("BUFFER_MAPPED_OES",d0,4c,da,cd),
	HX_("BUFFER_MAP_POINTER_OES",99,e4,3a,9f),
	::String(null()) };

::hx::Class OES_mapbuffer_obj::__mClass;

void OES_mapbuffer_obj::__register()
{
	OES_mapbuffer_obj _hx_dummy;
	OES_mapbuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_mapbuffer",38,19,f3,da);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_mapbuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_mapbuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_mapbuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_mapbuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
