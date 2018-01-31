#include "Race.hh"

Race::Race(){

}

Race &Race::operator=(Race const &elem){
  _list = elem.getList();
  _id = _list["ID"];
  _picture = _list["PICTURE"];
  _name = _list["NAME"];
  _history = _list["HISTORY"];
  return (*this);
}

Race::Race(std::map<std::string, std::string> &parse){
  _id = parse["ID"];
  _picture = parse["PICTURE"];
  _name = parse["NAME"];
  _history = parse["HISTORY"];
  _list = parse;
}

Race::Race(Race const &elem){
    _id = elem.getId();
    _list = elem.getList();
}

Race::~Race(){

}

std::string const & Race::getId() const {
  return (_id);
}

std::map<std::string, std::string> const & Race::getList() const {
  return (_list);
}
