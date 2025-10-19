#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED___ASSET__mods_fonts_fnf_ttf
#include <__ASSET__mods_fonts_fnf_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_08bab53c05b3ea3f_1523_new,"__ASSET__mods_fonts_fnf_ttf","new",0xffec3e7e,"__ASSET__mods_fonts_fnf_ttf.new","ManifestResources.hx",1523,0xf77aa668)

void __ASSET__mods_fonts_fnf_ttf_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_08bab53c05b3ea3f_1523_new)
HXDLIN(1523)		this->_hx___fontPath = (::ManifestResources_obj::rootPath + HX_("mods/fonts/fnf.ttf",ad,5d,16,8d));
HXDLIN(1523)		this->name = HX_("PhantomMuff 1.5",0d,79,26,b7);
HXDLIN(1523)		super::__construct(null());
            	}

Dynamic __ASSET__mods_fonts_fnf_ttf_obj::__CreateEmpty() { return new __ASSET__mods_fonts_fnf_ttf_obj; }

void *__ASSET__mods_fonts_fnf_ttf_obj::_hx_vtable = 0;

Dynamic __ASSET__mods_fonts_fnf_ttf_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< __ASSET__mods_fonts_fnf_ttf_obj > _hx_result = new __ASSET__mods_fonts_fnf_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool __ASSET__mods_fonts_fnf_ttf_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c164820) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c164820;
	} else {
		return inClassId==(int)0x40cee131;
	}
}


::hx::ObjectPtr< __ASSET__mods_fonts_fnf_ttf_obj > __ASSET__mods_fonts_fnf_ttf_obj::__new() {
	::hx::ObjectPtr< __ASSET__mods_fonts_fnf_ttf_obj > __this = new __ASSET__mods_fonts_fnf_ttf_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< __ASSET__mods_fonts_fnf_ttf_obj > __ASSET__mods_fonts_fnf_ttf_obj::__alloc(::hx::Ctx *_hx_ctx) {
	__ASSET__mods_fonts_fnf_ttf_obj *__this = (__ASSET__mods_fonts_fnf_ttf_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__mods_fonts_fnf_ttf_obj), true, "__ASSET__mods_fonts_fnf_ttf"));
	*(void **)__this = __ASSET__mods_fonts_fnf_ttf_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

__ASSET__mods_fonts_fnf_ttf_obj::__ASSET__mods_fonts_fnf_ttf_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *__ASSET__mods_fonts_fnf_ttf_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *__ASSET__mods_fonts_fnf_ttf_obj_sStaticStorageInfo = 0;
#endif

::hx::Class __ASSET__mods_fonts_fnf_ttf_obj::__mClass;

void __ASSET__mods_fonts_fnf_ttf_obj::__register()
{
	__ASSET__mods_fonts_fnf_ttf_obj _hx_dummy;
	__ASSET__mods_fonts_fnf_ttf_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("__ASSET__mods_fonts_fnf_ttf",8c,e7,97,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< __ASSET__mods_fonts_fnf_ttf_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__mods_fonts_fnf_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__mods_fonts_fnf_ttf_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

