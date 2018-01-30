#include "Config.hh"
#include "../Files/parseFile.hpp"

Config::Config() {
  _cmap = parseFile::parse(_cfile.c_str());
}

Config::~Config() {}

std::string const & Config::getElem(std::string const & focus) {
  return (this->_cmap[focus]);
}
