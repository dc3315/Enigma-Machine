#ifndef ENIGMAEXCEPTION_HPP_
#define ENIGMAEXCEPTION_HPP_
#include <exception>
#include <string>
#include <iostream>

class EnigmaException
{
protected:
	std::string message;
	EnigmaException(std::string message);
	~EnigmaException() throw () {}
	const char* what() const throw ();
};

#endif
