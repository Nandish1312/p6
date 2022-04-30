#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "Child.h"
using namespace std;


Individual * BitFlip::mutate(Individual * gene, int k){
    Individual * temp = gene;
    temp -> flipBit((k-1)%temp ->getLength());
    return temp;
}

BitFlipProb::BitFlipProb(double prob){
  p = prob;
}
Individual * BitFlipProb::mutate(Individual * gene, int k){
  return gene;
}

Individual * Rearrange::mutate(Individual * gene, int k){
  string str = "";
  string end = "";
  int n = (k-1)%gene->getLength();
  for (int i = n; i<gene -> getLength(); i++) {
    str += to_string(gene -> getBit(i));
  }
  for (int j = 0; j<n; j++) {
    end += to_string(gene ->getBit(j));
  }
  Individual * temp = new Individual(str+end);
  return temp;
}
