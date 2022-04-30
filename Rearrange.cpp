#include <iostream>
#include <string>

#include "Mutator.h"
#include "Individual.h"
#include "Rearrange.h"

using namespace std;

Individual* Rearrange::mutate(Individual* list, int k)

{
    
list_lamba=list->getLength();

end_digit=k % list_lamba;

if (end_digit != 0)

{
    
end_digit=end_digit-1;

}

else

{
    
end_digit=list_lamba-1;

}

list->bit_rearrange(end_digit);

return list;

}