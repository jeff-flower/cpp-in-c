#include <iostream>

extern "C" 
{
  void func()
  {
    std::cout << "\nThis is c++ code";
  }
}
