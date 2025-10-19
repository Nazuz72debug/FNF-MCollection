#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_llua_LuaException
#include <llua/LuaException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f60e2b3c856b0cc3_5_new,"llua.LuaException","new",0x5d9ad5eb,"llua.LuaException.new","llua/LuaException.hx",5,0x5037b904)
HX_LOCAL_STACK_FRAME(_hx_pos_f60e2b3c856b0cc3_19_ifErrorThrow,"llua.LuaException","ifErrorThrow",0xea077390,"llua.LuaException.ifErrorThrow","llua/LuaException.hx",19,0x5037b904)
namespace llua{

void LuaException_obj::__construct(::String message, ::haxe::Exception previous, ::Dynamic __o_code, cpp::Reference<lua_State> luaState){
            		 ::Dynamic code = __o_code;
            		if (::hx::IsNull(__o_code)) code = 0;
            	HX_STACKFRAME(&_hx_pos_f60e2b3c856b0cc3_5_new)
HXLINE(   6)		this->error_code = 0;
HXLINE(   8)		this->error_code = ( (int)(code) );
HXLINE(   9)		if (::hx::IsNull( message )) {
HXLINE(  10)			if (::hx::IsNull( code )) {
HXLINE(  14)				message = (HX_("Lua Error:",1a,a1,39,e3) + code);
            			}
            			else {
HXLINE(  10)				 ::Dynamic _hx_switch_0 = code;
            				if (  (_hx_switch_0==2) ){
HXLINE(  11)					if (::hx::IsNull( luaState )) {
HXLINE(  11)						message = HX_("Lua Runtime Error: UNKNOWN ERROR?",6b,80,f7,b2);
            					}
            					else {
HXLINE(  11)						message = linc::lua::tostring(luaState,-1);
            					}
HXDLIN(  11)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==4) ){
HXLINE(  12)					message = HX_("luavm ran out of memory",66,c9,75,19);
HXDLIN(  12)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==5) ){
HXLINE(  13)					message = HX_("LUA_ERRERR",27,18,6d,18);
HXDLIN(  13)					goto _hx_goto_0;
            				}
            				/* default */{
HXLINE(  14)					message = (HX_("Lua Error:",1a,a1,39,e3) + code);
            				}
            				_hx_goto_0:;
            			}
            		}
HXLINE(  17)		super::__construct(message,previous,null());
            	}

Dynamic LuaException_obj::__CreateEmpty() { return new LuaException_obj; }

void *LuaException_obj::_hx_vtable = 0;

Dynamic LuaException_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LuaException_obj > _hx_result = new LuaException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool LuaException_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5718dd47) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x5718dd47;
	} else {
		return inClassId==(int)0x677ddc49;
	}
}

void LuaException_obj::ifErrorThrow( cpp::Reference<lua_State> l,int status){
            	HX_GC_STACKFRAME(&_hx_pos_f60e2b3c856b0cc3_19_ifErrorThrow)
HXLINE(  20)		if ((status == 0)) {
HXLINE(  20)			return;
            		}
HXLINE(  21)		HX_STACK_DO_THROW( ::llua::LuaException_obj::__alloc( HX_CTX ,null(),null(),status,l));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LuaException_obj,ifErrorThrow,(void))


::hx::ObjectPtr< LuaException_obj > LuaException_obj::__new(::String message, ::haxe::Exception previous, ::Dynamic __o_code, cpp::Reference<lua_State> luaState) {
	::hx::ObjectPtr< LuaException_obj > __this = new LuaException_obj();
	__this->__construct(message,previous,__o_code,luaState);
	return __this;
}

::hx::ObjectPtr< LuaException_obj > LuaException_obj::__alloc(::hx::Ctx *_hx_ctx,::String message, ::haxe::Exception previous, ::Dynamic __o_code, cpp::Reference<lua_State> luaState) {
	LuaException_obj *__this = (LuaException_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LuaException_obj), true, "llua.LuaException"));
	*(void **)__this = LuaException_obj::_hx_vtable;
	__this->__construct(message,previous,__o_code,luaState);
	return __this;
}

LuaException_obj::LuaException_obj()
{
}

::hx::Val LuaException_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"error_code") ) { return ::hx::Val( error_code ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LuaException_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"ifErrorThrow") ) { outValue = ifErrorThrow_dyn(); return true; }
	}
	return false;
}

::hx::Val LuaException_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"error_code") ) { error_code=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LuaException_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("error_code",44,4c,ac,d6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LuaException_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(LuaException_obj,error_code),HX_("error_code",44,4c,ac,d6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LuaException_obj_sStaticStorageInfo = 0;
#endif

static ::String LuaException_obj_sMemberFields[] = {
	HX_("error_code",44,4c,ac,d6),
	::String(null()) };

::hx::Class LuaException_obj::__mClass;

static ::String LuaException_obj_sStaticFields[] = {
	HX_("ifErrorThrow",7b,02,68,cb),
	::String(null())
};

void LuaException_obj::__register()
{
	LuaException_obj _hx_dummy;
	LuaException_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("llua.LuaException",79,04,91,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LuaException_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LuaException_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LuaException_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LuaException_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LuaException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LuaException_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace llua
