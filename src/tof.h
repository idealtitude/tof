#ifndef TOF_H
#define TOF_H

class Tof
{
  public:
	Tof() = delete;
	Tof(const std::vector<std::string>& strings_in);
	Tof(const std::string& string_in);
	Tof() = default;
  // Attributes
  Status args_status;

  //Methods

  private:
  // Attributes
  std::vector<std::string> input_strings;
  std::string input_string;

  //Methods
  void parse_input();
};

#endif // TOF_H
