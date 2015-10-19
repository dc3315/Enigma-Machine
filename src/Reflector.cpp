#include "Reflector.hpp"

void Reflector::encode(int& current_char)
{
	current_char = (current_char + REFLECTOR_OFFSET) % ALPHABET_SIZE;
}
