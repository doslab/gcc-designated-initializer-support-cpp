
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicComboPopup$ItemHandler__
#define __javax_swing_plaf_basic_BasicComboPopup$ItemHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ItemEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicComboPopup;
            class BasicComboPopup$ItemHandler;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicComboPopup$ItemHandler : public ::java::lang::Object
{

public: // actually protected
  BasicComboPopup$ItemHandler(::javax::swing::plaf::basic::BasicComboPopup *);
public:
  virtual void itemStateChanged(::java::awt::event::ItemEvent *);
public: // actually package-private
  ::javax::swing::plaf::basic::BasicComboPopup * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicComboPopup$ItemHandler__
