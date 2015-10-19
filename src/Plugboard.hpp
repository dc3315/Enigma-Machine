#ifndef PLUGBOARD_HPP_
#define PLUGBOARD_HPP_
#include "Utilities.hpp"

class Plugboard: public Encoder
{
private:
	std::unique_ptr<std::vector<int>> plugboard_pairs;
public:
	Plugboard(std::ifstream& file);
	void encode(int& current_value);
};

#endif
