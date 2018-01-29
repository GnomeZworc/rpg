#include "Config.hh"

#include <iostream>

std::pair<std::string, std::string> Config::split(std::string &s) {
  std::string first;
  std::string second;

  for (auto & elem : s){
    if (elem == '='){
      elem = ' ';
    }
  }

  std::istringstream iss(s);
  iss >> first;
  iss >> second;

  std::pair<std::string, std::string> ret(first, second);
  return ret;
}

Config::Config() {
  std::fstream fs;
  std::string s;

  fs.open(_cfile.c_str(), std::ios::in);

  while (std::getline(fs, s)) {
    _cmap.insert(this->split(s));
  }
  fs.close();
}

Config::~Config() {

}

std::string const & Config::getElem(std::string const & focus) {
  return (this->_cmap[focus]);
}
