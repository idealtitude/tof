#include "files.h"

Files::Files(const std::string& fname):
	file_status(), file_name(fname)
{}

Readf::Readf(const std::string& fname):
	Files(fname)
{
	get_file_content();
}

std::vector<std::string> Readf::get_content() const
{
	return file_content;
}

void Readf::get_file_content()
{
	std::string line;
	std::fstream fd;
	fd.open(file_name, std::ios::in);

	if (fd.is_open())
	{
		while (std::getline(fd, line))
		{
			file_content.push_back(line);
		}

		fd.close();
		return;
	}

	file_status.set_(false, "\033[31mError:\033[0m failed to open file!");
	return;
}
