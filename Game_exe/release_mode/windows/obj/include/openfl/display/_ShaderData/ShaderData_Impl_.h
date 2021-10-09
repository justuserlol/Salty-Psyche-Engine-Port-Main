#ifndef INCLUDED_openfl_display__ShaderData_ShaderData_Impl_
#define INCLUDED_openfl_display__ShaderData_ShaderData_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,display,_ShaderData,ShaderData_Impl_)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display{
namespace _ShaderData{


class HXCPP_CLASS_ATTRIBUTES ShaderData_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderData_Impl__obj OBJ_;
		ShaderData_Impl__obj();

	public:
		enum { _hx_ClassId = 0x64f2a7ab };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._ShaderData.ShaderData_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._ShaderData.ShaderData_Impl_"); }

		inline static ::hx::ObjectPtr< ShaderData_Impl__obj > __new() {
			::hx::ObjectPtr< ShaderData_Impl__obj > __this = new ShaderData_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ShaderData_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ShaderData_Impl__obj *__this = (ShaderData_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderData_Impl__obj), false, "openfl.display._ShaderData.ShaderData_Impl_"));
			*(void **)__this = ShaderData_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderData_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderData_Impl_",ef,6d,8d,6b); }

		static  ::Dynamic _new( ::openfl::utils::ByteArrayData byteArray);
		static ::Dynamic _new_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _ShaderData

#endif /* INCLUDED_openfl_display__ShaderData_ShaderData_Impl_ */ 
