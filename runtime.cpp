#include <iostream>
#include <string>
#include "Individual.h"
using namespace std;
//constructor
Individual::Individual (string bin_str){
length=bin_str.size(); //O(1)
// std::cout << length << '\n';
for (int i = 0; i < length; i++) { //O(n)
copyOfList[i]='0'; //O(1)
}
binaryString=bin_str; //O(1)
}
//////////////////////////////////////T(n)=3*O(1)+O(n)=O(n);

//outputs a binary string representation
string Individual::getString(){
return binaryString;
}

T(n)=O(1)=O(1)
//returns the bit value at position pos
int Individual::getBit(int pos){
// return binaryString[pos];
if (pos>length) { //O(1)
return -1;
}
if (binaryString[pos]=='1') { //O(1)
return 1;
}

return 0; //O(1)

}

void Individual::flipBit(int pos){
if (binaryString[pos]=='1') {
binaryString[pos]='0';
}
else{
binaryString[pos]='1';
}
}
////////////////////////////////O(1)

int Individual::getMaxOnes(){

int Maxones=0; //O(1)

int sumOnes=0;
for (int i = 0; i < length; i++) { //O(n)
if (binaryString[i]=='1') {
sumOnes+=1; //O(1)
}
if (sumOnes>Maxones) {
Maxones=sumOnes; //O(1)
}
else if (binaryString[i]=='0') {
sumOnes=0; //O(1)
}
}

return Maxones; //O(1)
}


// returns the length of the list
int Individual::getLength(){
return length; //O(1)
}
// rearrange the order of binaryString
void Individual::rearrangeBit(int pos){

int count=0; //O(1)
for (int i = 0; i < length; i++) { //O(n)
if (i<length-pos) {
rearrange_binaryString[i]=binaryString[pos+i];
//O(1)
count++;
}
else {
rearrange_binaryString[i]=binaryString[i-count]; //O(1)
// std::cout << rearrange_binaryString[i];
}
}
// binaryString=rearrange_binaryString;
for (int i = 0; i < length; i++) { //O(n)
binaryString[i]=rearrange_binaryString[i];
}
}
//T(n)=2*O(n)+O(1)+O(1)+O(1)+O(1)=O(n)

this is the BitFlip class
// read the binary string and “flips” the k-th binary digit.
Individual* BitFlip::mutate(Individual* list, int k){
lengthOfList=list->getLength(); //O(1)

reminder=k%lengthOfList; //O(1)
if (reminder==0) {
reminder=lengthOfList-1; //O(1)
}
else{
reminder=reminder-1; //O(1)
}
list->flipBit(reminder); //O(1)

return list; //O(1)
}
//so the complexity of the BitFlip function is T(n)=O(1)*6=O(1)


//this is the BitFlip Prob class
Individual* BitFlipProb::mutate(Individual* list, int k){
p=0.5; //O(1)
return list; //O(1)
}


//////this is the rearrange class
Individual* Rearrange::mutate(Individual* list, int k){
lengthOfList=list->getLength(); //O(1)
reminder=k%lengthOfList; //O(1)
if (reminder==0) {
reminder=lengthOfList-1; //O(1)
}
else{
reminder=reminder-1; //O(1)
}
list->rearrangeBit(reminder); //O(1)
return list; //O(1)
}
//so the complexity of the BitFlipProb is T(n)=O(1)

Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {
Individual* result=mPtr->mutate(indPtr,k); //O(1)
return result;
}
int main(int argc, char const *argv[]) {
// initialize the input
string binarystr1; //O(1)
string binarystr2; //O(1)
int k1; //O(1)
int k2; //O(1)
// input the value(string and the position)
std::cin >> binarystr1; //O(1)
std::cin >> k1; //O(1)
std::cin >> binarystr2; //O(1)
std::cin >> k2; //O(1)


Individual *individual1 = new Individual(binarystr1); //O(1)
Mutator *mutator1= new BitFlip(); //O(1)
Individual *individual2=execute(individual1,mutator1,k1);//O(1)
Individual *individual3 =new Individual(binarystr2); //O(1)
Mutator *mutator2 = new Rearrange(); //O(1)
Individual *individual4=execute(individual3,mutator2,k2); //O(1)

string mutated_string=individual2->getString(); //O(1)
int lengthOfMS=individual2->getLength(); //O(1)
for (int i = 0; i < lengthOfMS; i++) { //O(n)
cout << mutated_string[i]; //O(1)
}
std::cout << " "; //O(1)

string R = individual4->getString(); //O(1)
int max=individual4->getMaxOnes(); //O(1)
int lengthOfRearrangeList=individual4->getLength(); //O(1)
for (int i = 0; i < lengthOfRearrangeList; i++) { //O(n)
std::cout << R[i]; //O(1)
}
std::cout << " "; //O(1)
std::cout << max << '\n'; //O(1)
return 0; //O(1)
}
//the complexity of the main function is T(n)=O(n)