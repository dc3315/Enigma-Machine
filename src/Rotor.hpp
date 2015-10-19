#ifndef ROTOR_HPP_
#define ROTOR_HPP_
#include "Utilities.hpp"

class Rotor: public Encoder, public ReverseEncoder
{
private:
	int count;
	std::unique_ptr<std::vector<int>> rotor_vals;
	std::unique_ptr<std::vector<int>> offsets;

public:
	Rotor(std::ifstream& file);
	int get_count();
	void rotate();
	void set_count(int value);
	void encode(int& current_value);
	void reverse_encode(int& current_value);
};

#endif
