#include <stdio.h>
#include <limits.h>
#include "Stack.h"


int main(void)
{
    short shortValue = SHRT_MAX;
    int intValue = INT_MAX;
    long longValue = LONG_MAX;
    char charValue = CHAR_MAX;

    Stack *stack = CreateStack();


    Item* item1= CreateItem(&shortValue);
    Item* item2= CreateItem(&intValue);
    Item* item3= CreateItem(&longValue);
    Item* item4= CreateItem(&charValue);



    return 0;
}