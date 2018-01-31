#include "Config.hh"
#include "parseFiles.hpp"

Config::Config() {
  _cmap = parseFiles::parse(_cfile.c_str());
}

Config::~Config() {}

std::string const & Config::getElem(std::string const & focus) {
  return (this->_cmap[focus]);
}
