#ifndef USER_INPUT_H
#define USER_INPUT_H

#include <map>
#include <string>

struct UserInput
{
  public:
	UserInput();
	~UserInput() = default;

	// Attributes
	std::map<std::string, std::string> params;

	// Methods
};

#endif // USER_INPUT_H
