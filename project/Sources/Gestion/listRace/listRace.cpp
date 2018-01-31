#include "listRace.hh"
#include "readFiles.hpp"
#include "parseFiles.hpp"

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
    auto race = parseFiles::parse(elem);
    Race c_race(race);
    _listRace[c_race.getId()] = c_race;
  }
}

std::string const & listRace::getId() const {
  return (_id);
}
