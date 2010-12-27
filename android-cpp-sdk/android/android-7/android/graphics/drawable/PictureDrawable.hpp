/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.PictureDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Picture; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Picture.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class PictureDrawable;
	class PictureDrawable
		: public cpp_object<PictureDrawable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)

		PictureDrawable(jobject jobj)
		: cpp_object<PictureDrawable>(jobj)
		{
		}

		local_ref< android::graphics::Picture > getPicture();
		void setPicture(local_ref< android::graphics::Picture > const&);
		void draw(local_ref< android::graphics::Canvas > const&);
		cpp_int getIntrinsicWidth();
		cpp_int getIntrinsicHeight();
		cpp_int getOpacity();
		void setFilterBitmap(cpp_boolean const&);
		void setDither(cpp_boolean const&);
		void setColorFilter(local_ref< android::graphics::ColorFilter > const&);
		void setAlpha(cpp_int const&);
	}; //class PictureDrawable

} //namespace drawable
} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::drawable::PictureDrawable > create< android::graphics::drawable::PictureDrawable>(local_ref< android::graphics::Picture > const &a0)
{
	return local_ref< android::graphics::drawable::PictureDrawable >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(0), android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::Picture > android::graphics::drawable::PictureDrawable::getPicture()
{
	return local_ref< android::graphics::Picture >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::graphics::drawable::PictureDrawable::setPicture(local_ref< android::graphics::Picture > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::PictureDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::PictureDrawable::getIntrinsicWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::graphics::drawable::PictureDrawable::getIntrinsicHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::graphics::drawable::PictureDrawable::getOpacity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::graphics::drawable::PictureDrawable::setFilterBitmap(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::PictureDrawable::setDither(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::PictureDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::PictureDrawable::setAlpha(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::PictureDrawable,"android/graphics/drawable/PictureDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,0,"<init>","(Landroid/graphics/Picture;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,1,"getPicture","()Landroid/graphics/Picture;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,2,"setPicture","(Landroid/graphics/Picture;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,3,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,4,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,5,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,6,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,7,"setFilterBitmap","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,8,"setDither","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,9,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,10,"setAlpha","(I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION