#ifndef Rearrange_H
#define Rearrange_H

#include <iostream>
#include <string>

#include "Mutator.h"
#include "Individual.h"

class Rearrange :public Mutator 

{
    
public:

Individual* mutate(Individual* list, int k);

private:

int list_lamba;

int end_digit;

};

#endif