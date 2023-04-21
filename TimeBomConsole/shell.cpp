#include "shell.hpp"

#include <fstream>
#include <iostream>

#include "termcolors.hpp"

void TB_Shell::help() {
	std::cout << BLUE << "TIMEBOM CONSOLE\n" << RESET;
	std::cout << "Commands:\n" << YELLOW;
	std::cout << "  help\n";
	std::cout << "  exit\n";
	std::cout << "  load\n";
	std::cout << RESET;
}

void TB_Shell::setup() {
	std::fstream config;
	std::fstream shell_info;
	config.open("config.txt");
	shell_info.open("shellinfo.txt");
}
