#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_states_MultiCallback
#include <states/MultiCallback.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a49218e3c891c30f_267_new,"states.MultiCallback","new",0x08bd2704,"states.MultiCallback.new","states/LoadingState.hx",267,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_a49218e3c891c30f_291_add,"states.MultiCallback","add",0x08b348c5,"states.MultiCallback.add","states/LoadingState.hx",291,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_a49218e3c891c30f_284_add,"states.MultiCallback","add",0x08b348c5,"states.MultiCallback.add","states/LoadingState.hx",284,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_a49218e3c891c30f_316_log,"states.MultiCallback","log",0x08bbab28,"states.MultiCallback.log","states/LoadingState.hx",316,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_a49218e3c891c30f_320_getFired,"states.MultiCallback","getFired",0x7efa9254,"states.MultiCallback.getFired","states/LoadingState.hx",320,0x41b125bc)
HX_LOCAL_STACK_FRAME(_hx_pos_a49218e3c891c30f_321_getUnfired,"states.MultiCallback","getUnfired",0xa9ee6edb,"states.MultiCallback.getUnfired","states/LoadingState.hx",321,0x41b125bc)
namespace states{

void MultiCallback_obj::__construct( ::Dynamic callback,::String logId){
            	HX_GC_STACKFRAME(&_hx_pos_a49218e3c891c30f_267_new)
HXLINE( 275)		this->fired = ::Array_obj< ::String >::__new();
HXLINE( 274)		this->unfired =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 272)		this->numRemaining = 0;
HXLINE( 271)		this->length = 0;
HXLINE( 270)		this->logId = null();
HXLINE( 279)		this->callback = callback;
HXLINE( 280)		this->logId = logId;
            	}

Dynamic MultiCallback_obj::__CreateEmpty() { return new MultiCallback_obj; }

void *MultiCallback_obj::_hx_vtable = 0;

Dynamic MultiCallback_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MultiCallback_obj > _hx_result = new MultiCallback_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MultiCallback_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27aaa8d8;
}

 ::Dynamic MultiCallback_obj::add(::String __o_id){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,id1, ::states::MultiCallback,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_a49218e3c891c30f_291_add)
HXLINE( 291)			if (_gthis->unfired->exists(id1->__get(0))) {
HXLINE( 293)				_gthis->unfired->remove(id1->__get(0));
HXLINE( 294)				_gthis->fired->push(id1->__get(0));
HXLINE( 295)				_gthis->numRemaining--;
HXLINE( 297)				if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 298)					if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 298)						::haxe::Log_obj::trace((((HX_("",00,00,00,00) + _gthis->logId) + HX_(": ",a6,32,00,00)) + ((((HX_("fired ",72,04,21,89) + id1->__get(0)) + HX_(", ",74,26,00,00)) + _gthis->numRemaining) + HX_(" remaining",d6,c2,10,c5))),::hx::SourceInfo(HX_("source/states/LoadingState.hx",b0,0b,1c,f1),317,HX_("states.MultiCallback",12,95,5c,7a),HX_("log",84,54,52,00)));
            					}
            				}
HXLINE( 300)				if ((_gthis->numRemaining == 0)) {
HXLINE( 302)					if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 303)						if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 303)							::haxe::Log_obj::trace((((HX_("",00,00,00,00) + _gthis->logId) + HX_(": ",a6,32,00,00)) + HX_("all callbacks fired",5d,d8,ec,82)),::hx::SourceInfo(HX_("source/states/LoadingState.hx",b0,0b,1c,f1),317,HX_("states.MultiCallback",12,95,5c,7a),HX_("log",84,54,52,00)));
            						}
            					}
HXLINE( 304)					_gthis->callback();
            				}
            			}
            			else {
HXLINE( 308)				if (::hx::IsNotNull( _gthis->logId )) {
HXLINE( 308)					::haxe::Log_obj::trace((((HX_("",00,00,00,00) + _gthis->logId) + HX_(": ",a6,32,00,00)) + (HX_("already fired ",fa,e7,0c,57) + id1->__get(0))),::hx::SourceInfo(HX_("source/states/LoadingState.hx",b0,0b,1c,f1),317,HX_("states.MultiCallback",12,95,5c,7a),HX_("log",84,54,52,00)));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		::String id = __o_id;
            		if (::hx::IsNull(__o_id)) id = HX_("untitled",e5,fe,be,25);
            	HX_STACKFRAME(&_hx_pos_a49218e3c891c30f_284_add)
HXDLIN( 284)		::Array< ::String > id1 = ::Array_obj< ::String >::__new(1)->init(0,id);
HXDLIN( 284)		 ::states::MultiCallback _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 285)		id1[0] = (((HX_("",00,00,00,00) + this->length) + HX_(":",3a,00,00,00)) + id1->__get(0));
HXLINE( 286)		this->length++;
HXLINE( 287)		this->numRemaining++;
HXLINE( 288)		 ::Dynamic func = null();
HXLINE( 289)		func =  ::Dynamic(new _hx_Closure_0(id1,_gthis));
HXLINE( 310)		this->unfired->set(id1->__get(0),func);
HXLINE( 311)		return func;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MultiCallback_obj,add,return )

void MultiCallback_obj::log(::String msg){
            	HX_STACKFRAME(&_hx_pos_a49218e3c891c30f_316_log)
HXDLIN( 316)		if (::hx::IsNotNull( this->logId )) {
HXLINE( 317)			::haxe::Log_obj::trace((((HX_("",00,00,00,00) + this->logId) + HX_(": ",a6,32,00,00)) + msg),::hx::SourceInfo(HX_("source/states/LoadingState.hx",b0,0b,1c,f1),317,HX_("states.MultiCallback",12,95,5c,7a),HX_("log",84,54,52,00)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MultiCallback_obj,log,(void))

::Array< ::String > MultiCallback_obj::getFired(){
            	HX_STACKFRAME(&_hx_pos_a49218e3c891c30f_320_getFired)
HXDLIN( 320)		return this->fired->copy();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MultiCallback_obj,getFired,return )

::Array< ::String > MultiCallback_obj::getUnfired(){
            	HX_STACKFRAME(&_hx_pos_a49218e3c891c30f_321_getUnfired)
HXDLIN( 321)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 321)		{
HXDLIN( 321)			 ::Dynamic id = this->unfired->keys();
HXDLIN( 321)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 321)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 321)				_g->push(id1);
            			}
            		}
HXDLIN( 321)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MultiCallback_obj,getUnfired,return )


::hx::ObjectPtr< MultiCallback_obj > MultiCallback_obj::__new( ::Dynamic callback,::String logId) {
	::hx::ObjectPtr< MultiCallback_obj > __this = new MultiCallback_obj();
	__this->__construct(callback,logId);
	return __this;
}

::hx::ObjectPtr< MultiCallback_obj > MultiCallback_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic callback,::String logId) {
	MultiCallback_obj *__this = (MultiCallback_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MultiCallback_obj), true, "states.MultiCallback"));
	*(void **)__this = MultiCallback_obj::_hx_vtable;
	__this->__construct(callback,logId);
	return __this;
}

MultiCallback_obj::MultiCallback_obj()
{
}

void MultiCallback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MultiCallback);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(logId,"logId");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(numRemaining,"numRemaining");
	HX_MARK_MEMBER_NAME(unfired,"unfired");
	HX_MARK_MEMBER_NAME(fired,"fired");
	HX_MARK_END_CLASS();
}

void MultiCallback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(logId,"logId");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(numRemaining,"numRemaining");
	HX_VISIT_MEMBER_NAME(unfired,"unfired");
	HX_VISIT_MEMBER_NAME(fired,"fired");
}

::hx::Val MultiCallback_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"log") ) { return ::hx::Val( log_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"logId") ) { return ::hx::Val( logId ); }
		if (HX_FIELD_EQ(inName,"fired") ) { return ::hx::Val( fired ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unfired") ) { return ::hx::Val( unfired ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"getFired") ) { return ::hx::Val( getFired_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getUnfired") ) { return ::hx::Val( getUnfired_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numRemaining") ) { return ::hx::Val( numRemaining ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MultiCallback_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"logId") ) { logId=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fired") ) { fired=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unfired") ) { unfired=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numRemaining") ) { numRemaining=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MultiCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("logId",7f,bd,f3,78));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("numRemaining",d0,cf,31,63));
	outFields->push(HX_("unfired",f5,62,2e,fd));
	outFields->push(HX_("fired",ee,6b,9d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MultiCallback_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MultiCallback_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsString,(int)offsetof(MultiCallback_obj,logId),HX_("logId",7f,bd,f3,78)},
	{::hx::fsInt,(int)offsetof(MultiCallback_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(MultiCallback_obj,numRemaining),HX_("numRemaining",d0,cf,31,63)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(MultiCallback_obj,unfired),HX_("unfired",f5,62,2e,fd)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MultiCallback_obj,fired),HX_("fired",ee,6b,9d,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MultiCallback_obj_sStaticStorageInfo = 0;
#endif

static ::String MultiCallback_obj_sMemberFields[] = {
	HX_("callback",c5,99,06,7f),
	HX_("logId",7f,bd,f3,78),
	HX_("length",e6,94,07,9f),
	HX_("numRemaining",d0,cf,31,63),
	HX_("unfired",f5,62,2e,fd),
	HX_("fired",ee,6b,9d,00),
	HX_("add",21,f2,49,00),
	HX_("log",84,54,52,00),
	HX_("getFired",78,7b,74,60),
	HX_("getUnfired",ff,e8,8f,4c),
	::String(null()) };

::hx::Class MultiCallback_obj::__mClass;

void MultiCallback_obj::__register()
{
	MultiCallback_obj _hx_dummy;
	MultiCallback_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.MultiCallback",12,95,5c,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MultiCallback_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MultiCallback_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MultiCallback_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MultiCallback_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
