#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_StageData
#include <StageData.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_states_LoadingState
#include <states/LoadingState.h>
#endif
#ifndef INCLUDED_states_MultiCallback
#include <states/MultiCallback.h>
#endif
#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_670a7524baf7a379_21_new,"states.LoadingState","new",0xb6608a33,"states.LoadingState.new","states/LoadingState.hx",21,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_82_create,"states.LoadingState","create",0xe9745309,"states.LoadingState.create","states/LoadingState.hx",82,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_67_create,"states.LoadingState","create",0xe9745309,"states.LoadingState.create","states/LoadingState.hx",67,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_48_create,"states.LoadingState","create",0xe9745309,"states.LoadingState.create","states/LoadingState.hx",48,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_89_checkLoadSong,"states.LoadingState","checkLoadSong",0xd532b196,"states.LoadingState.checkLoadSong","states/LoadingState.hx",89,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_98_checkLoadSong,"states.LoadingState","checkLoadSong",0xd532b196,"states.LoadingState.checkLoadSong","states/LoadingState.hx",98,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_102_checkLibrary,"states.LoadingState","checkLibrary",0xa36bd2e0,"states.LoadingState.checkLibrary","states/LoadingState.hx",102,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_111_checkLibrary,"states.LoadingState","checkLibrary",0xa36bd2e0,"states.LoadingState.checkLibrary","states/LoadingState.hx",111,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_116_update,"states.LoadingState","update",0xf46a7216,"states.LoadingState.update","states/LoadingState.hx",116,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_133_onLoad,"states.LoadingState","onLoad",0x57a68ef2,"states.LoadingState.onLoad","states/LoadingState.hx",133,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_194_destroy,"states.LoadingState","destroy",0x6f6fcc4d,"states.LoadingState.destroy","states/LoadingState.hx",194,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_142_getSongPath,"states.LoadingState","getSongPath",0x52054ba3,"states.LoadingState.getSongPath","states/LoadingState.hx",142,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_147_getVocalPath,"states.LoadingState","getVocalPath",0xcfce1711,"states.LoadingState.getVocalPath","states/LoadingState.hx",147,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_152_loadAndSwitchState,"states.LoadingState","loadAndSwitchState",0x9884a639,"states.LoadingState.loadAndSwitchState","states/LoadingState.hx",152,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_156_getNextState,"states.LoadingState","getNextState",0xb11c2075,"states.LoadingState.getNextState","states/LoadingState.hx",156,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_238_initSongsManifest,"states.LoadingState","initSongsManifest",0x3c93acb0,"states.LoadingState.initSongsManifest","states/LoadingState.hx",238,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_260_initSongsManifest,"states.LoadingState","initSongsManifest",0x3c93acb0,"states.LoadingState.initSongsManifest","states/LoadingState.hx",260,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_201_initSongsManifest,"states.LoadingState","initSongsManifest",0x3c93acb0,"states.LoadingState.initSongsManifest","states/LoadingState.hx",201,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_670a7524baf7a379_23_boot,"states.LoadingState","boot",0xd63162ff,"states.LoadingState.boot","states/LoadingState.hx",23,0x41b125bc)
namespace states{

void LoadingState_obj::__construct( ::flixel::FlxState target,bool stopMusic,::String directory){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_21_new)
HXLINE(  35)		this->targetShit = ((Float)0);
HXLINE(  32)		this->stopMusic = false;
HXLINE(  39)		super::__construct(null(),null());
HXLINE(  40)		this->target = target;
HXLINE(  41)		this->stopMusic = stopMusic;
HXLINE(  42)		this->directory = directory;
            	}

Dynamic LoadingState_obj::__CreateEmpty() { return new LoadingState_obj; }

void *LoadingState_obj::_hx_vtable = 0;

Dynamic LoadingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadingState_obj > _hx_result = new LoadingState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LoadingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3369ae9c) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x137cfbbb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x137cfbbb;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3369ae9c;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void LoadingState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::LoadingState,_gthis) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetLibrary lib){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,introComplete) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer _){
            				HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_82_create)
HXLINE(  82)				introComplete();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_67_create)
HXLINE(  68)			_gthis->callbacks =  ::states::MultiCallback_obj::__alloc( HX_CTX ,_gthis->onLoad_dyn(),null());
HXLINE(  69)			 ::Dynamic introComplete = _gthis->callbacks->add(HX_("introComplete",45,d3,4c,b2));
HXLINE(  75)			_gthis->checkLibrary(HX_("shared",a5,5e,2b,1d));
HXLINE(  76)			bool _hx_tmp;
HXDLIN(  76)			bool _hx_tmp1;
HXDLIN(  76)			if (::hx::IsNotNull( _gthis->directory )) {
HXLINE(  76)				_hx_tmp1 = (_gthis->directory.length > 0);
            			}
            			else {
HXLINE(  76)				_hx_tmp1 = false;
            			}
HXDLIN(  76)			if (_hx_tmp1) {
HXLINE(  76)				_hx_tmp = (_gthis->directory != HX_("shared",a5,5e,2b,1d));
            			}
            			else {
HXLINE(  76)				_hx_tmp = false;
            			}
HXDLIN(  76)			if (_hx_tmp) {
HXLINE(  77)				_gthis->checkLibrary(_gthis->directory);
            			}
HXLINE(  80)			Float fadeTime = ((Float)0.5);
HXLINE(  81)			::flixel::FlxG_obj::camera->fade(::flixel::FlxG_obj::camera->bgColor,fadeTime,true,null(),null());
HXLINE(  82)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start((fadeTime + ((Float)1.0)), ::Dynamic(new _hx_Closure_0(introComplete)),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_48_create)
HXDLIN(  48)		 ::states::LoadingState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  49)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-3473587,null(),null());
HXLINE(  50)		this->add(bg);
HXLINE(  51)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  51)		this->funkay = _hx_tmp->loadGraphic(::Paths_obj::getPath(HX_("images/funkay.png",b6,f5,59,91),HX_("IMAGE",3b,57,57,3b),null()),null(),null(),null(),null(),null());
HXLINE(  52)		this->funkay->setGraphicSize(0,::flixel::FlxG_obj::height);
HXLINE(  53)		this->funkay->updateHitbox();
HXLINE(  54)		this->funkay->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  55)		this->add(this->funkay);
HXLINE(  56)		this->funkay->scrollFactor->set(null(),null());
HXLINE(  57)		{
HXLINE(  57)			 ::flixel::FlxSprite _this = this->funkay;
HXDLIN(  57)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  57)			bool _hx_tmp1;
HXDLIN(  57)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  57)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  57)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  57)			if (_hx_tmp1) {
HXLINE(  57)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  57)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  57)			bool _hx_tmp2;
HXDLIN(  57)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  57)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE(  57)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  57)			if (_hx_tmp2) {
HXLINE(  57)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  57)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  59)		this->loadBar =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 20),null())->makeGraphic(::flixel::FlxG_obj::width,10,-59694,null(),null());
HXLINE(  60)		{
HXLINE(  60)			 ::flixel::FlxSprite _this1 = this->loadBar;
HXDLIN(  60)			 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  60)			if (::hx::IsNull( axes1 )) {
HXLINE(  60)				axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  60)			bool _hx_tmp3;
HXDLIN(  60)			switch((int)(axes1->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  60)					_hx_tmp3 = true;
            				}
            				break;
            				default:{
HXLINE(  60)					_hx_tmp3 = false;
            				}
            			}
HXDLIN(  60)			if (_hx_tmp3) {
HXLINE(  60)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  60)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  60)			bool _hx_tmp4;
HXDLIN(  60)			switch((int)(axes1->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  60)					_hx_tmp4 = true;
            				}
            				break;
            				default:{
HXLINE(  60)					_hx_tmp4 = false;
            				}
            			}
HXDLIN(  60)			if (_hx_tmp4) {
HXLINE(  60)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  60)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  61)		this->loadBar->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  62)		this->add(this->loadBar);
HXLINE(  64)		::states::LoadingState_obj::initSongsManifest()->onComplete( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


void LoadingState_obj::checkLoadSong(::String path){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_89_checkLoadSong)
HXDLIN(  89)		if (!(::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,path))) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::media::Sound _){
            				HX_STACKFRAME(&_hx_pos_670a7524baf7a379_98_checkLoadSong)
HXLINE(  98)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  91)			 ::lime::utils::AssetLibrary library = ::openfl::utils::Assets_obj::getLibrary(HX_("songs",fe,36,c7,80));
HXLINE(  92)			::String symbolPath = ( (::String)(path.split(HX_(":",3a,00,00,00))->pop()) );
HXLINE(  97)			 ::Dynamic callback = this->callbacks->add((HX_("song:",c5,36,c7,80) + path));
HXLINE(  98)			::openfl::utils::Assets_obj::loadSound(path,null())->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLoadSong,(void))

void LoadingState_obj::checkLibrary(::String library){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_102_checkLibrary)
HXLINE( 103)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 103)		bool _hx_tmp1 = ::openfl::utils::Assets_obj::hasLibrary(library);
HXDLIN( 103)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/states/LoadingState.hx",b0,0b,1c,f1),103,HX_("states.LoadingState",c1,f4,c4,7f),HX_("checkLibrary",13,df,f6,2c)));
HXLINE( 104)		if (::hx::IsNull( ::openfl::utils::Assets_obj::getLibrary(library) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::utils::AssetLibrary _){
            				HX_STACKFRAME(&_hx_pos_670a7524baf7a379_111_checkLibrary)
HXLINE( 111)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 107)			if (!(::lime::utils::Assets_obj::libraryPaths->exists(library))) {
HXLINE( 108)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing library: ",07,45,01,4f) + library)));
            			}
HXLINE( 110)			 ::Dynamic callback = this->callbacks->add((HX_("library:",df,f4,b1,42) + library));
HXLINE( 111)			::openfl::utils::Assets_obj::loadLibrary(library)->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLibrary,(void))

void LoadingState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_116_update)
HXLINE( 117)		this->super::update(elapsed);
HXLINE( 118)		 ::flixel::FlxSprite _hx_tmp = this->funkay;
HXDLIN( 118)		Float _hx_tmp1 = (((Float)0.88) * ( (Float)(::flixel::FlxG_obj::width) ));
HXDLIN( 118)		Float _hx_tmp2 = this->funkay->get_width();
HXDLIN( 118)		_hx_tmp->setGraphicSize(::Std_obj::_hx_int((_hx_tmp1 + (((Float)0.9) * (_hx_tmp2 - (((Float)0.88) * ( (Float)(::flixel::FlxG_obj::width) )))))),null());
HXLINE( 119)		this->funkay->updateHitbox();
HXLINE( 120)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 122)			 ::flixel::FlxSprite _hx_tmp = this->funkay;
HXDLIN( 122)			_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->funkay->get_width() + 60)),null());
HXLINE( 123)			this->funkay->updateHitbox();
            		}
HXLINE( 126)		if (::hx::IsNotNull( this->callbacks )) {
HXLINE( 127)			this->targetShit = ::flixel::math::FlxMath_obj::remapToRange((( (Float)(this->callbacks->numRemaining) ) / ( (Float)(this->callbacks->length) )),( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ));
HXLINE( 128)			 ::flixel::math::FlxPoint fh = this->loadBar->scale;
HXDLIN( 128)			fh->set_x((fh->x + (((Float)0.5) * (this->targetShit - this->loadBar->scale->x))));
            		}
            	}


void LoadingState_obj::onLoad(){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_133_onLoad)
HXLINE( 134)		bool _hx_tmp;
HXDLIN( 134)		if (this->stopMusic) {
HXLINE( 134)			_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 134)			_hx_tmp = false;
            		}
HXDLIN( 134)		if (_hx_tmp) {
HXLINE( 135)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 135)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 137)		::states::MusicBeatState_obj::switchState(this->target);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,onLoad,(void))

void LoadingState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_194_destroy)
HXLINE( 195)		this->super::destroy();
HXLINE( 197)		this->callbacks = null();
            	}


Float LoadingState_obj::MIN_TIME;

 ::Dynamic LoadingState_obj::getSongPath(){
            	HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_142_getSongPath)
HXDLIN( 142)		::String song = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) );
HXDLIN( 142)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 142)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 142)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 142)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Inst",95,b3,69,40));
HXDLIN( 142)		 ::openfl::media::Sound inst = ::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXDLIN( 142)		return inst;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getSongPath,return )

 ::Dynamic LoadingState_obj::getVocalPath(){
            	HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_147_getVocalPath)
HXDLIN( 147)		::String song = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) );
HXDLIN( 147)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 147)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 147)		::String path = invalidChars->split(::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 147)		::String songKey = ((HX_("",00,00,00,00) + hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase()) + HX_("/Voices",10,18,4f,34));
HXDLIN( 147)		 ::openfl::media::Sound voices = ::Paths_obj::returnSound(HX_("songs",fe,36,c7,80),songKey,null());
HXDLIN( 147)		return voices;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getVocalPath,return )

void LoadingState_obj::loadAndSwitchState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_152_loadAndSwitchState)
HXDLIN( 152)		::states::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(target,stopMusic));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,loadAndSwitchState,(void))

 ::flixel::FlxState LoadingState_obj::getNextState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_156_getNextState)
HXLINE( 157)		::String directory = HX_("shared",a5,5e,2b,1d);
HXLINE( 158)		::String weekDir = ::StageData_obj::forceNextDirectory;
HXLINE( 159)		::StageData_obj::forceNextDirectory = null();
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		bool _hx_tmp1;
HXDLIN( 161)		if (::hx::IsNotNull( weekDir )) {
HXLINE( 161)			_hx_tmp1 = (weekDir.length > 0);
            		}
            		else {
HXLINE( 161)			_hx_tmp1 = false;
            		}
HXDLIN( 161)		if (_hx_tmp1) {
HXLINE( 161)			_hx_tmp = (weekDir != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 161)			directory = weekDir;
            		}
HXLINE( 163)		::Paths_obj::setCurrentLevel(directory);
HXLINE( 164)		::haxe::Log_obj::trace((HX_("Setting asset folder to ",b3,9c,5c,a5) + directory),::hx::SourceInfo(HX_("source/states/LoadingState.hx",b0,0b,1c,f1),164,HX_("states.LoadingState",c1,f4,c4,7f),HX_("getNextState",a8,2c,a7,3a)));
HXLINE( 175)		bool _hx_tmp2;
HXDLIN( 175)		if (stopMusic) {
HXLINE( 175)			_hx_tmp2 = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 175)			_hx_tmp2 = false;
            		}
HXDLIN( 175)		if (_hx_tmp2) {
HXLINE( 176)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 176)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 178)		return target;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,getNextState,return )

 ::lime::app::Future LoadingState_obj::initSongsManifest(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_238_initSongsManifest)
HXLINE( 239)			if (::hx::IsNull( manifest )) {
HXLINE( 241)				promise->error(((HX_("Cannot parse asset manifest for library \"",cf,1e,cc,48) + id) + HX_("\"",22,00,00,00)));
HXLINE( 242)				return;
            			}
HXLINE( 245)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 247)			if (::hx::IsNull( library )) {
HXLINE( 249)				promise->error(((HX_("Cannot open library \"",44,cc,55,e7) + id) + HX_("\"",22,00,00,00)));
            			}
            			else {
HXLINE( 254)				::lime::utils::Assets_obj::libraries->set(id,library);
HXLINE( 255)				library->onChange->add(::lime::utils::Assets_obj::onChange->dispatch_dyn(),null(),null());
HXLINE( 256)				 ::lime::app::Promise_lime_utils_AssetLibrary promise1 = promise;
HXDLIN( 256)				promise1->completeWith(::lime::app::Future_obj::withValue(library));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_260_initSongsManifest)
HXLINE( 260)			promise->error(((HX_("There is no asset library with an ID of \"",8b,06,e2,9a) + id) + HX_("\"",22,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_670a7524baf7a379_201_initSongsManifest)
HXLINE( 202)		::String id = HX_("songs",fe,36,c7,80);
HXLINE( 203)		 ::lime::app::Promise_lime_utils_AssetLibrary promise =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 205)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(id);
HXLINE( 207)		if (::hx::IsNotNull( library )) {
HXLINE( 209)			return ::lime::app::Future_obj::withValue(library);
            		}
HXLINE( 212)		::String path = id;
HXLINE( 213)		::String rootPath = null();
HXLINE( 216)		 ::haxe::ds::StringMap libraryPaths = ::lime::utils::Assets_obj::libraryPaths;
HXLINE( 217)		if (libraryPaths->exists(id)) {
HXLINE( 219)			path = libraryPaths->get_string(id);
HXLINE( 220)			rootPath = ::haxe::io::Path_obj::directory(path);
            		}
            		else {
HXLINE( 224)			if (::StringTools_obj::endsWith(path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 226)				rootPath = path;
HXLINE( 227)				path = (path + HX_("/library.json",2a,a7,07,47));
            			}
            			else {
HXLINE( 231)				rootPath = ::haxe::io::Path_obj::directory(path);
            			}
HXLINE( 234)			path = ::lime::utils::Assets_obj::_hx___cacheBreak(path);
            		}
HXLINE( 237)		::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->onComplete( ::Dynamic(new _hx_Closure_0(id,promise)))->onError( ::Dynamic(new _hx_Closure_1(id,promise)));
HXLINE( 263)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,initSongsManifest,return )


::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__new( ::flixel::FlxState target,bool stopMusic,::String directory) {
	::hx::ObjectPtr< LoadingState_obj > __this = new LoadingState_obj();
	__this->__construct(target,stopMusic,directory);
	return __this;
}

::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxState target,bool stopMusic,::String directory) {
	LoadingState_obj *__this = (LoadingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadingState_obj), true, "states.LoadingState"));
	*(void **)__this = LoadingState_obj::_hx_vtable;
	__this->__construct(target,stopMusic,directory);
	return __this;
}

LoadingState_obj::LoadingState_obj()
{
}

void LoadingState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadingState);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(stopMusic,"stopMusic");
	HX_MARK_MEMBER_NAME(directory,"directory");
	HX_MARK_MEMBER_NAME(callbacks,"callbacks");
	HX_MARK_MEMBER_NAME(targetShit,"targetShit");
	HX_MARK_MEMBER_NAME(funkay,"funkay");
	HX_MARK_MEMBER_NAME(loadBar,"loadBar");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadingState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(stopMusic,"stopMusic");
	HX_VISIT_MEMBER_NAME(directory,"directory");
	HX_VISIT_MEMBER_NAME(callbacks,"callbacks");
	HX_VISIT_MEMBER_NAME(targetShit,"targetShit");
	HX_VISIT_MEMBER_NAME(funkay,"funkay");
	HX_VISIT_MEMBER_NAME(loadBar,"loadBar");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"funkay") ) { return ::hx::Val( funkay ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoad") ) { return ::hx::Val( onLoad_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadBar") ) { return ::hx::Val( loadBar ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { return ::hx::Val( stopMusic ); }
		if (HX_FIELD_EQ(inName,"directory") ) { return ::hx::Val( directory ); }
		if (HX_FIELD_EQ(inName,"callbacks") ) { return ::hx::Val( callbacks ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { return ::hx::Val( targetShit ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkLibrary") ) { return ::hx::Val( checkLibrary_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkLoadSong") ) { return ::hx::Val( checkLoadSong_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LoadingState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getSongPath") ) { outValue = getSongPath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getVocalPath") ) { outValue = getVocalPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getNextState") ) { outValue = getNextState_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initSongsManifest") ) { outValue = initSongsManifest_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadAndSwitchState") ) { outValue = loadAndSwitchState_dyn(); return true; }
	}
	return false;
}

::hx::Val LoadingState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"funkay") ) { funkay=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadBar") ) { loadBar=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { stopMusic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"directory") ) { directory=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=inValue.Cast<  ::states::MultiCallback >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { targetShit=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadingState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("stopMusic",43,09,9d,20));
	outFields->push(HX_("directory",6d,f2,44,10));
	outFields->push(HX_("callbacks",0e,f3,bf,a6));
	outFields->push(HX_("targetShit",b1,6b,83,a6));
	outFields->push(HX_("funkay",44,ab,4f,6f));
	outFields->push(HX_("loadBar",4d,2b,d5,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadingState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(LoadingState_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsBool,(int)offsetof(LoadingState_obj,stopMusic),HX_("stopMusic",43,09,9d,20)},
	{::hx::fsString,(int)offsetof(LoadingState_obj,directory),HX_("directory",6d,f2,44,10)},
	{::hx::fsObject /*  ::states::MultiCallback */ ,(int)offsetof(LoadingState_obj,callbacks),HX_("callbacks",0e,f3,bf,a6)},
	{::hx::fsFloat,(int)offsetof(LoadingState_obj,targetShit),HX_("targetShit",b1,6b,83,a6)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,funkay),HX_("funkay",44,ab,4f,6f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,loadBar),HX_("loadBar",4d,2b,d5,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LoadingState_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &LoadingState_obj::MIN_TIME,HX_("MIN_TIME",3a,05,70,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LoadingState_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("stopMusic",43,09,9d,20),
	HX_("directory",6d,f2,44,10),
	HX_("callbacks",0e,f3,bf,a6),
	HX_("targetShit",b1,6b,83,a6),
	HX_("funkay",44,ab,4f,6f),
	HX_("loadBar",4d,2b,d5,08),
	HX_("create",fc,66,0f,7c),
	HX_("checkLoadSong",03,52,52,a5),
	HX_("checkLibrary",13,df,f6,2c),
	HX_("update",09,86,05,87),
	HX_("onLoad",e5,a2,41,ea),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void LoadingState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoadingState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#endif

::hx::Class LoadingState_obj::__mClass;

static ::String LoadingState_obj_sStaticFields[] = {
	HX_("MIN_TIME",3a,05,70,2a),
	HX_("getSongPath",d0,06,1e,5e),
	HX_("getVocalPath",44,23,59,59),
	HX_("loadAndSwitchState",ac,5a,a7,a6),
	HX_("getNextState",a8,2c,a7,3a),
	HX_("initSongsManifest",9d,87,b0,e7),
	::String(null())
};

void LoadingState_obj::__register()
{
	LoadingState_obj _hx_dummy;
	LoadingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.LoadingState",c1,f4,c4,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoadingState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoadingState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LoadingState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadingState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoadingState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LoadingState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_670a7524baf7a379_23_boot)
HXDLIN(  23)		MIN_TIME = ((Float)1.0);
            	}
}

} // end namespace states
