
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JScrollPane$AccessibleJScrollPane__
#define __javax_swing_JScrollPane$AccessibleJScrollPane__

#pragma interface

#include <javax/swing/JComponent$AccessibleJComponent.h>
extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class PropertyChangeEvent;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JScrollPane;
        class JScrollPane$AccessibleJScrollPane;
        class JViewport;
      namespace event
      {
          class ChangeEvent;
      }
    }
  }
}

class javax::swing::JScrollPane$AccessibleJScrollPane : public ::javax::swing::JComponent$AccessibleJComponent
{

public:
  JScrollPane$AccessibleJScrollPane(::javax::swing::JScrollPane *);
  virtual void stateChanged(::javax::swing::event::ChangeEvent *);
  virtual void propertyChange(::java::beans::PropertyChangeEvent *);
  virtual void resetViewPort();
public: // actually protected
  ::javax::swing::JViewport * __attribute__((aligned(__alignof__( ::javax::swing::JComponent$AccessibleJComponent)))) viewPort;
public: // actually package-private
  ::javax::swing::JScrollPane * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JScrollPane$AccessibleJScrollPane__
