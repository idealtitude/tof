#ifndef STATUS_H
#define STATUS_H

#include <string>

struct Status
{
 	Status();
	~Status() = default;

	// Attributes
	bool val;
	std::string msg;

	// Methods
	void set_(bool val_, const std::string& msg_);
};

#endif // STATUS_H
