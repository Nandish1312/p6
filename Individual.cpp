#include <iostream>
#include <string>
#include "Individual.h"
using namespace std;
//constructor
Individual::Individual (string bin_str){
length=bin_str.size();
// std::cout << length << '\n';
for (int i = 0; i < length; i++) {
copyOfList[i]='0';
}
binaryString=bin_str;
}
//outputs a binary string representation
string Individual::getString(){
return binaryString;
}
//returns the bit value at position pos
int Individual::getBit(int pos){
// return binaryString[pos];
if (pos>length) {
return -1;
}
if (binaryString[pos]=='1') {
return 1;
}

return 0;

}
// get the certain bit and flip the bit value.
void Individual::flipBit(int pos){
if (binaryString[pos]=='1') {
binaryString[pos]='0';
}
else{
binaryString[pos]='1';
}
}
//returns the longest consecutive sequence of ‘1’ digits in the list
int Individual::getMaxOnes(){
//initialize an variable called Maxones
//store the Maximum
int Maxones=0;
//initialize an variable called sumOnes to
//store the sumOnes ineach iteration
int sumOnes=0;
for (int i = 0; i < length; i++) {
if (binaryString[i]=='1') {
sumOnes+=1;
}
if (sumOnes>Maxones) {
Maxones=sumOnes;
}
else if (binaryString[i]=='0') {
sumOnes=0;
}
}


return Maxones;
}
// returns the length of the list
int Individual::getLength(){
return length;
}
// rearrange the order of binaryString
void Individual::rearrangeBit(int pos){

int count=0;
for (int i = 0; i < length; i++) {
if (i<length-pos) {
rearrange_binaryString[i]=binaryString[pos+i];

count++;
}
else {
rearrange_binaryString[i]=binaryString[i-count];

}
}

for (int i = 0; i < length; i++) {
binaryString[i]=rearrange_binaryString[i];
}
}