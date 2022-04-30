#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <iostream>
#include <string>
using namespace std;

class Individual{
    private:
        string binaryString;
    
    public:
        Individual(int length);
        Individual(string DNA);
        string getString();
        int getBit(int pos);
        void flipBit(int pos) ;
        int getMaxOnes();
        int getLength();
};
#endif //INDIVIDUAL_H
