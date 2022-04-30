#ifndef Individual_H
#define Individual_H

#include <iostream>
#include <string>

class Individual

{

public:

Individual (std::string string_initial);

std::string getString();

void bit_rearrange(int placement);

int getLength();

int getMaxOnes();

int getBit(int placement);

void flipBit(int placement);


private:

std::string list_copy;

std::string bin_str;

std::string rearrange_bin_str;

int length;

};

#endif

