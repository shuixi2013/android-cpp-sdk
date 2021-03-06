/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.parsers.SAXParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_DECL
#define J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Parser; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class HandlerBase; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace helpers { class DefaultHandler; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class XMLReader; } } } }


#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/HandlerBase.hpp>
#include <org/xml/sax/InputSource.hpp>
#include <org/xml/sax/Parser.hpp>
#include <org/xml/sax/XMLReader.hpp>
#include <org/xml/sax/helpers/DefaultHandler.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace parsers {

	class SAXParser;
	class SAXParser
		: public object<SAXParser>
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

		explicit SAXParser(jobject jobj)
		: object<SAXParser>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::xml::sax::Parser > getParser();
		local_ref< java::lang::Object > getProperty(local_ref< java::lang::String >  const&);
		local_ref< org::xml::sax::XMLReader > getXMLReader();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		void parse(local_ref< java::io::File >  const&, local_ref< org::xml::sax::HandlerBase >  const&);
		void parse(local_ref< java::io::File >  const&, local_ref< org::xml::sax::helpers::DefaultHandler >  const&);
		void parse(local_ref< java::io::InputStream >  const&, local_ref< org::xml::sax::HandlerBase >  const&);
		void parse(local_ref< java::io::InputStream >  const&, local_ref< org::xml::sax::HandlerBase >  const&, local_ref< java::lang::String >  const&);
		void parse(local_ref< java::io::InputStream >  const&, local_ref< org::xml::sax::helpers::DefaultHandler >  const&);
		void parse(local_ref< java::io::InputStream >  const&, local_ref< org::xml::sax::helpers::DefaultHandler >  const&, local_ref< java::lang::String >  const&);
		void parse(local_ref< java::lang::String >  const&, local_ref< org::xml::sax::HandlerBase >  const&);
		void parse(local_ref< java::lang::String >  const&, local_ref< org::xml::sax::helpers::DefaultHandler >  const&);
		void parse(local_ref< org::xml::sax::InputSource >  const&, local_ref< org::xml::sax::HandlerBase >  const&);
		void parse(local_ref< org::xml::sax::InputSource >  const&, local_ref< org::xml::sax::helpers::DefaultHandler >  const&);
		void reset();
		void setProperty(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
	}; //class SAXParser

} //namespace parsers
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_IMPL
#define J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_IMPL

namespace j2cpp {



javax::xml::parsers::SAXParser::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< org::xml::sax::Parser > javax::xml::parsers::SAXParser::getParser()
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(1),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::xml::sax::Parser >
	>(get_jobject());
}

local_ref< java::lang::Object > javax::xml::parsers::SAXParser::getProperty(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(2),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::XMLReader > javax::xml::parsers::SAXParser::getXMLReader()
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(3),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::xml::sax::XMLReader >
	>(get_jobject());
}

jboolean javax::xml::parsers::SAXParser::isNamespaceAware()
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(4),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

jboolean javax::xml::parsers::SAXParser::isValidating()
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(5),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

jboolean javax::xml::parsers::SAXParser::isXIncludeAware()
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(6),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::File > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(7),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::File > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(8),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::InputStream > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(9),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::InputStream > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(10),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1, a2);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::InputStream > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(11),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0, a1);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::InputStream > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(12),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0, a1, a2);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::lang::String > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(13),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0, a1);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::lang::String > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(14),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}

void javax::xml::parsers::SAXParser::parse(local_ref< org::xml::sax::InputSource > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(15),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1);
}

void javax::xml::parsers::SAXParser::parse(local_ref< org::xml::sax::InputSource > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(16),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1);
}

void javax::xml::parsers::SAXParser::reset()
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(17),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject());
}

void javax::xml::parsers::SAXParser::setProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME,
		javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(18),
		javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(javax::xml::parsers::SAXParser,"javax/xml/parsers/SAXParser")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,1,"getParser","()Lorg/xml/sax/Parser;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,2,"getProperty","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,3,"getXMLReader","()Lorg/xml/sax/XMLReader;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,4,"isNamespaceAware","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,5,"isValidating","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,6,"isXIncludeAware","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,7,"parse","(Ljava/io/File;Lorg/xml/sax/HandlerBase;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,8,"parse","(Ljava/io/File;Lorg/xml/sax/helpers/DefaultHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,9,"parse","(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,10,"parse","(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,11,"parse","(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,12,"parse","(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,13,"parse","(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,14,"parse","(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,15,"parse","(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,16,"parse","(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,17,"reset","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,18,"setProperty","(Ljava/lang/String;Ljava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
