#ifndef Individual_H
#define Individual_H
#include <iostream>
#include <string>
class Individual {
private:
//define a string called binaryString
//stores the value of genes
std::string binaryString;
int length;
std::string copyOfList;
std::string rearrange_binaryString;

public:
//constructor
Individual (std::string bin_str);
//outputs a binary string representation
std::string getString();
//returns the bit value at position pos
int getBit(int pos);
// get the certain bit and flip the bit value.
void flipBit(int pos);
//returns the longest consecutive sequence of ‘1’ digits in the list
int getMaxOnes();
// returns the length of the list
int getLength();
// rearrange the order of binaryString
void rearrangeBit(int pos);
// return the rearrange string
// std::string getReString();
};
#endif

