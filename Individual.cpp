#include <iostream>
#include <string>
#include "Individual.h"
using namespace std;

Individual::Individual(int length){
  string temp ="";
  for (int i = 0; i<length; i++){
      temp += "0";
  }
  binaryString = temp;
}

Individual::Individual(string DNA){
  binaryString = DNA;
}

string Individual::getString(){
  return binaryString;
}
int Individual::getBit(int pos){
  int n = binaryString.length();
  if ((pos <n)&&(pos >=0)) {
    return (binaryString[pos] - 48);
  } else {
    return -1;
  }
}
void Individual::flipBit(int pos){
  int n =binaryString.length();
  if ((pos <n)&&(pos >=0)) {
    if (binaryString[pos] == '1'){
      binaryString[pos] = '0';
    } else {
      binaryString[pos] = '1';
    }
  }
}
int Individual::getMaxOnes(){
  int max = 0;
  int current = 0;
  int n = binaryString.length();
  for (int i = 0; i<n; i++){
    if (binaryString[i] == '1') {
      current++;
    } else {
      if (current > max){
        max = current;
      }
      current = 0;
    }
  }
  if (current>max) {
    return current;
  }else{
    return max;
  }
}

int Individual::getLength(){
  return binaryString.length();
}
