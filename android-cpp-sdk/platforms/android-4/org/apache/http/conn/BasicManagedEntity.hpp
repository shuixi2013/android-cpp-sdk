/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.BasicManagedEntity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_BASICMANAGEDENTITY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_BASICMANAGEDENTITY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class HttpEntityWrapper; } } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class EofSensorWatcher; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ManagedClientConnection; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ConnectionReleaseTrigger; } } } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/http/HttpEntity.hpp>
#include <org/apache/http/conn/ConnectionReleaseTrigger.hpp>
#include <org/apache/http/conn/EofSensorWatcher.hpp>
#include <org/apache/http/conn/ManagedClientConnection.hpp>
#include <org/apache/http/entity/HttpEntityWrapper.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class BasicManagedEntity;
	class BasicManagedEntity
		: public object<BasicManagedEntity>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit BasicManagedEntity(jobject jobj)
		: object<BasicManagedEntity>(jobj)
		{
		}

		operator local_ref<org::apache::http::HttpEntity>() const;
		operator local_ref<org::apache::http::entity::HttpEntityWrapper>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::EofSensorWatcher>() const;
		operator local_ref<org::apache::http::conn::ConnectionReleaseTrigger>() const;


		BasicManagedEntity(local_ref< org::apache::http::HttpEntity > const&, local_ref< org::apache::http::conn::ManagedClientConnection > const&, jboolean);
		jboolean isRepeatable();
		local_ref< java::io::InputStream > getContent();
		void consumeContent();
		void writeTo(local_ref< java::io::OutputStream >  const&);
		void releaseConnection();
		void abortConnection();
		jboolean eofDetected(local_ref< java::io::InputStream >  const&);
		jboolean streamClosed(local_ref< java::io::InputStream >  const&);
		jboolean streamAbort(local_ref< java::io::InputStream >  const&);

	}; //class BasicManagedEntity

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_BASICMANAGEDENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_BASICMANAGEDENTITY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_BASICMANAGEDENTITY_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::BasicManagedEntity::operator local_ref<org::apache::http::HttpEntity>() const
{
	return local_ref<org::apache::http::HttpEntity>(get_jobject());
}

org::apache::http::conn::BasicManagedEntity::operator local_ref<org::apache::http::entity::HttpEntityWrapper>() const
{
	return local_ref<org::apache::http::entity::HttpEntityWrapper>(get_jobject());
}

org::apache::http::conn::BasicManagedEntity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::BasicManagedEntity::operator local_ref<org::apache::http::conn::EofSensorWatcher>() const
{
	return local_ref<org::apache::http::conn::EofSensorWatcher>(get_jobject());
}

org::apache::http::conn::BasicManagedEntity::operator local_ref<org::apache::http::conn::ConnectionReleaseTrigger>() const
{
	return local_ref<org::apache::http::conn::ConnectionReleaseTrigger>(get_jobject());
}


org::apache::http::conn::BasicManagedEntity::BasicManagedEntity(local_ref< org::apache::http::HttpEntity > const &a0, local_ref< org::apache::http::conn::ManagedClientConnection > const &a1, jboolean a2)
: object<org::apache::http::conn::BasicManagedEntity>(
	call_new_object<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


jboolean org::apache::http::conn::BasicManagedEntity::isRepeatable()
{
	return call_method<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

local_ref< java::io::InputStream > org::apache::http::conn::BasicManagedEntity::getContent()
{
	return call_method<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::io::InputStream >
	>(get_jobject());
}

void org::apache::http::conn::BasicManagedEntity::consumeContent()
{
	return call_method<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void org::apache::http::conn::BasicManagedEntity::writeTo(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::conn::BasicManagedEntity::releaseConnection()
{
	return call_method<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void org::apache::http::conn::BasicManagedEntity::abortConnection()
{
	return call_method<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}

jboolean org::apache::http::conn::BasicManagedEntity::eofDetected(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(7),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

jboolean org::apache::http::conn::BasicManagedEntity::streamClosed(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(8),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

jboolean org::apache::http::conn::BasicManagedEntity::streamAbort(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		org::apache::http::conn::BasicManagedEntity::J2CPP_CLASS_NAME,
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_NAME(9),
		org::apache::http::conn::BasicManagedEntity::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}




J2CPP_DEFINE_CLASS(org::apache::http::conn::BasicManagedEntity,"org/apache/http/conn/BasicManagedEntity")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,0,"<init>","(Lorg/apache/http/HttpEntity;Lorg/apache/http/conn/ManagedClientConnection;Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,1,"isRepeatable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,2,"getContent","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,3,"consumeContent","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,4,"writeTo","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,5,"releaseConnection","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,6,"abortConnection","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,7,"eofDetected","(Ljava/io/InputStream;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,8,"streamClosed","(Ljava/io/InputStream;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,9,"streamAbort","(Ljava/io/InputStream;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicManagedEntity,10,"releaseManagedConnection","()V")
J2CPP_DEFINE_FIELD(org::apache::http::conn::BasicManagedEntity,0,"managedConn","Lorg/apache/http/conn/ManagedClientConnection;")
J2CPP_DEFINE_FIELD(org::apache::http::conn::BasicManagedEntity,1,"attemptReuse","Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_BASICMANAGEDENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
