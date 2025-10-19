#ifndef INCLUDED_states_GalleryMusic
#define INCLUDED_states_GalleryMusic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a5d88af6810d9c7b_247_new)
HX_DECLARE_CLASS1(states,GalleryMusic)

namespace states{


class HXCPP_CLASS_ATTRIBUTES GalleryMusic_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GalleryMusic_obj OBJ_;
		GalleryMusic_obj();

	public:
		enum { _hx_ClassId = 0x05c5e915 };

		void __construct(::String name,::String file);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.GalleryMusic")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.GalleryMusic"); }

		inline static ::hx::ObjectPtr< GalleryMusic_obj > __new(::String name,::String file) {
			::hx::ObjectPtr< GalleryMusic_obj > __this = new GalleryMusic_obj();
			__this->__construct(name,file);
			return __this;
		}

		inline static ::hx::ObjectPtr< GalleryMusic_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::String file) {
			GalleryMusic_obj *__this = (GalleryMusic_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GalleryMusic_obj), true, "states.GalleryMusic"));
			*(void **)__this = GalleryMusic_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a5d88af6810d9c7b_247_new)
HXLINE( 248)		( ( ::states::GalleryMusic)(__this) )->name = name;
HXLINE( 249)		( ( ::states::GalleryMusic)(__this) )->file = file;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GalleryMusic_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GalleryMusic",d3,ba,cd,47); }

		::String name;
		::String file;
};

} // end namespace states

#endif /* INCLUDED_states_GalleryMusic */ 
