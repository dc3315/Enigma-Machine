#ifndef UTILITIES_HPP_
#define UTILITIES_HPP_
#include "ReverseEncoder.hpp"
#include "Encoder.hpp"
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <memory>

const unsigned short MIN_ARGS = 2;
const unsigned short ALPH_OFFSET = 65;
const unsigned short ONE_OFFSET = 1;
const unsigned short REFLECTOR_OFFSET = 13;
const unsigned short ALPHABET_SIZE = 26;

bool file_exists(const char* filename);

#endif
