#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_options_ControlsSubState
#include <options/ControlsSubState.h>
#endif
#ifndef INCLUDED_substates_MusicBeatSubstate
#include <substates/MusicBeatSubstate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_33_new,"options.ControlsSubState","new",0xaec7b8a9,"options.ControlsSubState.new","options/ControlsSubState.hx",33,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_120_update,"options.ControlsSubState","update",0xac333160,"options.ControlsSubState.update","options/ControlsSubState.hx",120,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_191_getInputTextNum,"options.ControlsSubState","getInputTextNum",0xbe6d942e,"options.ControlsSubState.getInputTextNum","options/ControlsSubState.hx",191,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_201_changeSelection,"options.ControlsSubState","changeSelection",0xad494a85,"options.ControlsSubState.changeSelection","options/ControlsSubState.hx",201,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_248_changeAlt,"options.ControlsSubState","changeAlt",0xf3e86aa2,"options.ControlsSubState.changeAlt","options/ControlsSubState.hx",248,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_271_unselectableCheck,"options.ControlsSubState","unselectableCheck",0x9008ce22,"options.ControlsSubState.unselectableCheck","options/ControlsSubState.hx",271,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_278_addBindTexts,"options.ControlsSubState","addBindTexts",0x6d2a405f,"options.ControlsSubState.addBindTexts","options/ControlsSubState.hx",278,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_293_reloadKeys,"options.ControlsSubState","reloadKeys",0xeeca24c4,"options.ControlsSubState.reloadKeys","options/ControlsSubState.hx",293,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_34_boot,"options.ControlsSubState","boot",0x3812dbc9,"options.ControlsSubState.boot","options/ControlsSubState.hx",34,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_35_boot,"options.ControlsSubState","boot",0x3812dbc9,"options.ControlsSubState.boot","options/ControlsSubState.hx",35,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_37_boot,"options.ControlsSubState","boot",0x3812dbc9,"options.ControlsSubState.boot","options/ControlsSubState.hx",37,0x6f367386)
namespace options{

void ControlsSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_33_new)
HXLINE( 119)		this->bindingTime = ((Float)0);
HXLINE( 118)		this->leaving = false;
HXLINE(  72)		this->nextAccept = 5;
HXLINE(  71)		this->rebindingKey = false;
HXLINE(  70)		this->grpInputsAlt = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  69)		this->grpInputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  40)		this->optionShit = ::cpp::VirtualArray_obj::__new(25)->init(0,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("NOTES",21,14,b9,1d)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("note_left",b4,fe,20,a5)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("note_down",0f,ef,de,9f)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("note_up",c8,67,5c,4d)))->init(4,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("note_right",8f,ec,ca,4e)))->init(5,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(6,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("UI",54,4a,00,00)))->init(7,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("ui_left",12,4d,89,f7)))->init(8,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("ui_down",6d,3d,47,f2)))->init(9,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("ui_up",a6,c2,91,a3)))->init(10,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("ui_right",71,30,a7,17)))->init(11,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(12,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Reset",af,b9,f5,79))->init(1,HX_("reset",cf,49,c8,e6)))->init(13,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Accept",28,07,9b,3f))->init(1,HX_("accept",08,93,06,0b)))->init(14,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Back",47,06,ea,2b))->init(1,HX_("back",27,da,10,41)))->init(15,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Pause",d6,46,85,50))->init(1,HX_("pause",f6,d6,57,bd)))->init(16,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(17,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("VOLUME",da,d5,d5,11)))->init(18,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Mute",f9,9a,3e,33))->init(1,HX_("volume_mute",9e,6a,db,fa)))->init(19,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("volume_up",e0,76,ad,60)))->init(20,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("volume_down",27,f4,e3,f4)))->init(21,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(22,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("DEBUG",33,8a,0d,55)))->init(23,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Key 1",50,fb,2b,72))->init(1,HX_("debug_1",05,20,57,5b)))->init(24,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Key 2",51,fb,2b,72))->init(1,HX_("debug_2",06,20,57,5b)));
HXLINE(  38)		this->bindLength = 0;
HXLINE(  75)		super::__construct();
HXLINE(  77)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  77)		::String library = null();
HXDLIN(  77)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("menuDesat",26,91,04,72),library);
HXDLIN(  77)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  78)		bg1->set_color(-1412611);
HXLINE(  79)		{
HXLINE(  79)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  79)			bool _hx_tmp;
HXDLIN(  79)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  79)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  79)					_hx_tmp = false;
            				}
            			}
HXDLIN(  79)			if (_hx_tmp) {
HXLINE(  79)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  79)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  79)			bool _hx_tmp1;
HXDLIN(  79)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  79)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  79)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  79)			if (_hx_tmp1) {
HXLINE(  79)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  79)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  80)		bg1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  81)		this->add(bg1);
HXLINE(  83)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  84)		this->add(this->grpOptions);
HXLINE(  86)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)));
HXLINE(  87)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,::options::ControlsSubState_obj::defaultKey));
HXLINE(  89)		{
HXLINE(  89)			int _g = 0;
HXDLIN(  89)			int _g1 = this->optionShit->get_length();
HXDLIN(  89)			while((_g < _g1)){
HXLINE(  89)				_g = (_g + 1);
HXDLIN(  89)				int i = (_g - 1);
HXLINE(  90)				bool isCentered = false;
HXLINE(  91)				bool isDefaultKey = ::hx::IsEq( this->optionShit->__get(i)->__GetItem(0),::options::ControlsSubState_obj::defaultKey );
HXLINE(  92)				if (this->unselectableCheck(i,true)) {
HXLINE(  93)					isCentered = true;
            				}
HXLINE(  96)				bool optionText;
HXDLIN(  96)				if (isCentered) {
HXLINE(  96)					optionText = isDefaultKey;
            				}
            				else {
HXLINE(  96)					optionText = true;
            				}
HXDLIN(  96)				 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(200) ),( (Float)(300) ),( (::String)(this->optionShit->__get(i)->__GetItem(0)) ),optionText);
HXLINE(  97)				optionText1->isMenuItem = true;
HXLINE(  98)				if (isCentered) {
HXLINE(  99)					{
HXLINE(  99)						 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  99)						if (::hx::IsNull( axes )) {
HXLINE(  99)							axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            						}
HXDLIN(  99)						bool _hx_tmp;
HXDLIN(  99)						switch((int)(axes->_hx_getIndex())){
            							case (int)0: case (int)2: {
HXLINE(  99)								_hx_tmp = true;
            							}
            							break;
            							default:{
HXLINE(  99)								_hx_tmp = false;
            							}
            						}
HXDLIN(  99)						if (_hx_tmp) {
HXLINE(  99)							int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  99)							optionText1->set_x(((( (Float)(_hx_tmp) ) - optionText1->get_width()) / ( (Float)(2) )));
            						}
HXDLIN(  99)						bool _hx_tmp1;
HXDLIN(  99)						switch((int)(axes->_hx_getIndex())){
            							case (int)1: case (int)2: {
HXLINE(  99)								_hx_tmp1 = true;
            							}
            							break;
            							default:{
HXLINE(  99)								_hx_tmp1 = false;
            							}
            						}
HXDLIN(  99)						if (_hx_tmp1) {
HXLINE(  99)							int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  99)							optionText1->set_y(((( (Float)(_hx_tmp) ) - optionText1->get_height()) / ( (Float)(2) )));
            						}
            					}
HXLINE( 100)					optionText1->set_y((optionText1->y - ( (Float)(55) )));
HXLINE( 101)					 ::flixel::math::FlxPoint fh = optionText1->startPosition;
HXDLIN( 101)					fh->set_y((fh->y - ( (Float)(55) )));
            				}
HXLINE( 103)				optionText1->changeX = false;
HXLINE( 104)				optionText1->distancePerItem->set_y(( (Float)(60) ));
HXLINE( 105)				optionText1->targetY = (i - ::options::ControlsSubState_obj::curSelected);
HXLINE( 106)				optionText1->snapToPosition();
HXLINE( 107)				this->grpOptions->add(optionText1).StaticCast<  ::Alphabet >();
HXLINE( 109)				if (!(isCentered)) {
HXLINE( 110)					this->addBindTexts(optionText1,i);
HXLINE( 111)					this->bindLength++;
HXLINE( 112)					if ((::options::ControlsSubState_obj::curSelected < 0)) {
HXLINE( 112)						::options::ControlsSubState_obj::curSelected = i;
            					}
            				}
            			}
            		}
HXLINE( 115)		this->changeSelection(null());
            	}

Dynamic ControlsSubState_obj::__CreateEmpty() { return new ControlsSubState_obj; }

void *ControlsSubState_obj::_hx_vtable = 0;

Dynamic ControlsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlsSubState_obj > _hx_result = new ControlsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ControlsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x30ee2621) {
			if (inClassId<=(int)0x249d54f6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x249d54f6;
			} else {
				return inClassId==(int)0x30ee2621;
			}
		} else {
			return inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void ControlsSubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_120_update)
HXLINE( 121)		if (!(this->rebindingKey)) {
HXLINE( 122)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 123)				this->changeSelection(-1);
            			}
HXLINE( 125)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 126)				this->changeSelection(1);
            			}
HXLINE( 128)			bool _hx_tmp;
HXDLIN( 128)			if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 128)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            			}
            			else {
HXLINE( 128)				_hx_tmp = true;
            			}
HXDLIN( 128)			if (_hx_tmp) {
HXLINE( 129)				this->changeAlt();
            			}
HXLINE( 132)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 133)				::ClientPrefs_obj::reloadControls();
HXLINE( 134)				this->close();
HXLINE( 135)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 135)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 138)			bool _hx_tmp1;
HXDLIN( 138)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 138)				_hx_tmp1 = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 138)				_hx_tmp1 = false;
            			}
HXDLIN( 138)			if (_hx_tmp1) {
HXLINE( 139)				if (::hx::IsEq( this->optionShit->__get(::options::ControlsSubState_obj::curSelected)->__GetItem(0),::options::ControlsSubState_obj::defaultKey )) {
HXLINE( 140)					::ClientPrefs_obj::keyBinds = ::ClientPrefs_obj::defaultKeys->copy();
HXLINE( 141)					this->reloadKeys();
HXLINE( 142)					this->changeSelection(null());
HXLINE( 143)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 143)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 144)					if (!(this->unselectableCheck(::options::ControlsSubState_obj::curSelected,null()))) {
HXLINE( 145)						this->bindingTime = ( (Float)(0) );
HXLINE( 146)						this->rebindingKey = true;
HXLINE( 147)						if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 148)							this->grpInputsAlt->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
            						else {
HXLINE( 150)							this->grpInputs->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
HXLINE( 152)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 152)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE( 156)			int keyPressed = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 157)			if ((keyPressed > -1)) {
HXLINE( 158)				::Array< int > keysArray = ( (::Array< int >)(::ClientPrefs_obj::keyBinds->get(this->optionShit->__get(::options::ControlsSubState_obj::curSelected)->__GetItem(1))) );
HXLINE( 159)				int _hx_tmp;
HXDLIN( 159)				if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 159)					_hx_tmp = 1;
            				}
            				else {
HXLINE( 159)					_hx_tmp = 0;
            				}
HXDLIN( 159)				keysArray[_hx_tmp] = keyPressed;
HXLINE( 161)				int opposite;
HXDLIN( 161)				if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 161)					opposite = 0;
            				}
            				else {
HXLINE( 161)					opposite = 1;
            				}
HXLINE( 162)				if ((keysArray->__get(opposite) == keysArray->__get((1 - opposite)))) {
HXLINE( 163)					keysArray[opposite] = -1;
            				}
HXLINE( 165)				::ClientPrefs_obj::keyBinds->set(( (::String)(this->optionShit->__get(::options::ControlsSubState_obj::curSelected)->__GetItem(1)) ),keysArray);
HXLINE( 167)				this->reloadKeys();
HXLINE( 168)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 168)				_hx_tmp1->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 169)				this->rebindingKey = false;
            			}
HXLINE( 172)			 ::options::ControlsSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 172)			_hx_tmp->bindingTime = (_hx_tmp->bindingTime + elapsed);
HXLINE( 173)			if ((this->bindingTime > 5)) {
HXLINE( 174)				if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 175)					this->grpInputsAlt->__get(::options::ControlsSubState_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 177)					this->grpInputs->__get(::options::ControlsSubState_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
HXLINE( 179)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 179)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 180)				this->rebindingKey = false;
HXLINE( 181)				this->bindingTime = ( (Float)(0) );
            			}
            		}
HXLINE( 185)		if ((this->nextAccept > 0)) {
HXLINE( 186)			 ::options::ControlsSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 186)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 188)		this->super::update(elapsed);
            	}


int ControlsSubState_obj::getInputTextNum(){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_191_getInputTextNum)
HXLINE( 192)		int num = 0;
HXLINE( 193)		{
HXLINE( 193)			int _g = 0;
HXDLIN( 193)			int _g1 = ::options::ControlsSubState_obj::curSelected;
HXDLIN( 193)			while((_g < _g1)){
HXLINE( 193)				_g = (_g + 1);
HXDLIN( 193)				int i = (_g - 1);
HXLINE( 194)				if (::hx::IsGreater( this->optionShit->__get(i)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),1 )) {
HXLINE( 195)					num = (num + 1);
            				}
            			}
            		}
HXLINE( 198)		return num;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubState_obj,getInputTextNum,return )

void ControlsSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_201_changeSelection)
HXLINE( 202)		while(true){
HXLINE( 203)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::ControlsSubState >();
HXDLIN( 203)			::options::ControlsSubState_obj::curSelected = (::options::ControlsSubState_obj::curSelected + change);
HXLINE( 204)			if ((::options::ControlsSubState_obj::curSelected < 0)) {
HXLINE( 205)				::options::ControlsSubState_obj::curSelected = (this->optionShit->get_length() - 1);
            			}
HXLINE( 206)			if ((::options::ControlsSubState_obj::curSelected >= this->optionShit->get_length())) {
HXLINE( 207)				::options::ControlsSubState_obj::curSelected = 0;
            			}
HXLINE( 202)			if (!(this->unselectableCheck(::options::ControlsSubState_obj::curSelected,null()))) {
HXLINE( 202)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
HXLINE( 210)		int bullShit = 0;
HXLINE( 212)		{
HXLINE( 212)			int _g = 0;
HXDLIN( 212)			int _g1 = this->grpInputs->length;
HXDLIN( 212)			while((_g < _g1)){
HXLINE( 212)				_g = (_g + 1);
HXDLIN( 212)				int i = (_g - 1);
HXLINE( 213)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 215)		{
HXLINE( 215)			int _g2 = 0;
HXDLIN( 215)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 215)			while((_g2 < _g3)){
HXLINE( 215)				_g2 = (_g2 + 1);
HXDLIN( 215)				int i = (_g2 - 1);
HXLINE( 216)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 219)		{
HXLINE( 219)			int _g4 = 0;
HXDLIN( 219)			::Array< ::Dynamic> _g5 = this->grpOptions->members;
HXDLIN( 219)			while((_g4 < _g5->length)){
HXLINE( 219)				 ::Alphabet item = _g5->__get(_g4).StaticCast<  ::Alphabet >();
HXDLIN( 219)				_g4 = (_g4 + 1);
HXLINE( 220)				item->targetY = (bullShit - ::options::ControlsSubState_obj::curSelected);
HXLINE( 221)				bullShit = (bullShit + 1);
HXLINE( 223)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 224)					item->set_alpha(((Float)0.6));
HXLINE( 225)					if ((item->targetY == 0)) {
HXLINE( 226)						item->set_alpha(( (Float)(1) ));
HXLINE( 227)						if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 228)							int _g = 0;
HXDLIN( 228)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 228)							while((_g < _g1)){
HXLINE( 228)								_g = (_g + 1);
HXDLIN( 228)								int i = (_g - 1);
HXLINE( 229)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 230)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 231)									goto _hx_goto_9;
            								}
            							}
            							_hx_goto_9:;
            						}
            						else {
HXLINE( 235)							int _g = 0;
HXDLIN( 235)							int _g1 = this->grpInputs->length;
HXDLIN( 235)							while((_g < _g1)){
HXLINE( 235)								_g = (_g + 1);
HXDLIN( 235)								int i = (_g - 1);
HXLINE( 236)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 237)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 238)									goto _hx_goto_10;
            								}
            							}
            							_hx_goto_10:;
            						}
            					}
            				}
            			}
            		}
HXLINE( 245)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 245)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlsSubState_obj,changeSelection,(void))

void ControlsSubState_obj::changeAlt(){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_248_changeAlt)
HXLINE( 249)		::options::ControlsSubState_obj::curAlt = !(::options::ControlsSubState_obj::curAlt);
HXLINE( 250)		{
HXLINE( 250)			int _g = 0;
HXDLIN( 250)			int _g1 = this->grpInputs->length;
HXDLIN( 250)			while((_g < _g1)){
HXLINE( 250)				_g = (_g + 1);
HXDLIN( 250)				int i = (_g - 1);
HXLINE( 251)				if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::options::ControlsSubState_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 252)					this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 253)					if (!(::options::ControlsSubState_obj::curAlt)) {
HXLINE( 254)						this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 256)					goto _hx_goto_12;
            				}
            			}
            			_hx_goto_12:;
            		}
HXLINE( 259)		{
HXLINE( 259)			int _g2 = 0;
HXDLIN( 259)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 259)			while((_g2 < _g3)){
HXLINE( 259)				_g2 = (_g2 + 1);
HXDLIN( 259)				int i = (_g2 - 1);
HXLINE( 260)				if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::options::ControlsSubState_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 261)					this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 262)					if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 263)						this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 265)					goto _hx_goto_13;
            				}
            			}
            			_hx_goto_13:;
            		}
HXLINE( 268)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 268)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubState_obj,changeAlt,(void))

bool ControlsSubState_obj::unselectableCheck(int num, ::Dynamic __o_checkDefaultKey){
            		 ::Dynamic checkDefaultKey = __o_checkDefaultKey;
            		if (::hx::IsNull(__o_checkDefaultKey)) checkDefaultKey = false;
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_271_unselectableCheck)
HXLINE( 272)		if (::hx::IsEq( this->optionShit->__get(num)->__GetItem(0),::options::ControlsSubState_obj::defaultKey )) {
HXLINE( 273)			return ( (bool)(checkDefaultKey) );
            		}
HXLINE( 275)		if (::hx::IsLess( this->optionShit->__get(num)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),2 )) {
HXLINE( 275)			return ::hx::IsNotEq( this->optionShit->__get(num)->__GetItem(0),::options::ControlsSubState_obj::defaultKey );
            		}
            		else {
HXLINE( 275)			return false;
            		}
HXDLIN( 275)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubState_obj,unselectableCheck,return )

void ControlsSubState_obj::addBindTexts( ::Alphabet optionText,int num){
            	HX_GC_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_278_addBindTexts)
HXLINE( 279)		::cpp::VirtualArray keys = ( (::cpp::VirtualArray)(::ClientPrefs_obj::keyBinds->get(this->optionShit->__get(num)->__GetItem(1))) );
HXLINE( 280)		 ::AttachedText text1 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(0)) )),400,-55,null(),null());
HXLINE( 281)		text1->setPosition((optionText->x + 400),(optionText->y - ( (Float)(55) )));
HXLINE( 282)		text1->sprTracker = optionText;
HXLINE( 283)		this->grpInputs->push(text1);
HXLINE( 284)		this->add(text1);
HXLINE( 286)		 ::AttachedText text2 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(1)) )),650,-55,null(),null());
HXLINE( 287)		text2->setPosition((optionText->x + 650),(optionText->y - ( (Float)(55) )));
HXLINE( 288)		text2->sprTracker = optionText;
HXLINE( 289)		this->grpInputsAlt->push(text2);
HXLINE( 290)		this->add(text2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubState_obj,addBindTexts,(void))

void ControlsSubState_obj::reloadKeys(){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_293_reloadKeys)
HXLINE( 294)		while((this->grpInputs->length > 0)){
HXLINE( 295)			 ::AttachedText item = this->grpInputs->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 296)			item->kill();
HXLINE( 297)			this->grpInputs->remove(item);
HXLINE( 298)			item->destroy();
            		}
HXLINE( 300)		while((this->grpInputsAlt->length > 0)){
HXLINE( 301)			 ::AttachedText item = this->grpInputsAlt->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 302)			item->kill();
HXLINE( 303)			this->grpInputsAlt->remove(item);
HXLINE( 304)			item->destroy();
            		}
HXLINE( 307)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 307)		::String _hx_tmp1;
HXDLIN( 307)		if (::hx::IsNull( ::ClientPrefs_obj::keyBinds )) {
HXLINE( 307)			_hx_tmp1 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE( 307)			_hx_tmp1 = ::ClientPrefs_obj::keyBinds->toString();
            		}
HXDLIN( 307)		_hx_tmp((HX_("Reloaded keys: ",a2,54,2a,6b) + _hx_tmp1),::hx::SourceInfo(HX_("source/options/ControlsSubState.hx",12,79,41,e8),307,HX_("options.ControlsSubState",37,30,2a,4c),HX_("reloadKeys",ed,81,0e,92)));
HXLINE( 309)		{
HXLINE( 309)			int _g = 0;
HXDLIN( 309)			int _g1 = this->grpOptions->length;
HXDLIN( 309)			while((_g < _g1)){
HXLINE( 309)				_g = (_g + 1);
HXDLIN( 309)				int i = (_g - 1);
HXLINE( 310)				if (!(this->unselectableCheck(i,true))) {
HXLINE( 311)					this->addBindTexts(Dynamic( this->grpOptions->members->__get(i)).StaticCast<  ::Alphabet >(),i);
            				}
            			}
            		}
HXLINE( 316)		int bullShit = 0;
HXLINE( 317)		{
HXLINE( 317)			int _g2 = 0;
HXDLIN( 317)			int _g3 = this->grpInputs->length;
HXDLIN( 317)			while((_g2 < _g3)){
HXLINE( 317)				_g2 = (_g2 + 1);
HXDLIN( 317)				int i = (_g2 - 1);
HXLINE( 318)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 320)		{
HXLINE( 320)			int _g4 = 0;
HXDLIN( 320)			int _g5 = this->grpInputsAlt->length;
HXDLIN( 320)			while((_g4 < _g5)){
HXLINE( 320)				_g4 = (_g4 + 1);
HXDLIN( 320)				int i = (_g4 - 1);
HXLINE( 321)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 324)		{
HXLINE( 324)			int _g6 = 0;
HXDLIN( 324)			::Array< ::Dynamic> _g7 = this->grpOptions->members;
HXDLIN( 324)			while((_g6 < _g7->length)){
HXLINE( 324)				 ::Alphabet item = _g7->__get(_g6).StaticCast<  ::Alphabet >();
HXDLIN( 324)				_g6 = (_g6 + 1);
HXLINE( 325)				item->targetY = (bullShit - ::options::ControlsSubState_obj::curSelected);
HXLINE( 326)				bullShit = (bullShit + 1);
HXLINE( 328)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 329)					item->set_alpha(((Float)0.6));
HXLINE( 330)					if ((item->targetY == 0)) {
HXLINE( 331)						item->set_alpha(( (Float)(1) ));
HXLINE( 332)						if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 333)							int _g = 0;
HXDLIN( 333)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 333)							while((_g < _g1)){
HXLINE( 333)								_g = (_g + 1);
HXDLIN( 333)								int i = (_g - 1);
HXLINE( 334)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 335)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            						else {
HXLINE( 339)							int _g = 0;
HXDLIN( 339)							int _g1 = this->grpInputs->length;
HXDLIN( 339)							while((_g < _g1)){
HXLINE( 339)								_g = (_g + 1);
HXDLIN( 339)								int i = (_g - 1);
HXLINE( 340)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 341)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubState_obj,reloadKeys,(void))

int ControlsSubState_obj::curSelected;

bool ControlsSubState_obj::curAlt;

::String ControlsSubState_obj::defaultKey;


::hx::ObjectPtr< ControlsSubState_obj > ControlsSubState_obj::__new() {
	::hx::ObjectPtr< ControlsSubState_obj > __this = new ControlsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ControlsSubState_obj > ControlsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ControlsSubState_obj *__this = (ControlsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlsSubState_obj), true, "options.ControlsSubState"));
	*(void **)__this = ControlsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ControlsSubState_obj::ControlsSubState_obj()
{
}

void ControlsSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlsSubState);
	HX_MARK_MEMBER_NAME(bindLength,"bindLength");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(grpInputs,"grpInputs");
	HX_MARK_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_MARK_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(leaving,"leaving");
	HX_MARK_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlsSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bindLength,"bindLength");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(grpInputs,"grpInputs");
	HX_VISIT_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_VISIT_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(leaving,"leaving");
	HX_VISIT_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ControlsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { return ::hx::Val( leaving ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { return ::hx::Val( grpInputs ); }
		if (HX_FIELD_EQ(inName,"changeAlt") ) { return ::hx::Val( changeAlt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { return ::hx::Val( bindLength ); }
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"reloadKeys") ) { return ::hx::Val( reloadKeys_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { return ::hx::Val( bindingTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { return ::hx::Val( grpInputsAlt ); }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { return ::hx::Val( rebindingKey ); }
		if (HX_FIELD_EQ(inName,"addBindTexts") ) { return ::hx::Val( addBindTexts_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getInputTextNum") ) { return ::hx::Val( getInputTextNum_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ControlsSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { outValue = ( curAlt ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { outValue = ( defaultKey ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val ControlsSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { leaving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { grpInputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { bindLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { bindingTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { grpInputsAlt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { rebindingKey=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ControlsSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { curAlt=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { defaultKey=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ControlsSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bindLength",83,6a,31,c7));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("grpInputs",ee,3e,7e,59));
	outFields->push(HX_("grpInputsAlt",db,fa,fe,c1));
	outFields->push(HX_("rebindingKey",cd,70,6f,a8));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("leaving",f4,09,47,15));
	outFields->push(HX_("bindingTime",f2,09,cb,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ControlsSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ControlsSubState_obj,bindLength),HX_("bindLength",83,6a,31,c7)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ControlsSubState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(ControlsSubState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubState_obj,grpInputs),HX_("grpInputs",ee,3e,7e,59)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubState_obj,grpInputsAlt),HX_("grpInputsAlt",db,fa,fe,c1)},
	{::hx::fsBool,(int)offsetof(ControlsSubState_obj,rebindingKey),HX_("rebindingKey",cd,70,6f,a8)},
	{::hx::fsInt,(int)offsetof(ControlsSubState_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsBool,(int)offsetof(ControlsSubState_obj,leaving),HX_("leaving",f4,09,47,15)},
	{::hx::fsFloat,(int)offsetof(ControlsSubState_obj,bindingTime),HX_("bindingTime",f2,09,cb,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ControlsSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ControlsSubState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &ControlsSubState_obj::curAlt,HX_("curAlt",89,9b,c2,3e)},
	{::hx::fsString,(void *) &ControlsSubState_obj::defaultKey,HX_("defaultKey",5e,97,fe,25)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ControlsSubState_obj_sMemberFields[] = {
	HX_("bindLength",83,6a,31,c7),
	HX_("optionShit",d5,2d,ee,91),
	HX_("grpOptions",f9,45,d8,00),
	HX_("grpInputs",ee,3e,7e,59),
	HX_("grpInputsAlt",db,fa,fe,c1),
	HX_("rebindingKey",cd,70,6f,a8),
	HX_("nextAccept",5b,44,38,c0),
	HX_("leaving",f4,09,47,15),
	HX_("bindingTime",f2,09,cb,be),
	HX_("update",09,86,05,87),
	HX_("getInputTextNum",65,e2,d9,59),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeAlt",99,a5,f7,1d),
	HX_("unselectableCheck",19,58,ce,19),
	HX_("addBindTexts",c8,f9,1e,b0),
	HX_("reloadKeys",ed,81,0e,92),
	::String(null()) };

static void ControlsSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlsSubState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(ControlsSubState_obj::curAlt,"curAlt");
	HX_MARK_MEMBER_NAME(ControlsSubState_obj::defaultKey,"defaultKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlsSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlsSubState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(ControlsSubState_obj::curAlt,"curAlt");
	HX_VISIT_MEMBER_NAME(ControlsSubState_obj::defaultKey,"defaultKey");
};

#endif

::hx::Class ControlsSubState_obj::__mClass;

static ::String ControlsSubState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("curAlt",89,9b,c2,3e),
	HX_("defaultKey",5e,97,fe,25),
	::String(null())
};

void ControlsSubState_obj::__register()
{
	ControlsSubState_obj _hx_dummy;
	ControlsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.ControlsSubState",37,30,2a,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ControlsSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &ControlsSubState_obj::__SetStatic;
	__mClass->mMarkFunc = ControlsSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ControlsSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlsSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlsSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ControlsSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_34_boot)
HXDLIN(  34)		curSelected = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_35_boot)
HXDLIN(  35)		curAlt = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_37_boot)
HXDLIN(  37)		defaultKey = HX_("Reset to Default Keys",47,5b,97,3d);
            	}
}

} // end namespace options
