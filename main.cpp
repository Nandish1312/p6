#include <iostream>
#include <string>

#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k)

{

Individual* result=mPtr->mutate(indPtr,k);

return result;

}

int main(int argc, char const *argv[]) 

{
    

string binarystr1;

string binarystr2;

int k1;

int k2;

std::cin >> binarystr1;

std::cin >> k1;

std::cin >> binarystr2;

std::cin >> k2;

Individual *individual1 = new Individual(binarystr1);

Mutator *mutator1= new BitFlip();

Individual *individual2=execute(individual1,mutator1,k1);

Individual *individual3 =new Individual(binarystr2);

Mutator *mutator2 = new Rearrange();

Individual *individual4=execute(individual3,mutator2,k2);

string mutated_string=individual2->getString();

int lengthOfMS=individual2->getLength();

for (int i = 0; i < lengthOfMS; i++) 

{
    
cout << mutated_string[i];

}

std::cout << " ";

string R = individual4->getString();

int max=individual4->getMaxOnes();

int lengthOfRearrangeList=individual4->getLength();

for (int i = 0; i < lengthOfRearrangeList; i++) 

{
    
std::cout << R[i];

}

std::cout << " ";

std::cout << max << '\n';

return 0;

}
