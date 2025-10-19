#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_states_GalleryImage
#include <states/GalleryImage.h>
#endif
#ifndef INCLUDED_states_GalleryMusic
#include <states/GalleryMusic.h>
#endif
#ifndef INCLUDED_states_GalleryState
#include <states/GalleryState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_47ca6c36334795a8_16_new,"states.GalleryState","new",0xb9dbe55d,"states.GalleryState.new","states/GalleryState.hx",16,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_36_create,"states.GalleryState","create",0x4706ce1f,"states.GalleryState.create","states/GalleryState.hx",36,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_90_update,"states.GalleryState","update",0x51fced2c,"states.GalleryState.update","states/GalleryState.hx",90,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_129_switchCategory,"states.GalleryState","switchCategory",0xe4d80735,"states.GalleryState.switchCategory","states/GalleryState.hx",129,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_156_addImage,"states.GalleryState","addImage",0x3bbffb5d,"states.GalleryState.addImage","states/GalleryState.hx",156,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_159_changeSelection,"states.GalleryState","changeSelection",0x2747b539,"states.GalleryState.changeSelection","states/GalleryState.hx",159,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_190_addMusic,"states.GalleryState","addMusic",0x8eb1aca7,"states.GalleryState.addMusic","states/GalleryState.hx",190,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_193_changeMusicSelection,"states.GalleryState","changeMusicSelection",0x377692da,"states.GalleryState.changeMusicSelection","states/GalleryState.hx",193,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_206_toggleAudio,"states.GalleryState","toggleAudio",0x25980a9f,"states.GalleryState.toggleAudio","states/GalleryState.hx",206,0x9336ddd2)
HX_LOCAL_STACK_FRAME(_hx_pos_47ca6c36334795a8_22_boot,"states.GalleryState","boot",0xdea5cc95,"states.GalleryState.boot","states/GalleryState.hx",22,0x9336ddd2)
namespace states{

void GalleryState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_47ca6c36334795a8_16_new)
HXLINE(  20)		this->musics = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  19)		this->images = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  17)		this->curCategory = HX_("Images",d8,c4,26,33);
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic GalleryState_obj::__CreateEmpty() { return new GalleryState_obj; }

void *GalleryState_obj::_hx_vtable = 0;

Dynamic GalleryState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GalleryState_obj > _hx_result = new GalleryState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GalleryState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3369ae9c || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x79768e81 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GalleryState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_47ca6c36334795a8_36_create)
HXLINE(  37)		this->super::create();
HXLINE(  38)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  40)		this->persistentUpdate = true;
HXLINE(  42)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  42)		::String library = null();
HXDLIN(  42)		 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("betamusic",b5,d8,03,02),library);
HXDLIN(  42)		_hx_tmp->playMusic(file,((Float)0.8),true,null());
HXLINE(  44)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  44)		::String library1 = null();
HXDLIN(  44)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("menuDesat",26,91,04,72),library1);
HXDLIN(  44)		this->bg = _hx_tmp1->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  45)		this->bg->set_color(-16777216);
HXLINE(  46)		this->bg->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  47)		{
HXLINE(  47)			 ::flixel::FlxSprite _this = this->bg;
HXDLIN(  47)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  47)			bool _hx_tmp2;
HXDLIN(  47)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  47)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE(  47)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  47)			if (_hx_tmp2) {
HXLINE(  47)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  47)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  47)			bool _hx_tmp3;
HXDLIN(  47)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  47)					_hx_tmp3 = true;
            				}
            				break;
            				default:{
HXLINE(  47)					_hx_tmp3 = false;
            				}
            			}
HXDLIN(  47)			if (_hx_tmp3) {
HXLINE(  47)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  47)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  48)		this->add(this->bg);
HXLINE(  51)		this->imagesTab =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,20,0,HX_("Images",d8,c4,26,33),24,null());
HXLINE(  52)		 ::flixel::text::FlxText _hx_tmp4 = this->imagesTab;
HXDLIN(  52)		::String file1 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  52)		::String _hx_tmp5;
HXDLIN(  52)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE(  52)			_hx_tmp5 = file1;
            		}
            		else {
HXLINE(  52)			_hx_tmp5 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  52)		_hx_tmp4->setFormat(_hx_tmp5,24,-1,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE(  53)		this->add(this->imagesTab);
HXLINE(  55)		this->musicTab =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,200,20,0,HX_("Music",85,40,88,a3),24,null());
HXLINE(  56)		 ::flixel::text::FlxText _hx_tmp6 = this->musicTab;
HXDLIN(  56)		::String file2 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  56)		::String _hx_tmp7;
HXDLIN(  56)		if (::sys::FileSystem_obj::exists(file2)) {
HXLINE(  56)			_hx_tmp7 = file2;
            		}
            		else {
HXLINE(  56)			_hx_tmp7 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  56)		_hx_tmp6->setFormat(_hx_tmp7,24,-8355712,HX_("left",07,08,b0,47),null(),null(),null());
HXLINE(  57)		this->add(this->musicTab);
HXLINE(  60)		this->addImage(HX_("Sketch of Markiplier",53,2e,e9,b4),HX_("gallery/conceptmark",38,b6,30,05),-1,null(),null(),null());
HXLINE(  61)		this->addImage(HX_("Artwork Metal Mario",5f,96,ed,de),HX_("gallery/artworkmetal",b0,9e,b9,79),-7237231,null(),null(),null());
HXLINE(  62)		this->addImage(HX_("Sketch of Metal Mario Idle",1e,75,b1,4f),HX_("gallery/sketchmetal",de,34,bb,e0),-7237231,null(),null(),null());
HXLINE(  63)		this->addImage(HX_("Artwork Thatou",79,99,87,52),HX_("gallery/artworkthatou",84,df,e3,82),-4063064,null(),null(),null());
HXLINE(  64)		this->addImage(HX_("Sketch of Thatou",c2,64,a7,3f),HX_("gallery/sketchthatou",96,b1,45,3d),-1,null(),null(),null());
HXLINE(  65)		this->addImage(HX_("Originally, Metal Reflection had a percentage system inspired by the original Super Smash Bros. : when the opponent sang, our percentage would increase. If the player had 300%, he would die. A good accuracy would reduce the received percentage. The mechanic ended up being scrapped, as it seemed too complex and poorly balanced.",ea,94,3a,7c),HX_("gallery/metalconcept",1e,42,c5,f2),-1,0,630,20);
HXLINE(  66)		this->addImage(HX_W(u"Here\u2019s a very very old version of the song \'Periple\'",ebc6,24b9),HX_("gallery/periple_test",71,2c,ad,92),-1,null(),null(),null());
HXLINE(  67)		this->addImage(HX_("?",3f,00,00,00),HX_("gallery/placeholder",36,a7,d7,84),-1,null(),null(),null());
HXLINE(  70)		this->addMusic(HX_("Concept_Tes.ogg",6c,7b,17,f1),HX_("tes",e2,5d,58,00));
HXLINE(  71)		this->addMusic(HX_("Concept_TrickorTreating.ogg",e8,ee,82,92),HX_("dokis",6a,3e,c2,dd));
HXLINE(  72)		this->addMusic(HX_("Old_GameOver.ogg",5f,a8,64,5f),HX_("gameoverold",21,e2,77,c0));
HXLINE(  73)		this->addMusic(HX_("Old_Periple.ogg",c6,75,38,ee),HX_("periple",7d,49,da,7c));
HXLINE(  74)		this->addMusic(HX_("Old_NewGame.ogg",3b,eb,18,69),HX_("newgame",52,74,52,09));
HXLINE(  77)		this->imageDisplay =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  78)		this->imageDisplay->set_antialiasing(true);
HXLINE(  79)		{
HXLINE(  79)			 ::flixel::FlxSprite _this1 = this->imageDisplay;
HXDLIN(  79)			 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  79)			bool _hx_tmp8;
HXDLIN(  79)			switch((int)(axes1->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  79)					_hx_tmp8 = true;
            				}
            				break;
            				default:{
HXLINE(  79)					_hx_tmp8 = false;
            				}
            			}
HXDLIN(  79)			if (_hx_tmp8) {
HXLINE(  79)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  79)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  79)			bool _hx_tmp9;
HXDLIN(  79)			switch((int)(axes1->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  79)					_hx_tmp9 = true;
            				}
            				break;
            				default:{
HXLINE(  79)					_hx_tmp9 = false;
            				}
            			}
HXDLIN(  79)			if (_hx_tmp9) {
HXLINE(  79)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  79)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  80)		this->add(this->imageDisplay);
HXLINE(  83)		this->nameText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 64),::flixel::FlxG_obj::width,HX_("",00,00,00,00),32,null());
HXLINE(  84)		 ::flixel::text::FlxText _hx_tmp10 = this->nameText;
HXDLIN(  84)		::String file3 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  84)		::String _hx_tmp11;
HXDLIN(  84)		if (::sys::FileSystem_obj::exists(file3)) {
HXLINE(  84)			_hx_tmp11 = file3;
            		}
            		else {
HXLINE(  84)			_hx_tmp11 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  84)		_hx_tmp10->setFormat(_hx_tmp11,32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  85)		this->add(this->nameText);
HXLINE(  87)		if ((this->images->length > 0)) {
HXLINE(  87)			this->changeSelection(null());
            		}
            	}


void GalleryState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_47ca6c36334795a8_90_update)
HXLINE(  91)		this->super::update(elapsed);
HXLINE(  93)		bool left = ::PlayerSettings_obj::player1->controls->_ui_leftP->check();
HXLINE(  94)		bool right = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
HXLINE(  95)		bool back = ::PlayerSettings_obj::player1->controls->_back->check();
HXLINE(  96)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  96)		bool space = _this->keyManager->checkStatusUnsafe(32,_this->status);
HXLINE(  99)		bool _hx_tmp;
HXDLIN(  99)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  99)			 ::flixel::text::FlxText _hx_tmp1 = this->imagesTab;
HXDLIN(  99)			_hx_tmp = _hx_tmp1->overlapsPoint(::flixel::FlxG_obj::mouse->getWorldPosition(null(),null()),null(),null());
            		}
            		else {
HXLINE(  99)			_hx_tmp = false;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 100)			this->switchCategory(HX_("Images",d8,c4,26,33));
            		}
HXLINE( 104)		bool _hx_tmp1;
HXDLIN( 104)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 104)			 ::flixel::text::FlxText _hx_tmp = this->musicTab;
HXDLIN( 104)			_hx_tmp1 = _hx_tmp->overlapsPoint(::flixel::FlxG_obj::mouse->getWorldPosition(null(),null()),null(),null());
            		}
            		else {
HXLINE( 104)			_hx_tmp1 = false;
            		}
HXDLIN( 104)		if (_hx_tmp1) {
HXLINE( 105)			this->switchCategory(HX_("Music",85,40,88,a3));
            		}
HXLINE( 109)		if ((this->curCategory == HX_("Images",d8,c4,26,33))) {
HXLINE( 110)			if (left) {
HXLINE( 110)				this->changeSelection(-1);
            			}
HXLINE( 111)			if (right) {
HXLINE( 111)				this->changeSelection(1);
            			}
            		}
            		else {
HXLINE( 113)			if ((this->curCategory == HX_("Music",85,40,88,a3))) {
HXLINE( 114)				if (left) {
HXLINE( 114)					this->changeMusicSelection(-1);
            				}
HXLINE( 115)				if (right) {
HXLINE( 115)					this->changeMusicSelection(1);
            				}
HXLINE( 117)				if (space) {
HXLINE( 117)					this->toggleAudio();
            				}
            			}
            		}
HXLINE( 120)		if (back) {
HXLINE( 121)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 121)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 122)			{
HXLINE( 122)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 122)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 123)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 123)			::String library = null();
HXDLIN( 123)			 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 123)			_hx_tmp1->playMusic(file,1,true,null());
HXLINE( 124)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 125)			::states::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
            	}


void GalleryState_obj::switchCategory(::String cat){
            	HX_STACKFRAME(&_hx_pos_47ca6c36334795a8_129_switchCategory)
HXLINE( 130)		this->curCategory = cat;
HXLINE( 132)		if ((cat == HX_("Images",d8,c4,26,33))) {
HXLINE( 133)			this->imagesTab->set_color(-1);
HXLINE( 134)			this->musicTab->set_color(-8355712);
HXLINE( 136)			bool _hx_tmp;
HXDLIN( 136)			if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 136)				_hx_tmp = ::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel );
            			}
            			else {
HXLINE( 136)				_hx_tmp = true;
            			}
HXDLIN( 136)			if (_hx_tmp) {
HXLINE( 137)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 137)				::String library = null();
HXDLIN( 137)				 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("betamusic",b5,d8,03,02),library);
HXDLIN( 137)				_hx_tmp->playMusic(file,((Float)0.8),true,null());
            			}
HXLINE( 140)			if ((this->images->length > 0)) {
HXLINE( 140)				this->changeSelection(0);
            			}
            		}
            		else {
HXLINE( 143)			this->musicTab->set_color(-1);
HXLINE( 144)			this->imagesTab->set_color(-8355712);
HXLINE( 146)			if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 147)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 147)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 150)			if ((this->musics->length > 0)) {
HXLINE( 150)				this->changeMusicSelection(0);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GalleryState_obj,switchCategory,(void))

void GalleryState_obj::addImage(::String name,::String path,int color, ::Dynamic __o_textX, ::Dynamic __o_textY, ::Dynamic __o_textSize){
            		 ::Dynamic textX = __o_textX;
            		if (::hx::IsNull(__o_textX)) textX = -1;
            		 ::Dynamic textY = __o_textY;
            		if (::hx::IsNull(__o_textY)) textY = -1;
            		 ::Dynamic textSize = __o_textSize;
            		if (::hx::IsNull(__o_textSize)) textSize = 32;
            	HX_GC_STACKFRAME(&_hx_pos_47ca6c36334795a8_156_addImage)
HXDLIN( 156)		::Array< ::Dynamic> _hx_tmp = this->images;
HXDLIN( 156)		_hx_tmp->push( ::states::GalleryImage_obj::__alloc( HX_CTX ,name,path,color,textX,textY,textSize));
            	}


HX_DEFINE_DYNAMIC_FUNC6(GalleryState_obj,addImage,(void))

void GalleryState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_47ca6c36334795a8_159_changeSelection)
HXLINE( 160)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::states::GalleryState >();
HXDLIN( 160)		::states::GalleryState_obj::curSelected = (::states::GalleryState_obj::curSelected + change);
HXLINE( 162)		if ((::states::GalleryState_obj::curSelected < 0)) {
HXLINE( 162)			::states::GalleryState_obj::curSelected = (this->images->length - 1);
            		}
HXLINE( 163)		if ((::states::GalleryState_obj::curSelected >= this->images->length)) {
HXLINE( 163)			::states::GalleryState_obj::curSelected = 0;
            		}
HXLINE( 165)		 ::states::GalleryImage img = this->images->__get(::states::GalleryState_obj::curSelected).StaticCast<  ::states::GalleryImage >();
HXLINE( 166)		this->imageDisplay->set_visible(true);
HXLINE( 167)		 ::flixel::FlxSprite _hx_tmp1 = this->imageDisplay;
HXDLIN( 167)		::String library = null();
HXDLIN( 167)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(img->path,library);
HXDLIN( 167)		_hx_tmp1->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 168)		this->imageDisplay->scale->set(((Float)0.5),((Float)0.5));
HXLINE( 169)		this->imageDisplay->updateHitbox();
HXLINE( 170)		{
HXLINE( 170)			 ::flixel::FlxSprite _this = this->imageDisplay;
HXDLIN( 170)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN( 170)			bool _hx_tmp2;
HXDLIN( 170)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 170)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE( 170)					_hx_tmp2 = false;
            				}
            			}
HXDLIN( 170)			if (_hx_tmp2) {
HXLINE( 170)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 170)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 170)			bool _hx_tmp3;
HXDLIN( 170)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 170)					_hx_tmp3 = true;
            				}
            				break;
            				default:{
HXLINE( 170)					_hx_tmp3 = false;
            				}
            			}
HXDLIN( 170)			if (_hx_tmp3) {
HXLINE( 170)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 170)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 173)		if ((img->textX >= 0)) {
HXLINE( 173)			this->nameText->set_x(img->textX);
            		}
            		else {
HXLINE( 173)			this->nameText->set_x(( (Float)(0) ));
            		}
HXLINE( 174)		if ((img->textY >= 0)) {
HXLINE( 174)			this->nameText->set_y(img->textY);
            		}
            		else {
HXLINE( 174)			this->nameText->set_y(( (Float)((::flixel::FlxG_obj::height - 64)) ));
            		}
HXLINE( 175)		this->nameText->set_size(img->textSize);
HXLINE( 176)		this->nameText->set_text(img->name);
HXLINE( 177)		 ::flixel::text::FlxText _hx_tmp4 = this->nameText;
HXDLIN( 177)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 177)		::String _hx_tmp5;
HXDLIN( 177)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 177)			_hx_tmp5 = file;
            		}
            		else {
HXLINE( 177)			_hx_tmp5 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 177)		_hx_tmp4->setFormat(_hx_tmp5,img->textSize,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 179)		if ((img->color != this->intendedColor)) {
HXLINE( 180)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 180)				this->colorTween->cancel();
            			}
HXLINE( 181)			this->intendedColor = img->color;
HXLINE( 182)			this->colorTween = ::flixel::tweens::FlxTween_obj::color(this->bg,1,this->bg->color,this->intendedColor,null());
            		}
HXLINE( 185)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp6 = ::flixel::FlxG_obj::sound;
HXDLIN( 185)		_hx_tmp6->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.5),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GalleryState_obj,changeSelection,(void))

void GalleryState_obj::addMusic(::String name,::String file){
            	HX_GC_STACKFRAME(&_hx_pos_47ca6c36334795a8_190_addMusic)
HXDLIN( 190)		::Array< ::Dynamic> _hx_tmp = this->musics;
HXDLIN( 190)		_hx_tmp->push( ::states::GalleryMusic_obj::__alloc( HX_CTX ,name,file));
            	}


HX_DEFINE_DYNAMIC_FUNC2(GalleryState_obj,addMusic,(void))

void GalleryState_obj::changeMusicSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_47ca6c36334795a8_193_changeMusicSelection)
HXLINE( 194)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::states::GalleryState >();
HXDLIN( 194)		::states::GalleryState_obj::curSelected = (::states::GalleryState_obj::curSelected + change);
HXLINE( 196)		if ((::states::GalleryState_obj::curSelected < 0)) {
HXLINE( 196)			::states::GalleryState_obj::curSelected = (this->musics->length - 1);
            		}
HXLINE( 197)		if ((::states::GalleryState_obj::curSelected >= this->musics->length)) {
HXLINE( 197)			::states::GalleryState_obj::curSelected = 0;
            		}
HXLINE( 199)		 ::states::GalleryMusic mus = this->musics->__get(::states::GalleryState_obj::curSelected).StaticCast<  ::states::GalleryMusic >();
HXLINE( 200)		this->imageDisplay->set_visible(false);
HXLINE( 201)		this->nameText->set_text((HX_W(u"[\u266b] ",a73c,e8ac) + mus->name));
HXLINE( 203)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 203)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.5),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GalleryState_obj,changeMusicSelection,(void))

void GalleryState_obj::toggleAudio(){
            	HX_GC_STACKFRAME(&_hx_pos_47ca6c36334795a8_206_toggleAudio)
HXLINE( 207)		bool _hx_tmp;
HXDLIN( 207)		if (::hx::IsNotNull( this->audioPlayer )) {
HXLINE( 207)			_hx_tmp = ::hx::IsNotNull( this->audioPlayer->_channel );
            		}
            		else {
HXLINE( 207)			_hx_tmp = false;
            		}
HXDLIN( 207)		if (_hx_tmp) {
HXLINE( 208)			{
HXLINE( 208)				 ::flixel::_hx_system::FlxSound _this = this->audioPlayer;
HXDLIN( 208)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 209)			return;
            		}
HXLINE( 212)		 ::states::GalleryMusic mus = this->musics->__get(::states::GalleryState_obj::curSelected).StaticCast<  ::states::GalleryMusic >();
HXLINE( 214)		if (::hx::IsNotNull( this->audioPlayer )) {
HXLINE( 214)			this->audioPlayer->destroy();
            		}
HXLINE( 216)		::String filePath = ::Paths_obj::getPath(((HX_("images/gallery/music/",be,b5,e1,5a) + mus->file) + HX_(".ogg",e1,64,bc,1e)),HX_("SOUND",af,c4,ba,fe),null());
HXLINE( 218)		this->audioPlayer =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX )->loadEmbedded(filePath,false,false,null());
HXLINE( 219)		::flixel::FlxG_obj::sound->list->add(this->audioPlayer).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE( 220)		this->audioPlayer->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(GalleryState_obj,toggleAudio,(void))

int GalleryState_obj::curSelected;


::hx::ObjectPtr< GalleryState_obj > GalleryState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< GalleryState_obj > __this = new GalleryState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< GalleryState_obj > GalleryState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	GalleryState_obj *__this = (GalleryState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GalleryState_obj), true, "states.GalleryState"));
	*(void **)__this = GalleryState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

GalleryState_obj::GalleryState_obj()
{
}

void GalleryState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GalleryState);
	HX_MARK_MEMBER_NAME(curCategory,"curCategory");
	HX_MARK_MEMBER_NAME(images,"images");
	HX_MARK_MEMBER_NAME(musics,"musics");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(imageDisplay,"imageDisplay");
	HX_MARK_MEMBER_NAME(nameText,"nameText");
	HX_MARK_MEMBER_NAME(intendedColor,"intendedColor");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	HX_MARK_MEMBER_NAME(audioPlayer,"audioPlayer");
	HX_MARK_MEMBER_NAME(imagesTab,"imagesTab");
	HX_MARK_MEMBER_NAME(musicTab,"musicTab");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GalleryState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curCategory,"curCategory");
	HX_VISIT_MEMBER_NAME(images,"images");
	HX_VISIT_MEMBER_NAME(musics,"musics");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(imageDisplay,"imageDisplay");
	HX_VISIT_MEMBER_NAME(nameText,"nameText");
	HX_VISIT_MEMBER_NAME(intendedColor,"intendedColor");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	HX_VISIT_MEMBER_NAME(audioPlayer,"audioPlayer");
	HX_VISIT_MEMBER_NAME(imagesTab,"imagesTab");
	HX_VISIT_MEMBER_NAME(musicTab,"musicTab");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GalleryState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { return ::hx::Val( images ); }
		if (HX_FIELD_EQ(inName,"musics") ) { return ::hx::Val( musics ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { return ::hx::Val( nameText ); }
		if (HX_FIELD_EQ(inName,"musicTab") ) { return ::hx::Val( musicTab ); }
		if (HX_FIELD_EQ(inName,"addImage") ) { return ::hx::Val( addImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"addMusic") ) { return ::hx::Val( addMusic_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imagesTab") ) { return ::hx::Val( imagesTab ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curCategory") ) { return ::hx::Val( curCategory ); }
		if (HX_FIELD_EQ(inName,"audioPlayer") ) { return ::hx::Val( audioPlayer ); }
		if (HX_FIELD_EQ(inName,"toggleAudio") ) { return ::hx::Val( toggleAudio_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imageDisplay") ) { return ::hx::Val( imageDisplay ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { return ::hx::Val( intendedColor ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"switchCategory") ) { return ::hx::Val( switchCategory_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"changeMusicSelection") ) { return ::hx::Val( changeMusicSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GalleryState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val GalleryState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { images=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"musics") ) { musics=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { nameText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"musicTab") ) { musicTab=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imagesTab") ) { imagesTab=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curCategory") ) { curCategory=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audioPlayer") ) { audioPlayer=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imageDisplay") ) { imageDisplay=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { intendedColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GalleryState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void GalleryState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curCategory",9e,ec,aa,2e));
	outFields->push(HX_("images",b8,50,92,fe));
	outFields->push(HX_("musics",2e,c0,1b,3f));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("imageDisplay",27,a4,12,ab));
	outFields->push(HX_("nameText",98,ec,80,49));
	outFields->push(HX_("intendedColor",b8,fb,ff,5a));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	outFields->push(HX_("audioPlayer",d7,1c,69,06));
	outFields->push(HX_("imagesTab",7d,04,9f,43));
	outFields->push(HX_("musicTab",b0,76,97,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GalleryState_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(GalleryState_obj,curCategory),HX_("curCategory",9e,ec,aa,2e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GalleryState_obj,images),HX_("images",b8,50,92,fe)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GalleryState_obj,musics),HX_("musics",2e,c0,1b,3f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GalleryState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GalleryState_obj,imageDisplay),HX_("imageDisplay",27,a4,12,ab)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryState_obj,nameText),HX_("nameText",98,ec,80,49)},
	{::hx::fsInt,(int)offsetof(GalleryState_obj,intendedColor),HX_("intendedColor",b8,fb,ff,5a)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(GalleryState_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(GalleryState_obj,audioPlayer),HX_("audioPlayer",d7,1c,69,06)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryState_obj,imagesTab),HX_("imagesTab",7d,04,9f,43)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GalleryState_obj,musicTab),HX_("musicTab",b0,76,97,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GalleryState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &GalleryState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GalleryState_obj_sMemberFields[] = {
	HX_("curCategory",9e,ec,aa,2e),
	HX_("images",b8,50,92,fe),
	HX_("musics",2e,c0,1b,3f),
	HX_("bg",c5,55,00,00),
	HX_("imageDisplay",27,a4,12,ab),
	HX_("nameText",98,ec,80,49),
	HX_("intendedColor",b8,fb,ff,5a),
	HX_("colorTween",08,c2,dc,3d),
	HX_("audioPlayer",d7,1c,69,06),
	HX_("imagesTab",7d,04,9f,43),
	HX_("musicTab",b0,76,97,0d),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("switchCategory",12,45,a0,d2),
	HX_("addImage",7a,45,c6,36),
	HX_("changeSelection",bc,98,b5,48),
	HX_("addMusic",c4,f6,b7,89),
	HX_("changeMusicSelection",77,14,92,2e),
	HX_("toggleAudio",a2,30,47,4f),
	::String(null()) };

static void GalleryState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GalleryState_obj::curSelected,"curSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GalleryState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GalleryState_obj::curSelected,"curSelected");
};

#endif

::hx::Class GalleryState_obj::__mClass;

static ::String GalleryState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	::String(null())
};

void GalleryState_obj::__register()
{
	GalleryState_obj _hx_dummy;
	GalleryState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.GalleryState",eb,f2,94,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GalleryState_obj::__GetStatic;
	__mClass->mSetStaticField = &GalleryState_obj::__SetStatic;
	__mClass->mMarkFunc = GalleryState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GalleryState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GalleryState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GalleryState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GalleryState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GalleryState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GalleryState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GalleryState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_47ca6c36334795a8_22_boot)
HXDLIN(  22)		curSelected = 0;
            	}
}

} // end namespace states
