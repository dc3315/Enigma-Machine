#include "Plugboard.hpp"
#include <algorithm>
#include <vector>
#include <iostream>

Plugboard::Plugboard(std::ifstream& file)
{
	plugboard_pairs = std::unique_ptr<std::vector<int>>(new std::vector<int>());
	std::copy(std::istream_iterator<int>(file), std::istream_iterator<int>(),
			std::back_inserter(*plugboard_pairs));
}

void Plugboard::encode(int& current_value)
{
	int i = 0;
	for (; i < (int) plugboard_pairs->size()
					&& (*plugboard_pairs)[i] != current_value; i++){}
	if (i != (int) plugboard_pairs->size())
	{
		int index = (i % 2 == 0) ? i + 1 : i - 1;
		current_value = (*plugboard_pairs)[index];
	}
}

