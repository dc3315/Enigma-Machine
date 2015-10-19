#ifndef WRONGCHAREXCEPTION_HPP_
#define WRONGCHAREXCEPTION_HPP_
#include "EnigmaException.hpp"
#include <string>

class WrongCharException : public EnigmaException
{
public:
	WrongCharException();
};

#endif
