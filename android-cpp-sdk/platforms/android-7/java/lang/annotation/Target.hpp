/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.annotation.Target
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_TARGET_HPP_DECL
#define J2CPP_JAVA_LANG_ANNOTATION_TARGET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class ElementType; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/annotation/ElementType.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace annotation {

	class Target;
	class Target
		: public object<Target>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Target(jobject jobj)
		: object<Target>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::annotation::Annotation>() const;


		local_ref< array< local_ref< java::lang::annotation::ElementType >, 1> > value();
	}; //class Target

} //namespace annotation
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_TARGET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_TARGET_HPP_IMPL
#define J2CPP_JAVA_LANG_ANNOTATION_TARGET_HPP_IMPL

namespace j2cpp {



java::lang::annotation::Target::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::annotation::Target::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

local_ref< array< local_ref< java::lang::annotation::ElementType >, 1> > java::lang::annotation::Target::value()
{
	return call_method<
		java::lang::annotation::Target::J2CPP_CLASS_NAME,
		java::lang::annotation::Target::J2CPP_METHOD_NAME(0),
		java::lang::annotation::Target::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::lang::annotation::ElementType >, 1> >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::annotation::Target,"java/lang/annotation/Target")
J2CPP_DEFINE_METHOD(java::lang::annotation::Target,0,"value","()[java.lang.annotation.ElementType")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_TARGET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
