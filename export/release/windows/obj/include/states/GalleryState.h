#ifndef INCLUDED_states_GalleryState
#define INCLUDED_states_GalleryState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif
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
HX_DECLARE_CLASS1(states,GalleryImage)
HX_DECLARE_CLASS1(states,GalleryMusic)
HX_DECLARE_CLASS1(states,GalleryState)
HX_DECLARE_CLASS1(states,MusicBeatState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES GalleryState_obj : public  ::states::MusicBeatState_obj
{
	public:
		typedef  ::states::MusicBeatState_obj super;
		typedef GalleryState_obj OBJ_;
		GalleryState_obj();

	public:
		enum { _hx_ClassId = 0x79768e81 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.GalleryState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.GalleryState"); }
		static ::hx::ObjectPtr< GalleryState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< GalleryState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GalleryState_obj();

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
		::String __ToString() const { return HX_("GalleryState",3f,60,7e,bb); }

		static void __boot();
		static int curSelected;
		::String curCategory;
		::Array< ::Dynamic> images;
		::Array< ::Dynamic> musics;
		 ::flixel::FlxSprite bg;
		 ::flixel::FlxSprite imageDisplay;
		 ::flixel::text::FlxText nameText;
		int intendedColor;
		 ::flixel::tweens::FlxTween colorTween;
		 ::flixel::_hx_system::FlxSound audioPlayer;
		 ::flixel::text::FlxText imagesTab;
		 ::flixel::text::FlxText musicTab;
		void create();

		void update(Float elapsed);

		void switchCategory(::String cat);
		::Dynamic switchCategory_dyn();

		void addImage(::String name,::String path,int color, ::Dynamic textX, ::Dynamic textY, ::Dynamic textSize);
		::Dynamic addImage_dyn();

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

		void addMusic(::String name,::String file);
		::Dynamic addMusic_dyn();

		void changeMusicSelection(::hx::Null< int >  change);
		::Dynamic changeMusicSelection_dyn();

		void toggleAudio();
		::Dynamic toggleAudio_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_GalleryState */ 
