#ifndef INCLUDED_CustomFadeTransition
#define INCLUDED_CustomFadeTransition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(CustomFadeTransition)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES CustomFadeTransition_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef CustomFadeTransition_obj OBJ_;
		CustomFadeTransition_obj();

	public:
		enum { _hx_ClassId = 0x0add7632 };

		void __construct(Float duration,bool isTransIn);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CustomFadeTransition")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CustomFadeTransition"); }
		static ::hx::ObjectPtr< CustomFadeTransition_obj > __new(Float duration,bool isTransIn);
		static ::hx::ObjectPtr< CustomFadeTransition_obj > __alloc(::hx::Ctx *_hx_ctx,Float duration,bool isTransIn);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CustomFadeTransition_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CustomFadeTransition",e2,b5,f1,00); }

		static  ::Dynamic finishCallback;
		static Dynamic finishCallback_dyn() { return finishCallback;}
		 ::flixel::tweens::FlxTween leTween;
		void destroy();

};


#endif /* INCLUDED_CustomFadeTransition */ 
