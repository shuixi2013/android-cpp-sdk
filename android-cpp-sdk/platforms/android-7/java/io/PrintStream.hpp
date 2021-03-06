/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.PrintStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PRINTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_PRINTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class FilterOutputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }


#include <java/io/Closeable.hpp>
#include <java/io/File.hpp>
#include <java/io/FilterOutputStream.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace io {

	class PrintStream;
	class PrintStream
		: public object<PrintStream>
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
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)

		explicit PrintStream(jobject jobj)
		: object<PrintStream>(jobj)
		{
		}

		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::FilterOutputStream>() const;
		operator local_ref<java::io::OutputStream>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Appendable>() const;


		PrintStream(local_ref< java::io::OutputStream > const&);
		PrintStream(local_ref< java::io::OutputStream > const&, jboolean);
		PrintStream(local_ref< java::io::OutputStream > const&, jboolean, local_ref< java::lang::String > const&);
		PrintStream(local_ref< java::io::File > const&);
		PrintStream(local_ref< java::io::File > const&, local_ref< java::lang::String > const&);
		PrintStream(local_ref< java::lang::String > const&);
		PrintStream(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		jboolean checkError();
		void close();
		void flush();
		local_ref< java::io::PrintStream > format(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::io::PrintStream > format(local_ref< java::util::Locale >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::io::PrintStream > printf(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::io::PrintStream > printf(local_ref< java::util::Locale >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		void print(local_ref< array<jchar,1> >  const&);
		void print(jchar);
		void print(jdouble);
		void print(jfloat);
		void print(jint);
		void print(jlong);
		void print(local_ref< java::lang::Object >  const&);
		void print(local_ref< java::lang::String >  const&);
		void print(jboolean);
		void println();
		void println(local_ref< array<jchar,1> >  const&);
		void println(jchar);
		void println(jdouble);
		void println(jfloat);
		void println(jint);
		void println(jlong);
		void println(local_ref< java::lang::Object >  const&);
		void println(local_ref< java::lang::String >  const&);
		void println(jboolean);
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void write(jint);
		local_ref< java::io::PrintStream > append(jchar);
		local_ref< java::io::PrintStream > append(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::io::PrintStream > append(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::Appendable > append_1(jchar);
	}; //class PrintStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PRINTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PRINTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_PRINTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::PrintStream::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::io::PrintStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::PrintStream::operator local_ref<java::io::FilterOutputStream>() const
{
	return local_ref<java::io::FilterOutputStream>(get_jobject());
}

java::io::PrintStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}

java::io::PrintStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::PrintStream::operator local_ref<java::lang::Appendable>() const
{
	return local_ref<java::lang::Appendable>(get_jobject());
}


java::io::PrintStream::PrintStream(local_ref< java::io::OutputStream > const &a0)
: object<java::io::PrintStream>(
	call_new_object<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(0),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::io::PrintStream::PrintStream(local_ref< java::io::OutputStream > const &a0, jboolean a1)
: object<java::io::PrintStream>(
	call_new_object<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(1),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



java::io::PrintStream::PrintStream(local_ref< java::io::OutputStream > const &a0, jboolean a1, local_ref< java::lang::String > const &a2)
: object<java::io::PrintStream>(
	call_new_object<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(2),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}



java::io::PrintStream::PrintStream(local_ref< java::io::File > const &a0)
: object<java::io::PrintStream>(
	call_new_object<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(3),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



java::io::PrintStream::PrintStream(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::PrintStream>(
	call_new_object<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(4),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(4)
	>(a0, a1)
)
{
}



java::io::PrintStream::PrintStream(local_ref< java::lang::String > const &a0)
: object<java::io::PrintStream>(
	call_new_object<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(5),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(5)
	>(a0)
)
{
}



java::io::PrintStream::PrintStream(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::PrintStream>(
	call_new_object<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(6),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(6)
	>(a0, a1)
)
{
}


jboolean java::io::PrintStream::checkError()
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(7),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

void java::io::PrintStream::close()
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(8),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject());
}

void java::io::PrintStream::flush()
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(9),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}

local_ref< java::io::PrintStream > java::io::PrintStream::format(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::Object >, 1> > const &a1)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(10),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::io::PrintStream >
	>(get_jobject(), a0, a1);
}

local_ref< java::io::PrintStream > java::io::PrintStream::format(local_ref< java::util::Locale > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(11),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::io::PrintStream >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::io::PrintStream > java::io::PrintStream::printf(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::Object >, 1> > const &a1)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(12),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::io::PrintStream >
	>(get_jobject(), a0, a1);
}

local_ref< java::io::PrintStream > java::io::PrintStream::printf(local_ref< java::util::Locale > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(13),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::io::PrintStream >
	>(get_jobject(), a0, a1, a2);
}

void java::io::PrintStream::print(local_ref< array<jchar,1> > const &a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(14),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::print(jchar a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(15),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::print(jdouble a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(16),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::print(jfloat a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(17),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::print(jint a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(18),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::print(jlong a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(19),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::print(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(20),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::print(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(21),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::print(jboolean a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(22),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::println()
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(23),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject());
}

void java::io::PrintStream::println(local_ref< array<jchar,1> > const &a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(24),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::println(jchar a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(25),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::println(jdouble a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(26),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::println(jfloat a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(27),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::println(jint a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(28),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::println(jlong a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(29),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::println(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(30),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::println(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(31),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0);
}

void java::io::PrintStream::println(jboolean a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(32),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(32), 
		void
	>(get_jobject(), a0);
}


void java::io::PrintStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(34),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::PrintStream::write(jint a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(35),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0);
}

local_ref< java::io::PrintStream > java::io::PrintStream::append(jchar a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(36),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< java::io::PrintStream >
	>(get_jobject(), a0);
}

local_ref< java::io::PrintStream > java::io::PrintStream::append(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(37),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< java::io::PrintStream >
	>(get_jobject(), a0);
}

local_ref< java::io::PrintStream > java::io::PrintStream::append(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(38),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< java::io::PrintStream >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Appendable > java::io::PrintStream::append_1(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(39),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(39), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Appendable > java::io::PrintStream::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(40),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(40), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::io::PrintStream::append_1(jchar a0)
{
	return call_method<
		java::io::PrintStream::J2CPP_CLASS_NAME,
		java::io::PrintStream::J2CPP_METHOD_NAME(41),
		java::io::PrintStream::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::PrintStream,"java/io/PrintStream")
J2CPP_DEFINE_METHOD(java::io::PrintStream,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,1,"<init>","(Ljava/io/OutputStream;Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,2,"<init>","(Ljava/io/OutputStream;ZLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,3,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,4,"<init>","(Ljava/io/File;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,5,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,6,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,7,"checkError","()Z")
J2CPP_DEFINE_METHOD(java::io::PrintStream,8,"close","()V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,9,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,10,"format","(Ljava/lang/String;[java.lang.Object)Ljava/io/PrintStream;")
J2CPP_DEFINE_METHOD(java::io::PrintStream,11,"format","(Ljava/util/Locale;Ljava/lang/String;[java.lang.Object)Ljava/io/PrintStream;")
J2CPP_DEFINE_METHOD(java::io::PrintStream,12,"printf","(Ljava/lang/String;[java.lang.Object)Ljava/io/PrintStream;")
J2CPP_DEFINE_METHOD(java::io::PrintStream,13,"printf","(Ljava/util/Locale;Ljava/lang/String;[java.lang.Object)Ljava/io/PrintStream;")
J2CPP_DEFINE_METHOD(java::io::PrintStream,14,"print","([C)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,15,"print","(C)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,16,"print","(D)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,17,"print","(F)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,18,"print","(I)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,19,"print","(J)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,20,"print","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,21,"print","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,22,"print","(Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,23,"println","()V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,24,"println","([C)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,25,"println","(C)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,26,"println","(D)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,27,"println","(F)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,28,"println","(I)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,29,"println","(J)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,30,"println","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,31,"println","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,32,"println","(Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,33,"setError","()V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,34,"write","([BII)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,35,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::PrintStream,36,"append","(C)Ljava/io/PrintStream;")
J2CPP_DEFINE_METHOD(java::io::PrintStream,37,"append","(Ljava/lang/CharSequence;)Ljava/io/PrintStream;")
J2CPP_DEFINE_METHOD(java::io::PrintStream,38,"append","(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;")
J2CPP_DEFINE_METHOD(java::io::PrintStream,39,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::PrintStream,40,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::PrintStream,41,"append","(C)Ljava/lang/Appendable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PRINTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
