#ifndef ITEM_H
#define ITEM_H
#include "Knob.h"
Type Item: private Knob {
  using Knob::x, Knob::handle;
  Item();
  Item(Short s);

  Property(Item rest);
  Property(Short head);
  Property(Boolean ok);
  Item head(Short s);
  Item rest(Short s);
  static Short count;
}; 
#endif
