
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_convert_BytesToUnicode__
#define __gnu_gcj_convert_BytesToUnicode__

#pragma interface

#include <gnu/gcj/convert/IOConverter.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
          class BytesToUnicode;
      }
    }
  }
}

class gnu::gcj::convert::BytesToUnicode : public ::gnu::gcj::convert::IOConverter
{

public:
  BytesToUnicode();
  virtual ::java::lang::String * getName() = 0;
  static ::gnu::gcj::convert::BytesToUnicode * getDefaultDecoder();
  static ::gnu::gcj::convert::BytesToUnicode * getDecoder(::java::lang::String *);
  virtual void setInput(JArray< jbyte > *, jint, jint);
  virtual jint read(JArray< jchar > *, jint, jint) = 0;
  virtual void done();
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::gnu::gcj::convert::IOConverter)))) inbuffer;
  jint inpos;
  jint inlength;
public: // actually package-private
  static ::java::lang::String * defaultEncoding;
private:
  static const jint CACHE_SIZE = 4;
  static JArray< ::gnu::gcj::convert::BytesToUnicode * > * decoderCache;
  static jint currCachePos;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_convert_BytesToUnicode__