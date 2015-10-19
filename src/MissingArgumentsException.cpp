#include "MissingArgumentsException.hpp"

MissingArgumentsException::MissingArgumentsException() :
	EnigmaException("One argument or more are missing.") {}
