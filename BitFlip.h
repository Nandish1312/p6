#ifndef BitFlip_H
#define BitFlip_H
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlip : public Mutator {
private:
// initialize the size of the DNA
int lengthOfList;
//initialize the reminder refer
// to the postion we need to mutate
int reminder;

public:
Individual* mutate(Individual* list, int k);
};
#endif