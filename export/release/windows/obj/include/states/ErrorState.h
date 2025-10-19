#ifndef INCLUDED_states_ErrorState
#define INCLUDED_states_ErrorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,ErrorState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES ErrorState_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef ErrorState_obj OBJ_;
		ErrorState_obj();

	public:
		enum { _hx_ClassId = 0x17c5230b };

		void __construct(::String error);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.ErrorState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.ErrorState"); }
		static ::hx::ObjectPtr< ErrorState_obj > __new(::String error);
		static ::hx::ObjectPtr< ErrorState_obj > __alloc(::hx::Ctx *_hx_ctx,::String error);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ErrorState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ErrorState",49,69,c0,ef); }

		::String errorMsg;
		void create();

		void update(Float elapsed);

};

} // end namespace states

#endif /* INCLUDED_states_ErrorState */ 
