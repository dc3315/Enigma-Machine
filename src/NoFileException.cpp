#include "NoFileException.hpp"

NoFileException::NoFileException() :
	EnigmaException("One or more files invoked do not exist.") {}

