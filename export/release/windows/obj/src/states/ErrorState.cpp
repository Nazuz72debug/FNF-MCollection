#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
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
#ifndef INCLUDED_states_ErrorState
#include <states/ErrorState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c165ffff73ee1fcf_14_new,"states.ErrorState","new",0xe8867867,"states.ErrorState.new","states/ErrorState.hx",14,0xd8622448)
HX_LOCAL_STACK_FRAME(_hx_pos_c165ffff73ee1fcf_20_create,"states.ErrorState","create",0x4f963d55,"states.ErrorState.create","states/ErrorState.hx",20,0xd8622448)
HX_LOCAL_STACK_FRAME(_hx_pos_c165ffff73ee1fcf_35_update,"states.ErrorState","update",0x5a8c5c62,"states.ErrorState.update","states/ErrorState.hx",35,0xd8622448)
namespace states{

void ErrorState_obj::__construct(::String error){
            	HX_STACKFRAME(&_hx_pos_c165ffff73ee1fcf_14_new)
HXLINE(  15)		super::__construct(null());
HXLINE(  16)		this->errorMsg = error;
            	}

Dynamic ErrorState_obj::__CreateEmpty() { return new ErrorState_obj; }

void *ErrorState_obj::_hx_vtable = 0;

Dynamic ErrorState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ErrorState_obj > _hx_result = new ErrorState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ErrorState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x17c5230b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x17c5230b;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void ErrorState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_c165ffff73ee1fcf_20_create)
HXLINE(  21)		this->super::create();
HXLINE(  23)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  24)		bg->set_alpha(((Float)0.8));
HXLINE(  25)		this->add(bg);
HXLINE(  27)		 ::flixel::text::FlxText errorText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,(::flixel::FlxG_obj::width - 200),this->errorMsg,32,null());
HXLINE(  28)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  28)		::String _hx_tmp;
HXDLIN(  28)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  28)			_hx_tmp = file;
            		}
            		else {
HXLINE(  28)			_hx_tmp = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  28)		errorText->setFormat(_hx_tmp,32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  29)		errorText->scrollFactor->set(null(),null());
HXLINE(  30)		{
HXLINE(  30)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  30)			bool _hx_tmp1;
HXDLIN(  30)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  30)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  30)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  30)			if (_hx_tmp1) {
HXLINE(  30)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  30)				errorText->set_x(((( (Float)(_hx_tmp) ) - errorText->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  30)			bool _hx_tmp2;
HXDLIN(  30)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  30)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE(  30)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  30)			if (_hx_tmp2) {
HXLINE(  30)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  30)				errorText->set_y(((( (Float)(_hx_tmp) ) - errorText->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  31)		this->add(errorText);
            	}


void ErrorState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c165ffff73ee1fcf_35_update)
HXLINE(  36)		bool _hx_tmp;
HXDLIN(  36)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  36)		if (!(_this->keyManager->checkStatusUnsafe(13,_this->status))) {
HXLINE(  36)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  36)			_hx_tmp = _this->keyManager->checkStatusUnsafe(27,_this->status);
            		}
            		else {
HXLINE(  36)			_hx_tmp = true;
            		}
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  37)			this->close();
            		}
HXLINE(  39)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< ErrorState_obj > ErrorState_obj::__new(::String error) {
	::hx::ObjectPtr< ErrorState_obj > __this = new ErrorState_obj();
	__this->__construct(error);
	return __this;
}

::hx::ObjectPtr< ErrorState_obj > ErrorState_obj::__alloc(::hx::Ctx *_hx_ctx,::String error) {
	ErrorState_obj *__this = (ErrorState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ErrorState_obj), true, "states.ErrorState"));
	*(void **)__this = ErrorState_obj::_hx_vtable;
	__this->__construct(error);
	return __this;
}

ErrorState_obj::ErrorState_obj()
{
}

void ErrorState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ErrorState);
	HX_MARK_MEMBER_NAME(errorMsg,"errorMsg");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ErrorState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(errorMsg,"errorMsg");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ErrorState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"errorMsg") ) { return ::hx::Val( errorMsg ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ErrorState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"errorMsg") ) { errorMsg=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ErrorState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("errorMsg",59,93,34,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ErrorState_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ErrorState_obj,errorMsg),HX_("errorMsg",59,93,34,df)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ErrorState_obj_sStaticStorageInfo = 0;
#endif

static ::String ErrorState_obj_sMemberFields[] = {
	HX_("errorMsg",59,93,34,df),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ErrorState_obj::__mClass;

void ErrorState_obj::__register()
{
	ErrorState_obj _hx_dummy;
	ErrorState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.ErrorState",f5,b8,e2,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ErrorState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ErrorState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ErrorState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ErrorState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
