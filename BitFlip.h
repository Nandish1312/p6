#ifndef BitFlip_H
#define BitFlip_H

#include "Mutator.h"
#include "Individual.h"

#include <iostream>
#include <string>

class BitFlip : public Mutator 

{
    
public:

Individual* mutate(Individual* list, int k);

private:

int list_lamba;

int end_digit;

};
#endif


