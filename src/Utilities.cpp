#include "Utilities.hpp"

bool file_exists(const char* filename)
{
	std::ifstream ifile(filename);
	return ifile.is_open();
}
