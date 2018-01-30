#ifndef __PARSE_FILE_HPP__
# define __PARSE_FILE_HPP__

# include <map>
# include <string>
# include <fstream>
# include <sstream>
# include "readFiles.hpp"

class parseFile{
  parseFile() {}
  ~parseFile() {}

public:
  static std::map<std::string, std::string> parse(std::string const &file){
    std::fstream fs;
    std::string s;

    auto tfile = readFiles::read(file);

    std::map<std::string, std::string>  map;

    for (auto line : tfile) {
      std::string first;
      std::string second;

      for (auto & elem : line){
        if (elem == '='){
          elem = ' ';
        }
      }

      std::istringstream iss(line);
      iss >> first;
      iss >> second;

      map[first] = second;
    }
    return map;
  }
};

#endif // !__PARSE_FILE_HPP__
