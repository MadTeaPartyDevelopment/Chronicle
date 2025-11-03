//Copyright © Mad Tea Party Development 2025
//This software is proprietary and may not be 
//copied, distributed, or used for commercial purposes 
//without explicit permission from the author.
//Demo version provided for evaluation only. Full version available at [Link To Be Added].

#include <iostream>
#include <windows.h>
#include <cwchar>

#include "Console.h"
#include "Input.h"

using namespace std;

void enableANSI()
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwMode = 0;
	GetConsoleMode(hOut, &dwMode);
	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	SetConsoleMode(hOut, dwMode);
}

void SetConsoleFontSize(int sizeY, const wchar_t* fontName = L"Consolas") {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;        // auto width
	cfi.dwFontSize.Y = sizeY;    // height in pixels
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, fontName);

	SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
}

static void ShowLicense()
{
	Console::SetForegroundColor(Yellow);
	cout << "Copyright © Mad Tea Party Development 2025" << endl
		<< endl
		<< "This software is proprietary and may not be copied, modified, distributed, or used for commercial purposes without explicit permission from the author." << endl
		<< "Demo version provided for evaluation only.Full version available now!" << endl
		<< endl
		<< endl;
}

int main()
{
    std::cout << "Hello World!\n";
}