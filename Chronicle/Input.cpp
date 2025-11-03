#include "Input.h"
#include <iostream>

using namespace std;


string Input::GetString(string message, ConsoleColor newColor)
{
	Console::SetForegroundColor(newColor);
	cout << "\n" << message << " ";
	string usersInput;
	Console::SetForegroundColor(Green);
	getline(cin, usersInput);
	return usersInput;
}

int Input::GetInteger(string message, int min, int max, ConsoleColor newColor)
{
	Console::SetForegroundColor(newColor);
	int number = 0;
	while (true)
	{
		cout << "\n" << message;
		Console::SetForegroundColor(Green);
		if (cin >> number && number >= min && number <= max)
		{
			ClearInputBuffer();
			break;
		}
		ClearInputBuffer();
		Console::SetForegroundColor(Red);
		cout << "\nInvalid number.\n";
		Console::SetForegroundColor(Yellow);
	}
	return number;
}

void Input::ClearInputBuffer()
{
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}