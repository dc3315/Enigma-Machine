#include "Enigma.hpp"

Enigma::Enigma(std::shared_ptr<Plugboard>& plugboard,
		std::shared_ptr<Rotorboard>& rotorboard) :
		plugboard(plugboard), rotorboard(rotorboard)
{
	reflector = std::shared_ptr<Reflector>(new Reflector());
}

void Enigma::encode(int& current_value)
{
	plugboard->encode(current_value);
	rotorboard->encode(current_value);
	plugboard->encode(current_value);
}

