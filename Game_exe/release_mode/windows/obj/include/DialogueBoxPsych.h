#ifndef INCLUDED_DialogueBoxPsych
#define INCLUDED_DialogueBoxPsych

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(DialogueBoxPsych)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES DialogueBoxPsych_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef DialogueBoxPsych_obj OBJ_;
		DialogueBoxPsych_obj();

	public:
		enum { _hx_ClassId = 0x7d24723c };

		void __construct(::Array< ::String > dialogueList,::String song);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DialogueBoxPsych")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DialogueBoxPsych"); }
		static ::hx::ObjectPtr< DialogueBoxPsych_obj > __new(::Array< ::String > dialogueList,::String song);
		static ::hx::ObjectPtr< DialogueBoxPsych_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::String > dialogueList,::String song);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DialogueBoxPsych_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DialogueBoxPsych",88,30,b7,c9); }

		 ::Alphabet dialogue;
		::Array< ::String > dialogueList;
		 ::Dynamic finishThing;
		Dynamic finishThing_dyn() { return finishThing;}
		 ::Dynamic nextDialogueThing;
		Dynamic nextDialogueThing_dyn() { return nextDialogueThing;}
		 ::flixel::FlxSprite bgFade;
		 ::flixel::FlxSprite box;
		::String textToType;
		::Array< ::Dynamic> arrayCharacters;
		::Array< Float > arrayStartPos;
		::Array< int > arrayPosition;
		int currentText;
		Float offsetPos;
		::Array< ::String > textBoxTypes;
		::Array< ::String > charPositionList;
		void addCharacter( ::flixel::FlxSprite _hx_char,::String name);
		::Dynamic addCharacter_dyn();

		bool dialogueStarted;
		bool dialogueEnded;
		void spawnCharacters(::Array< ::String > splitSpace);
		::Dynamic spawnCharacters_dyn();

		int textX;
		int textY;
		int scrollSpeed;
		 ::Alphabet daText;
		void update(Float elapsed);

		int lastCharacter;
		::String lastBoxType;
		void startNextDialog();
		::Dynamic startNextDialog_dyn();

		void updateBoxOffsets();
		::Dynamic updateBoxOffsets_dyn();

};


#endif /* INCLUDED_DialogueBoxPsych */ 
