#include "status.h"

Status::Status()
{
	val = true;
	msg = "";
}

void Status::set_(bool val_, const std::string& msg_)
{
	val = val_;
	msg = msg_;
}
