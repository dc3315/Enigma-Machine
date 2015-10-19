#include "WrongCharException.hpp"

WrongCharException::WrongCharException() :
	EnigmaException("The given character was not an upper case letter.") {}

