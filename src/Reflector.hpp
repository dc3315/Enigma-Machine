#ifndef REFLECTOR_HPP_
#define REFLECTOR_HPP_
#include "Utilities.hpp"

class Reflector: public Encoder
{
public:
	void encode(int& current_char);
};

#endif
