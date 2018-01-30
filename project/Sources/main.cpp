#include <iostream>
#include "./Config/Config.hh"
#include "./Gestion/Gestion.hh"

int main(int ac, char** av, char** env)
{
  std::cout << "Start - Init Game" << std::endl;
  Config conf;
  Gestion gest(conf);
  std::cout << "End - Init Game" << std::endl;
  return (0);
}
