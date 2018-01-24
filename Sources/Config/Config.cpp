#include "Config.hh"

#include <iostream>

std::pair<std::string, std::string> Config::split(std::string const &s)
{
  std::pair<std::string, std::string> ret;
}

Config::Config()
{
  std::fstream fs;
  std::string s;

  fs.open(_cfile.c_str(), std::ios::in);

  while (std::getline(fs, s)) { _tfile.push_back(s); }
  for (auto elem : _tfile){

    std::istringstream iss(elem);

    do {
      std::string subs;
      iss >> subs;
      std::cout << "start" << std::endl;
      std::cout << subs << std::endl;
      std::cout << "endl" << std::endl;
    } while (iss);
  }
  fs.close();
}

Config::~Config()
{

}
