#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3dc7f803120ba5a4_12_new,"flixel.util.FlxPool_flixel_math_FlxPoint","new",0x4abdd86f,"flixel.util.FlxPool_flixel_math_FlxPoint.new","flixel/util/FlxPool.hx",12,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_3dc7f803120ba5a4_31_get,"flixel.util.FlxPool_flixel_math_FlxPoint","get",0x4ab888a5,"flixel.util.FlxPool_flixel_math_FlxPoint.get","flixel/util/FlxPool.hx",31,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_3dc7f803120ba5a4_42_put,"flixel.util.FlxPool_flixel_math_FlxPoint","put",0x4abf6ade,"flixel.util.FlxPool_flixel_math_FlxPoint.put","flixel/util/FlxPool.hx",42,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_3dc7f803120ba5a4_56_putUnsafe,"flixel.util.FlxPool_flixel_math_FlxPoint","putUnsafe",0xf57edda4,"flixel.util.FlxPool_flixel_math_FlxPoint.putUnsafe","flixel/util/FlxPool.hx",56,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_3dc7f803120ba5a4_65_preAllocate,"flixel.util.FlxPool_flixel_math_FlxPoint","preAllocate",0x522a790f,"flixel.util.FlxPool_flixel_math_FlxPoint.preAllocate","flixel/util/FlxPool.hx",65,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_3dc7f803120ba5a4_72_clear,"flixel.util.FlxPool_flixel_math_FlxPoint","clear",0x8762db5c,"flixel.util.FlxPool_flixel_math_FlxPoint.clear","flixel/util/FlxPool.hx",72,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_3dc7f803120ba5a4_81_get_length,"flixel.util.FlxPool_flixel_math_FlxPoint","get_length",0xb3eaac80,"flixel.util.FlxPool_flixel_math_FlxPoint.get_length","flixel/util/FlxPool.hx",81,0xdd4de86a)
namespace flixel{
namespace util{

void FlxPool_flixel_math_FlxPoint_obj::__construct(::hx::Class classObj){
            	HX_STACKFRAME(&_hx_pos_3dc7f803120ba5a4_12_new)
HXLINE(  23)		this->_count = 0;
HXLINE(  16)		this->_pool = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  27)		this->_class = classObj;
            	}

Dynamic FlxPool_flixel_math_FlxPoint_obj::__CreateEmpty() { return new FlxPool_flixel_math_FlxPoint_obj; }

void *FlxPool_flixel_math_FlxPoint_obj::_hx_vtable = 0;

Dynamic FlxPool_flixel_math_FlxPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPool_flixel_math_FlxPoint_obj > _hx_result = new FlxPool_flixel_math_FlxPoint_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxPool_flixel_math_FlxPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0502f3c1;
}

static ::flixel::util::IFlxPool_obj _hx_flixel_util_FlxPool_flixel_math_FlxPoint__hx_flixel_util_IFlxPool= {
	( void (::hx::Object::*)(int))&::flixel::util::FlxPool_flixel_math_FlxPoint_obj::preAllocate,
	( ::cpp::VirtualArray (::hx::Object::*)())&::flixel::util::FlxPool_flixel_math_FlxPoint_obj::clear_36f85899,
};

::cpp::VirtualArray FlxPool_flixel_math_FlxPoint_obj::clear_36f85899() {
			return clear();
}
void *FlxPool_flixel_math_FlxPoint_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x5a90a383: return &_hx_flixel_util_FlxPool_flixel_math_FlxPoint__hx_flixel_util_IFlxPool;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::math::FlxPoint FlxPool_flixel_math_FlxPoint_obj::get(){
            	HX_STACKFRAME(&_hx_pos_3dc7f803120ba5a4_31_get)
HXLINE(  32)		if ((this->_count == 0)) {
HXLINE(  34)			return ( ( ::flixel::math::FlxPoint)(::Type_obj::createInstance(this->_class,::cpp::VirtualArray_obj::__new(0))) );
            		}
HXLINE(  36)		return this->_pool->__get(--this->_count).StaticCast<  ::flixel::math::FlxPoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxPoint_obj,get,return )

void FlxPool_flixel_math_FlxPoint_obj::put( ::flixel::math::FlxPoint obj){
            	HX_STACKFRAME(&_hx_pos_3dc7f803120ba5a4_42_put)
HXDLIN(  42)		if (::hx::IsNotNull( obj )) {
HXLINE(  44)			int i = this->_pool->indexOf(obj,null());
HXLINE(  46)			bool _hx_tmp;
HXDLIN(  46)			if ((i != -1)) {
HXLINE(  46)				_hx_tmp = (i >= this->_count);
            			}
            			else {
HXLINE(  46)				_hx_tmp = true;
            			}
HXDLIN(  46)			if (_hx_tmp) {
HXLINE(  48)				obj->destroy();
HXLINE(  49)				this->_pool[this->_count++] = obj;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxPoint_obj,put,(void))

void FlxPool_flixel_math_FlxPoint_obj::putUnsafe( ::flixel::math::FlxPoint obj){
            	HX_STACKFRAME(&_hx_pos_3dc7f803120ba5a4_56_putUnsafe)
HXDLIN(  56)		if (::hx::IsNotNull( obj )) {
HXLINE(  58)			obj->destroy();
HXLINE(  59)			this->_pool[this->_count++] = obj;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxPoint_obj,putUnsafe,(void))

void FlxPool_flixel_math_FlxPoint_obj::preAllocate(int numObjects){
            	HX_STACKFRAME(&_hx_pos_3dc7f803120ba5a4_65_preAllocate)
HXDLIN(  65)		while(true){
HXDLIN(  65)			numObjects = (numObjects - 1);
HXDLIN(  65)			if (!(((numObjects + 1) > 0))) {
HXDLIN(  65)				goto _hx_goto_4;
            			}
HXLINE(  67)			this->_pool[this->_count++] = ( ( ::flixel::math::FlxPoint)(::Type_obj::createInstance(this->_class,::cpp::VirtualArray_obj::__new(0))) );
            		}
            		_hx_goto_4:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxPoint_obj,preAllocate,(void))

::Array< ::Dynamic> FlxPool_flixel_math_FlxPoint_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_3dc7f803120ba5a4_72_clear)
HXLINE(  73)		this->_count = 0;
HXLINE(  74)		::Array< ::Dynamic> oldPool = this->_pool;
HXLINE(  75)		this->_pool = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  76)		return oldPool;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxPoint_obj,clear,return )

int FlxPool_flixel_math_FlxPoint_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_3dc7f803120ba5a4_81_get_length)
HXDLIN(  81)		return this->_count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxPoint_obj,get_length,return )


::hx::ObjectPtr< FlxPool_flixel_math_FlxPoint_obj > FlxPool_flixel_math_FlxPoint_obj::__new(::hx::Class classObj) {
	::hx::ObjectPtr< FlxPool_flixel_math_FlxPoint_obj > __this = new FlxPool_flixel_math_FlxPoint_obj();
	__this->__construct(classObj);
	return __this;
}

::hx::ObjectPtr< FlxPool_flixel_math_FlxPoint_obj > FlxPool_flixel_math_FlxPoint_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Class classObj) {
	FlxPool_flixel_math_FlxPoint_obj *__this = (FlxPool_flixel_math_FlxPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPool_flixel_math_FlxPoint_obj), true, "flixel.util.FlxPool_flixel_math_FlxPoint"));
	*(void **)__this = FlxPool_flixel_math_FlxPoint_obj::_hx_vtable;
	__this->__construct(classObj);
	return __this;
}

FlxPool_flixel_math_FlxPoint_obj::FlxPool_flixel_math_FlxPoint_obj()
{
}

void FlxPool_flixel_math_FlxPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool_flixel_math_FlxPoint);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_END_CLASS();
}

void FlxPool_flixel_math_FlxPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_count,"_count");
}

::hx::Val FlxPool_flixel_math_FlxPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"put") ) { return ::hx::Val( put_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return ::hx::Val( _pool ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"_class") ) { return ::hx::Val( _class ); }
		if (HX_FIELD_EQ(inName,"_count") ) { return ::hx::Val( _count ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"putUnsafe") ) { return ::hx::Val( putUnsafe_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preAllocate") ) { return ::hx::Val( preAllocate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxPool_flixel_math_FlxPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPool_flixel_math_FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("_pool",bb,9c,6d,fd));
	outFields->push(HX_("_class",79,bf,3f,44));
	outFields->push(HX_("_count",10,8c,4a,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxPool_flixel_math_FlxPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxPool_flixel_math_FlxPoint_obj,_pool),HX_("_pool",bb,9c,6d,fd)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FlxPool_flixel_math_FlxPoint_obj,_class),HX_("_class",79,bf,3f,44)},
	{::hx::fsInt,(int)offsetof(FlxPool_flixel_math_FlxPoint_obj,_count),HX_("_count",10,8c,4a,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxPool_flixel_math_FlxPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxPool_flixel_math_FlxPoint_obj_sMemberFields[] = {
	HX_("_pool",bb,9c,6d,fd),
	HX_("_class",79,bf,3f,44),
	HX_("_count",10,8c,4a,46),
	HX_("get",96,80,4e,00),
	HX_("put",cf,62,55,00),
	HX_("putUnsafe",55,e0,1c,e4),
	HX_("preAllocate",00,4a,53,a6),
	HX_("clear",8d,71,5b,48),
	HX_("get_length",af,04,8f,8f),
	::String(null()) };

::hx::Class FlxPool_flixel_math_FlxPoint_obj::__mClass;

void FlxPool_flixel_math_FlxPoint_obj::__register()
{
	FlxPool_flixel_math_FlxPoint_obj _hx_dummy;
	FlxPool_flixel_math_FlxPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxPool_flixel_math_FlxPoint",fd,74,d7,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxPool_flixel_math_FlxPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxPool_flixel_math_FlxPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPool_flixel_math_FlxPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPool_flixel_math_FlxPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
