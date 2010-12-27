/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.CertificateExpiredException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXPIREDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXPIREDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertificateException; } } } }


#include <java/lang/String.hpp>
#include <java/security/cert/CertificateException.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertificateExpiredException;
	class CertificateExpiredException
		: public cpp_object<CertificateExpiredException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit CertificateExpiredException(jobject jobj)
		: cpp_object<CertificateExpiredException>(jobj)
		{
		}

		operator local_ref<java::security::cert::CertificateException>() const;


		CertificateExpiredException(local_ref< java::lang::String > const&);
		CertificateExpiredException();
	}; //class CertificateExpiredException

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXPIREDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXPIREDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXPIREDEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::cert::CertificateExpiredException::operator local_ref<java::security::cert::CertificateException>() const
{
	return local_ref<java::security::cert::CertificateException>(get_jtype());
}


java::security::cert::CertificateExpiredException::CertificateExpiredException(local_ref< java::lang::String > const &a0)
: cpp_object<java::security::cert::CertificateExpiredException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CertificateExpiredException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CertificateExpiredException::J2CPP_CLASS_NAME, java::security::cert::CertificateExpiredException::J2CPP_METHOD_NAME(0), java::security::cert::CertificateExpiredException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



java::security::cert::CertificateExpiredException::CertificateExpiredException()
: cpp_object<java::security::cert::CertificateExpiredException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CertificateExpiredException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CertificateExpiredException::J2CPP_CLASS_NAME, java::security::cert::CertificateExpiredException::J2CPP_METHOD_NAME(1), java::security::cert::CertificateExpiredException::J2CPP_METHOD_SIGNATURE(1), false>()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::security::cert::CertificateExpiredException,"java/security/cert/CertificateExpiredException")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateExpiredException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateExpiredException,1,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXPIREDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION