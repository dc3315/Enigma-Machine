#include "EnigmaException.hpp"

EnigmaException::EnigmaException(std::string message) :
	message(message)
{
	std::cout << message << std::endl;
}

const char* EnigmaException::what() const throw ()
{
	return message.c_str();
}


