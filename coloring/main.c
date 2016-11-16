#include <stdio.h>

extern int color();

int main()
{
  // call c++ func
  color();
  // call c func
  printf("\nFrom C\n");

  return 0;
}
