/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.auth.AuthScheme
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/auth/Credentials.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class AuthScheme;
	class AuthScheme
		: public object<AuthScheme>
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

		explicit AuthScheme(jobject jobj)
		: object<AuthScheme>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void processChallenge(local_ref< org::apache::http::Header >  const&);
		local_ref< java::lang::String > getSchemeName();
		local_ref< java::lang::String > getParameter(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getRealm();
		jboolean isConnectionBased();
		jboolean isComplete();
		local_ref< org::apache::http::Header > authenticate(local_ref< org::apache::http::auth::Credentials >  const&, local_ref< org::apache::http::HttpRequest >  const&);
	}; //class AuthScheme

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::AuthScheme::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::apache::http::auth::AuthScheme::processChallenge(local_ref< org::apache::http::Header > const &a0)
{
	return call_method<
		org::apache::http::auth::AuthScheme::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_NAME(0),
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::auth::AuthScheme::getSchemeName()
{
	return call_method<
		org::apache::http::auth::AuthScheme::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_NAME(1),
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::AuthScheme::getParameter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::auth::AuthScheme::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_NAME(2),
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::auth::AuthScheme::getRealm()
{
	return call_method<
		org::apache::http::auth::AuthScheme::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_NAME(3),
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean org::apache::http::auth::AuthScheme::isConnectionBased()
{
	return call_method<
		org::apache::http::auth::AuthScheme::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_NAME(4),
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

jboolean org::apache::http::auth::AuthScheme::isComplete()
{
	return call_method<
		org::apache::http::auth::AuthScheme::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_NAME(5),
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::auth::AuthScheme::authenticate(local_ref< org::apache::http::auth::Credentials > const &a0, local_ref< org::apache::http::HttpRequest > const &a1)
{
	return call_method<
		org::apache::http::auth::AuthScheme::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_NAME(6),
		org::apache::http::auth::AuthScheme::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::apache::http::Header >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::AuthScheme,"org/apache/http/auth/AuthScheme")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,0,"processChallenge","(Lorg/apache/http/Header;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,1,"getSchemeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,2,"getParameter","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,3,"getRealm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,4,"isConnectionBased","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,5,"isComplete","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,6,"authenticate","(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
