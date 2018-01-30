#include "listRace.hh"
#include "readFiles.hpp"

listRace::listRace() {

}

listRace::~listRace() {

}

void listRace::setSource(std::string const &elem) {
  _source = elem;
}

void listRace::work() {
  _listRace = readFiles::read(_source);
}

std::string const & listRace::getId() const {
  return (_id);
}
