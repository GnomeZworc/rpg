#include "Gestion.hh"

Gestion::Gestion(Config &conf){
  _races.setSource(
    conf.getElem(_races.getId())
  );
  _races.work();
}

Gestion::~Gestion(){

}
