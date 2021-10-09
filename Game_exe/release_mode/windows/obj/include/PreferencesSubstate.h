#ifndef INCLUDED_PreferencesSubstate
#define INCLUDED_PreferencesSubstate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(CheckboxThingie)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS0(PreferencesSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PreferencesSubstate_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef PreferencesSubstate_obj OBJ_;
		PreferencesSubstate_obj();

	public:
		enum { _hx_ClassId = 0x32c94489 };

		void __construct( ::Character showCharacter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PreferencesSubstate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PreferencesSubstate"); }
		static ::hx::ObjectPtr< PreferencesSubstate_obj > __new( ::Character showCharacter);
		static ::hx::ObjectPtr< PreferencesSubstate_obj > __alloc(::hx::Ctx *_hx_ctx, ::Character showCharacter);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PreferencesSubstate_obj();

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
		::String __ToString() const { return HX_("PreferencesSubstate",49,bf,26,bf); }

		static void __boot();
		static int curSelected;
		static ::Array< ::String > unselectableOptions;
		static ::Array< ::String > noCheckbox;
		static ::Array< ::String > options;
		 ::flixel::group::FlxTypedGroup grpOptions;
		::Array< ::Dynamic> checkboxArray;
		::Array< int > checkboxNumber;
		 ::flixel::group::FlxTypedGroup grpTexts;
		::Array< int > textNumber;
		 ::flixel::group::FlxTypedGroup characterLayer;
		 ::Character showCharacter;
		 ::flixel::text::FlxText descText;
		int nextAccept;
		Float holdTime;
		void update(Float elapsed);

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void reloadValues();
		::Dynamic reloadValues_dyn();

		bool unselectableCheck(int num);
		::Dynamic unselectableCheck_dyn();

};


#endif /* INCLUDED_PreferencesSubstate */ 
