#include "hello.h"

#include <iostream>

void greeter::greet(const std::string& greeting, const std::string& name)
{
  std::cout << greeting << ", " << name << std::endl;
}
