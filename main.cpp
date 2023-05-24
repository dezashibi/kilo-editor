#include <iostream>
#include "main.h"
#include <cctype>

int main()
{
	enable_raw_mode();

	char c;
	while (std::cin.read(&c, 1) && c != 'q')
	{
		if (std::iscntrl(c))
		{
			std::printf("%d\r\n", c);
		}
		else
		{
			std::printf("%d ('%c')\r\n", c, c);
		}
	}


	disable_raw_mode();
	return 0;
}
