#ifndef INCLUDED_states_FreeplayState
#define INCLUDED_states_FreeplayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,FreeplayState)
HX_DECLARE_CLASS1(states,MusicBeatState)
HX_DECLARE_CLASS1(states,SongMetadata)

namespace states{


class HXCPP_CLASS_ATTRIBUTES FreeplayState_obj : public  ::states::MusicBeatState_obj
{
	public:
		typedef  ::states::MusicBeatState_obj super;
		typedef FreeplayState_obj OBJ_;
		FreeplayState_obj();

	public:
		enum { _hx_ClassId = 0x2f22acaf };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.FreeplayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.FreeplayState"); }
		static ::hx::ObjectPtr< FreeplayState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< FreeplayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FreeplayState_obj();

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
		::String __ToString() const { return HX_("FreeplayState",31,61,f2,b3); }

		static void __boot();
		static int curSelected;
		static ::String lastDifficultyName;
		static  ::flixel::_hx_system::FlxSound vocals;
		static ::String difficultyToString(int diff);
		static ::Dynamic difficultyToString_dyn();

		static void destroyFreeplayVocals();
		static ::Dynamic destroyFreeplayVocals_dyn();

		::Array< ::Dynamic> songs;
		 ::flixel::text::FlxText selector;
		int curDifficulty;
		 ::flixel::_hx_system::FlxSound prewiewInst;
		 ::flixel::FlxSprite scoreBG;
		 ::flixel::text::FlxText scoreText;
		 ::flixel::text::FlxText diffText;
		int lerpScore;
		Float lerpRating;
		int intendedScore;
		Float intendedRating;
		 ::flixel::group::FlxTypedGroup grpSongs;
		bool curPlaying;
		::Array< ::Dynamic> iconArray;
		 ::flixel::FlxSprite bg;
		int intendedColor;
		 ::flixel::tweens::FlxTween colorTween;
		void sectionHit();

		void create();

		void closeSubState();

		void addSong(::String songName,int weekNum,::String songCharacter,int color);
		::Dynamic addSong_dyn();

		bool weekIsLocked(::String name);
		::Dynamic weekIsLocked_dyn();

		int instPlaying;
		Float holdTime;
		void update(Float elapsed);

		void changeDiff(::hx::Null< int >  change);
		::Dynamic changeDiff_dyn();

		void changeSelection(::hx::Null< int >  change,::hx::Null< bool >  playSound);
		::Dynamic changeSelection_dyn();

		void positionHighscore();
		::Dynamic positionHighscore_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_FreeplayState */ 
