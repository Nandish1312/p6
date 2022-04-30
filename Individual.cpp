#include <iostream>
#include <string>

#include "Individual.h"

using namespace std;

Individual::Individual (string string_initial)

{

length=string_initial.size();

for (int i = 0; i < length; i++)

{

list_copy[i]='0';

}

bin_str=string_initial;

}

string Individual::getString()

{

return bin_str;

}

int Individual::getBit(int placement)

{

if (placement > length)

{

return -1;

}

if (bin_str[placement] == '1')

{

return 1;

}

return 0;

}

void Individual::flipBit(int placement)

{

if (bin_str[placement]=='1')

{

bin_str[placement]='0';

}

else

{

bin_str[placement]='1';

}

}

int Individual::getMaxOnes()

{

int Maxones=0;

int total=0;

for (int i = 0; i < length; i++)

{

if (bin_str[i]=='1')

{

total+=1;

}

if (total>Maxones)

{

Maxones=total;

}

else if (bin_str[i]=='0')

{

total=0;

}

}

return Maxones;

}

int Individual::getLength()

{

return length;

}

void Individual::bit_rearrange(int placement)

{

int num=0;

for (int i = 0; i < length; i++)

{

if (i<length-placement)

{

rearrange_bin_str[i]=bin_str[placement+i];

num++;

}

else

{

rearrange_bin_str[i]=bin_str[i-num];

}

}

for (int i = 0; i < length; i++)

{

bin_str[i]=rearrange_bin_str[i];

}

}