#ifndef __LISTRACE_HH__
# define __LISTRACE_HH__

# include <string>
# include <vector>

class listRace
{
  std::string const _id = "RACES";
  std::string _source;

  std::vector<std::string> _listRaceFiles;

public:
  listRace();
  ~listRace();

  void setSource(std::string const &);
  void work();
  std::string const & getId() const;
};

#endif // !__LISTRACE_HH__
