#ifndef INCLUDED_substates_GameOverSubstate
#define INCLUDED_substates_GameOverSubstate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_substates_MusicBeatSubstate
#include <substates/MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(substates,GameOverSubstate)
HX_DECLARE_CLASS1(substates,MusicBeatSubstate)

namespace substates{


class HXCPP_CLASS_ATTRIBUTES GameOverSubstate_obj : public  ::substates::MusicBeatSubstate_obj
{
	public:
		typedef  ::substates::MusicBeatSubstate_obj super;
		typedef GameOverSubstate_obj OBJ_;
		GameOverSubstate_obj();

	public:
		enum { _hx_ClassId = 0x177974e9 };

		void __construct(Float x,Float y,Float camX,Float camY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="substates.GameOverSubstate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"substates.GameOverSubstate"); }
		static ::hx::ObjectPtr< GameOverSubstate_obj > __new(Float x,Float y,Float camX,Float camY);
		static ::hx::ObjectPtr< GameOverSubstate_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float camX,Float camY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameOverSubstate_obj();

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
		::String __ToString() const { return HX_("GameOverSubstate",37,5d,9a,d7); }

		static void __boot();
		static ::String characterName;
		static ::String deathSoundName;
		static ::String loopSoundName;
		static ::String endSoundName;
		static  ::substates::GameOverSubstate instance;
		static void resetVariables();
		static ::Dynamic resetVariables_dyn();

		 ::Boyfriend boyfriend;
		 ::flixel::math::FlxPoint camFollow;
		 ::flixel::FlxObject camFollowPos;
		bool updateCamera;
		bool playingDeathSound;
		::String stageSuffix;
		void create();

		bool isFollowingAlready;
		void update(Float elapsed);

		void beatHit();

		bool isEnding;
		void coolStartDeath( ::Dynamic volume);
		::Dynamic coolStartDeath_dyn();

		void endBullshit();
		::Dynamic endBullshit_dyn();

};

} // end namespace substates

#endif /* INCLUDED_substates_GameOverSubstate */ 
