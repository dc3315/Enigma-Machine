#include "Utilities.hpp"
#include <iostream>
#include <memory>
#include <iterator>
#include <algorithm>
#include <ctype.h>
#include "Enigma.hpp"
#include "Plugboard.hpp"
#include "Rotorboard.hpp"
#include "MissingArgumentsException.hpp"
#include "WrongCharException.hpp"
#include "NoFileException.hpp"
#include "Rotor.hpp"

int main(int argc, char** argv)
{
	if (argc < MIN_ARGS)
	{
		throw MissingArgumentsException();
	}
	for (int i = 0; i < argc; i++)
	{
		char* filename = *(argv + i);
		if (!file_exists(filename))
		{
			throw NoFileException();
		}

	}
	std::shared_ptr<std::vector<std::shared_ptr<Rotor>>>rotors(new std::vector<std::shared_ptr<Rotor>>);
	if (argc == MIN_ARGS)
	{
		goto rotorboard;
	}
	else
	{
		for (int i = ONE_OFFSET; i <= argc - MIN_ARGS; i++)
		{
			std::ifstream rotor_name(*(argv + i));
			std::shared_ptr<Rotor> rotor(new Rotor(rotor_name));
			rotors->push_back(rotor);
		}
	}
	rotorboard:
	std::shared_ptr<Rotorboard> rotorboard(new Rotorboard(rotors));
	std::ifstream pb_file(*(argv + argc - ONE_OFFSET));
	std::shared_ptr<Plugboard> plugboard(new Plugboard(pb_file));
	std::unique_ptr<Enigma> enigma_machine(new Enigma(plugboard, rotorboard));
	char c;
	std::cin >> std::ws;
	while (!std::cin.eof())
	{
		std::cin >> c;
		if (!(isalpha(c) && isupper(c)))
		{
			throw WrongCharException();
			exit(EXIT_FAILURE);
		}
		else
		{
			int char_val = c - ALPH_OFFSET;
			enigma_machine->encode(char_val);
			std::cout << (char) (char_val + ALPH_OFFSET);
		}
		std::cin >> std::ws;
	}

	std::cout << std::endl;
	return 0;
}
