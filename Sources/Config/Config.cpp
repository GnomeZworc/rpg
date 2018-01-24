#include "Config.hh"
#include <iostream>

Config::Config()
{
  std::fstream fs;
  std::string s;

  fs.open(_cfile.c_str(), std::ios::in);

  while (std::getline(fs, s)) { _tfile.push_back(s); }
  for (auto elem : _tfile){
    std::cout << elem << std::endl;
  }
  fs.close();
}

Config::~Config()
{

}
