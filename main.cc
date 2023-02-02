#include <iostream>

#include "foo.h"
#include "bar.h"

int main() {
#ifdef NDEBUG
  std::cout << "NDEBUG" << std::endl;
#else
  std::cout << "DEBUG" << std::endl;
#endif
  std::cout << "foo() = " << foo() << std::endl;
  std::cout << "bar() = " << bar() << std::endl;
}
