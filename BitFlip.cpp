#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>
#include "BitFlip.h"
using namespace std;
// read the binary string and “flips” the k-th binary digit.
Individual* BitFlip::mutate(Individual* list, int k){
//first I need the lengthOfList which is also the size of the circle
lengthOfList=list->getLength();
//using reminder to get the position
reminder=k%lengthOfList;
//if the reminder is 0 then we need to choose the last one
if (reminder==0) {
reminder=lengthOfList-1;
}
//else we need to subtract the reminder to get the right position
else{
reminder=reminder-1;
}
//call the flipBit function in Individual
list->flipBit(reminder);
//return a new list
return list;
}