#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StrumNote
#include <StrumNote.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_10_new,"StrumNote","new",0x9acbf42d,"StrumNote.new","StrumNote.hx",10,0x345a6fe3)
HX_LOCAL_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_22_set_texture,"StrumNote","set_texture",0xee6c68cb,"StrumNote.set_texture","StrumNote.hx",22,0x345a6fe3)
HX_LOCAL_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_46_reloadNote,"StrumNote","reloadNote",0x6b9957be,"StrumNote.reloadNote","StrumNote.hx",46,0x345a6fe3)
static const int _hx_array_data_920159bb_5[] = {
	(int)6,
};
static const int _hx_array_data_920159bb_6[] = {
	(int)7,
};
static const int _hx_array_data_920159bb_7[] = {
	(int)5,
};
static const int _hx_array_data_920159bb_8[] = {
	(int)4,
};
static const int _hx_array_data_920159bb_9[] = {
	(int)0,
};
static const int _hx_array_data_920159bb_10[] = {
	(int)4,(int)8,
};
static const int _hx_array_data_920159bb_11[] = {
	(int)12,(int)16,
};
static const int _hx_array_data_920159bb_12[] = {
	(int)1,
};
static const int _hx_array_data_920159bb_13[] = {
	(int)5,(int)9,
};
static const int _hx_array_data_920159bb_14[] = {
	(int)13,(int)17,
};
static const int _hx_array_data_920159bb_15[] = {
	(int)2,
};
static const int _hx_array_data_920159bb_16[] = {
	(int)6,(int)10,
};
static const int _hx_array_data_920159bb_17[] = {
	(int)14,(int)18,
};
static const int _hx_array_data_920159bb_18[] = {
	(int)3,
};
static const int _hx_array_data_920159bb_19[] = {
	(int)7,(int)11,
};
static const int _hx_array_data_920159bb_20[] = {
	(int)15,(int)19,
};
HX_LOCAL_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_123_postAddedToGroup,"StrumNote","postAddedToGroup",0x894c0b77,"StrumNote.postAddedToGroup","StrumNote.hx",123,0x345a6fe3)
HX_LOCAL_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_131_update,"StrumNote","update",0x7186005c,"StrumNote.update","StrumNote.hx",131,0x345a6fe3)
HX_LOCAL_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_148_playAnim,"StrumNote","playAnim",0x17d6df38,"StrumNote.playAnim","StrumNote.hx",148,0x345a6fe3)

void StrumNote_obj::__construct(Float x,Float y,int leData,int player){
            	HX_GC_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_10_new)
HXLINE(  21)		this->texture = null();
HXLINE(  17)		this->sustainReduce = true;
HXLINE(  16)		this->downScroll = false;
HXLINE(  15)		this->direction = ((Float)90);
HXLINE(  14)		this->noteData = 0;
HXLINE(  13)		this->resetAnim = ((Float)0);
HXLINE(  31)		this->colorSwap =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE(  32)		this->shader = this->colorSwap->shader;
HXLINE(  33)		this->noteData = leData;
HXLINE(  34)		this->player = player;
HXLINE(  35)		this->noteData = leData;
HXLINE(  36)		super::__construct(x,y,null());
HXLINE(  38)		::String skin = HX_("NOTE_assets",70,3c,09,f7);
HXLINE(  39)		bool _hx_tmp;
HXDLIN(  39)		if (::hx::IsNotNull( ::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic) )) {
HXLINE(  39)			_hx_tmp = (( (::String)(::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) ).length > 1);
            		}
            		else {
HXLINE(  39)			_hx_tmp = false;
            		}
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  39)			skin = ( (::String)(::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) );
            		}
HXLINE(  40)		this->set_texture(skin);
HXLINE(  42)		this->scrollFactor->set(null(),null());
            	}

Dynamic StrumNote_obj::__CreateEmpty() { return new StrumNote_obj; }

void *StrumNote_obj::_hx_vtable = 0;

Dynamic StrumNote_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StrumNote_obj > _hx_result = new StrumNote_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool StrumNote_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5544cefb) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5544cefb;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

::String StrumNote_obj::set_texture(::String value){
            	HX_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_22_set_texture)
HXLINE(  23)		if ((this->texture != value)) {
HXLINE(  24)			this->texture = value;
HXLINE(  25)			this->reloadNote();
            		}
HXLINE(  27)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StrumNote_obj,set_texture,return )

void StrumNote_obj::reloadNote(){
            	HX_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_46_reloadNote)
HXLINE(  47)		::String lastAnim = null();
HXLINE(  48)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(  48)			lastAnim = this->animation->_curAnim->name;
            		}
HXLINE(  50)		if (::PlayState_obj::isPixelStage) {
HXLINE(  52)			::String library = null();
HXDLIN(  52)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("pixelUI/",95,50,4f,7e) + this->texture),library);
HXDLIN(  52)			this->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  53)			this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE(  54)			this->set_height((this->get_height() / ( (Float)(5) )));
HXLINE(  55)			::String library1 = null();
HXDLIN(  55)			 ::flixel::graphics::FlxGraphic returnAsset1 = ::Paths_obj::returnGraphic((HX_("pixelUI/",95,50,4f,7e) + this->texture),library1);
HXDLIN(  55)			int _hx_tmp = ::Math_obj::floor(this->get_width());
HXDLIN(  55)			this->loadGraphic(returnAsset1,true,_hx_tmp,::Math_obj::floor(this->get_height()),null(),null());
HXLINE(  57)			this->set_antialiasing(false);
HXLINE(  58)			Float _hx_tmp1 = this->get_width();
HXDLIN(  58)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp1 * ::PlayState_obj::daPixelZoom)),null());
HXLINE(  60)			this->animation->add(HX_("green",c3,0e,ed,99),::Array_obj< int >::fromData( _hx_array_data_920159bb_5,1),null(),null(),null(),null());
HXLINE(  61)			this->animation->add(HX_("red",51,d9,56,00),::Array_obj< int >::fromData( _hx_array_data_920159bb_6,1),null(),null(),null(),null());
HXLINE(  62)			this->animation->add(HX_("blue",9a,42,19,41),::Array_obj< int >::fromData( _hx_array_data_920159bb_7,1),null(),null(),null(),null());
HXLINE(  63)			this->animation->add(HX_("purple",3c,f6,89,71),::Array_obj< int >::fromData( _hx_array_data_920159bb_8,1),null(),null(),null(),null());
HXLINE(  64)			Float _hx_switch_0 = ::hx::Mod(::Math_obj::abs(( (Float)(this->noteData) )),4);
            			if (  (_hx_switch_0==( (Float)(0) )) ){
HXLINE(  67)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_920159bb_9,1),null(),null(),null(),null());
HXLINE(  68)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_920159bb_10,2),12,false,null(),null());
HXLINE(  69)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_920159bb_11,2),24,false,null(),null());
HXLINE(  66)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==( (Float)(1) )) ){
HXLINE(  71)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_920159bb_12,1),null(),null(),null(),null());
HXLINE(  72)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_920159bb_13,2),12,false,null(),null());
HXLINE(  73)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_920159bb_14,2),24,false,null(),null());
HXLINE(  70)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==( (Float)(2) )) ){
HXLINE(  75)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_920159bb_15,1),null(),null(),null(),null());
HXLINE(  76)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_920159bb_16,2),12,false,null(),null());
HXLINE(  77)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_920159bb_17,2),12,false,null(),null());
HXLINE(  74)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==( (Float)(3) )) ){
HXLINE(  79)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_920159bb_18,1),null(),null(),null(),null());
HXLINE(  80)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_920159bb_19,2),12,false,null(),null());
HXLINE(  81)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_920159bb_20,2),24,false,null(),null());
HXLINE(  78)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
            		else {
HXLINE(  86)			::String key = this->texture;
HXDLIN(  86)			::String library = null();
HXDLIN(  86)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(key,null());
HXDLIN(  86)			bool xmlExists = false;
HXDLIN(  86)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  86)				xmlExists = true;
            			}
HXDLIN(  86)			 ::Dynamic _hx_tmp;
HXDLIN(  86)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  86)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  86)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(key,library);
HXDLIN(  86)				_hx_tmp = returnAsset;
            			}
HXDLIN(  86)			::String _hx_tmp1;
HXDLIN(  86)			if (xmlExists) {
HXLINE(  86)				_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  86)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  86)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  87)			this->animation->addByPrefix(HX_("green",c3,0e,ed,99),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE(  88)			this->animation->addByPrefix(HX_("blue",9a,42,19,41),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE(  89)			this->animation->addByPrefix(HX_("purple",3c,f6,89,71),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE(  90)			this->animation->addByPrefix(HX_("red",51,d9,56,00),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE(  92)			this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  93)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.7))),null());
HXLINE(  95)			Float _hx_switch_1 = ::hx::Mod(::Math_obj::abs(( (Float)(this->noteData) )),4);
            			if (  (_hx_switch_1==( (Float)(0) )) ){
HXLINE(  98)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE(  99)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("left press",aa,26,70,8e),24,false,null(),null());
HXLINE( 100)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("left confirm",e7,c7,19,fe),24,false,null(),null());
HXLINE(  97)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_1==( (Float)(1) )) ){
HXLINE( 102)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE( 103)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("down press",45,4d,63,9c),24,false,null(),null());
HXLINE( 104)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("down confirm",42,0b,18,cc),24,false,null(),null());
HXLINE( 101)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_1==( (Float)(2) )) ){
HXLINE( 106)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE( 107)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("up press",fe,fb,65,e9),24,false,null(),null());
HXLINE( 108)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("up confirm",3b,9a,2e,62),24,false,null(),null());
HXLINE( 105)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_1==( (Float)(3) )) ){
HXLINE( 110)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE( 111)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("right press",3f,38,e4,c8),24,false,null(),null());
HXLINE( 112)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("right confirm",bc,28,e5,ca),24,false,null(),null());
HXLINE( 109)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
            		}
HXLINE( 115)		this->updateHitbox();
HXLINE( 117)		if (::hx::IsNotNull( lastAnim )) {
HXLINE( 119)			this->playAnim(lastAnim,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StrumNote_obj,reloadNote,(void))

void StrumNote_obj::postAddedToGroup(){
            	HX_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_123_postAddedToGroup)
HXLINE( 124)		this->playAnim(HX_("static",ae,dc,fb,05),null());
HXLINE( 125)		this->set_x((this->x + (::Note_obj::swagWidth * ( (Float)(this->noteData) ))));
HXLINE( 126)		this->set_x((this->x + 50));
HXLINE( 127)		this->set_x((this->x + ((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) * ( (Float)(this->player) ))));
HXLINE( 128)		this->ID = this->noteData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StrumNote_obj,postAddedToGroup,(void))

void StrumNote_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_131_update)
HXLINE( 132)		if ((this->resetAnim > 0)) {
HXLINE( 133)			 ::StrumNote _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 133)			_hx_tmp->resetAnim = (_hx_tmp->resetAnim - elapsed);
HXLINE( 134)			if ((this->resetAnim <= 0)) {
HXLINE( 135)				this->playAnim(HX_("static",ae,dc,fb,05),null());
HXLINE( 136)				this->resetAnim = ( (Float)(0) );
            			}
            		}
HXLINE( 140)		bool _hx_tmp;
HXDLIN( 140)		if ((this->animation->_curAnim->name == HX_("confirm",00,9d,39,10))) {
HXLINE( 140)			_hx_tmp = !(::PlayState_obj::isPixelStage);
            		}
            		else {
HXLINE( 140)			_hx_tmp = false;
            		}
HXDLIN( 140)		if (_hx_tmp) {
HXLINE( 141)			this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
            		}
HXLINE( 145)		this->super::update(elapsed);
            	}


void StrumNote_obj::playAnim(::String anim, ::Dynamic __o_force){
            		 ::Dynamic force = __o_force;
            		if (::hx::IsNull(__o_force)) force = false;
            	HX_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_148_playAnim)
HXLINE( 149)		this->animation->play(anim,force,null(),null());
HXLINE( 150)		this->centerOffsets(null());
HXLINE( 151)		this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
HXLINE( 152)		bool _hx_tmp;
HXDLIN( 152)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 152)			_hx_tmp = (this->animation->_curAnim->name == HX_("static",ae,dc,fb,05));
            		}
            		else {
HXLINE( 152)			_hx_tmp = true;
            		}
HXDLIN( 152)		if (_hx_tmp) {
HXLINE( 153)			this->colorSwap->set_hue(( (Float)(0) ));
HXLINE( 154)			this->colorSwap->set_saturation(( (Float)(0) ));
HXLINE( 155)			this->colorSwap->set_brightness(( (Float)(0) ));
            		}
            		else {
HXLINE( 157)			bool _hx_tmp;
HXDLIN( 157)			if ((this->noteData > -1)) {
HXLINE( 157)				_hx_tmp = (this->noteData < ::ClientPrefs_obj::arrowHSV->length);
            			}
            			else {
HXLINE( 157)				_hx_tmp = false;
            			}
HXDLIN( 157)			if (_hx_tmp) {
HXLINE( 159)				this->colorSwap->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(this->noteData).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE( 160)				this->colorSwap->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(this->noteData).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE( 161)				this->colorSwap->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(this->noteData).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
            			}
HXLINE( 164)			bool _hx_tmp1;
HXDLIN( 164)			if ((this->animation->_curAnim->name == HX_("confirm",00,9d,39,10))) {
HXLINE( 164)				_hx_tmp1 = !(::PlayState_obj::isPixelStage);
            			}
            			else {
HXLINE( 164)				_hx_tmp1 = false;
            			}
HXDLIN( 164)			if (_hx_tmp1) {
HXLINE( 165)				this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(StrumNote_obj,playAnim,(void))


::hx::ObjectPtr< StrumNote_obj > StrumNote_obj::__new(Float x,Float y,int leData,int player) {
	::hx::ObjectPtr< StrumNote_obj > __this = new StrumNote_obj();
	__this->__construct(x,y,leData,player);
	return __this;
}

::hx::ObjectPtr< StrumNote_obj > StrumNote_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int leData,int player) {
	StrumNote_obj *__this = (StrumNote_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StrumNote_obj), true, "StrumNote"));
	*(void **)__this = StrumNote_obj::_hx_vtable;
	__this->__construct(x,y,leData,player);
	return __this;
}

StrumNote_obj::StrumNote_obj()
{
}

void StrumNote_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StrumNote);
	HX_MARK_MEMBER_NAME(colorSwap,"colorSwap");
	HX_MARK_MEMBER_NAME(resetAnim,"resetAnim");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(downScroll,"downScroll");
	HX_MARK_MEMBER_NAME(sustainReduce,"sustainReduce");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(texture,"texture");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StrumNote_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colorSwap,"colorSwap");
	HX_VISIT_MEMBER_NAME(resetAnim,"resetAnim");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(downScroll,"downScroll");
	HX_VISIT_MEMBER_NAME(sustainReduce,"sustainReduce");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StrumNote_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorSwap") ) { return ::hx::Val( colorSwap ); }
		if (HX_FIELD_EQ(inName,"resetAnim") ) { return ::hx::Val( resetAnim ); }
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { return ::hx::Val( downScroll ); }
		if (HX_FIELD_EQ(inName,"reloadNote") ) { return ::hx::Val( reloadNote_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sustainReduce") ) { return ::hx::Val( sustainReduce ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"postAddedToGroup") ) { return ::hx::Val( postAddedToGroup_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StrumNote_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast< ::String >()) );texture=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorSwap") ) { colorSwap=inValue.Cast<  ::ColorSwap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetAnim") ) { resetAnim=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { downScroll=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sustainReduce") ) { sustainReduce=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StrumNote_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colorSwap",96,b5,cb,27));
	outFields->push(HX_("resetAnim",80,8f,5d,86));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("downScroll",0f,ba,68,84));
	outFields->push(HX_("sustainReduce",a9,3a,2f,dc));
	outFields->push(HX_("player",61,eb,b8,37));
	outFields->push(HX_("texture",db,c8,e0,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StrumNote_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::ColorSwap */ ,(int)offsetof(StrumNote_obj,colorSwap),HX_("colorSwap",96,b5,cb,27)},
	{::hx::fsFloat,(int)offsetof(StrumNote_obj,resetAnim),HX_("resetAnim",80,8f,5d,86)},
	{::hx::fsInt,(int)offsetof(StrumNote_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsFloat,(int)offsetof(StrumNote_obj,direction),HX_("direction",3f,62,40,10)},
	{::hx::fsBool,(int)offsetof(StrumNote_obj,downScroll),HX_("downScroll",0f,ba,68,84)},
	{::hx::fsBool,(int)offsetof(StrumNote_obj,sustainReduce),HX_("sustainReduce",a9,3a,2f,dc)},
	{::hx::fsInt,(int)offsetof(StrumNote_obj,player),HX_("player",61,eb,b8,37)},
	{::hx::fsString,(int)offsetof(StrumNote_obj,texture),HX_("texture",db,c8,e0,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StrumNote_obj_sStaticStorageInfo = 0;
#endif

static ::String StrumNote_obj_sMemberFields[] = {
	HX_("colorSwap",96,b5,cb,27),
	HX_("resetAnim",80,8f,5d,86),
	HX_("noteData",3c,7b,96,51),
	HX_("direction",3f,62,40,10),
	HX_("downScroll",0f,ba,68,84),
	HX_("sustainReduce",a9,3a,2f,dc),
	HX_("player",61,eb,b8,37),
	HX_("texture",db,c8,e0,9e),
	HX_("set_texture",fe,2f,48,2f),
	HX_("reloadNote",eb,b7,11,94),
	HX_("postAddedToGroup",64,4b,92,b7),
	HX_("update",09,86,05,87),
	HX_("playAnim",25,ea,84,30),
	::String(null()) };

::hx::Class StrumNote_obj::__mClass;

void StrumNote_obj::__register()
{
	StrumNote_obj _hx_dummy;
	StrumNote_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StrumNote",bb,59,01,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StrumNote_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StrumNote_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StrumNote_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StrumNote_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

