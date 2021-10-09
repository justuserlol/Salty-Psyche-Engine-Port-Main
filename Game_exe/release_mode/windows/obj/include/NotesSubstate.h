#ifndef INCLUDED_NotesSubstate
#define INCLUDED_NotesSubstate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(ColorSwap)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS0(NotesSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES NotesSubstate_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef NotesSubstate_obj OBJ_;
		NotesSubstate_obj();

	public:
		enum { _hx_ClassId = 0x4fa93366 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="NotesSubstate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"NotesSubstate"); }
		static ::hx::ObjectPtr< NotesSubstate_obj > __new();
		static ::hx::ObjectPtr< NotesSubstate_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NotesSubstate_obj();

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
		::String __ToString() const { return HX_("NotesSubstate",d2,ed,f1,06); }

		static void __boot();
		static int curSelected;
		static int typeSelected;
		 ::flixel::group::FlxTypedGroup grpNumbers;
		 ::flixel::group::FlxTypedGroup grpNotes;
		::Array< ::Dynamic> shaderArray;
		Float curValue;
		Float holdTime;
		 ::Alphabet hsvText;
		int nextAccept;
		int posX;
		bool changingNote;
		::Array< Float > hsvTextOffsets;
		void update(Float elapsed);

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void changeType(::hx::Null< int >  change);
		::Dynamic changeType_dyn();

		void resetValue(int selected,int type);
		::Dynamic resetValue_dyn();

		void updateValue(::hx::Null< Float >  change);
		::Dynamic updateValue_dyn();

};


#endif /* INCLUDED_NotesSubstate */ 
