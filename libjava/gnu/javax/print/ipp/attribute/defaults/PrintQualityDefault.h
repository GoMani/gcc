
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_defaults_PrintQualityDefault__
#define __gnu_javax_print_ipp_attribute_defaults_PrintQualityDefault__

#pragma interface

#include <javax/print/attribute/EnumSyntax.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        namespace ipp
        {
          namespace attribute
          {
            namespace defaults
            {
                class PrintQualityDefault;
            }
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
          class Attribute;
          class EnumSyntax;
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::defaults::PrintQualityDefault : public ::javax::print::attribute::EnumSyntax
{

public: // actually protected
  PrintQualityDefault(jint);
public:
  ::java::lang::Class * getCategory();
  ::java::lang::String * getName();
public: // actually protected
  JArray< ::java::lang::String * > * getStringTable();
  JArray< ::javax::print::attribute::EnumSyntax * > * getEnumValueTable();
  jint getOffset();
public:
  ::javax::print::attribute::Attribute * getAssociatedAttribute();
  static ::gnu::javax::print::ipp::attribute::defaults::PrintQualityDefault * DRAFT;
  static ::gnu::javax::print::ipp::attribute::defaults::PrintQualityDefault * NORMAL;
  static ::gnu::javax::print::ipp::attribute::defaults::PrintQualityDefault * HIGH;
private:
  static JArray< ::java::lang::String * > * stringTable;
  static JArray< ::gnu::javax::print::ipp::attribute::defaults::PrintQualityDefault * > * enumValueTable;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_ipp_attribute_defaults_PrintQualityDefault__
