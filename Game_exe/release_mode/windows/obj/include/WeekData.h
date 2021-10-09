#ifndef INCLUDED_WeekData
#define INCLUDED_WeekData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(WeekData)



class HXCPP_CLASS_ATTRIBUTES WeekData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WeekData_obj OBJ_;
		WeekData_obj();

	public:
		enum { _hx_ClassId = 0x5ed59b1e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="WeekData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"WeekData"); }

		inline static ::hx::ObjectPtr< WeekData_obj > __new() {
			::hx::ObjectPtr< WeekData_obj > __this = new WeekData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< WeekData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			WeekData_obj *__this = (WeekData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WeekData_obj), false, "WeekData"));
			*(void **)__this = WeekData_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WeekData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WeekData",5e,a8,44,03); }

		static void __boot();
		static ::cpp::VirtualArray songsNames;
		static ::cpp::VirtualArray weekNumber;
		static ::Array< ::String > loadDirectory;
		static ::Array< ::String > weekResetName;
		static int getCurrentWeekNumber();
		static ::Dynamic getCurrentWeekNumber_dyn();

		static int getWeekNumber(int num);
		static ::Dynamic getWeekNumber_dyn();

		static ::String getWeekDirectory();
		static ::Dynamic getWeekDirectory_dyn();

};


#endif /* INCLUDED_WeekData */ 
