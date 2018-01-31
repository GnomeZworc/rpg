#ifndef __RACE_HH__
# define __RACE_HH__

# include <map>
# include <string>

class Race
{
  std::map<std::string, std::string> _list;

  std::string _id;
  std::string _name;
  std::string _picture;
  std::string _history;

public:
  Race();
  Race &operator=(Race const &);
  Race(std::map<std::string, std::string> &);
  Race(Race const &);
  ~Race();

  std::string const & getId() const;
  std::map<std::string, std::string> const & getList() const;
};

#endif // !__RACE_HH__
