#ifndef FILES_H
#define FILES_H

#include <fstream>
#include <vector>
#include <string>

#include "status.h"

class Files
{
  public:
	Files() = delete;
	Files(const std::string& fname);
	~Files() = default;

	// Attributes
	Status file_status;

	// Methods

  protected:
	// Attributes
	std::string file_name;
	std::vector<std::string> file_content;

	// Methods
};

class Readf: public Files
{
  public:
		Readf() = delete;
		Readf(const std::string& fname);
		~Readf() = default;

		// Attributes

		// Methods
		std::vector<std::string> get_content() const;

  private:
	// Attributes

	// Methods
	void get_file_content();
};

#endif // FILES_H
