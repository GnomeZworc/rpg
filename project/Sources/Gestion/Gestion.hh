#ifndef __GESTION_HH__
# define __GESTION_HH__

# include "Config.hh"
# include "listRace.hh"

class Gestion
{
  listRace _races;

public:
  Gestion(Config &);
  ~Gestion();
};

#endif // !__GESTION_HH__
