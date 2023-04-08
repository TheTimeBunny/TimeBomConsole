#include "include.h" //arguable easier

// Tibe file classe
class TibeFile
{
public:
	void load()
	{
		std::cout << "Loading .tibe archive...";
	}

public:
	void save()
	{
		std::cout << "Saving .tibe archive...";
		// We'll probably need to find something to handle archives like .zip
	}

public:
	void tibeMetaData()
	{ // I thought this could come in handy.
		std::cout << "Listing tibe metadata\n";
	}
};

// Settings for the console and engine
class Settings
{
public:
	class Screen
	{
	public:
		int frameRate = 60;
		int screenWidth = 1200;
		int screenHeight = 800;
	};

	class Sound
	{
		int volume = 100;
	};

	class TibeFiles
	{
		std::string tibeDir;
		std::string tibeName;
	};
};

// Take and return console input
std::string takeConsoleInput()
{
	std::string input;
	std::cout << "\n> ";
	getline(std::cin, input);
	return input;
}

// Run a command from function parameter
TibeFile tibe;
void runCommand(std::string c)
{
	if (c == "load")
	{
		tibe.load();
	}
	else if (c == "save")
	{
		tibe.save();
	}
}

int main()
{
	bool conti = true; // easier to change
	std::cout << "TimeBom Console\n";
	while (conti)
		runCommand(takeConsoleInput());
}