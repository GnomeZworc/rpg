#include "listRace.hh"
#include "readFiles.hpp"

#include <iostream>

listRace::listRace() {

}

listRace::~listRace() {

}

void listRace::setSource(std::string const &elem) {
  _source = elem;
}

void listRace::work() {
  _listRaceFiles = readFiles::read(_source);
  for (auto & elem : _listRaceFiles){
    std::string tmp = "./data/race/";
    tmp += elem;
    tmp += ".txt";
    elem = tmp;
  }
}

std::string const & listRace::getId() const {
  return (_id);
}
