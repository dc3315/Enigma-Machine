#ifndef ENIGMA_HPP_
#define ENIGMA_HPP_
#include "Utilities.hpp"
#include "Plugboard.hpp"
#include "Rotorboard.hpp"
#include "Enigma.hpp"
#include "Encoder.hpp"
#include "Reflector.hpp"
#include <memory>

class Enigma: public Encoder
{
private:
	std::shared_ptr<Plugboard> plugboard;
	std::shared_ptr<Rotorboard> rotorboard;
	std::shared_ptr<Reflector> reflector;
public:
	Enigma(std::shared_ptr<Plugboard>& plugboard,
			std::shared_ptr<Rotorboard>& rotorboard);
	void encode(int& current_value);
};

#endif
