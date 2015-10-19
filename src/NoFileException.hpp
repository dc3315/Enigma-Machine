#ifndef NOFILEEXCEPTION_HPP_
#define NOFILEEXCEPTION_HPP_
#include "EnigmaException.hpp"
#include <string>

class NoFileException: public EnigmaException
{
public:
	NoFileException();
};

#endif
