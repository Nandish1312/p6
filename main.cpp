#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;
Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {
Individual* result=mPtr->mutate(indPtr,k);
return result;
}
int main(int argc, char const *argv[]) {
// initialize the input
string binarystr1;
string binarystr2;
int k1;
int k2;
// input the value(string and the position)
std::cin >> binarystr1;
std::cin >> k1;
std::cin >> binarystr2;
std::cin >> k2;

//implement the first objective by BitFlip class
//first we need to create a object of Individual call individual1
Individual *individual1 = new Individual(binarystr1);
//and we also need to create an object of BitFlip which is the subclass of Mutator
//this is the polymorphism
Mutator *mutator1= new BitFlip();
//call the execute function to process it, we can get a new binary DNA string
Individual *individual2=execute(individual1,mutator1,k1);

// implement the second one by using the rearrange class
Individual *individual3 =new Individual(binarystr2);
//initialize the object of Rearrange
Mutator *mutator2 = new Rearrange();
//call the execute function to process it, we can get a new binary DNA string
Individual *individual4=execute(individual3,mutator2,k2);


//this is the section for printing out the output
//first loop is for the BitFlip
string mutated_string=individual2->getString();
int lengthOfMS=individual2->getLength();
for (int i = 0; i < lengthOfMS; i++) {
cout << mutated_string[i];
}
std::cout << " ";


//second loop is for the rearrangeBit
string R = individual4->getString();
// get the max 1's Of RearrangeList here
int max=individual4->getMaxOnes();
int lengthOfRearrangeList=individual4->getLength();
for (int i = 0; i < lengthOfRearrangeList; i++) {
std::cout << R[i];
}
std::cout << " ";
// print out the result of the 1's Of RearrangeList
std::cout << max << '\n';
return 0;
}