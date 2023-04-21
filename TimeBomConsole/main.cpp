#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "settings.hpp"
#include "shell.hpp"
#include "termcolors.hpp"
#include "tibefile.hpp"

// Run a command from function parameter
TB_TibeFile tibe;
TB_Settings console_settings;
TB_Shell shell;

int main() {
	// Is the shell closed? If not, take input and do commands with it.
	bool shell_is_closed = false;

	console_settings.app_screen_config.screen_settings(800, 600, 60);
	std::cout << "display height: "
		  << console_settings.app_screen_config.screen_height << "\n";
	std::cout << "display width: "
		  << console_settings.app_screen_config.screen_width << "\n";

	while (!shell_is_closed) {
		std::cout << BLUE << "> " << RESET;
		std::string command;
		std::getline(std::cin, command);

		if (command == "exit") {
			shell_is_closed = true;
		} else if (command == "help") {
			shell.help();
		} else if (command == "load") {
			// TODO: Implement loading
		}
	}
}