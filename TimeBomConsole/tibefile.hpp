#include <fstream>
#include <iostream>

#include "termcolors.hpp"

class TB_TibeFile {
      public:
	std::string dir;
	std::string name;
	std::fstream tibe_config;

	void load();
};