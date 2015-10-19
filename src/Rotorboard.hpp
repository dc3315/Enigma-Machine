#ifndef ROTORBOARD_HPP_
#define ROTORBOARD_HPP_
#include "Rotor.hpp"
#include "Reflector.hpp"
#include "Encoder.hpp"
#include <memory>
#include <vector>

class Rotorboard: public Encoder
{
private:
	std::unique_ptr<Reflector> reflector;
	std::shared_ptr<std::vector<std::shared_ptr<Rotor>>>rotors;
public:
	Rotorboard(std::shared_ptr<std::vector<std::shared_ptr<Rotor>>>& rotors);
	void encode(int& current_value);
	void rotate_rotors(int& index);
	void encode_forwards(int& current_value);
	void encode_backwards(int& current_value);
};

#endif
