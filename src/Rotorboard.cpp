#include "Rotorboard.hpp"
#include "Utilities.hpp"
#include "Rotor.hpp"

Rotorboard::Rotorboard(std::shared_ptr<std::vector<std::shared_ptr<Rotor>>>& rotors)
{
	reflector = std::unique_ptr<Reflector> (new Reflector());
	this -> rotors = rotors;
}

void Rotorboard::rotate_rotors(int& index)
{
	if (index + 1 > (int) rotors->size())
	{
		return;
	}
	(*rotors)[index]->rotate();
	if ((*rotors)[index]->get_count() - ALPHABET_SIZE == 0)
	{
		(*rotors)[index]->set_count(0);
		rotate_rotors(++index);
	}
}

void Rotorboard::encode(int& current_value)
{
	if (rotors->size() > 0)
	{
		encode_forwards(current_value);
		reflector->encode(current_value);
		encode_backwards(current_value);
		int index = 0;
		rotate_rotors(index);

	}
	else
	{
		reflector->encode(current_value);
	}
}

void Rotorboard::encode_forwards(int& current_value)
{
	for (int i = 0; i < (int) rotors->size(); i++)
	{
		(*rotors)[i]->encode(current_value);
	}
}

void Rotorboard::encode_backwards(int& current_value)
{
	for (int i = rotors->size() - 1; i >= 0; i--)
	{
		(*rotors)[i]->reverse_encode(current_value);
	}
}
