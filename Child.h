#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"

#ifndef BITFLIP_H
#define BITFLIP_H

using namespace std;

class BitFlip:public Mutator{
    public:
        Individual * mutate(Individual * gene, int k);
};
#endif //BITFLIP_H


#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

using namespace std;

class BitFlipProb:public Mutator{
    private:
        double p;
    public:
        BitFlipProb(double prob);
        Individual * mutate(Individual * gene, int k);
};
#endif //BITFLIPPROB_H


#ifndef REARRANGE_H
#define REARRANGE_H

using namespace std;

class Rearrange:public Mutator{
    public:
        Individual * mutate(Individual * gene, int k);
};
#endif //REARRANGE_H
