
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_spi_ServiceRegistry$1__
#define __javax_imageio_spi_ServiceRegistry$1__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      namespace spi
      {
          class ServiceRegistry;
          class ServiceRegistry$1;
      }
    }
  }
}

class javax::imageio::spi::ServiceRegistry$1 : public ::java::lang::Object
{

public: // actually package-private
  ServiceRegistry$1(::javax::imageio::spi::ServiceRegistry *);
public:
  jboolean hasNext();
  ::java::lang::Object * next();
  void remove();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) index;
  ::javax::imageio::spi::ServiceRegistry * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_spi_ServiceRegistry$1__
