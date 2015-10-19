#ifndef MISSINGARGUMENTSEXCEPTION_HPP_
#define MISSINGARGUMENTSEXCEPTION_HPP_
#include "EnigmaException.hpp"

class MissingArgumentsException: public EnigmaException
{
public:
	MissingArgumentsException();
};

#endif
