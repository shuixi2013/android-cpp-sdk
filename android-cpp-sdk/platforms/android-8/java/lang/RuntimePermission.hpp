/*================================================================================
  code generated by: java2cpp
  class: java.lang.RuntimePermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_RUNTIMEPERMISSION_HPP_DECL
#define J2CPP_JAVA_LANG_RUNTIMEPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class RuntimePermission;
	class RuntimePermission
		: public cpp_object<RuntimePermission>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		RuntimePermission(jobject jobj)
		: cpp_object<RuntimePermission>(jobj)
		{
		}

	}; //class RuntimePermission

} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_RUNTIMEPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_RUNTIMEPERMISSION_HPP_IMPL
#define J2CPP_JAVA_LANG_RUNTIMEPERMISSION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::RuntimePermission > create< java::lang::RuntimePermission>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::RuntimePermission >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::RuntimePermission::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::RuntimePermission::J2CPP_CLASS_NAME, java::lang::RuntimePermission::J2CPP_METHOD_NAME(0), java::lang::RuntimePermission::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::lang::RuntimePermission > create< java::lang::RuntimePermission>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::RuntimePermission >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::RuntimePermission::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::RuntimePermission::J2CPP_CLASS_NAME, java::lang::RuntimePermission::J2CPP_METHOD_NAME(1), java::lang::RuntimePermission::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::RuntimePermission,"java/lang/RuntimePermission")
J2CPP_DEFINE_METHOD(java::lang::RuntimePermission,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::RuntimePermission,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_RUNTIMEPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION