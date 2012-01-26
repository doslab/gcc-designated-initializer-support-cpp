
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_ThreadLocalMap__
#define __java_lang_ThreadLocalMap__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::lang::ThreadLocalMap : public ::java::lang::Object
{

public: // actually package-private
  ThreadLocalMap();
private:
  void newEntryArray(jint);
  void overflow();
public:
  ::java::lang::Object * get(::java::lang::ThreadLocal *);
  void set(::java::lang::ThreadLocal *, ::java::lang::Object *);
  void remove(::java::lang::ThreadLocal *);
public: // actually package-private
  void clear();
public:
  void inherit(::java::lang::ThreadLocalMap *);
private:
  static const jint LOG_INITIAL_SIZE = 3;
  static jfloat MAX_OCCUPANCY;
  static jfloat TARGET_OCCUPANCY;
  static ::java::lang::ThreadLocalMap$Entry * deletedEntry;
  JArray< ::java::lang::ThreadLocalMap$Entry * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) entries;
  jint hashMask;
  jint count;
public:
  static ::java::lang::Class class$;
};

#endif // __java_lang_ThreadLocalMap__