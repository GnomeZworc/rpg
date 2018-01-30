#ifndef __READ_FILES_HPP__
# define __READ_FILES_HPP__

# include <string>
# include <fstream>
# include <vector>

class readFiles
{
  readFiles() {}
  ~readFiles() {}
public:
  static std::vector<std::string> read(std::string const &file){
    std::fstream fs;
    std::string s;
    std::vector<std::string> ret;

    fs.open(file.c_str(), std::ios::in);

    while (std::getline(fs, s)) {
      ret.push_back(s);
    }

    fs.close();

    return (ret);
  }
};

#endif // !__READ_FILES_HPP__
