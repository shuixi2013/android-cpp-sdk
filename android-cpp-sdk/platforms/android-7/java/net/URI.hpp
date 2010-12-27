/*================================================================================
  code generated by: java2cpp
  class: java.net.URI
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URI_HPP_DECL
#define J2CPP_JAVA_NET_URI_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URL.hpp>


namespace j2cpp {

namespace java { namespace net {

	class URI;
	class URI
		: public cpp_object<URI>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)

		explicit URI(jobject jobj)
		: cpp_object<URI>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::io::Serializable>() const;


		URI(local_ref< java::lang::String > const&);
		URI(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		URI(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_int const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		URI(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		URI(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		cpp_int compareTo(local_ref< java::net::URI > const&);
		static local_ref< java::net::URI > create(local_ref< java::lang::String > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > getAuthority();
		local_ref< java::lang::String > getFragment();
		local_ref< java::lang::String > getHost();
		local_ref< java::lang::String > getPath();
		cpp_int getPort();
		local_ref< java::lang::String > getQuery();
		local_ref< java::lang::String > getRawAuthority();
		local_ref< java::lang::String > getRawFragment();
		local_ref< java::lang::String > getRawPath();
		local_ref< java::lang::String > getRawQuery();
		local_ref< java::lang::String > getRawSchemeSpecificPart();
		local_ref< java::lang::String > getRawUserInfo();
		local_ref< java::lang::String > getScheme();
		local_ref< java::lang::String > getSchemeSpecificPart();
		local_ref< java::lang::String > getUserInfo();
		cpp_int hashCode();
		cpp_boolean isAbsolute();
		cpp_boolean isOpaque();
		local_ref< java::net::URI > normalize();
		local_ref< java::net::URI > parseServerAuthority();
		local_ref< java::net::URI > relativize(local_ref< java::net::URI > const&);
		local_ref< java::net::URI > resolve(local_ref< java::net::URI > const&);
		local_ref< java::net::URI > resolve(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > toASCIIString();
		local_ref< java::lang::String > toString();
		local_ref< java::net::URL > toURL();
		cpp_int compareTo(local_ref< java::lang::Object > const&);
	}; //class URI

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URI_HPP_IMPL
#define J2CPP_JAVA_NET_URI_HPP_IMPL

namespace j2cpp {



java::net::URI::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::net::URI::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jtype());
}

java::net::URI::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jtype());
}


java::net::URI::URI(local_ref< java::lang::String > const &a0)
: cpp_object<java::net::URI>(
	environment::get().get_jenv()->NewObject(
		get_class<java::net::URI::J2CPP_CLASS_NAME>(),
		get_method_id<java::net::URI::J2CPP_CLASS_NAME, java::net::URI::J2CPP_METHOD_NAME(0), java::net::URI::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



java::net::URI::URI(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
: cpp_object<java::net::URI>(
	environment::get().get_jenv()->NewObject(
		get_class<java::net::URI::J2CPP_CLASS_NAME>(),
		get_method_id<java::net::URI::J2CPP_CLASS_NAME, java::net::URI::J2CPP_METHOD_NAME(1), java::net::URI::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}



java::net::URI::URI(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, cpp_int const &a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5, local_ref< java::lang::String > const &a6)
: cpp_object<java::net::URI>(
	environment::get().get_jenv()->NewObject(
		get_class<java::net::URI::J2CPP_CLASS_NAME>(),
		get_method_id<java::net::URI::J2CPP_CLASS_NAME, java::net::URI::J2CPP_METHOD_NAME(2), java::net::URI::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype()
	)
)
{
}



java::net::URI::URI(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
: cpp_object<java::net::URI>(
	environment::get().get_jenv()->NewObject(
		get_class<java::net::URI::J2CPP_CLASS_NAME>(),
		get_method_id<java::net::URI::J2CPP_CLASS_NAME, java::net::URI::J2CPP_METHOD_NAME(3), java::net::URI::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
	)
)
{
}



java::net::URI::URI(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4)
: cpp_object<java::net::URI>(
	environment::get().get_jenv()->NewObject(
		get_class<java::net::URI::J2CPP_CLASS_NAME>(),
		get_method_id<java::net::URI::J2CPP_CLASS_NAME, java::net::URI::J2CPP_METHOD_NAME(4), java::net::URI::J2CPP_METHOD_SIGNATURE(4), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
	)
)
{
}


cpp_int java::net::URI::compareTo(local_ref< java::net::URI > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::net::URI > java::net::URI::create(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::net::URI::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getAuthority()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getFragment()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getHost()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getPath()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int java::net::URI::getPort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getQuery()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getRawAuthority()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getRawFragment()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getRawPath()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getRawQuery()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getRawSchemeSpecificPart()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getRawUserInfo()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getScheme()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getSchemeSpecificPart()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::getUserInfo()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

cpp_int java::net::URI::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

cpp_boolean java::net::URI::isAbsolute()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_boolean java::net::URI::isOpaque()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

local_ref< java::net::URI > java::net::URI::normalize()
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

local_ref< java::net::URI > java::net::URI::parseServerAuthority()
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

local_ref< java::net::URI > java::net::URI::relativize(local_ref< java::net::URI > const &a0)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::net::URI > java::net::URI::resolve(local_ref< java::net::URI > const &a0)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::net::URI > java::net::URI::resolve(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::net::URI::toASCIIString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

local_ref< java::lang::String > java::net::URI::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

local_ref< java::net::URL > java::net::URI::toURL()
{
	return local_ref< java::net::URL >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>()
		)
	);
}

cpp_int java::net::URI::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::URI,"java/net/URI")
J2CPP_DEFINE_METHOD(java::net::URI,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URI,1,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URI,2,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URI,3,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URI,4,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URI,5,"compareTo","(Ljava/net/URI;)I")
J2CPP_DEFINE_METHOD(java::net::URI,6,"create","(Ljava/lang/String;)Ljava/net/URI;")
J2CPP_DEFINE_METHOD(java::net::URI,7,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::net::URI,8,"getAuthority","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,9,"getFragment","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,10,"getHost","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,11,"getPath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,12,"getPort","()I")
J2CPP_DEFINE_METHOD(java::net::URI,13,"getQuery","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,14,"getRawAuthority","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,15,"getRawFragment","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,16,"getRawPath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,17,"getRawQuery","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,18,"getRawSchemeSpecificPart","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,19,"getRawUserInfo","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,20,"getScheme","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,21,"getSchemeSpecificPart","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,22,"getUserInfo","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,23,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::net::URI,24,"isAbsolute","()Z")
J2CPP_DEFINE_METHOD(java::net::URI,25,"isOpaque","()Z")
J2CPP_DEFINE_METHOD(java::net::URI,26,"normalize","()Ljava/net/URI;")
J2CPP_DEFINE_METHOD(java::net::URI,27,"parseServerAuthority","()Ljava/net/URI;")
J2CPP_DEFINE_METHOD(java::net::URI,28,"relativize","(Ljava/net/URI;)Ljava/net/URI;")
J2CPP_DEFINE_METHOD(java::net::URI,29,"resolve","(Ljava/net/URI;)Ljava/net/URI;")
J2CPP_DEFINE_METHOD(java::net::URI,30,"resolve","(Ljava/lang/String;)Ljava/net/URI;")
J2CPP_DEFINE_METHOD(java::net::URI,31,"toASCIIString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,32,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URI,33,"toURL","()Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::net::URI,34,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION