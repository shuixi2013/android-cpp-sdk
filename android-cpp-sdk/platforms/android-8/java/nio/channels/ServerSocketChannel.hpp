/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.ServerSocketChannel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace nio { namespace channels { class SelectableChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class Channel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class AbstractInterruptibleChannel; } } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class AbstractSelectableChannel; } } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class SocketChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class InterruptibleChannel; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class ServerSocket; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }


#include <java/io/Closeable.hpp>
#include <java/lang/Object.hpp>
#include <java/net/ServerSocket.hpp>
#include <java/nio/channels/Channel.hpp>
#include <java/nio/channels/InterruptibleChannel.hpp>
#include <java/nio/channels/SelectableChannel.hpp>
#include <java/nio/channels/SocketChannel.hpp>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.hpp>
#include <java/nio/channels/spi/AbstractSelectableChannel.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class ServerSocketChannel;
	class ServerSocketChannel
		: public object<ServerSocketChannel>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ServerSocketChannel(jobject jobj)
		: object<ServerSocketChannel>(jobj)
		{
		}

		operator local_ref<java::nio::channels::SelectableChannel>() const;
		operator local_ref<java::nio::channels::Channel>() const;
		operator local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>() const;
		operator local_ref<java::nio::channels::spi::AbstractSelectableChannel>() const;
		operator local_ref<java::nio::channels::InterruptibleChannel>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;


		static local_ref< java::nio::channels::ServerSocketChannel > open();
		jint validOps();
		local_ref< java::net::ServerSocket > socket();
		local_ref< java::nio::channels::SocketChannel > accept();
	}; //class ServerSocketChannel

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_IMPL

namespace j2cpp {



java::nio::channels::ServerSocketChannel::operator local_ref<java::nio::channels::SelectableChannel>() const
{
	return local_ref<java::nio::channels::SelectableChannel>(get_jobject());
}

java::nio::channels::ServerSocketChannel::operator local_ref<java::nio::channels::Channel>() const
{
	return local_ref<java::nio::channels::Channel>(get_jobject());
}

java::nio::channels::ServerSocketChannel::operator local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>() const
{
	return local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>(get_jobject());
}

java::nio::channels::ServerSocketChannel::operator local_ref<java::nio::channels::spi::AbstractSelectableChannel>() const
{
	return local_ref<java::nio::channels::spi::AbstractSelectableChannel>(get_jobject());
}

java::nio::channels::ServerSocketChannel::operator local_ref<java::nio::channels::InterruptibleChannel>() const
{
	return local_ref<java::nio::channels::InterruptibleChannel>(get_jobject());
}

java::nio::channels::ServerSocketChannel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::ServerSocketChannel::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}


local_ref< java::nio::channels::ServerSocketChannel > java::nio::channels::ServerSocketChannel::open()
{
	return call_static_method<
		java::nio::channels::ServerSocketChannel::J2CPP_CLASS_NAME,
		java::nio::channels::ServerSocketChannel::J2CPP_METHOD_NAME(1),
		java::nio::channels::ServerSocketChannel::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::nio::channels::ServerSocketChannel >
	>();
}

jint java::nio::channels::ServerSocketChannel::validOps()
{
	return call_method<
		java::nio::channels::ServerSocketChannel::J2CPP_CLASS_NAME,
		java::nio::channels::ServerSocketChannel::J2CPP_METHOD_NAME(2),
		java::nio::channels::ServerSocketChannel::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< java::net::ServerSocket > java::nio::channels::ServerSocketChannel::socket()
{
	return call_method<
		java::nio::channels::ServerSocketChannel::J2CPP_CLASS_NAME,
		java::nio::channels::ServerSocketChannel::J2CPP_METHOD_NAME(3),
		java::nio::channels::ServerSocketChannel::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::net::ServerSocket >
	>(get_jobject());
}

local_ref< java::nio::channels::SocketChannel > java::nio::channels::ServerSocketChannel::accept()
{
	return call_method<
		java::nio::channels::ServerSocketChannel::J2CPP_CLASS_NAME,
		java::nio::channels::ServerSocketChannel::J2CPP_METHOD_NAME(4),
		java::nio::channels::ServerSocketChannel::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::nio::channels::SocketChannel >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::nio::channels::ServerSocketChannel,"java/nio/channels/ServerSocketChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,0,"<init>","(Ljava/nio/channels/spi/SelectorProvider;)V")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,1,"open","()Ljava/nio/channels/ServerSocketChannel;")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,2,"validOps","()I")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,3,"socket","()Ljava/net/ServerSocket;")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,4,"accept","()Ljava/nio/channels/SocketChannel;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
