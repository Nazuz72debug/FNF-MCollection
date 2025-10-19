#ifndef INCLUDED_states_GalleryImage
#define INCLUDED_states_GalleryImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a2d451ee08edc254_233_new)
HX_DECLARE_CLASS1(states,GalleryImage)

namespace states{


class HXCPP_CLASS_ATTRIBUTES GalleryImage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GalleryImage_obj OBJ_;
		GalleryImage_obj();

	public:
		enum { _hx_ClassId = 0x022de55b };

		void __construct(::String name,::String path,int color,::hx::Null< Float >  __o_textX,::hx::Null< Float >  __o_textY,::hx::Null< int >  __o_textSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.GalleryImage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.GalleryImage"); }

		inline static ::hx::ObjectPtr< GalleryImage_obj > __new(::String name,::String path,int color,::hx::Null< Float >  __o_textX,::hx::Null< Float >  __o_textY,::hx::Null< int >  __o_textSize) {
			::hx::ObjectPtr< GalleryImage_obj > __this = new GalleryImage_obj();
			__this->__construct(name,path,color,__o_textX,__o_textY,__o_textSize);
			return __this;
		}

		inline static ::hx::ObjectPtr< GalleryImage_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::String path,int color,::hx::Null< Float >  __o_textX,::hx::Null< Float >  __o_textY,::hx::Null< int >  __o_textSize) {
			GalleryImage_obj *__this = (GalleryImage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GalleryImage_obj), true, "states.GalleryImage"));
			*(void **)__this = GalleryImage_obj::_hx_vtable;
{
            		Float textX = __o_textX.Default(-1);
            		Float textY = __o_textY.Default(-1);
            		int textSize = __o_textSize.Default(32);
            	HX_STACKFRAME(&_hx_pos_a2d451ee08edc254_233_new)
HXLINE( 234)		( ( ::states::GalleryImage)(__this) )->name = name;
HXLINE( 235)		( ( ::states::GalleryImage)(__this) )->path = path;
HXLINE( 236)		( ( ::states::GalleryImage)(__this) )->color = color;
HXLINE( 237)		( ( ::states::GalleryImage)(__this) )->textX = textX;
HXLINE( 238)		( ( ::states::GalleryImage)(__this) )->textY = textY;
HXLINE( 239)		( ( ::states::GalleryImage)(__this) )->textSize = textSize;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GalleryImage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GalleryImage",89,09,dc,f4); }

		::String name;
		::String path;
		int color;
		Float textX;
		Float textY;
		int textSize;
};

} // end namespace states

#endif /* INCLUDED_states_GalleryImage */ 
