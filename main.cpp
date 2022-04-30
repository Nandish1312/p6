#include <iostream>
#include <string>
#include <sstream>
#include "Individual.h"
#include "Mutator.h"
#include "Child.h"
using namespace std;
Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
  Individual * temp = mPtr->mutate(indPtr, k);
  return temp;
}

int main(){
  string input;
  getline(cin, input);
  string array[4];
  int i = 0;
  stringstream ssin(input);
  while (ssin.good() && i < 4){
      ssin >> array[i];
      ++i;
  }

  Individual * binarystr1 = new Individual(array[0]);
  Individual * binarystr2 = new Individual(array[2]);
  int k1 = stoi(array[1]);
  int k2 = stoi(array[3]);

  Mutator * flip = new BitFlip();
  Mutator * rarng = new Rearrange();

  binarystr1 = flip -> mutate(binarystr1,k1);
  binarystr2 = rarng -> mutate(binarystr2, k2);

  cout<<binarystr1->getString()<<" "<<binarystr2->getString()<<" "<<binarystr2->getMaxOnes()<<endl;
  
  return 0;
}
