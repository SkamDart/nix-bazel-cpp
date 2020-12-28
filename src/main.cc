#include "hello.h"

#include <string>

int main(int argc, char** argv)
{
  std::string greeting = "Hello";
  std::string name = "World";
  if (argc > 1) 
  {
    name = argv[1]; 
  }
  greeter::greet(greeting, name);
  return 0;
}
