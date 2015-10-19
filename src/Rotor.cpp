#include "Rotor.hpp"

Rotor::Rotor(std::ifstream& file) :
		count(0)
{
	rotor_vals = std::unique_ptr<std::vector<int>>(new std::vector<int>());
	offsets = std::unique_ptr<std::vector<int>>(new std::vector<int>());
	std::copy(std::istream_iterator<int>(file), std::istream_iterator<int>(),
			std::back_inserter(*rotor_vals));
	for (int i = 0; i < (int) rotor_vals->size(); i++)
	{
		const int current_offset = (*rotor_vals)[i] - i;
		offsets->push_back(current_offset);
	}
}

void Rotor::encode(int& current_value)
{
	current_value += (*offsets)[current_value];
	if (current_value < 0)
	{
		current_value += ALPHABET_SIZE;
	}
	current_value %= ALPHABET_SIZE;
}

int Rotor::get_count()
{
	return count;
}

void Rotor::set_count(int value)
{
	count = value;
}

void Rotor::reverse_encode(int& current_value)
{
	int tmp = current_value;
	if (tmp < 0)
	{
		tmp += ALPHABET_SIZE;
	}
	int i = 0;
	for (; i < (int) offsets->size(); i++)
	{
		int result_sum = (i + (*offsets)[i]);
		if (result_sum < 0)
		{
			result_sum += ALPHABET_SIZE;
		}
		result_sum %= ALPHABET_SIZE;
		if (result_sum == tmp)
		{
			break;
		}
	}
	count++;
	current_value = i;
}

void Rotor::rotate()
{
	std::rotate(offsets->begin(), offsets->begin() + 1, offsets->end());
}

