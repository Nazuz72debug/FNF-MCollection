#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif
#ifndef INCLUDED_llua_LuaCallback
#include <llua/LuaCallback.h>
#endif
#ifndef INCLUDED_llua_LuaException
#include <llua/LuaException.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_19_cleanFunctionRefs,"llua.Convert","cleanFunctionRefs",0x91417ea4,"llua.Convert.cleanFunctionRefs","llua/Convert.hx",19,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_21_toLua,"llua.Convert","toLua",0x3fb91700,"llua.Convert.toLua","llua/Convert.hx",21,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_72_callback_handler,"llua.Convert","callback_handler",0x2af82ced,"llua.Convert.callback_handler","llua/Convert.hx",72,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_93_arrayToLua,"llua.Convert","arrayToLua",0x07e2abc1,"llua.Convert.arrayToLua","llua/Convert.hx",93,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_103_mapToLua,"llua.Convert","mapToLua",0x655c929e,"llua.Convert.mapToLua","llua/Convert.hx",103,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_113_anonToLua,"llua.Convert","anonToLua",0x16c64594,"llua.Convert.anonToLua","llua/Convert.hx",113,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_132_setGlobal,"llua.Convert","setGlobal",0xf2a87028,"llua.Convert.setGlobal","llua/Convert.hx",132,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_144_fromLua,"llua.Convert","fromLua",0x7fff7d31,"llua.Convert.fromLua","llua/Convert.hx",144,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_231_toHaxeObj,"llua.Convert","toHaxeObj",0x234db0b9,"llua.Convert.toHaxeObj","llua/Convert.hx",231,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_270_callLuaFunction,"llua.Convert","callLuaFunction",0x8607aeb5,"llua.Convert.callLuaFunction","llua/Convert.hx",270,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_293_callLuaFuncNoReturns,"llua.Convert","callLuaFuncNoReturns",0x885666e1,"llua.Convert.callLuaFuncNoReturns","llua/Convert.hx",293,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_14_boot,"llua.Convert","boot",0xcfa7298f,"llua.Convert.boot","llua/Convert.hx",14,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_15_boot,"llua.Convert","boot",0xcfa7298f,"llua.Convert.boot","llua/Convert.hx",15,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_16_boot,"llua.Convert","boot",0xcfa7298f,"llua.Convert.boot","llua/Convert.hx",16,0x49e36a6e)
namespace llua{

void Convert_obj::__construct() { }

Dynamic Convert_obj::__CreateEmpty() { return new Convert_obj; }

void *Convert_obj::_hx_vtable = 0;

Dynamic Convert_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Convert_obj > _hx_result = new Convert_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Convert_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70578207;
}

bool Convert_obj::enableUnsupportedTraces;

bool Convert_obj::allowFunctions;

 ::haxe::ds::StringMap Convert_obj::functionReferences;

void Convert_obj::cleanFunctionRefs(){
            	HX_GC_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_19_cleanFunctionRefs)
HXDLIN(  19)		::llua::Convert_obj::functionReferences =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Convert_obj,cleanFunctionRefs,(void))

bool Convert_obj::toLua( cpp::Reference<lua_State> l, ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_21_toLua)
HXLINE(  23)		{
HXLINE(  23)			 ::ValueType _g = ::Type_obj::_hx_typeof(val);
HXDLIN(  23)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  25)					lua_pushnil(l);
            				}
            				break;
            				case (int)1: {
HXLINE(  29)					lua_pushinteger(l,::hx::TCast< int >::cast(val));
            				}
            				break;
            				case (int)2: {
HXLINE(  56)					lua_pushnumber(l,( (Float)(val) ));
            				}
            				break;
            				case (int)3: {
HXLINE(  27)					int _hx_tmp;
HXDLIN(  27)					if ((( (bool)(val) ) == true)) {
HXLINE(  27)						_hx_tmp = 1;
            					}
            					else {
HXLINE(  27)						_hx_tmp = 0;
            					}
HXDLIN(  27)					lua_pushboolean(l,_hx_tmp);
            				}
            				break;
            				case (int)4: {
HXLINE(  64)					lua_createtable(l,0,0);
HXDLIN(  64)					{
HXLINE(  64)						int _g = 0;
HXDLIN(  64)						::Array< ::String > _g1 = ::Reflect_obj::fields(val);
HXDLIN(  64)						while((_g < _g1->length)){
HXLINE(  64)							::String n = _g1->__get(_g);
HXDLIN(  64)							_g = (_g + 1);
HXDLIN(  64)							lua_pushstring(l,n);
HXDLIN(  64)							::llua::Convert_obj::toLua(l,::Reflect_obj::field(val,n));
HXDLIN(  64)							lua_settable(l,-3);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE(  61)					::hx::Class _hx_switch_0 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
            					if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  60)						::cpp::VirtualArray arr = ( (::cpp::VirtualArray)(val) );
HXDLIN(  60)						lua_createtable(l,arr->get_length(),0);
HXDLIN(  60)						{
HXLINE(  60)							int _g_current = 0;
HXDLIN(  60)							::cpp::VirtualArray _g_array = arr;
HXDLIN(  60)							while((_g_current < _g_array->get_length())){
HXLINE(  60)								 ::Dynamic _g1_value = _g_array->__get(_g_current);
HXDLIN(  60)								_g_current = (_g_current + 1);
HXDLIN(  60)								int _g1_key = (_g_current - 1);
HXDLIN(  60)								int i = _g1_key;
HXDLIN(  60)								 ::Dynamic v = _g1_value;
HXDLIN(  60)								{
HXLINE(  60)									lua_pushnumber(l,( (Float)((i + 1)) ));
HXDLIN(  60)									::llua::Convert_obj::toLua(l,v);
HXDLIN(  60)									lua_settable(l,-3);
            								}
            							}
            						}
HXDLIN(  60)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  58)						lua_pushstring(l,::hx::TCast< ::String >::cast(val));
HXDLIN(  58)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::ObjectMap >()) ||  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::StringMap >()) ){
HXLINE(  62)						lua_createtable(l,0,0);
HXDLIN(  62)						{
HXLINE(  62)							::Dynamic map = ( ( ::haxe::ds::StringMap)(val) );
HXDLIN(  62)							::Dynamic _g_map = map;
HXDLIN(  62)							 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN(  62)							while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  62)								::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  62)								 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN(  62)								::String _g1_key = key;
HXDLIN(  62)								::String index = _g1_key;
HXDLIN(  62)								 ::Dynamic val = _g1_value;
HXDLIN(  62)								{
HXLINE(  62)									lua_pushstring(l,::Std_obj::string(index));
HXDLIN(  62)									::llua::Convert_obj::toLua(l,val);
HXDLIN(  62)									lua_settable(l,-3);
            								}
            							}
            						}
HXDLIN(  62)						goto _hx_goto_2;
            					}
            					/* default */{
HXLINE(  66)						if (::llua::Convert_obj::enableUnsupportedTraces) {
HXLINE(  66)							 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  66)							::String _hx_tmp1;
HXDLIN(  66)							if (::hx::IsNull( val )) {
HXLINE(  66)								_hx_tmp1 = HX_("null",87,9e,0e,49);
            							}
            							else {
HXLINE(  66)								_hx_tmp1 = ::Std_obj::string(val);
            							}
HXDLIN(  66)							::String _hx_tmp2 = ((((HX_("Haxe value of ",a0,a2,a0,58) + _hx_tmp1) + HX_(" of type ",7d,e8,d0,a2)) + ::Std_obj::string(::Type_obj::_hx_typeof(val))) + HX_(" not supported!",40,ec,72,be));
HXDLIN(  66)							_hx_tmp(_hx_tmp2,::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),66,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
            						}
HXLINE(  67)						return false;
            					}
            					_hx_goto_2:;
            				}
            				break;
            				default:{
HXLINE(  66)					if (::llua::Convert_obj::enableUnsupportedTraces) {
HXLINE(  66)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  66)						::String _hx_tmp1;
HXDLIN(  66)						if (::hx::IsNull( val )) {
HXLINE(  66)							_hx_tmp1 = HX_("null",87,9e,0e,49);
            						}
            						else {
HXLINE(  66)							_hx_tmp1 = ::Std_obj::string(val);
            						}
HXDLIN(  66)						::String _hx_tmp2 = ((((HX_("Haxe value of ",a0,a2,a0,58) + _hx_tmp1) + HX_(" of type ",7d,e8,d0,a2)) + ::Std_obj::string(::Type_obj::_hx_typeof(val))) + HX_(" not supported!",40,ec,72,be));
HXDLIN(  66)						_hx_tmp(_hx_tmp2,::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),66,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
            					}
HXLINE(  67)					return false;
            				}
            			}
            		}
HXLINE(  69)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,toLua,return )

int Convert_obj::callback_handler( ::Dynamic cbf, cpp::Reference<lua_State> l, ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_72_callback_handler)
HXLINE(  73)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  74)			 cpp::Reference<lua_State> l1 = l;
HXLINE(  75)			int nparams = lua_gettop(l1);
HXLINE(  77)			if (::hx::IsNull( cbf )) {
HXLINE(  77)				return 0;
            			}
HXLINE(  80)			::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  80)			{
HXLINE(  80)				int _g1 = 0;
HXDLIN(  80)				int _g2 = nparams;
HXDLIN(  80)				while((_g1 < _g2)){
HXLINE(  80)					_g1 = (_g1 + 1);
HXDLIN(  80)					int i = (_g1 - 1);
HXDLIN(  80)					_g->push(::llua::Convert_obj::fromLua(l1,(i + 1)));
            				}
            			}
HXDLIN(  80)			 ::Dynamic ret = ::Reflect_obj::callMethod(object,cbf,_g);
HXLINE(  81)			if (::hx::IsNotNull( ret )) {
HXLINE(  82)				::llua::Convert_obj::toLua(l1,ret);
HXLINE(  83)				return 1;
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  85)				 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  86)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  86)				::String _hx_tmp1 = (HX_("",00,00,00,00) + ::Std_obj::string(e));
HXDLIN(  86)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),86,HX_("llua.Convert",31,b8,44,19),HX_("callback_handler",10,70,1b,10)));
HXLINE(  87)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  89)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Convert_obj,callback_handler,return )

void Convert_obj::arrayToLua( cpp::Reference<lua_State> l,::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_93_arrayToLua)
HXLINE(  94)		lua_createtable(l,arr->get_length(),0);
HXLINE(  95)		{
HXLINE(  95)			int _g_current = 0;
HXDLIN(  95)			::cpp::VirtualArray _g_array = arr;
HXDLIN(  95)			while((_g_current < _g_array->get_length())){
HXLINE(  95)				 ::Dynamic _g1_value = _g_array->__get(_g_current);
HXDLIN(  95)				_g_current = (_g_current + 1);
HXDLIN(  95)				int _g1_key = (_g_current - 1);
HXDLIN(  95)				int i = _g1_key;
HXDLIN(  95)				 ::Dynamic v = _g1_value;
HXDLIN(  95)				{
HXLINE(  96)					lua_pushnumber(l,( (Float)((i + 1)) ));
HXLINE(  97)					::llua::Convert_obj::toLua(l,v);
HXLINE(  98)					lua_settable(l,-3);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,arrayToLua,(void))

void Convert_obj::mapToLua( cpp::Reference<lua_State> l, ::haxe::ds::StringMap res){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_103_mapToLua)
HXLINE( 104)		lua_createtable(l,0,0);
HXLINE( 105)		{
HXLINE( 105)			::Dynamic map = res;
HXDLIN( 105)			::Dynamic _g_map = map;
HXDLIN( 105)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 105)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 105)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 105)				 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 105)				::String _g1_key = key;
HXDLIN( 105)				::String index = _g1_key;
HXDLIN( 105)				 ::Dynamic val = _g1_value;
HXDLIN( 105)				{
HXLINE( 106)					lua_pushstring(l,::Std_obj::string(index));
HXLINE( 107)					::llua::Convert_obj::toLua(l,val);
HXLINE( 108)					lua_settable(l,-3);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,mapToLua,(void))

void Convert_obj::anonToLua( cpp::Reference<lua_State> l, ::Dynamic res){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_113_anonToLua)
HXLINE( 114)		lua_createtable(l,0,0);
HXLINE( 115)		{
HXLINE( 115)			int _g = 0;
HXDLIN( 115)			::Array< ::String > _g1 = ::Reflect_obj::fields(res);
HXDLIN( 115)			while((_g < _g1->length)){
HXLINE( 115)				::String n = _g1->__get(_g);
HXDLIN( 115)				_g = (_g + 1);
HXLINE( 116)				lua_pushstring(l,n);
HXLINE( 117)				::llua::Convert_obj::toLua(l,::Reflect_obj::field(res,n));
HXLINE( 118)				lua_settable(l,-3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,anonToLua,(void))

void Convert_obj::setGlobal( cpp::Reference<lua_State> l,::String index, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_132_setGlobal)
HXLINE( 136)		::llua::Convert_obj::toLua(l,value);
HXLINE( 137)		lua_setfield(l,-10002,index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Convert_obj,setGlobal,(void))

 ::Dynamic Convert_obj::fromLua( cpp::Reference<lua_State> l,int v){
            	HX_GC_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_144_fromLua)
HXLINE( 146)		int luaType = lua_type(l,v);
HXLINE( 147)		switch((int)(luaType)){
            			case (int)0: {
HXLINE( 149)				return null();
            			}
            			break;
            			case (int)1: {
HXLINE( 150)				return (lua_toboolean(l,v) != 0);
            			}
            			break;
            			case (int)3: {
HXLINE( 152)				return lua_tonumber(l,v);
            			}
            			break;
            			case (int)4: {
HXLINE( 154)				return linc::lua::tostring(l,v);
            			}
            			break;
            			case (int)5: {
HXLINE( 157)				return ::llua::Convert_obj::toHaxeObj(l,v);
            			}
            			break;
            			case (int)6: {
HXLINE( 158)				return  ::llua::LuaCallback_obj::__alloc( HX_CTX ,l,luaL_ref(l,-10000));
            			}
            			break;
            			default:{
HXLINE( 171)				if (::llua::Convert_obj::enableUnsupportedTraces) {
HXLINE( 171)					::haxe::Log_obj::trace(((((HX_("Return value ",df,7c,93,94) + v) + HX_(" of type ",7d,e8,d0,a2)) + luaType) + HX_(" not supported",c1,3c,82,53)),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),171,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            				}
HXLINE( 172)				return null();
            			}
            		}
HXLINE( 147)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,fromLua,return )

 ::Dynamic Convert_obj::toHaxeObj( cpp::Reference<lua_State> l,int i){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_231_toHaxeObj)
HXLINE( 232)		bool hasItems = false;
HXLINE( 233)		bool array = true;
HXLINE(   8)		{
HXLINE(   9)			lua_pushnil(l);
HXLINE(  10)			bool popped = true;
HXLINE(  11)			while(true){
HXLINE(  11)				int _hx_tmp;
HXDLIN(  11)				if ((i < 0)) {
HXLINE(  11)					_hx_tmp = (i - 1);
            				}
            				else {
HXLINE(  11)					_hx_tmp = i;
            				}
HXDLIN(  11)				if (!((lua_next(l,_hx_tmp) != 0))) {
HXLINE(  11)					goto _hx_goto_16;
            				}
HXLINE(  12)				popped = false;
HXLINE( 235)				{
HXLINE( 236)					hasItems = true;
HXLINE( 237)					if ((lua_type(l,-2) != 3)) {
HXLINE( 238)						array = false;
            					}
HXLINE( 240)					Float index = lua_tonumber(l,-2);
HXLINE( 241)					bool _hx_tmp1;
HXDLIN( 241)					if (!((index < 0))) {
HXLINE( 241)						_hx_tmp1 = (::Std_obj::_hx_int(index) != index);
            					}
            					else {
HXLINE( 241)						_hx_tmp1 = true;
            					}
HXDLIN( 241)					if (_hx_tmp1) {
HXLINE( 242)						array = false;
            					}
            				}
HXLINE(  14)				popped = true;
HXLINE(  15)				lua_pop(l,1);
            			}
            			_hx_goto_16:;
HXLINE(  17)			if (!(popped)) {
HXLINE(  17)				lua_pop(l,1);
            			}
            		}
HXLINE( 245)		if (!(hasItems)) {
HXLINE( 245)			return  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE( 247)		if (array) {
HXLINE( 248)			::cpp::VirtualArray v = ::cpp::VirtualArray_obj::__new(0);
HXLINE(   8)			{
HXLINE(   9)				lua_pushnil(l);
HXLINE(  10)				bool popped = true;
HXLINE(  11)				while(true){
HXLINE(  11)					int _hx_tmp;
HXDLIN(  11)					if ((i < 0)) {
HXLINE(  11)						_hx_tmp = (i - 1);
            					}
            					else {
HXLINE(  11)						_hx_tmp = i;
            					}
HXDLIN(  11)					if (!((lua_next(l,_hx_tmp) != 0))) {
HXLINE(  11)						goto _hx_goto_17;
            					}
HXLINE(  12)					popped = false;
HXLINE( 250)					v->set((::Std_obj::_hx_int(lua_tonumber(l,-2)) - 1),::llua::Convert_obj::fromLua(l,-1));
HXLINE(  14)					popped = true;
HXLINE(  15)					lua_pop(l,1);
            				}
            				_hx_goto_17:;
HXLINE(  17)				if (!(popped)) {
HXLINE(  17)					lua_pop(l,1);
            				}
            			}
HXLINE( 252)			return v;
            		}
HXLINE( 254)		 ::Dynamic v =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(   8)		{
HXLINE(   9)			lua_pushnil(l);
HXLINE(  10)			bool popped1 = true;
HXLINE(  11)			while(true){
HXLINE(  11)				int _hx_tmp;
HXDLIN(  11)				if ((i < 0)) {
HXLINE(  11)					_hx_tmp = (i - 1);
            				}
            				else {
HXLINE(  11)					_hx_tmp = i;
            				}
HXDLIN(  11)				if (!((lua_next(l,_hx_tmp) != 0))) {
HXLINE(  11)					goto _hx_goto_18;
            				}
HXLINE(  12)				popped1 = false;
HXLINE( 256)				{
HXLINE( 256)					int _g = lua_type(l,-2);
HXDLIN( 256)					{
HXLINE( 257)						int t = _g;
HXLINE( 256)						if ((t == 4)) {
HXLINE( 257)							::String key = linc::lua::tostring(l,-2);
HXDLIN( 257)							 ::Dynamic value = ::llua::Convert_obj::fromLua(l,-1);
HXDLIN( 257)							::Reflect_obj::setField(v,key,value);
            						}
            						else {
HXLINE( 258)							int t = _g;
HXDLIN( 258)							if ((t == 3)) {
HXLINE( 258)								::String key = ::Std_obj::string(lua_tonumber(l,-2));
HXDLIN( 258)								 ::Dynamic value = ::llua::Convert_obj::fromLua(l,-1);
HXDLIN( 258)								::Reflect_obj::setField(v,key,value);
            							}
            						}
            					}
            				}
HXLINE(  14)				popped1 = true;
HXLINE(  15)				lua_pop(l,1);
            			}
            			_hx_goto_18:;
HXLINE(  17)			if (!(popped1)) {
HXLINE(  17)				lua_pop(l,1);
            			}
            		}
HXLINE( 261)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,toHaxeObj,return )

 ::Dynamic Convert_obj::callLuaFunction( cpp::Reference<lua_State> l,::String func,::cpp::VirtualArray args, ::Dynamic __o_multipleReturns){
            		 ::Dynamic multipleReturns = __o_multipleReturns;
            		if (::hx::IsNull(__o_multipleReturns)) multipleReturns = false;
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_270_callLuaFunction)
HXLINE( 271)		if (::hx::IsNotNull( func )) {
HXLINE( 271)			lua_getglobal(l,func);
            		}
HXLINE( 272)		if (::hx::IsNotNull( args )) {
HXLINE( 273)			int _g = 0;
HXDLIN( 273)			while((_g < args->get_length())){
HXLINE( 273)				 ::Dynamic arg = args->__get(_g);
HXDLIN( 273)				_g = (_g + 1);
HXDLIN( 273)				::llua::Convert_obj::toLua(l,arg);
            			}
            		}
HXLINE( 275)		int _hx_tmp;
HXDLIN( 275)		if (::hx::IsNull( args )) {
HXLINE( 275)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 275)			_hx_tmp = args->get_length();
            		}
HXDLIN( 275)		int _hx_tmp1;
HXDLIN( 275)		if (( (bool)(multipleReturns) )) {
HXLINE( 275)			_hx_tmp1 = -1;
            		}
            		else {
HXLINE( 275)			_hx_tmp1 = 1;
            		}
HXDLIN( 275)		::llua::LuaException_obj::ifErrorThrow(l,lua_pcall(l,_hx_tmp,_hx_tmp1,0));
HXLINE( 277)		if (!(( (bool)(multipleReturns) ))) {
HXLINE( 277)			return ::llua::Convert_obj::fromLua(l,( (int)(::llua::Convert_obj::fromLua(l,-1)) ));
            		}
HXLINE( 278)		::cpp::VirtualArray returnArray = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 279)		{
HXLINE( 279)			int _g = -((lua_gettop(l) - 1));
HXDLIN( 279)			int _g1 = 0;
HXDLIN( 279)			while((_g < _g1)){
HXLINE( 279)				_g = (_g + 1);
HXDLIN( 279)				int i = (_g - 1);
HXLINE( 280)				returnArray->push(::llua::Convert_obj::fromLua(l,i));
            			}
            		}
HXLINE( 282)		return returnArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Convert_obj,callLuaFunction,return )

void Convert_obj::callLuaFuncNoReturns( cpp::Reference<lua_State> l,::String func,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_293_callLuaFuncNoReturns)
HXLINE( 294)		lua_getglobal(l,func);
HXLINE( 295)		if (::hx::IsNotNull( args )) {
HXLINE( 295)			int _g = 0;
HXDLIN( 295)			while((_g < args->get_length())){
HXLINE( 295)				 ::Dynamic arg = args->__get(_g);
HXDLIN( 295)				_g = (_g + 1);
HXDLIN( 295)				::llua::Convert_obj::toLua(l,arg);
            			}
            		}
HXLINE( 297)		int _hx_tmp;
HXDLIN( 297)		if (::hx::IsNull( args )) {
HXLINE( 297)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 297)			_hx_tmp = args->get_length();
            		}
HXDLIN( 297)		::llua::LuaException_obj::ifErrorThrow(l,lua_pcall(l,_hx_tmp,0,0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Convert_obj,callLuaFuncNoReturns,(void))


Convert_obj::Convert_obj()
{
}

bool Convert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toLua") ) { outValue = toLua_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromLua") ) { outValue = fromLua_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapToLua") ) { outValue = mapToLua_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"anonToLua") ) { outValue = anonToLua_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setGlobal") ) { outValue = setGlobal_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHaxeObj") ) { outValue = toHaxeObj_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrayToLua") ) { outValue = arrayToLua_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowFunctions") ) { outValue = ( allowFunctions ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"callLuaFunction") ) { outValue = callLuaFunction_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callback_handler") ) { outValue = callback_handler_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cleanFunctionRefs") ) { outValue = cleanFunctionRefs_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"functionReferences") ) { outValue = ( functionReferences ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"callLuaFuncNoReturns") ) { outValue = callLuaFuncNoReturns_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"enableUnsupportedTraces") ) { outValue = ( enableUnsupportedTraces ); return true; }
	}
	return false;
}

bool Convert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"allowFunctions") ) { allowFunctions=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"functionReferences") ) { functionReferences=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"enableUnsupportedTraces") ) { enableUnsupportedTraces=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Convert_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Convert_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Convert_obj::enableUnsupportedTraces,HX_("enableUnsupportedTraces",e0,6a,4d,f5)},
	{::hx::fsBool,(void *) &Convert_obj::allowFunctions,HX_("allowFunctions",92,ec,87,86)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Convert_obj::functionReferences,HX_("functionReferences",80,47,a3,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Convert_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Convert_obj::enableUnsupportedTraces,"enableUnsupportedTraces");
	HX_MARK_MEMBER_NAME(Convert_obj::allowFunctions,"allowFunctions");
	HX_MARK_MEMBER_NAME(Convert_obj::functionReferences,"functionReferences");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Convert_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Convert_obj::enableUnsupportedTraces,"enableUnsupportedTraces");
	HX_VISIT_MEMBER_NAME(Convert_obj::allowFunctions,"allowFunctions");
	HX_VISIT_MEMBER_NAME(Convert_obj::functionReferences,"functionReferences");
};

#endif

::hx::Class Convert_obj::__mClass;

static ::String Convert_obj_sStaticFields[] = {
	HX_("enableUnsupportedTraces",e0,6a,4d,f5),
	HX_("allowFunctions",92,ec,87,86),
	HX_("functionReferences",80,47,a3,1d),
	HX_("cleanFunctionRefs",21,fa,f8,2a),
	HX_("toLua",fd,0a,14,14),
	HX_("callback_handler",10,70,1b,10),
	HX_("arrayToLua",a4,22,41,0e),
	HX_("mapToLua",c1,7a,56,8b),
	HX_("anonToLua",11,7c,77,2b),
	HX_("setGlobal",a5,a6,59,07),
	HX_("fromLua",6e,2a,fd,57),
	HX_("toHaxeObj",36,e7,fe,37),
	HX_("callLuaFunction",f2,60,80,8a),
	HX_("callLuaFuncNoReturns",84,77,dd,3a),
	::String(null())
};

void Convert_obj::__register()
{
	Convert_obj _hx_dummy;
	Convert_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("llua.Convert",31,b8,44,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Convert_obj::__GetStatic;
	__mClass->mSetStaticField = &Convert_obj::__SetStatic;
	__mClass->mMarkFunc = Convert_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Convert_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Convert_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Convert_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Convert_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Convert_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Convert_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_14_boot)
HXDLIN(  14)		enableUnsupportedTraces = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_15_boot)
HXDLIN(  15)		allowFunctions = true;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_16_boot)
HXDLIN(  16)		functionReferences =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace llua
