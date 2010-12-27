/*================================================================================
  code generated by: java2cpp
  class: java.util.InvalidPropertiesFormatException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace util {

	class InvalidPropertiesFormatException;
	class InvalidPropertiesFormatException
		: public cpp_object<InvalidPropertiesFormatException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		InvalidPropertiesFormatException(jobject jobj)
		: cpp_object<InvalidPropertiesFormatException>(jobj)
		{
		}

	}; //class InvalidPropertiesFormatException

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::InvalidPropertiesFormatException > create< java::util::InvalidPropertiesFormatException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::InvalidPropertiesFormatException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::InvalidPropertiesFormatException::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::InvalidPropertiesFormatException::J2CPP_CLASS_NAME, java::util::InvalidPropertiesFormatException::J2CPP_METHOD_NAME(0), java::util::InvalidPropertiesFormatException::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::InvalidPropertiesFormatException > create< java::util::InvalidPropertiesFormatException>(local_ref< java::lang::Throwable > const &a0)
{
	return local_ref< java::util::InvalidPropertiesFormatException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::InvalidPropertiesFormatException::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::InvalidPropertiesFormatException::J2CPP_CLASS_NAME, java::util::InvalidPropertiesFormatException::J2CPP_METHOD_NAME(1), java::util::InvalidPropertiesFormatException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::InvalidPropertiesFormatException,"java/util/InvalidPropertiesFormatException")
J2CPP_DEFINE_METHOD(java::util::InvalidPropertiesFormatException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::InvalidPropertiesFormatException,1,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION