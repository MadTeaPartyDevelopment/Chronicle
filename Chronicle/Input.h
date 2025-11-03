#pragma once
#include <string>
#include <vector>
#include "Console.h"

class Input
{

public:
	static std::string GetString(std::string message, ConsoleColor newColor);
	static int GetInteger(std::string message, int min, int max, ConsoleColor newColor);

private:
	static void ClearInputBuffer();
};