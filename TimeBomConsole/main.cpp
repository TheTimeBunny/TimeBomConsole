#include "termcolors.h"
#include <filesystem>
#include <fstream>
#include <iostream>

class Shell {
public:
  void help() {
    std::cout << BLUE << "TIMEBOM CONSOLE\n" << RESET;
    std::cout << "Commands:\n" << YELLOW;
    std::cout << "  help\n";
    std::cout << "  exit\n";
    std::cout << "  load\n";
    std::cout << RESET;
  }
};

// Tibe file class
class TibeFile {
public:
  void loadTibeFile() {
    std::cout << BOLDMAGENTA << "Loading .tibe archive...\n" << RESET;
  }
};

// Settings for the console and engine
class Settings {
public:
  class Screen {
  public:
    int frameRate = 60;
    int screenWidth = 1200;
    int screenHeight = 800;
  };

  class Sound {
    int volume = 100;
  };

  class TibeFiles {
    std::string tibeDir;
    std::string tibeName;
  };
};

// Run a command from function parameter
TibeFile tibe;
Settings consoleSettings;
Shell shell;

int main() {
  bool shellIsNotClosed = true; // I really like verbose-ish naming schemes
  std::cout << "TimeBom Console\n";
  while (shellIsNotClosed) {
    std::cout << BLUE << "> " << RESET;
    std::string command;
    std::getline(std::cin, command);
    if (command == "exit") {
      shellIsNotClosed = false;
    } else if (command == "help") {
      shell.help();
    } else if (command == "load") {
      tibe.loadTibeFile();
    }
  }
}