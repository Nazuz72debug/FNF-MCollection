#ifndef INCLUDED_llua_LuaException
#define INCLUDED_llua_LuaException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS1(llua,LuaException)

namespace llua{


class HXCPP_CLASS_ATTRIBUTES LuaException_obj : public  ::haxe::Exception_obj
{
	public:
		typedef  ::haxe::Exception_obj super;
		typedef LuaException_obj OBJ_;
		LuaException_obj();

	public:
		enum { _hx_ClassId = 0x5718dd47 };

		void __construct(::String message, ::haxe::Exception previous, ::Dynamic __o_code, cpp::Reference<lua_State> luaState);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="llua.LuaException")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"llua.LuaException"); }
		static ::hx::ObjectPtr< LuaException_obj > __new(::String message, ::haxe::Exception previous, ::Dynamic __o_code, cpp::Reference<lua_State> luaState);
		static ::hx::ObjectPtr< LuaException_obj > __alloc(::hx::Ctx *_hx_ctx,::String message, ::haxe::Exception previous, ::Dynamic __o_code, cpp::Reference<lua_State> luaState);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LuaException_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LuaException",97,eb,1f,32); }

		static void ifErrorThrow( cpp::Reference<lua_State> l,int status);
		static ::Dynamic ifErrorThrow_dyn();

		int error_code;
};

} // end namespace llua

#endif /* INCLUDED_llua_LuaException */ 
