/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.DefaultTargetAuthenticationHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTTARGETAUTHENTICATIONHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTTARGETAUTHENTICATIONHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace client { class AbstractAuthenticationHandler; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class AuthenticationHandler; } } } } }


#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/client/AuthenticationHandler.hpp>
#include <org/apache/http/impl/client/AbstractAuthenticationHandler.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class DefaultTargetAuthenticationHandler;
	class DefaultTargetAuthenticationHandler
		: public object<DefaultTargetAuthenticationHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit DefaultTargetAuthenticationHandler(jobject jobj)
		: object<DefaultTargetAuthenticationHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::impl::client::AbstractAuthenticationHandler>() const;
		operator local_ref<org::apache::http::client::AuthenticationHandler>() const;


		DefaultTargetAuthenticationHandler();
		jboolean isAuthenticationRequested(local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< java::util::Map > getChallenges(local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class DefaultTargetAuthenticationHandler

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTTARGETAUTHENTICATIONHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTTARGETAUTHENTICATIONHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTTARGETAUTHENTICATIONHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::DefaultTargetAuthenticationHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::client::DefaultTargetAuthenticationHandler::operator local_ref<org::apache::http::impl::client::AbstractAuthenticationHandler>() const
{
	return local_ref<org::apache::http::impl::client::AbstractAuthenticationHandler>(get_jobject());
}

org::apache::http::impl::client::DefaultTargetAuthenticationHandler::operator local_ref<org::apache::http::client::AuthenticationHandler>() const
{
	return local_ref<org::apache::http::client::AuthenticationHandler>(get_jobject());
}


org::apache::http::impl::client::DefaultTargetAuthenticationHandler::DefaultTargetAuthenticationHandler()
: object<org::apache::http::impl::client::DefaultTargetAuthenticationHandler>(
	call_new_object<
		org::apache::http::impl::client::DefaultTargetAuthenticationHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultTargetAuthenticationHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::DefaultTargetAuthenticationHandler::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean org::apache::http::impl::client::DefaultTargetAuthenticationHandler::isAuthenticationRequested(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::impl::client::DefaultTargetAuthenticationHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultTargetAuthenticationHandler::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::DefaultTargetAuthenticationHandler::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< java::util::Map > org::apache::http::impl::client::DefaultTargetAuthenticationHandler::getChallenges(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::impl::client::DefaultTargetAuthenticationHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultTargetAuthenticationHandler::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::client::DefaultTargetAuthenticationHandler::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::Map >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::DefaultTargetAuthenticationHandler,"org/apache/http/impl/client/DefaultTargetAuthenticationHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultTargetAuthenticationHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultTargetAuthenticationHandler,1,"isAuthenticationRequested","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultTargetAuthenticationHandler,2,"getChallenges","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/util/Map;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTTARGETAUTHENTICATIONHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
