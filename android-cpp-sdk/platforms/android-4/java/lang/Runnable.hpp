/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Runnable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_RUNNABLE_HPP_DECL
#define J2CPP_JAVA_LANG_RUNNABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Runnable;
	class Runnable
		: public object<Runnable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Runnable(jobject jobj)
		: object<Runnable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void run();
	}; //class Runnable

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_RUNNABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_RUNNABLE_HPP_IMPL
#define J2CPP_JAVA_LANG_RUNNABLE_HPP_IMPL

namespace j2cpp {



java::lang::Runnable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::lang::Runnable::run()
{
	return call_method<
		java::lang::Runnable::J2CPP_CLASS_NAME,
		java::lang::Runnable::J2CPP_METHOD_NAME(0),
		java::lang::Runnable::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::Runnable,"java/lang/Runnable")
J2CPP_DEFINE_METHOD(java::lang::Runnable,0,"run","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_RUNNABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
