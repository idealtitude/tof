#include "args.h"

Args::Args(const std::vector<std::string_view>& args_):
	args_status(), arguments(args_);
{}

void Args::parse_args()
{
	std::string string_input;
	std::string file_input;
	std::string file_output;
	bool get_string = false;
	bool get_file_input = false;
	bool get_file_output = false;
	bool inplace = false;

	for (csont auto& arg: arguments)
	{
		if (arg == "-s")
		{
			get_string = true;
			continue;
		}

		if (arg == "-f")
		{
			get_file_input = true;
			continue;
		}

		if (get_string && !get_file)
		{
			string_input.append(' ');
			string_input.append(arg);
			continue;
		}

		if (!get_string && get_file_input)
		{
			file_input = arg;
			get_file_input = false;
			continue;
		}

		if (arg == "-i" && !get_string)
		{
			inplace = true;
			continue;
		}

		if (arg == "-0")
		{
			get_file_output = true;
			continue;
		}

		if (get_file_output)
		{
			file_output = arg;
			continue;
		}
	}
}
