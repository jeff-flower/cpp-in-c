#include <stdio.h>
#include "test.h"

extern void func();

int main()
{
  // call c++ func
  func();
  // call c func
  f();

  return 0;
}
