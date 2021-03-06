/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.SQLClientInfoException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace sql { class SQLException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/sql/SQLException.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLClientInfoException;
	class SQLClientInfoException
		: public object<SQLClientInfoException>
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

		explicit SQLClientInfoException(jobject jobj)
		: object<SQLClientInfoException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Iterable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::sql::SQLException>() const;
		operator local_ref<java::io::Serializable>() const;


		SQLClientInfoException();
		SQLClientInfoException(local_ref< java::util::Map > const&);
		SQLClientInfoException(local_ref< java::util::Map > const&, local_ref< java::lang::Throwable > const&);
		SQLClientInfoException(local_ref< java::lang::String > const&, local_ref< java::util::Map > const&);
		SQLClientInfoException(local_ref< java::lang::String > const&, local_ref< java::util::Map > const&, local_ref< java::lang::Throwable > const&);
		SQLClientInfoException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint, local_ref< java::util::Map > const&);
		SQLClientInfoException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint, local_ref< java::util::Map > const&, local_ref< java::lang::Throwable > const&);
		SQLClientInfoException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::util::Map > const&);
		SQLClientInfoException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::util::Map > const&, local_ref< java::lang::Throwable > const&);
		local_ref< java::util::Map > getFailedProperties();
	}; //class SQLClientInfoException

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_IMPL

namespace j2cpp {



java::sql::SQLClientInfoException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::sql::SQLClientInfoException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::sql::SQLClientInfoException::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}

java::sql::SQLClientInfoException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::sql::SQLClientInfoException::operator local_ref<java::sql::SQLException>() const
{
	return local_ref<java::sql::SQLException>(get_jobject());
}

java::sql::SQLClientInfoException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::sql::SQLClientInfoException::SQLClientInfoException()
: object<java::sql::SQLClientInfoException>(
	call_new_object<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(0),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::sql::SQLClientInfoException::SQLClientInfoException(local_ref< java::util::Map > const &a0)
: object<java::sql::SQLClientInfoException>(
	call_new_object<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(1),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::sql::SQLClientInfoException::SQLClientInfoException(local_ref< java::util::Map > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::sql::SQLClientInfoException>(
	call_new_object<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(2),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::sql::SQLClientInfoException::SQLClientInfoException(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
: object<java::sql::SQLClientInfoException>(
	call_new_object<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(3),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1)
)
{
}



java::sql::SQLClientInfoException::SQLClientInfoException(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1, local_ref< java::lang::Throwable > const &a2)
: object<java::sql::SQLClientInfoException>(
	call_new_object<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(4),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(4)
	>(a0, a1, a2)
)
{
}



java::sql::SQLClientInfoException::SQLClientInfoException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2, local_ref< java::util::Map > const &a3)
: object<java::sql::SQLClientInfoException>(
	call_new_object<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(5),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(5)
	>(a0, a1, a2, a3)
)
{
}



java::sql::SQLClientInfoException::SQLClientInfoException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2, local_ref< java::util::Map > const &a3, local_ref< java::lang::Throwable > const &a4)
: object<java::sql::SQLClientInfoException>(
	call_new_object<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(6),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(6)
	>(a0, a1, a2, a3, a4)
)
{
}



java::sql::SQLClientInfoException::SQLClientInfoException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::util::Map > const &a2)
: object<java::sql::SQLClientInfoException>(
	call_new_object<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(7),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(7)
	>(a0, a1, a2)
)
{
}



java::sql::SQLClientInfoException::SQLClientInfoException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::util::Map > const &a2, local_ref< java::lang::Throwable > const &a3)
: object<java::sql::SQLClientInfoException>(
	call_new_object<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(8),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(8)
	>(a0, a1, a2, a3)
)
{
}


local_ref< java::util::Map > java::sql::SQLClientInfoException::getFailedProperties()
{
	return call_method<
		java::sql::SQLClientInfoException::J2CPP_CLASS_NAME,
		java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(9),
		java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Map >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::sql::SQLClientInfoException,"java/sql/SQLClientInfoException")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,1,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,2,"<init>","(Ljava/util/Map;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,3,"<init>","(Ljava/lang/String;Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,4,"<init>","(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,5,"<init>","(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,6,"<init>","(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,7,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,8,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,9,"getFailedProperties","()Ljava/util/Map;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
