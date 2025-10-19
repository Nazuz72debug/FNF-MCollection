#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_MenuCharacter
#include <MenuCharacter.h>
#endif
#ifndef INCLUDED_MenuItem
#include <MenuItem.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_editors_MasterEditorMenu
#include <editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_editors_WeekEditorFreeplayState
#include <editors/WeekEditorFreeplayState.h>
#endif
#ifndef INCLUDED_editors_WeekEditorState
#include <editors/WeekEditorState.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
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
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_net_FileFilter
#include <openfl/net/FileFilter.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_696d4e2376313b0d_41_new,"editors.WeekEditorState","new",0x9142a81a,"editors.WeekEditorState.new","editors/WeekEditorState.hx",41,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_60_create,"editors.WeekEditorState","create",0x4bb29f82,"editors.WeekEditorState.create","editors/WeekEditorState.hx",60,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_143_addEditorBox,"editors.WeekEditorState","addEditorBox",0x571b4103,"editors.WeekEditorState.addEditorBox","editors/WeekEditorState.hx",143,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_150_addEditorBox,"editors.WeekEditorState","addEditorBox",0x571b4103,"editors.WeekEditorState.addEditorBox","editors/WeekEditorState.hx",150,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_157_addEditorBox,"editors.WeekEditorState","addEditorBox",0x571b4103,"editors.WeekEditorState.addEditorBox","editors/WeekEditorState.hx",157,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_126_addEditorBox,"editors.WeekEditorState","addEditorBox",0x571b4103,"editors.WeekEditorState.addEditorBox","editors/WeekEditorState.hx",126,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_209_addWeekUI,"editors.WeekEditorState","addWeekUI",0x6beb2383,"editors.WeekEditorState.addWeekUI","editors/WeekEditorState.hx",209,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_178_addWeekUI,"editors.WeekEditorState","addWeekUI",0x6beb2383,"editors.WeekEditorState.addWeekUI","editors/WeekEditorState.hx",178,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_243_addOtherUI,"editors.WeekEditorState","addOtherUI",0x6ad52489,"editors.WeekEditorState.addOtherUI","editors/WeekEditorState.hx",243,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_252_addOtherUI,"editors.WeekEditorState","addOtherUI",0x6ad52489,"editors.WeekEditorState.addOtherUI","editors/WeekEditorState.hx",252,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_237_addOtherUI,"editors.WeekEditorState","addOtherUI",0x6ad52489,"editors.WeekEditorState.addOtherUI","editors/WeekEditorState.hx",237,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_273_reloadAllShit,"editors.WeekEditorState","reloadAllShit",0xdb96ff62,"editors.WeekEditorState.reloadAllShit","editors/WeekEditorState.hx",273,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_307_updateText,"editors.WeekEditorState","updateText",0x7affaadc,"editors.WeekEditorState.updateText","editors/WeekEditorState.hx",307,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_332_reloadBG,"editors.WeekEditorState","reloadBG",0xa224bb64,"editors.WeekEditorState.reloadBG","editors/WeekEditorState.hx",332,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_350_reloadWeekThing,"editors.WeekEditorState","reloadWeekThing",0xb002a37b,"editors.WeekEditorState.reloadWeekThing","editors/WeekEditorState.hx",350,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_378_getEvent,"editors.WeekEditorState","getEvent",0x3ee2bdaa,"editors.WeekEditorState.getEvent","editors/WeekEditorState.hx",378,0x9d3c6cd7)
static const int _hx_array_data_735a5328_23[] = {
	(int)146,(int)113,(int)253,
};
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_426_update,"editors.WeekEditorState","update",0x56a8be8f,"editors.WeekEditorState.update","editors/WeekEditorState.hx",426,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_463_recalculateStuffPosition,"editors.WeekEditorState","recalculateStuffPosition",0xac0fae70,"editors.WeekEditorState.recalculateStuffPosition","editors/WeekEditorState.hx",463,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_469_loadWeek,"editors.WeekEditorState","loadWeek",0x28dc1740,"editors.WeekEditorState.loadWeek","editors/WeekEditorState.hx",469,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_481_onLoadComplete,"editors.WeekEditorState","onLoadComplete",0x47187b44,"editors.WeekEditorState.onLoadComplete","editors/WeekEditorState.hx",481,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_519_onLoadCancel,"editors.WeekEditorState","onLoadCancel",0x67bc1f45,"editors.WeekEditorState.onLoadCancel","editors/WeekEditorState.hx",519,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_531_onLoadError,"editors.WeekEditorState","onLoadError",0xe2281c5d,"editors.WeekEditorState.onLoadError","editors/WeekEditorState.hx",531,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_539_saveWeek,"editors.WeekEditorState","saveWeek",0x6bf5dfd7,"editors.WeekEditorState.saveWeek","editors/WeekEditorState.hx",539,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_552_onSaveComplete,"editors.WeekEditorState","onSaveComplete",0xa037db5b,"editors.WeekEditorState.onSaveComplete","editors/WeekEditorState.hx",552,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_564_onSaveCancel,"editors.WeekEditorState","onSaveCancel",0xfb4a7b9c,"editors.WeekEditorState.onSaveCancel","editors/WeekEditorState.hx",564,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_575_onSaveError,"editors.WeekEditorState","onSaveError",0x559dd7e6,"editors.WeekEditorState.onSaveError","editors/WeekEditorState.hx",575,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_176_boot,"editors.WeekEditorState","boot",0x81296f38,"editors.WeekEditorState.boot","editors/WeekEditorState.hx",176,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_478_boot,"editors.WeekEditorState","boot",0x81296f38,"editors.WeekEditorState.boot","editors/WeekEditorState.hx",478,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_479_boot,"editors.WeekEditorState","boot",0x81296f38,"editors.WeekEditorState.boot","editors/WeekEditorState.hx",479,0x9d3c6cd7)
namespace editors{

void WeekEditorState_obj::__construct( ::Dynamic weekFile){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_41_new)
HXLINE( 125)		this->blockPressWhileTypingOn = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  51)		this->weekFile = null();
HXLINE(  54)		super::__construct(null(),null());
HXLINE(  55)		this->weekFile = ::WeekData_obj::createWeekFile();
HXLINE(  56)		if (::hx::IsNotNull( weekFile )) {
HXLINE(  56)			this->weekFile = weekFile;
            		}
            		else {
HXLINE(  57)			::editors::WeekEditorState_obj::weekFileName = HX_("week1",bd,95,be,c7);
            		}
            	}

Dynamic WeekEditorState_obj::__CreateEmpty() { return new WeekEditorState_obj; }

void *WeekEditorState_obj::_hx_vtable = 0;

Dynamic WeekEditorState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WeekEditorState_obj > _hx_result = new WeekEditorState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WeekEditorState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3369ae9c) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x088951ee) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x088951ee;
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

void WeekEditorState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_60_create)
HXLINE(  61)		this->txtWeekTitle =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.7)),10,0,HX_("",00,00,00,00),32,null());
HXLINE(  62)		this->txtWeekTitle->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE(  63)		this->txtWeekTitle->set_alpha(((Float)0.7));
HXLINE(  65)		::String library = null();
HXDLIN(  65)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),null());
HXDLIN(  65)		bool xmlExists = false;
HXDLIN(  65)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  65)			xmlExists = true;
            		}
HXDLIN(  65)		 ::Dynamic ui_tex;
HXDLIN(  65)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  65)			ui_tex = imageLoaded;
            		}
            		else {
HXLINE(  65)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("campaign_menu_UI_assets",fd,f3,ba,6a),library);
HXDLIN(  65)			ui_tex = returnAsset;
            		}
HXDLIN(  65)		::String ui_tex1;
HXDLIN(  65)		if (xmlExists) {
HXLINE(  65)			ui_tex1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  65)			ui_tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  65)		 ::flixel::graphics::frames::FlxAtlasFrames ui_tex2 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(ui_tex,ui_tex1);
HXLINE(  66)		 ::flixel::FlxSprite bgYellow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,56,null())->makeGraphic(::flixel::FlxG_obj::width,386,-405679,null(),null());
HXLINE(  67)		this->bgSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,56,null());
HXLINE(  68)		this->bgSprite->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  70)		this->weekThing =  ::MenuItem_obj::__alloc( HX_CTX ,( (Float)(0) ),(this->bgSprite->y + 396),::editors::WeekEditorState_obj::weekFileName);
HXLINE(  71)		 ::MenuItem fh = this->weekThing;
HXDLIN(  71)		Float fh1 = fh->y;
HXDLIN(  71)		fh->set_y((fh1 + (this->weekThing->get_height() + 20)));
HXLINE(  72)		this->weekThing->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  73)		this->add(this->weekThing);
HXLINE(  75)		 ::flixel::FlxSprite blackBarThingie =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,56,-16777216,null(),null());
HXLINE(  76)		this->add(blackBarThingie);
HXLINE(  78)		this->grpWeekCharacters =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  80)		this->lock =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  81)		this->lock->set_frames(ui_tex2);
HXLINE(  82)		this->lock->animation->addByPrefix(HX_("lock",eb,9b,b7,47),HX_("lock",eb,9b,b7,47),null(),null(),null(),null());
HXLINE(  83)		this->lock->animation->play(HX_("lock",eb,9b,b7,47),null(),null(),null());
HXLINE(  84)		this->lock->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  85)		this->add(this->lock);
HXLINE(  87)		this->missingFileText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,HX_("",00,00,00,00),null(),null());
HXLINE(  88)		 ::flixel::text::FlxText _hx_tmp = this->missingFileText;
HXDLIN(  88)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  88)		::String _hx_tmp1;
HXDLIN(  88)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  88)			_hx_tmp1 = file;
            		}
            		else {
HXLINE(  88)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  88)		_hx_tmp->setFormat(_hx_tmp1,24,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  89)		this->missingFileText->set_borderSize(( (Float)(2) ));
HXLINE(  90)		this->missingFileText->set_visible(false);
HXLINE(  91)		this->add(this->missingFileText);
HXLINE(  93)		::Array< ::String > charArray = ( (::Array< ::String >)(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic)) );
HXLINE(  94)		{
HXLINE(  95)			{
HXLINE(  96)				 ::MenuCharacter weekCharacterThing =  ::MenuCharacter_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) - ( (Float)(150) )),charArray->__get(0));
HXLINE(  97)				weekCharacterThing->set_y((weekCharacterThing->y + 70));
HXLINE(  98)				this->grpWeekCharacters->add(weekCharacterThing).StaticCast<  ::MenuCharacter >();
            			}
HXLINE(  95)			{
HXLINE(  96)				 ::MenuCharacter weekCharacterThing1 =  ::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(2) )) - ( (Float)(150) )),charArray->__get(1));
HXLINE(  97)				weekCharacterThing1->set_y((weekCharacterThing1->y + 70));
HXLINE(  98)				this->grpWeekCharacters->add(weekCharacterThing1).StaticCast<  ::MenuCharacter >();
            			}
HXLINE(  95)			{
HXLINE(  96)				 ::MenuCharacter weekCharacterThing2 =  ::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(3) )) - ( (Float)(150) )),charArray->__get(2));
HXLINE(  97)				weekCharacterThing2->set_y((weekCharacterThing2->y + 70));
HXLINE(  98)				this->grpWeekCharacters->add(weekCharacterThing2).StaticCast<  ::MenuCharacter >();
            			}
            		}
HXLINE( 101)		this->add(bgYellow);
HXLINE( 102)		this->add(this->bgSprite);
HXLINE( 103)		this->add(this->grpWeekCharacters);
HXLINE( 105)		 ::flixel::FlxSprite tracksSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.07)),(this->bgSprite->y + 435),null());
HXDLIN( 105)		::String library1 = null();
HXDLIN( 105)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("Menu_Tracks",68,85,99,50),library1);
HXDLIN( 105)		 ::flixel::FlxSprite tracksSprite1 = tracksSprite->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 106)		tracksSprite1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 107)		this->add(tracksSprite1);
HXLINE( 109)		this->txtTracklist =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.05)),(tracksSprite1->y + 60),0,HX_("",00,00,00,00),32,null());
HXLINE( 110)		this->txtTracklist->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 111)		 ::flixel::text::FlxText _hx_tmp2 = this->txtTracklist;
HXDLIN( 111)		::String file1 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 111)		::String _hx_tmp3;
HXDLIN( 111)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 111)			_hx_tmp3 = file1;
            		}
            		else {
HXLINE( 111)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 111)		_hx_tmp2->set_font(_hx_tmp3);
HXLINE( 112)		this->txtTracklist->set_color(-1747081);
HXLINE( 113)		this->add(this->txtTracklist);
HXLINE( 114)		this->add(this->txtWeekTitle);
HXLINE( 116)		this->addEditorBox();
HXLINE( 117)		this->reloadAllShit();
HXLINE( 119)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE( 121)		this->super::create();
            	}


void WeekEditorState_obj::addEditorBox(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_143_addEditorBox)
HXLINE( 143)			::editors::WeekEditorState_obj::loadWeek();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::editors::WeekEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_150_addEditorBox)
HXLINE( 150)			::states::MusicBeatState_obj::switchState( ::editors::WeekEditorFreeplayState_obj::__alloc( HX_CTX ,_gthis->weekFile));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::editors::WeekEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_157_addEditorBox)
HXLINE( 157)			::editors::WeekEditorState_obj::saveWeek(_gthis->weekFile);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_126_addEditorBox)
HXDLIN( 126)		 ::editors::WeekEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 127)		::Array< ::Dynamic> tabs = ::Array_obj< ::Dynamic>::__new(2)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("name",4b,72,ff,48),HX_("Week",14,8c,ce,39))
            			->setFixed(1,HX_("label",f4,0d,af,6f),HX_("Week",14,8c,ce,39))))->init(1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("name",4b,72,ff,48),HX_("Other",b0,d6,a3,c9))
            			->setFixed(1,HX_("label",f4,0d,af,6f),HX_("Other",b0,d6,a3,c9))));
HXLINE( 131)		this->UI_box =  ::flixel::addons::ui::FlxUITabMenu_obj::__alloc( HX_CTX ,null(),null(),tabs,null(),true,null(),null());
HXLINE( 132)		this->UI_box->resize(( (Float)(250) ),( (Float)(375) ));
HXLINE( 133)		 ::flixel::addons::ui::FlxUITabMenu _hx_tmp = this->UI_box;
HXDLIN( 133)		int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN( 133)		_hx_tmp->set_x((( (Float)(_hx_tmp1) ) - this->UI_box->get_width()));
HXLINE( 134)		 ::flixel::addons::ui::FlxUITabMenu _hx_tmp2 = this->UI_box;
HXDLIN( 134)		int _hx_tmp3 = ::flixel::FlxG_obj::height;
HXDLIN( 134)		_hx_tmp2->set_y((( (Float)(_hx_tmp3) ) - this->UI_box->get_height()));
HXLINE( 135)		this->UI_box->scrollFactor->set(null(),null());
HXLINE( 136)		this->addWeekUI();
HXLINE( 137)		this->addOtherUI();
HXLINE( 139)		this->UI_box->set_selected_tab_id(HX_("Week",14,8c,ce,39));
HXLINE( 140)		this->add(this->UI_box);
HXLINE( 142)		 ::flixel::ui::FlxButton loadWeekButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,650,HX_("Load Week",2e,d8,7d,d0), ::Dynamic(new _hx_Closure_0()));
HXLINE( 145)		{
HXLINE( 145)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 145)			if (::hx::IsNull( axes )) {
HXLINE( 145)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 145)			bool _hx_tmp4;
HXDLIN( 145)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 145)					_hx_tmp4 = true;
            				}
            				break;
            				default:{
HXLINE( 145)					_hx_tmp4 = false;
            				}
            			}
HXDLIN( 145)			if (_hx_tmp4) {
HXLINE( 145)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 145)				loadWeekButton->set_x(((( (Float)(_hx_tmp) ) - loadWeekButton->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 145)			bool _hx_tmp5;
HXDLIN( 145)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 145)					_hx_tmp5 = true;
            				}
            				break;
            				default:{
HXLINE( 145)					_hx_tmp5 = false;
            				}
            			}
HXDLIN( 145)			if (_hx_tmp5) {
HXLINE( 145)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 145)				loadWeekButton->set_y(((( (Float)(_hx_tmp) ) - loadWeekButton->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 146)		loadWeekButton->set_x((loadWeekButton->x - ( (Float)(120) )));
HXLINE( 147)		this->add(loadWeekButton);
HXLINE( 149)		 ::flixel::ui::FlxButton freeplayButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,650,HX_("Freeplay",c0,4c,38,fc), ::Dynamic(new _hx_Closure_1(_gthis)));
HXLINE( 153)		{
HXLINE( 153)			 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 153)			if (::hx::IsNull( axes1 )) {
HXLINE( 153)				axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 153)			bool _hx_tmp6;
HXDLIN( 153)			switch((int)(axes1->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 153)					_hx_tmp6 = true;
            				}
            				break;
            				default:{
HXLINE( 153)					_hx_tmp6 = false;
            				}
            			}
HXDLIN( 153)			if (_hx_tmp6) {
HXLINE( 153)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 153)				freeplayButton->set_x(((( (Float)(_hx_tmp) ) - freeplayButton->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 153)			bool _hx_tmp7;
HXDLIN( 153)			switch((int)(axes1->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 153)					_hx_tmp7 = true;
            				}
            				break;
            				default:{
HXLINE( 153)					_hx_tmp7 = false;
            				}
            			}
HXDLIN( 153)			if (_hx_tmp7) {
HXLINE( 153)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 153)				freeplayButton->set_y(((( (Float)(_hx_tmp) ) - freeplayButton->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 154)		this->add(freeplayButton);
HXLINE( 156)		 ::flixel::ui::FlxButton saveWeekButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,650,HX_("Save Week",b7,93,f3,43), ::Dynamic(new _hx_Closure_2(_gthis)));
HXLINE( 159)		{
HXLINE( 159)			 ::flixel::util::FlxAxes axes2 = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 159)			if (::hx::IsNull( axes2 )) {
HXLINE( 159)				axes2 = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 159)			bool _hx_tmp8;
HXDLIN( 159)			switch((int)(axes2->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 159)					_hx_tmp8 = true;
            				}
            				break;
            				default:{
HXLINE( 159)					_hx_tmp8 = false;
            				}
            			}
HXDLIN( 159)			if (_hx_tmp8) {
HXLINE( 159)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 159)				saveWeekButton->set_x(((( (Float)(_hx_tmp) ) - saveWeekButton->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 159)			bool _hx_tmp9;
HXDLIN( 159)			switch((int)(axes2->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 159)					_hx_tmp9 = true;
            				}
            				break;
            				default:{
HXLINE( 159)					_hx_tmp9 = false;
            				}
            			}
HXDLIN( 159)			if (_hx_tmp9) {
HXLINE( 159)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 159)				saveWeekButton->set_y(((( (Float)(_hx_tmp) ) - saveWeekButton->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 160)		saveWeekButton->set_x((saveWeekButton->x + 120));
HXLINE( 161)		this->add(saveWeekButton);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,addEditorBox,(void))

void WeekEditorState_obj::addWeekUI(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::editors::WeekEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_209_addWeekUI)
HXLINE( 209)			_gthis->weekFile->__SetField(HX_("hideStoryMode",d6,b4,4e,4c),_gthis->hideCheckbox->checked,::hx::paccDynamic);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_178_addWeekUI)
HXDLIN( 178)		 ::editors::WeekEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 179)		 ::flixel::addons::ui::FlxUI tab_group =  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,null(),this->UI_box,null(),null(),null(),null());
HXLINE( 180)		tab_group->name = HX_("Week",14,8c,ce,39);
HXLINE( 182)		this->songsInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,30,200,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 183)		this->blockPressWhileTypingOn->push(this->songsInputText);
HXLINE( 185)		this->opponentInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->songsInputText->y + 40),70,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 186)		this->blockPressWhileTypingOn->push(this->opponentInputText);
HXLINE( 187)		this->boyfriendInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,(this->opponentInputText->x + 75),this->opponentInputText->y,70,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 188)		this->blockPressWhileTypingOn->push(this->boyfriendInputText);
HXLINE( 189)		this->girlfriendInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,(this->boyfriendInputText->x + 75),this->opponentInputText->y,70,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 190)		this->blockPressWhileTypingOn->push(this->girlfriendInputText);
HXLINE( 192)		this->backgroundInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->opponentInputText->y + 40),120,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 193)		this->blockPressWhileTypingOn->push(this->backgroundInputText);
HXLINE( 196)		this->displayNameInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->backgroundInputText->y + 60),200,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 197)		this->blockPressWhileTypingOn->push(this->backgroundInputText);
HXLINE( 199)		this->weekNameInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->displayNameInputText->y + 60),150,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 200)		this->blockPressWhileTypingOn->push(this->weekNameInputText);
HXLINE( 202)		this->weekFileInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->weekNameInputText->y + 40),100,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 203)		this->blockPressWhileTypingOn->push(this->weekFileInputText);
HXLINE( 204)		this->reloadWeekThing();
HXLINE( 206)		this->hideCheckbox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,10,(this->weekFileInputText->y + 40),null(),null(),HX_("Hide Week from Story Mode?",e9,44,47,9f),100,null(),null());
HXLINE( 207)		this->hideCheckbox->callback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 212)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->songsInputText->x,(this->songsInputText->y - ( (Float)(18) )),0,HX_("Songs:",9c,5b,1d,62),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 213)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->opponentInputText->x,(this->opponentInputText->y - ( (Float)(18) )),0,HX_("Characters:",30,d4,f1,a2),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 214)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->backgroundInputText->x,(this->backgroundInputText->y - ( (Float)(18) )),0,HX_("Background Asset:",3c,3a,bd,00),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 215)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->displayNameInputText->x,(this->displayNameInputText->y - ( (Float)(18) )),0,HX_("Display Name:",f1,22,dc,c9),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 216)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->weekNameInputText->x,(this->weekNameInputText->y - ( (Float)(18) )),0,HX_("Week Name (for Reset Score Menu):",65,4b,f0,34),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 217)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->weekFileInputText->x,(this->weekFileInputText->y - ( (Float)(18) )),0,HX_("Week File:",12,ad,1e,e4),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 219)		tab_group->add(this->songsInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 220)		tab_group->add(this->opponentInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 221)		tab_group->add(this->boyfriendInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 222)		tab_group->add(this->girlfriendInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 223)		tab_group->add(this->backgroundInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 225)		tab_group->add(this->displayNameInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 226)		tab_group->add(this->weekNameInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 227)		tab_group->add(this->weekFileInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 228)		tab_group->add(this->hideCheckbox).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 229)		this->UI_box->addGroup(tab_group);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,addWeekUI,(void))

void WeekEditorState_obj::addOtherUI(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::editors::WeekEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_243_addOtherUI)
HXLINE( 244)			_gthis->weekFile->__SetField(HX_("startUnlocked",a5,96,c9,60),!(_gthis->lockedCheckbox->checked),::hx::paccDynamic);
HXLINE( 245)			_gthis->lock->set_visible(_gthis->lockedCheckbox->checked);
HXLINE( 246)			int _hx_tmp;
HXDLIN( 246)			if (_gthis->lockedCheckbox->checked) {
HXLINE( 246)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 246)				_hx_tmp = 0;
            			}
HXDLIN( 246)			_gthis->hiddenUntilUnlockCheckbox->set_alpha((((Float)0.4) + (((Float)0.6) * ( (Float)(_hx_tmp) ))));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::editors::WeekEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_252_addOtherUI)
HXLINE( 252)			_gthis->weekFile->__SetField(HX_("hiddenUntilUnlocked",17,ed,31,dc),_gthis->hiddenUntilUnlockCheckbox->checked,::hx::paccDynamic);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_237_addOtherUI)
HXDLIN( 237)		 ::editors::WeekEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 238)		 ::flixel::addons::ui::FlxUI tab_group =  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,null(),this->UI_box,null(),null(),null(),null());
HXLINE( 239)		tab_group->name = HX_("Other",b0,d6,a3,c9);
HXLINE( 241)		this->lockedCheckbox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,10,30,null(),null(),HX_("Week starts Locked",8d,ae,bb,b8),100,null(),null());
HXLINE( 242)		this->lockedCheckbox->callback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 249)		this->hiddenUntilUnlockCheckbox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,10,(this->lockedCheckbox->y + 25),null(),null(),HX_("Hidden until Unlocked",db,63,35,4b),110,null(),null());
HXLINE( 250)		this->hiddenUntilUnlockCheckbox->callback =  ::Dynamic(new _hx_Closure_1(_gthis));
HXLINE( 254)		this->hiddenUntilUnlockCheckbox->set_alpha(((Float)0.4));
HXLINE( 256)		this->weekBeforeInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->hiddenUntilUnlockCheckbox->y + 55),100,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 257)		this->blockPressWhileTypingOn->push(this->weekBeforeInputText);
HXLINE( 259)		this->difficultiesInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->weekBeforeInputText->y + 60),200,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 260)		this->blockPressWhileTypingOn->push(this->difficultiesInputText);
HXLINE( 262)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->weekBeforeInputText->x,(this->weekBeforeInputText->y - ( (Float)(28) )),0,HX_("Week File name of the Week you have\nto finish for Unlocking:",ab,92,1d,1c),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 263)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->difficultiesInputText->x,(this->difficultiesInputText->y - ( (Float)(20) )),0,HX_("Difficulties:",a1,f6,7f,58),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 264)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->difficultiesInputText->x,(this->difficultiesInputText->y + 20),0,HX_("Default difficulties are \"Easy, Normal, Hard\"\nwithout quotes.",cd,54,6a,47),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 265)		tab_group->add(this->weekBeforeInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 266)		tab_group->add(this->difficultiesInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 267)		tab_group->add(this->hiddenUntilUnlockCheckbox).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 268)		tab_group->add(this->lockedCheckbox).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 269)		this->UI_box->addGroup(tab_group);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,addOtherUI,(void))

void WeekEditorState_obj::reloadAllShit(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_273_reloadAllShit)
HXLINE( 274)		::String weekString = ( (::String)( ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(0)->__GetItem(0)) );
HXLINE( 275)		{
HXLINE( 275)			int _g = 1;
HXDLIN( 275)			int _g1 = ( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->get_length();
HXDLIN( 275)			while((_g < _g1)){
HXLINE( 275)				_g = (_g + 1);
HXDLIN( 275)				int i = (_g - 1);
HXLINE( 276)				weekString = (weekString + (HX_(", ",74,26,00,00) +  ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__GetItem(0)));
            			}
            		}
HXLINE( 278)		this->songsInputText->set_text(weekString);
HXLINE( 279)		this->backgroundInputText->set_text(( (::String)(this->weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) ));
HXLINE( 280)		this->displayNameInputText->set_text(( (::String)(this->weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) ));
HXLINE( 281)		this->weekNameInputText->set_text(( (::String)(this->weekFile->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic)) ));
HXLINE( 282)		this->weekFileInputText->set_text(::editors::WeekEditorState_obj::weekFileName);
HXLINE( 284)		this->opponentInputText->set_text(( (::String)( ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__GetItem(0)) ));
HXLINE( 285)		this->boyfriendInputText->set_text(( (::String)( ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__GetItem(1)) ));
HXLINE( 286)		this->girlfriendInputText->set_text(( (::String)( ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__GetItem(2)) ));
HXLINE( 288)		this->hideCheckbox->set_checked(( (bool)(this->weekFile->__Field(HX_("hideStoryMode",d6,b4,4e,4c),::hx::paccDynamic)) ));
HXLINE( 290)		this->weekBeforeInputText->set_text(( (::String)(this->weekFile->__Field(HX_("weekBefore",93,97,02,5d),::hx::paccDynamic)) ));
HXLINE( 292)		this->difficultiesInputText->set_text(HX_("",00,00,00,00));
HXLINE( 293)		if (::hx::IsNotNull( this->weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic) )) {
HXLINE( 293)			this->difficultiesInputText->set_text(( (::String)(this->weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic)) ));
            		}
HXLINE( 295)		this->lockedCheckbox->set_checked(!(( (bool)(this->weekFile->__Field(HX_("startUnlocked",a5,96,c9,60),::hx::paccDynamic)) )));
HXLINE( 296)		this->lock->set_visible(this->lockedCheckbox->checked);
HXLINE( 298)		this->hiddenUntilUnlockCheckbox->set_checked(( (bool)(this->weekFile->__Field(HX_("hiddenUntilUnlocked",17,ed,31,dc),::hx::paccDynamic)) ));
HXLINE( 299)		int _hx_tmp;
HXDLIN( 299)		if (this->lockedCheckbox->checked) {
HXLINE( 299)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 299)			_hx_tmp = 0;
            		}
HXDLIN( 299)		this->hiddenUntilUnlockCheckbox->set_alpha((((Float)0.4) + (((Float)0.6) * ( (Float)(_hx_tmp) ))));
HXLINE( 301)		this->reloadBG();
HXLINE( 302)		this->reloadWeekThing();
HXLINE( 303)		this->updateText();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,reloadAllShit,(void))

void WeekEditorState_obj::updateText(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_307_updateText)
HXLINE( 308)		{
HXLINE( 308)			int _g = 0;
HXDLIN( 308)			int _g1 = this->grpWeekCharacters->length;
HXDLIN( 308)			while((_g < _g1)){
HXLINE( 308)				_g = (_g + 1);
HXDLIN( 308)				int i = (_g - 1);
HXLINE( 309)				Dynamic( this->grpWeekCharacters->members->__get(i)).StaticCast<  ::MenuCharacter >()->changeCharacter(( (::String)( ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__GetItem(i)) ));
            			}
            		}
HXLINE( 312)		::Array< ::String > stringThing = ::Array_obj< ::String >::__new(0);
HXLINE( 313)		{
HXLINE( 313)			int _g2 = 0;
HXDLIN( 313)			int _g3 = ( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->get_length();
HXDLIN( 313)			while((_g2 < _g3)){
HXLINE( 313)				_g2 = (_g2 + 1);
HXDLIN( 313)				int i = (_g2 - 1);
HXLINE( 314)				stringThing->push( ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__GetItem(0));
            			}
            		}
HXLINE( 317)		this->txtTracklist->set_text(HX_("",00,00,00,00));
HXLINE( 318)		{
HXLINE( 318)			int _g4 = 0;
HXDLIN( 318)			int _g5 = stringThing->length;
HXDLIN( 318)			while((_g4 < _g5)){
HXLINE( 318)				_g4 = (_g4 + 1);
HXDLIN( 318)				int i = (_g4 - 1);
HXLINE( 320)				 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 320)				fh->set_text((fh->text + (stringThing->__get(i) + HX_("\n",0a,00,00,00))));
            			}
            		}
HXLINE( 323)		 ::flixel::text::FlxText _hx_tmp = this->txtTracklist;
HXDLIN( 323)		_hx_tmp->set_text(this->txtTracklist->text.toUpperCase());
HXLINE( 325)		{
HXLINE( 325)			 ::flixel::text::FlxText _this = this->txtTracklist;
HXDLIN( 325)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 325)			if (::hx::IsNull( axes )) {
HXLINE( 325)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 325)			bool _hx_tmp1;
HXDLIN( 325)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 325)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE( 325)					_hx_tmp1 = false;
            				}
            			}
HXDLIN( 325)			if (_hx_tmp1) {
HXLINE( 325)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 325)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 325)			bool _hx_tmp2;
HXDLIN( 325)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 325)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE( 325)					_hx_tmp2 = false;
            				}
            			}
HXDLIN( 325)			if (_hx_tmp2) {
HXLINE( 325)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 325)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 326)		 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 326)		fh->set_x((fh->x - (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))));
HXLINE( 328)		 ::flixel::text::FlxText _hx_tmp3 = this->txtWeekTitle;
HXDLIN( 328)		_hx_tmp3->set_text(( (::String)(this->weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) ).toUpperCase());
HXLINE( 329)		 ::flixel::text::FlxText _hx_tmp4 = this->txtWeekTitle;
HXDLIN( 329)		int _hx_tmp5 = ::flixel::FlxG_obj::width;
HXDLIN( 329)		_hx_tmp4->set_x((( (Float)(_hx_tmp5) ) - (this->txtWeekTitle->get_width() + 10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,updateText,(void))

void WeekEditorState_obj::reloadBG(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_332_reloadBG)
HXLINE( 333)		this->bgSprite->set_visible(true);
HXLINE( 334)		::String assetName = ( (::String)(this->weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) );
HXLINE( 336)		bool isMissing = true;
HXLINE( 337)		bool _hx_tmp;
HXDLIN( 337)		if (::hx::IsNotNull( assetName )) {
HXLINE( 337)			_hx_tmp = (assetName.length > 0);
            		}
            		else {
HXLINE( 337)			_hx_tmp = false;
            		}
HXDLIN( 337)		if (_hx_tmp) {
HXLINE( 338)			bool _hx_tmp;
HXDLIN( 338)			if (!(::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + (HX_("menubackgrounds/menu_",57,51,99,49) + assetName)) + HX_(".png",3b,2d,bd,1e)))))) {
HXLINE( 338)				_hx_tmp = ::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("images/menubackgrounds/menu_",80,93,47,d3) + assetName) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null()),HX_("IMAGE",3b,57,57,3b));
            			}
            			else {
HXLINE( 338)				_hx_tmp = true;
            			}
HXDLIN( 338)			if (_hx_tmp) {
HXLINE( 340)				 ::flixel::FlxSprite _hx_tmp = this->bgSprite;
HXDLIN( 340)				::String library = null();
HXDLIN( 340)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("menubackgrounds/menu_",57,51,99,49) + assetName),library);
HXDLIN( 340)				_hx_tmp->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 341)				isMissing = false;
            			}
            		}
HXLINE( 345)		if (isMissing) {
HXLINE( 346)			this->bgSprite->set_visible(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,reloadBG,(void))

void WeekEditorState_obj::reloadWeekThing(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_350_reloadWeekThing)
HXLINE( 351)		this->weekThing->set_visible(true);
HXLINE( 352)		this->missingFileText->set_visible(false);
HXLINE( 353)		::String assetName = ::StringTools_obj::trim(this->weekFileInputText->text);
HXLINE( 355)		bool isMissing = true;
HXLINE( 356)		bool _hx_tmp;
HXDLIN( 356)		if (::hx::IsNotNull( assetName )) {
HXLINE( 356)			_hx_tmp = (assetName.length > 0);
            		}
            		else {
HXLINE( 356)			_hx_tmp = false;
            		}
HXDLIN( 356)		if (_hx_tmp) {
HXLINE( 357)			bool _hx_tmp;
HXDLIN( 357)			if (!(::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + (HX_("storymenu/",9b,19,38,af) + assetName)) + HX_(".png",3b,2d,bd,1e)))))) {
HXLINE( 357)				_hx_tmp = ::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("images/storymenu/",d2,44,94,b2) + assetName) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null()),HX_("IMAGE",3b,57,57,3b));
            			}
            			else {
HXLINE( 357)				_hx_tmp = true;
            			}
HXDLIN( 357)			if (_hx_tmp) {
HXLINE( 359)				 ::MenuItem _hx_tmp = this->weekThing;
HXDLIN( 359)				::String library = null();
HXDLIN( 359)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("storymenu/",9b,19,38,af) + assetName),library);
HXDLIN( 359)				_hx_tmp->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 360)				isMissing = false;
            			}
            		}
HXLINE( 364)		if (isMissing) {
HXLINE( 365)			this->weekThing->set_visible(false);
HXLINE( 366)			this->missingFileText->set_visible(true);
HXLINE( 367)			this->missingFileText->set_text(((HX_("MISSING FILE: images/storymenu/",96,57,11,26) + assetName) + HX_(".png",3b,2d,bd,1e)));
            		}
HXLINE( 369)		this->recalculateStuffPosition();
HXLINE( 373)		::DiscordClient_obj::changePresence(HX_("Week Editor",59,6c,6c,6d),(HX_("Editting: ",be,88,46,a7) + ::editors::WeekEditorState_obj::weekFileName),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,reloadWeekThing,(void))

void WeekEditorState_obj::getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_378_getEvent)
HXDLIN( 378)		bool _hx_tmp;
HXDLIN( 378)		if ((id == HX_("change_input_text",f1,11,47,68))) {
HXDLIN( 378)			_hx_tmp = ::Std_obj::isOfType(sender,::hx::ClassOf< ::flixel::addons::ui::FlxUIInputText >());
            		}
            		else {
HXDLIN( 378)			_hx_tmp = false;
            		}
HXDLIN( 378)		if (_hx_tmp) {
HXLINE( 379)			if (::hx::IsInstanceEq( sender,this->weekFileInputText )) {
HXLINE( 380)				::editors::WeekEditorState_obj::weekFileName = ::StringTools_obj::trim(this->weekFileInputText->text);
HXLINE( 381)				this->reloadWeekThing();
            			}
            			else {
HXLINE( 382)				bool _hx_tmp;
HXDLIN( 382)				bool _hx_tmp1;
HXDLIN( 382)				if (::hx::IsInstanceNotEq( sender,this->opponentInputText )) {
HXLINE( 382)					_hx_tmp1 = ::hx::IsInstanceEq( sender,this->boyfriendInputText );
            				}
            				else {
HXLINE( 382)					_hx_tmp1 = true;
            				}
HXDLIN( 382)				if (!(_hx_tmp1)) {
HXLINE( 382)					_hx_tmp = ::hx::IsInstanceEq( sender,this->girlfriendInputText );
            				}
            				else {
HXLINE( 382)					_hx_tmp = true;
            				}
HXDLIN( 382)				if (_hx_tmp) {
HXLINE( 383)					 ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__SetItem(0,::StringTools_obj::trim(this->opponentInputText->text));
HXLINE( 384)					 ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__SetItem(1,::StringTools_obj::trim(this->boyfriendInputText->text));
HXLINE( 385)					 ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__SetItem(2,::StringTools_obj::trim(this->girlfriendInputText->text));
HXLINE( 386)					this->updateText();
            				}
            				else {
HXLINE( 387)					if (::hx::IsInstanceEq( sender,this->backgroundInputText )) {
HXLINE( 388)						this->weekFile->__SetField(HX_("weekBackground",02,f1,ce,ed),::StringTools_obj::trim(this->backgroundInputText->text),::hx::paccDynamic);
HXLINE( 389)						this->reloadBG();
            					}
            					else {
HXLINE( 390)						if (::hx::IsInstanceEq( sender,this->displayNameInputText )) {
HXLINE( 391)							this->weekFile->__SetField(HX_("storyName",e0,50,20,29),::StringTools_obj::trim(this->displayNameInputText->text),::hx::paccDynamic);
HXLINE( 392)							this->updateText();
            						}
            						else {
HXLINE( 393)							if (::hx::IsInstanceEq( sender,this->weekNameInputText )) {
HXLINE( 394)								this->weekFile->__SetField(HX_("weekName",5f,08,2f,30),::StringTools_obj::trim(this->weekNameInputText->text),::hx::paccDynamic);
            							}
            							else {
HXLINE( 395)								if (::hx::IsInstanceEq( sender,this->songsInputText )) {
HXLINE( 396)									::Array< ::String > splittedText = ::StringTools_obj::trim(this->songsInputText->text).split(HX_(",",2c,00,00,00));
HXLINE( 397)									{
HXLINE( 397)										int _g = 0;
HXDLIN( 397)										int _g1 = splittedText->length;
HXDLIN( 397)										while((_g < _g1)){
HXLINE( 397)											_g = (_g + 1);
HXDLIN( 397)											int i = (_g - 1);
HXLINE( 398)											splittedText[i] = ::StringTools_obj::trim(splittedText->__get(i));
            										}
            									}
HXLINE( 401)									while((splittedText->length < ( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->get_length())){
HXLINE( 402)										( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->pop();
            									}
HXLINE( 405)									{
HXLINE( 405)										int _g2 = 0;
HXDLIN( 405)										int _g3 = splittedText->length;
HXDLIN( 405)										while((_g2 < _g3)){
HXLINE( 405)											_g2 = (_g2 + 1);
HXDLIN( 405)											int i = (_g2 - 1);
HXLINE( 406)											if ((i >= ( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->get_length())) {
HXLINE( 407)												( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->push(::cpp::VirtualArray_obj::__new(3)->init(0,splittedText->__get(i))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)));
            											}
            											else {
HXLINE( 409)												 ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__SetItem(0,splittedText->__get(i));
HXLINE( 410)												bool _hx_tmp;
HXDLIN( 410)												if (::hx::IsNotNull(  ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__GetItem(1) )) {
HXLINE( 410)													_hx_tmp = ( (bool)( ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__GetItem(1)) );
            												}
            												else {
HXLINE( 410)													_hx_tmp = true;
            												}
HXDLIN( 410)												if (_hx_tmp) {
HXLINE( 411)													 ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__SetItem(1,HX_("dad",47,36,4c,00));
HXLINE( 412)													 ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__SetItem(2,::Array_obj< int >::fromData( _hx_array_data_735a5328_23,3));
            												}
            											}
            										}
            									}
HXLINE( 416)									this->updateText();
            								}
            								else {
HXLINE( 417)									if (::hx::IsInstanceEq( sender,this->weekBeforeInputText )) {
HXLINE( 418)										this->weekFile->__SetField(HX_("weekBefore",93,97,02,5d),::StringTools_obj::trim(this->weekBeforeInputText->text),::hx::paccDynamic);
            									}
            									else {
HXLINE( 419)										if (::hx::IsInstanceEq( sender,this->difficultiesInputText )) {
HXLINE( 420)											this->weekFile->__SetField(HX_("difficulties",59,c7,5e,02),::StringTools_obj::trim(this->difficultiesInputText->text),::hx::paccDynamic);
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


void WeekEditorState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_426_update)
HXLINE( 427)		if (::hx::IsNotNull( ::editors::WeekEditorState_obj::loadedWeek )) {
HXLINE( 428)			this->weekFile = ::editors::WeekEditorState_obj::loadedWeek;
HXLINE( 429)			::editors::WeekEditorState_obj::loadedWeek = null();
HXLINE( 431)			this->reloadAllShit();
            		}
HXLINE( 434)		bool blockInput = false;
HXLINE( 435)		{
HXLINE( 435)			int _g = 0;
HXDLIN( 435)			::Array< ::Dynamic> _g1 = this->blockPressWhileTypingOn;
HXDLIN( 435)			while((_g < _g1->length)){
HXLINE( 435)				 ::flixel::addons::ui::FlxUIInputText inputText = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIInputText >();
HXDLIN( 435)				_g = (_g + 1);
HXLINE( 436)				if (inputText->hasFocus) {
HXLINE( 437)					::flixel::FlxG_obj::sound->muteKeys = ::Array_obj< int >::__new(0);
HXLINE( 438)					::flixel::FlxG_obj::sound->volumeDownKeys = ::Array_obj< int >::__new(0);
HXLINE( 439)					::flixel::FlxG_obj::sound->volumeUpKeys = ::Array_obj< int >::__new(0);
HXLINE( 440)					blockInput = true;
HXLINE( 442)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 442)					if (_this->keyManager->checkStatusUnsafe(13,_this->status)) {
HXLINE( 442)						inputText->set_hasFocus(false);
            					}
HXLINE( 443)					goto _hx_goto_24;
            				}
            			}
            			_hx_goto_24:;
            		}
HXLINE( 447)		if (!(blockInput)) {
HXLINE( 448)			::flixel::FlxG_obj::sound->muteKeys = ::TitleState_obj::muteKeys;
HXLINE( 449)			::flixel::FlxG_obj::sound->volumeDownKeys = ::TitleState_obj::volumeDownKeys;
HXLINE( 450)			::flixel::FlxG_obj::sound->volumeUpKeys = ::TitleState_obj::volumeUpKeys;
HXLINE( 451)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 451)			if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 452)				::states::MusicBeatState_obj::switchState( ::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 453)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 453)				::String library = null();
HXDLIN( 453)				 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 453)				_hx_tmp->playMusic(file,null(),null(),null());
            			}
            		}
HXLINE( 457)		this->super::update(elapsed);
HXLINE( 459)		this->lock->set_y(this->weekThing->y);
HXLINE( 460)		this->missingFileText->set_y((this->weekThing->y + 36));
            	}


void WeekEditorState_obj::recalculateStuffPosition(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_463_recalculateStuffPosition)
HXLINE( 464)		{
HXLINE( 464)			 ::MenuItem _this = this->weekThing;
HXDLIN( 464)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 464)			if (::hx::IsNull( axes )) {
HXLINE( 464)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 464)			bool _hx_tmp;
HXDLIN( 464)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 464)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE( 464)					_hx_tmp = false;
            				}
            			}
HXDLIN( 464)			if (_hx_tmp) {
HXLINE( 464)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 464)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 464)			bool _hx_tmp1;
HXDLIN( 464)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 464)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE( 464)					_hx_tmp1 = false;
            				}
            			}
HXDLIN( 464)			if (_hx_tmp1) {
HXLINE( 464)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 464)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 465)		 ::flixel::FlxSprite _hx_tmp2 = this->lock;
HXDLIN( 465)		Float _hx_tmp3 = (this->weekThing->get_width() + 10);
HXDLIN( 465)		_hx_tmp2->set_x((_hx_tmp3 + this->weekThing->x));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,recalculateStuffPosition,(void))

::String WeekEditorState_obj::weekFileName;

 ::openfl::net::FileReference WeekEditorState_obj::_file;

void WeekEditorState_obj::loadWeek(){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_469_loadWeek)
HXLINE( 470)		 ::openfl::net::FileFilter jsonFilter =  ::openfl::net::FileFilter_obj::__alloc( HX_CTX ,HX_("JSON",28,0a,29,31),HX_("json",28,42,68,46),null());
HXLINE( 471)		::editors::WeekEditorState_obj::_file =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE( 472)		::editors::WeekEditorState_obj::_file->addEventListener(HX_("select",fc,1a,33,6a),::editors::WeekEditorState_obj::onLoadComplete_dyn(),null(),null(),null());
HXLINE( 473)		::editors::WeekEditorState_obj::_file->addEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onLoadCancel_dyn(),null(),null(),null());
HXLINE( 474)		::editors::WeekEditorState_obj::_file->addEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onLoadError_dyn(),null(),null(),null());
HXLINE( 475)		::editors::WeekEditorState_obj::_file->browse(::Array_obj< ::Dynamic>::__new(1)->init(0,jsonFilter));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,loadWeek,(void))

 ::Dynamic WeekEditorState_obj::loadedWeek;

bool WeekEditorState_obj::loadError;

void WeekEditorState_obj::onLoadComplete( ::openfl::events::Event _){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_481_onLoadComplete)
HXLINE( 482)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("select",fc,1a,33,6a),::editors::WeekEditorState_obj::onLoadComplete_dyn(),null());
HXLINE( 483)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onLoadCancel_dyn(),null());
HXLINE( 484)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onLoadError_dyn(),null());
HXLINE( 487)		::String fullPath = null();
HXLINE( 489)		if (::hx::IsNotNull( ::editors::WeekEditorState_obj::_file->_hx___path )) {
HXLINE( 489)			fullPath = ::editors::WeekEditorState_obj::_file->_hx___path;
            		}
HXLINE( 491)		if (::hx::IsNotNull( fullPath )) {
HXLINE( 492)			::String rawJson = ::sys::io::File_obj::getContent(fullPath);
HXLINE( 493)			if (::hx::IsNotNull( rawJson )) {
HXLINE( 494)				::editors::WeekEditorState_obj::loadedWeek =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
HXLINE( 495)				bool _hx_tmp;
HXDLIN( 495)				if (::hx::IsNotNull( ::editors::WeekEditorState_obj::loadedWeek->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic) )) {
HXLINE( 495)					_hx_tmp = ::hx::IsNotNull( ::editors::WeekEditorState_obj::loadedWeek->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 495)					_hx_tmp = false;
            				}
HXDLIN( 495)				if (_hx_tmp) {
HXLINE( 497)					::String cutName = ::editors::WeekEditorState_obj::_file->get_name();
HXDLIN( 497)					::String cutName1 = cutName.substr(0,(::editors::WeekEditorState_obj::_file->get_name().length - 5));
HXLINE( 498)					::haxe::Log_obj::trace((HX_("Successfully loaded file: ",84,24,61,ed) + cutName1),::hx::SourceInfo(HX_("source/editors/WeekEditorState.hx",cb,5c,43,8a),498,HX_("editors.WeekEditorState",28,53,5a,73),HX_("onLoadComplete",be,4c,20,63)));
HXLINE( 499)					::editors::WeekEditorState_obj::loadError = false;
HXLINE( 501)					::editors::WeekEditorState_obj::weekFileName = cutName1;
HXLINE( 502)					::editors::WeekEditorState_obj::_file = null();
HXLINE( 503)					return;
            				}
            			}
            		}
HXLINE( 507)		::editors::WeekEditorState_obj::loadError = true;
HXLINE( 508)		::editors::WeekEditorState_obj::loadedWeek = null();
HXLINE( 509)		::editors::WeekEditorState_obj::_file = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onLoadComplete,(void))

void WeekEditorState_obj::onLoadCancel( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_519_onLoadCancel)
HXLINE( 520)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("select",fc,1a,33,6a),::editors::WeekEditorState_obj::onLoadComplete_dyn(),null());
HXLINE( 521)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onLoadCancel_dyn(),null());
HXLINE( 522)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onLoadError_dyn(),null());
HXLINE( 523)		::editors::WeekEditorState_obj::_file = null();
HXLINE( 524)		::haxe::Log_obj::trace(HX_("Cancelled file loading.",67,56,c5,a3),::hx::SourceInfo(HX_("source/editors/WeekEditorState.hx",cb,5c,43,8a),524,HX_("editors.WeekEditorState",28,53,5a,73),HX_("onLoadCancel",3f,be,a2,45)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onLoadCancel,(void))

void WeekEditorState_obj::onLoadError( ::openfl::events::IOErrorEvent _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_531_onLoadError)
HXLINE( 532)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("select",fc,1a,33,6a),::editors::WeekEditorState_obj::onLoadComplete_dyn(),null());
HXLINE( 533)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onLoadCancel_dyn(),null());
HXLINE( 534)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onLoadError_dyn(),null());
HXLINE( 535)		::editors::WeekEditorState_obj::_file = null();
HXLINE( 536)		::haxe::Log_obj::trace(HX_("Problem loading file",21,8c,56,d8),::hx::SourceInfo(HX_("source/editors/WeekEditorState.hx",cb,5c,43,8a),536,HX_("editors.WeekEditorState",28,53,5a,73),HX_("onLoadError",a3,fa,a3,b0)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onLoadError,(void))

void WeekEditorState_obj::saveWeek( ::Dynamic weekFile){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_539_saveWeek)
HXLINE( 540)		 ::Dynamic replacer = null();
HXDLIN( 540)		::String data = ::haxe::format::JsonPrinter_obj::print(weekFile,replacer,HX_("\t",09,00,00,00));
HXLINE( 541)		if ((data.length > 0)) {
HXLINE( 543)			::editors::WeekEditorState_obj::_file =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE( 544)			::editors::WeekEditorState_obj::_file->addEventListener(HX_("complete",b9,00,c8,7f),::editors::WeekEditorState_obj::onSaveComplete_dyn(),null(),null(),null());
HXLINE( 545)			::editors::WeekEditorState_obj::_file->addEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onSaveCancel_dyn(),null(),null(),null());
HXLINE( 546)			::editors::WeekEditorState_obj::_file->addEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onSaveError_dyn(),null(),null(),null());
HXLINE( 547)			::editors::WeekEditorState_obj::_file->save(data,(::editors::WeekEditorState_obj::weekFileName + HX_(".json",56,f1,d6,c2)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,saveWeek,(void))

void WeekEditorState_obj::onSaveComplete( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_552_onSaveComplete)
HXLINE( 553)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("complete",b9,00,c8,7f),::editors::WeekEditorState_obj::onSaveComplete_dyn(),null());
HXLINE( 554)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onSaveCancel_dyn(),null());
HXLINE( 555)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onSaveError_dyn(),null());
HXLINE( 556)		::editors::WeekEditorState_obj::_file = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onSaveComplete,(void))

void WeekEditorState_obj::onSaveCancel( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_564_onSaveCancel)
HXLINE( 565)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("complete",b9,00,c8,7f),::editors::WeekEditorState_obj::onSaveComplete_dyn(),null());
HXLINE( 566)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onSaveCancel_dyn(),null());
HXLINE( 567)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onSaveError_dyn(),null());
HXLINE( 568)		::editors::WeekEditorState_obj::_file = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onSaveCancel,(void))

void WeekEditorState_obj::onSaveError( ::openfl::events::IOErrorEvent _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_575_onSaveError)
HXLINE( 576)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("complete",b9,00,c8,7f),::editors::WeekEditorState_obj::onSaveComplete_dyn(),null());
HXLINE( 577)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onSaveCancel_dyn(),null());
HXLINE( 578)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onSaveError_dyn(),null());
HXLINE( 579)		::editors::WeekEditorState_obj::_file = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onSaveError,(void))


::hx::ObjectPtr< WeekEditorState_obj > WeekEditorState_obj::__new( ::Dynamic weekFile) {
	::hx::ObjectPtr< WeekEditorState_obj > __this = new WeekEditorState_obj();
	__this->__construct(weekFile);
	return __this;
}

::hx::ObjectPtr< WeekEditorState_obj > WeekEditorState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic weekFile) {
	WeekEditorState_obj *__this = (WeekEditorState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WeekEditorState_obj), true, "editors.WeekEditorState"));
	*(void **)__this = WeekEditorState_obj::_hx_vtable;
	__this->__construct(weekFile);
	return __this;
}

WeekEditorState_obj::WeekEditorState_obj()
{
}

void WeekEditorState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeekEditorState);
	HX_MARK_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_MARK_MEMBER_NAME(bgSprite,"bgSprite");
	HX_MARK_MEMBER_NAME(lock,"lock");
	HX_MARK_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_MARK_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_MARK_MEMBER_NAME(weekThing,"weekThing");
	HX_MARK_MEMBER_NAME(missingFileText,"missingFileText");
	HX_MARK_MEMBER_NAME(weekFile,"weekFile");
	HX_MARK_MEMBER_NAME(UI_box,"UI_box");
	HX_MARK_MEMBER_NAME(blockPressWhileTypingOn,"blockPressWhileTypingOn");
	HX_MARK_MEMBER_NAME(songsInputText,"songsInputText");
	HX_MARK_MEMBER_NAME(backgroundInputText,"backgroundInputText");
	HX_MARK_MEMBER_NAME(displayNameInputText,"displayNameInputText");
	HX_MARK_MEMBER_NAME(weekNameInputText,"weekNameInputText");
	HX_MARK_MEMBER_NAME(weekFileInputText,"weekFileInputText");
	HX_MARK_MEMBER_NAME(opponentInputText,"opponentInputText");
	HX_MARK_MEMBER_NAME(boyfriendInputText,"boyfriendInputText");
	HX_MARK_MEMBER_NAME(girlfriendInputText,"girlfriendInputText");
	HX_MARK_MEMBER_NAME(hideCheckbox,"hideCheckbox");
	HX_MARK_MEMBER_NAME(weekBeforeInputText,"weekBeforeInputText");
	HX_MARK_MEMBER_NAME(difficultiesInputText,"difficultiesInputText");
	HX_MARK_MEMBER_NAME(lockedCheckbox,"lockedCheckbox");
	HX_MARK_MEMBER_NAME(hiddenUntilUnlockCheckbox,"hiddenUntilUnlockCheckbox");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WeekEditorState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_VISIT_MEMBER_NAME(bgSprite,"bgSprite");
	HX_VISIT_MEMBER_NAME(lock,"lock");
	HX_VISIT_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_VISIT_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_VISIT_MEMBER_NAME(weekThing,"weekThing");
	HX_VISIT_MEMBER_NAME(missingFileText,"missingFileText");
	HX_VISIT_MEMBER_NAME(weekFile,"weekFile");
	HX_VISIT_MEMBER_NAME(UI_box,"UI_box");
	HX_VISIT_MEMBER_NAME(blockPressWhileTypingOn,"blockPressWhileTypingOn");
	HX_VISIT_MEMBER_NAME(songsInputText,"songsInputText");
	HX_VISIT_MEMBER_NAME(backgroundInputText,"backgroundInputText");
	HX_VISIT_MEMBER_NAME(displayNameInputText,"displayNameInputText");
	HX_VISIT_MEMBER_NAME(weekNameInputText,"weekNameInputText");
	HX_VISIT_MEMBER_NAME(weekFileInputText,"weekFileInputText");
	HX_VISIT_MEMBER_NAME(opponentInputText,"opponentInputText");
	HX_VISIT_MEMBER_NAME(boyfriendInputText,"boyfriendInputText");
	HX_VISIT_MEMBER_NAME(girlfriendInputText,"girlfriendInputText");
	HX_VISIT_MEMBER_NAME(hideCheckbox,"hideCheckbox");
	HX_VISIT_MEMBER_NAME(weekBeforeInputText,"weekBeforeInputText");
	HX_VISIT_MEMBER_NAME(difficultiesInputText,"difficultiesInputText");
	HX_VISIT_MEMBER_NAME(lockedCheckbox,"lockedCheckbox");
	HX_VISIT_MEMBER_NAME(hiddenUntilUnlockCheckbox,"hiddenUntilUnlockCheckbox");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WeekEditorState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return ::hx::Val( lock ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"UI_box") ) { return ::hx::Val( UI_box ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgSprite") ) { return ::hx::Val( bgSprite ); }
		if (HX_FIELD_EQ(inName,"weekFile") ) { return ::hx::Val( weekFile ); }
		if (HX_FIELD_EQ(inName,"reloadBG") ) { return ::hx::Val( reloadBG_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEvent") ) { return ::hx::Val( getEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weekThing") ) { return ::hx::Val( weekThing ); }
		if (HX_FIELD_EQ(inName,"addWeekUI") ) { return ::hx::Val( addWeekUI_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addOtherUI") ) { return ::hx::Val( addOtherUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateText") ) { return ::hx::Val( updateText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { return ::hx::Val( txtWeekTitle ); }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { return ::hx::Val( txtTracklist ); }
		if (HX_FIELD_EQ(inName,"addEditorBox") ) { return ::hx::Val( addEditorBox_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideCheckbox") ) { return ::hx::Val( hideCheckbox ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"reloadAllShit") ) { return ::hx::Val( reloadAllShit_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"songsInputText") ) { return ::hx::Val( songsInputText ); }
		if (HX_FIELD_EQ(inName,"lockedCheckbox") ) { return ::hx::Val( lockedCheckbox ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"missingFileText") ) { return ::hx::Val( missingFileText ); }
		if (HX_FIELD_EQ(inName,"reloadWeekThing") ) { return ::hx::Val( reloadWeekThing_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { return ::hx::Val( grpWeekCharacters ); }
		if (HX_FIELD_EQ(inName,"weekNameInputText") ) { return ::hx::Val( weekNameInputText ); }
		if (HX_FIELD_EQ(inName,"weekFileInputText") ) { return ::hx::Val( weekFileInputText ); }
		if (HX_FIELD_EQ(inName,"opponentInputText") ) { return ::hx::Val( opponentInputText ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"boyfriendInputText") ) { return ::hx::Val( boyfriendInputText ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backgroundInputText") ) { return ::hx::Val( backgroundInputText ); }
		if (HX_FIELD_EQ(inName,"girlfriendInputText") ) { return ::hx::Val( girlfriendInputText ); }
		if (HX_FIELD_EQ(inName,"weekBeforeInputText") ) { return ::hx::Val( weekBeforeInputText ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"displayNameInputText") ) { return ::hx::Val( displayNameInputText ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"difficultiesInputText") ) { return ::hx::Val( difficultiesInputText ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"blockPressWhileTypingOn") ) { return ::hx::Val( blockPressWhileTypingOn ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"recalculateStuffPosition") ) { return ::hx::Val( recalculateStuffPosition_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlockCheckbox") ) { return ::hx::Val( hiddenUntilUnlockCheckbox ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WeekEditorState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_file") ) { outValue = ( _file ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadWeek") ) { outValue = loadWeek_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"saveWeek") ) { outValue = saveWeek_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadError") ) { outValue = ( loadError ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadedWeek") ) { outValue = ( loadedWeek ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onLoadError") ) { outValue = onLoadError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onSaveError") ) { outValue = onSaveError_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weekFileName") ) { outValue = ( weekFileName ); return true; }
		if (HX_FIELD_EQ(inName,"onLoadCancel") ) { outValue = onLoadCancel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onSaveCancel") ) { outValue = onSaveCancel_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onLoadComplete") ) { outValue = onLoadComplete_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onSaveComplete") ) { outValue = onSaveComplete_dyn(); return true; }
	}
	return false;
}

::hx::Val WeekEditorState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { lock=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UI_box") ) { UI_box=inValue.Cast<  ::flixel::addons::ui::FlxUITabMenu >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgSprite") ) { bgSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekFile") ) { weekFile=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weekThing") ) { weekThing=inValue.Cast<  ::MenuItem >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { txtWeekTitle=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { txtTracklist=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideCheckbox") ) { hideCheckbox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"songsInputText") ) { songsInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lockedCheckbox") ) { lockedCheckbox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"missingFileText") ) { missingFileText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { grpWeekCharacters=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekNameInputText") ) { weekNameInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekFileInputText") ) { weekFileInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opponentInputText") ) { opponentInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"boyfriendInputText") ) { boyfriendInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backgroundInputText") ) { backgroundInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"girlfriendInputText") ) { girlfriendInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekBeforeInputText") ) { weekBeforeInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"displayNameInputText") ) { displayNameInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"difficultiesInputText") ) { difficultiesInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"blockPressWhileTypingOn") ) { blockPressWhileTypingOn=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlockCheckbox") ) { hiddenUntilUnlockCheckbox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeekEditorState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_file") ) { _file=ioValue.Cast<  ::openfl::net::FileReference >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadError") ) { loadError=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadedWeek") ) { loadedWeek=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weekFileName") ) { weekFileName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void WeekEditorState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("txtWeekTitle",74,f4,3f,69));
	outFields->push(HX_("bgSprite",aa,c7,9c,98));
	outFields->push(HX_("lock",eb,9b,b7,47));
	outFields->push(HX_("txtTracklist",d9,6f,f5,3e));
	outFields->push(HX_("grpWeekCharacters",83,fc,76,59));
	outFields->push(HX_("weekThing",5a,43,fd,71));
	outFields->push(HX_("missingFileText",cf,06,fb,c0));
	outFields->push(HX_("weekFile",90,64,eb,2a));
	outFields->push(HX_("UI_box",60,07,ac,43));
	outFields->push(HX_("blockPressWhileTypingOn",71,5f,34,ba));
	outFields->push(HX_("songsInputText",f9,62,7c,e3));
	outFields->push(HX_("backgroundInputText",09,e8,4a,ec));
	outFields->push(HX_("displayNameInputText",6a,3a,0e,bb));
	outFields->push(HX_("weekNameInputText",78,dd,49,37));
	outFields->push(HX_("weekFileInputText",27,f3,62,96));
	outFields->push(HX_("opponentInputText",7a,14,8b,a4));
	outFields->push(HX_("boyfriendInputText",0d,c3,47,c4));
	outFields->push(HX_("girlfriendInputText",bd,d0,af,b8));
	outFields->push(HX_("hideCheckbox",25,55,fb,6d));
	outFields->push(HX_("weekBeforeInputText",c4,c7,2c,00));
	outFields->push(HX_("difficultiesInputText",3e,6f,eb,34));
	outFields->push(HX_("lockedCheckbox",6d,ad,e9,73));
	outFields->push(HX_("hiddenUntilUnlockCheckbox",1b,7d,ad,69));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WeekEditorState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WeekEditorState_obj,txtWeekTitle),HX_("txtWeekTitle",74,f4,3f,69)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WeekEditorState_obj,bgSprite),HX_("bgSprite",aa,c7,9c,98)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WeekEditorState_obj,lock),HX_("lock",eb,9b,b7,47)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WeekEditorState_obj,txtTracklist),HX_("txtTracklist",d9,6f,f5,3e)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(WeekEditorState_obj,grpWeekCharacters),HX_("grpWeekCharacters",83,fc,76,59)},
	{::hx::fsObject /*  ::MenuItem */ ,(int)offsetof(WeekEditorState_obj,weekThing),HX_("weekThing",5a,43,fd,71)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WeekEditorState_obj,missingFileText),HX_("missingFileText",cf,06,fb,c0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(WeekEditorState_obj,weekFile),HX_("weekFile",90,64,eb,2a)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUITabMenu */ ,(int)offsetof(WeekEditorState_obj,UI_box),HX_("UI_box",60,07,ac,43)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(WeekEditorState_obj,blockPressWhileTypingOn),HX_("blockPressWhileTypingOn",71,5f,34,ba)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,songsInputText),HX_("songsInputText",f9,62,7c,e3)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,backgroundInputText),HX_("backgroundInputText",09,e8,4a,ec)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,displayNameInputText),HX_("displayNameInputText",6a,3a,0e,bb)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,weekNameInputText),HX_("weekNameInputText",78,dd,49,37)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,weekFileInputText),HX_("weekFileInputText",27,f3,62,96)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,opponentInputText),HX_("opponentInputText",7a,14,8b,a4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,boyfriendInputText),HX_("boyfriendInputText",0d,c3,47,c4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,girlfriendInputText),HX_("girlfriendInputText",bd,d0,af,b8)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(WeekEditorState_obj,hideCheckbox),HX_("hideCheckbox",25,55,fb,6d)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,weekBeforeInputText),HX_("weekBeforeInputText",c4,c7,2c,00)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,difficultiesInputText),HX_("difficultiesInputText",3e,6f,eb,34)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(WeekEditorState_obj,lockedCheckbox),HX_("lockedCheckbox",6d,ad,e9,73)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(WeekEditorState_obj,hiddenUntilUnlockCheckbox),HX_("hiddenUntilUnlockCheckbox",1b,7d,ad,69)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WeekEditorState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &WeekEditorState_obj::weekFileName,HX_("weekFileName",fb,8a,f9,ab)},
	{::hx::fsObject /*  ::openfl::net::FileReference */ ,(void *) &WeekEditorState_obj::_file,HX_("_file",5b,ea,cc,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WeekEditorState_obj::loadedWeek,HX_("loadedWeek",99,ba,82,b0)},
	{::hx::fsBool,(void *) &WeekEditorState_obj::loadError,HX_("loadError",c2,17,61,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WeekEditorState_obj_sMemberFields[] = {
	HX_("txtWeekTitle",74,f4,3f,69),
	HX_("bgSprite",aa,c7,9c,98),
	HX_("lock",eb,9b,b7,47),
	HX_("txtTracklist",d9,6f,f5,3e),
	HX_("grpWeekCharacters",83,fc,76,59),
	HX_("weekThing",5a,43,fd,71),
	HX_("missingFileText",cf,06,fb,c0),
	HX_("weekFile",90,64,eb,2a),
	HX_("create",fc,66,0f,7c),
	HX_("UI_box",60,07,ac,43),
	HX_("blockPressWhileTypingOn",71,5f,34,ba),
	HX_("addEditorBox",fd,df,01,35),
	HX_("songsInputText",f9,62,7c,e3),
	HX_("backgroundInputText",09,e8,4a,ec),
	HX_("displayNameInputText",6a,3a,0e,bb),
	HX_("weekNameInputText",78,dd,49,37),
	HX_("weekFileInputText",27,f3,62,96),
	HX_("opponentInputText",7a,14,8b,a4),
	HX_("boyfriendInputText",0d,c3,47,c4),
	HX_("girlfriendInputText",bd,d0,af,b8),
	HX_("hideCheckbox",25,55,fb,6d),
	HX_("addWeekUI",49,c4,28,b7),
	HX_("weekBeforeInputText",c4,c7,2c,00),
	HX_("difficultiesInputText",3e,6f,eb,34),
	HX_("lockedCheckbox",6d,ad,e9,73),
	HX_("hiddenUntilUnlockCheckbox",1b,7d,ad,69),
	HX_("addOtherUI",03,31,84,f5),
	HX_("reloadAllShit",28,7b,7b,27),
	HX_("updateText",56,b7,ae,05),
	HX_("reloadBG",5e,d5,dd,38),
	HX_("reloadWeekThing",c1,1c,d2,1a),
	HX_("getEvent",a4,d7,9b,d5),
	HX_("update",09,86,05,87),
	HX_("recalculateStuffPosition",6a,dc,65,b6),
	::String(null()) };

static void WeekEditorState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeekEditorState_obj::weekFileName,"weekFileName");
	HX_MARK_MEMBER_NAME(WeekEditorState_obj::_file,"_file");
	HX_MARK_MEMBER_NAME(WeekEditorState_obj::loadedWeek,"loadedWeek");
	HX_MARK_MEMBER_NAME(WeekEditorState_obj::loadError,"loadError");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WeekEditorState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeekEditorState_obj::weekFileName,"weekFileName");
	HX_VISIT_MEMBER_NAME(WeekEditorState_obj::_file,"_file");
	HX_VISIT_MEMBER_NAME(WeekEditorState_obj::loadedWeek,"loadedWeek");
	HX_VISIT_MEMBER_NAME(WeekEditorState_obj::loadError,"loadError");
};

#endif

::hx::Class WeekEditorState_obj::__mClass;

static ::String WeekEditorState_obj_sStaticFields[] = {
	HX_("weekFileName",fb,8a,f9,ab),
	HX_("_file",5b,ea,cc,f6),
	HX_("loadWeek",3a,31,95,bf),
	HX_("loadedWeek",99,ba,82,b0),
	HX_("loadError",c2,17,61,8e),
	HX_("onLoadComplete",be,4c,20,63),
	HX_("onLoadCancel",3f,be,a2,45),
	HX_("onLoadError",a3,fa,a3,b0),
	HX_("saveWeek",d1,f9,ae,02),
	HX_("onSaveComplete",d5,ac,3f,bc),
	HX_("onSaveCancel",96,1a,31,d9),
	HX_("onSaveError",2c,b6,19,24),
	::String(null())
};

void WeekEditorState_obj::__register()
{
	WeekEditorState_obj _hx_dummy;
	WeekEditorState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("editors.WeekEditorState",28,53,5a,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeekEditorState_obj::__GetStatic;
	__mClass->mSetStaticField = &WeekEditorState_obj::__SetStatic;
	__mClass->mMarkFunc = WeekEditorState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WeekEditorState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WeekEditorState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WeekEditorState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WeekEditorState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WeekEditorState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WeekEditorState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WeekEditorState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_176_boot)
HXDLIN( 176)		weekFileName = HX_("week1",bd,95,be,c7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_478_boot)
HXDLIN( 478)		loadedWeek = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_479_boot)
HXDLIN( 479)		loadError = false;
            	}
}

} // end namespace editors
