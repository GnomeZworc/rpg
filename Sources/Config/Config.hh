#ifndef __CONFIG_HH__
# define __CONFIG_HH__

# include <fstream>
# include <string>
# include <vector>

class Config
{
  const std::string _cfile = "./config/config.txt";
  std::vector<std::string> _tfile;
public:
  Config();
  ~Config();
};

#endif //!__CONFIG_HH__
