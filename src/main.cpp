#include <iostream>
#include <string>
#include <string_view>

//#include "tof.h"
#include "args.h"

void tof_interactive_mode()
{
	std::cout << "Not yet implemented!\n";
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		tof_interactive_mode();

		return 0;
	}

	std::vector<std::string_view> arguments(argv + 1, argv + argc);

    return 0;
}
