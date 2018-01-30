#ifndef __PARSE_FILE_HPP__
# define __PARSE_FILE_HPP__

# include <map>
# include <string>
# include <fstream>
# include <sstream>

class parseFile{
  parseFile() {}
  ~parseFile() {}

public:
  static std::map<std::string, std::string> parse(std::string const &file){
    std::fstream fs;
    std::string s;

    fs.open(file.c_str(), std::ios::in);

    std::map<std::string, std::string>  map;

    while (std::getline(fs, s)) {
      std::string first;
      std::string second;

      for (auto & elem : s){
        if (elem == '='){
          elem = ' ';
        }
      }

      std::istringstream iss(s);
      iss >> first;
      iss >> second;

      map[first] = second;
    }
    fs.close();
    return map;
  }
};

#endif // !__PARSE_FILE_HPP__
