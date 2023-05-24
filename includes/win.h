/***************************************************************************************
    File: win.h
    Author: Navid Dezashibi
    Initial Creation Date: 2023-05-24
    Contact: navid@dezashibi.com
    Website: https://dezashibi.com
    License:
    Please refer to the LICENSE file, repository or website for more information about
    the licensing of this work. If you have any questions or concerns,
    please feel free to contact me at the email address provided above.
 ***************************************************************************************   
    << OTHER DESCRIPTIONS >>
 **************************************************************************************/
#pragma once

#if defined(_WIN32)

#include <Windows.h>

void enable_raw_mode()
{
	// Enable raw mode on Windows using windows.h
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode = 0;
	GetConsoleMode(hStdin, &mode);
	mode &= ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT | ENABLE_PROCESSED_INPUT);
	mode &= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	mode &= ~ENABLE_PROCESSED_OUTPUT;
	SetConsoleMode(hStdin, mode);
}

void disable_raw_mode()
{
	// Disable raw mode on Windows using windows.h
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode = 0;
	GetConsoleMode(hStdin, &mode);
	SetConsoleMode(hStdin, mode & (ENABLE_ECHO_INPUT));
}

#endif