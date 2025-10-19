#include <hxcpp.h>

#ifndef INCLUDED_states_GalleryImage
#include <states/GalleryImage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a2d451ee08edc254_233_new,"states.GalleryImage","new",0xb968fba7,"states.GalleryImage.new","states/GalleryState.hx",233,0x9336ddd2)
namespace states{

void GalleryImage_obj::__construct(::String name,::String path,int color,::hx::Null< Float >  __o_textX,::hx::Null< Float >  __o_textY,::hx::Null< int >  __o_textSize){
            		Float textX = __o_textX.Default(-1);
            		Float textY = __o_textY.Default(-1);
            		int textSize = __o_textSize.Default(32);
            	HX_STACKFRAME(&_hx_pos_a2d451ee08edc254_233_new)
HXLINE( 234)		this->name = name;
HXLINE( 235)		this->path = path;
HXLINE( 236)		this->color = color;
HXLINE( 237)		this->textX = textX;
HXLINE( 238)		this->textY = textY;
HXLINE( 239)		this->textSize = textSize;
            	}

Dynamic GalleryImage_obj::__CreateEmpty() { return new GalleryImage_obj; }

void *GalleryImage_obj::_hx_vtable = 0;

Dynamic GalleryImage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GalleryImage_obj > _hx_result = new GalleryImage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool GalleryImage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x022de55b;
}


GalleryImage_obj::GalleryImage_obj()
{
}

void GalleryImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GalleryImage);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(textX,"textX");
	HX_MARK_MEMBER_NAME(textY,"textY");
	HX_MARK_MEMBER_NAME(textSize,"textSize");
	HX_MARK_END_CLASS();
}

void GalleryImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(textX,"textX");
	HX_VISIT_MEMBER_NAME(textY,"textY");
	HX_VISIT_MEMBER_NAME(textSize,"textSize");
}

::hx::Val GalleryImage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"textX") ) { return ::hx::Val( textX ); }
		if (HX_FIELD_EQ(inName,"textY") ) { return ::hx::Val( textY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { return ::hx::Val( textSize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GalleryImage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textX") ) { textX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textY") ) { textY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { textSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GalleryImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("textX",0b,4b,99,0d));
	outFields->push(HX_("textY",0c,4b,99,0d));
	outFields->push(HX_("textSize",0e,f4,4e,4f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GalleryImage_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(GalleryImage_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(GalleryImage_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsInt,(int)offsetof(GalleryImage_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsFloat,(int)offsetof(GalleryImage_obj,textX),HX_("textX",0b,4b,99,0d)},
	{::hx::fsFloat,(int)offsetof(GalleryImage_obj,textY),HX_("textY",0c,4b,99,0d)},
	{::hx::fsInt,(int)offsetof(GalleryImage_obj,textSize),HX_("textSize",0e,f4,4e,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GalleryImage_obj_sStaticStorageInfo = 0;
#endif

static ::String GalleryImage_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("path",a5,e5,51,4a),
	HX_("color",63,71,5c,4a),
	HX_("textX",0b,4b,99,0d),
	HX_("textY",0c,4b,99,0d),
	HX_("textSize",0e,f4,4e,4f),
	::String(null()) };

::hx::Class GalleryImage_obj::__mClass;

void GalleryImage_obj::__register()
{
	GalleryImage_obj _hx_dummy;
	GalleryImage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.GalleryImage",35,9c,f2,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GalleryImage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GalleryImage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GalleryImage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GalleryImage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
