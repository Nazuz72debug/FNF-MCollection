#include <hxcpp.h>

#ifndef INCLUDED_states_GalleryMusic
#include <states/GalleryMusic.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a5d88af6810d9c7b_247_new,"states.GalleryMusic","new",0x612e19f1,"states.GalleryMusic.new","states/GalleryState.hx",247,0x9336ddd2)
namespace states{

void GalleryMusic_obj::__construct(::String name,::String file){
            	HX_STACKFRAME(&_hx_pos_a5d88af6810d9c7b_247_new)
HXLINE( 248)		this->name = name;
HXLINE( 249)		this->file = file;
            	}

Dynamic GalleryMusic_obj::__CreateEmpty() { return new GalleryMusic_obj; }

void *GalleryMusic_obj::_hx_vtable = 0;

Dynamic GalleryMusic_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GalleryMusic_obj > _hx_result = new GalleryMusic_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GalleryMusic_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05c5e915;
}


GalleryMusic_obj::GalleryMusic_obj()
{
}

void GalleryMusic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GalleryMusic);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_END_CLASS();
}

void GalleryMusic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(file,"file");
}

::hx::Val GalleryMusic_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"file") ) { return ::hx::Val( file ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GalleryMusic_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GalleryMusic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("file",7c,ce,bb,43));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GalleryMusic_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(GalleryMusic_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(GalleryMusic_obj,file),HX_("file",7c,ce,bb,43)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GalleryMusic_obj_sStaticStorageInfo = 0;
#endif

static ::String GalleryMusic_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("file",7c,ce,bb,43),
	::String(null()) };

::hx::Class GalleryMusic_obj::__mClass;

void GalleryMusic_obj::__register()
{
	GalleryMusic_obj _hx_dummy;
	GalleryMusic_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.GalleryMusic",7f,4d,e4,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GalleryMusic_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GalleryMusic_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GalleryMusic_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GalleryMusic_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
