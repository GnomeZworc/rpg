#include <iostream>
#include "./Config/Config.hh"

int main(int ac, char** av, char** env)
{
  std::cout << "Start - Init Game" << std::endl;
  Config c;
  std::cout << "End - Init Game" << std::endl;
  return (0);
}
