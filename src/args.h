#ifndef ARGS_H
#define ARGS_H

#include <vector>
#include <string>
#include <string_view>

#include "status.h"
#include "uin.h"

class Args
{
  public:
	Args() = delete;
	Args(const std::vector<std::string_view>& args_);
	Args() = default;
  // Attributes
  Status args_status;
  UserInput user_input;

  //Methods

  private:
  // Attributes
  std::vector<std::string_view> arguments;

  //Methods
  void parse_args();
};

#endif // ARGS_H
