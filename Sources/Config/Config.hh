#ifndef __CONFIG_HH__
# define __CONFIG_HH__

# include <string>
# include <map>

class Config
{
  const std::string _cfile = "./config/config.txt";
  std::map<std::string, std::string> _cmap;

public:
  Config();
  ~Config();

  std::string const & getElem(std::string const &);
};

#endif //!__CONFIG_HH__
