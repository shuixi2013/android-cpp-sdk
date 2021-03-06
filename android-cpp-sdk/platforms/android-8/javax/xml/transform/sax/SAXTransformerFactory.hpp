/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.transform.sax.SAXTransformerFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXTRANSFORMERFACTORY_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXTRANSFORMERFACTORY_HPP_DECL


namespace j2cpp { namespace org { namespace xml { namespace sax { class XMLFilter; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class TransformerFactory; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { namespace sax { class TemplatesHandler; } } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { namespace sax { class TransformerHandler; } } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Source; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Templates; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/transform/Source.hpp>
#include <javax/xml/transform/Templates.hpp>
#include <javax/xml/transform/TransformerFactory.hpp>
#include <javax/xml/transform/sax/TemplatesHandler.hpp>
#include <javax/xml/transform/sax/TransformerHandler.hpp>
#include <org/xml/sax/XMLFilter.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform { namespace sax {

	class SAXTransformerFactory;
	class SAXTransformerFactory
		: public object<SAXTransformerFactory>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit SAXTransformerFactory(jobject jobj)
		: object<SAXTransformerFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::xml::transform::TransformerFactory>() const;


		local_ref< javax::xml::transform::sax::TransformerHandler > newTransformerHandler(local_ref< javax::xml::transform::Source >  const&);
		local_ref< javax::xml::transform::sax::TransformerHandler > newTransformerHandler(local_ref< javax::xml::transform::Templates >  const&);
		local_ref< javax::xml::transform::sax::TransformerHandler > newTransformerHandler();
		local_ref< javax::xml::transform::sax::TemplatesHandler > newTemplatesHandler();
		local_ref< org::xml::sax::XMLFilter > newXMLFilter(local_ref< javax::xml::transform::Source >  const&);
		local_ref< org::xml::sax::XMLFilter > newXMLFilter(local_ref< javax::xml::transform::Templates >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > FEATURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > FEATURE_XMLFILTER;
	}; //class SAXTransformerFactory

} //namespace sax
} //namespace transform
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXTRANSFORMERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXTRANSFORMERFACTORY_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXTRANSFORMERFACTORY_HPP_IMPL

namespace j2cpp {



javax::xml::transform::sax::SAXTransformerFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::xml::transform::sax::SAXTransformerFactory::operator local_ref<javax::xml::transform::TransformerFactory>() const
{
	return local_ref<javax::xml::transform::TransformerFactory>(get_jobject());
}


local_ref< javax::xml::transform::sax::TransformerHandler > javax::xml::transform::sax::SAXTransformerFactory::newTransformerHandler(local_ref< javax::xml::transform::Source > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_NAME(1),
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::xml::transform::sax::TransformerHandler >
	>(get_jobject(), a0);
}

local_ref< javax::xml::transform::sax::TransformerHandler > javax::xml::transform::sax::SAXTransformerFactory::newTransformerHandler(local_ref< javax::xml::transform::Templates > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_NAME(2),
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::xml::transform::sax::TransformerHandler >
	>(get_jobject(), a0);
}

local_ref< javax::xml::transform::sax::TransformerHandler > javax::xml::transform::sax::SAXTransformerFactory::newTransformerHandler()
{
	return call_method<
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_NAME(3),
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< javax::xml::transform::sax::TransformerHandler >
	>(get_jobject());
}

local_ref< javax::xml::transform::sax::TemplatesHandler > javax::xml::transform::sax::SAXTransformerFactory::newTemplatesHandler()
{
	return call_method<
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_NAME(4),
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< javax::xml::transform::sax::TemplatesHandler >
	>(get_jobject());
}

local_ref< org::xml::sax::XMLFilter > javax::xml::transform::sax::SAXTransformerFactory::newXMLFilter(local_ref< javax::xml::transform::Source > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_NAME(5),
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::xml::sax::XMLFilter >
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::XMLFilter > javax::xml::transform::sax::SAXTransformerFactory::newXMLFilter(local_ref< javax::xml::transform::Templates > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_NAME(6),
		javax::xml::transform::sax::SAXTransformerFactory::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::xml::sax::XMLFilter >
	>(get_jobject(), a0);
}


static_field<
	javax::xml::transform::sax::SAXTransformerFactory::J2CPP_CLASS_NAME,
	javax::xml::transform::sax::SAXTransformerFactory::J2CPP_FIELD_NAME(0),
	javax::xml::transform::sax::SAXTransformerFactory::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> javax::xml::transform::sax::SAXTransformerFactory::FEATURE;

static_field<
	javax::xml::transform::sax::SAXTransformerFactory::J2CPP_CLASS_NAME,
	javax::xml::transform::sax::SAXTransformerFactory::J2CPP_FIELD_NAME(1),
	javax::xml::transform::sax::SAXTransformerFactory::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> javax::xml::transform::sax::SAXTransformerFactory::FEATURE_XMLFILTER;


J2CPP_DEFINE_CLASS(javax::xml::transform::sax::SAXTransformerFactory,"javax/xml/transform/sax/SAXTransformerFactory")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXTransformerFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXTransformerFactory,1,"newTransformerHandler","(Ljavax/xml/transform/Source;)Ljavax/xml/transform/sax/TransformerHandler;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXTransformerFactory,2,"newTransformerHandler","(Ljavax/xml/transform/Templates;)Ljavax/xml/transform/sax/TransformerHandler;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXTransformerFactory,3,"newTransformerHandler","()Ljavax/xml/transform/sax/TransformerHandler;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXTransformerFactory,4,"newTemplatesHandler","()Ljavax/xml/transform/sax/TemplatesHandler;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXTransformerFactory,5,"newXMLFilter","(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLFilter;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXTransformerFactory,6,"newXMLFilter","(Ljavax/xml/transform/Templates;)Lorg/xml/sax/XMLFilter;")
J2CPP_DEFINE_FIELD(javax::xml::transform::sax::SAXTransformerFactory,0,"FEATURE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(javax::xml::transform::sax::SAXTransformerFactory,1,"FEATURE_XMLFILTER","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXTRANSFORMERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
