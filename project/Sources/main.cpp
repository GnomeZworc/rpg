#include <iostream>
#include "Config.hh"
#include "Gestion.hh"

int main(int ac, char** av, char** env)
{
  static_cast<void>(ac);
  static_cast<void>(av);
  static_cast<void>(env);

  std::cout << "Start - Init Game" << std::endl;
  Config conf;
  Gestion gest(conf);
  std::cout << "End - Init Game" << std::endl;
  return (0);
}
