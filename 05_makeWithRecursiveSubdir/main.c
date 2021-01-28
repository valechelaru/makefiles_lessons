#include <stdio.h>
#include "AdderLib/adder.h"
#include "SubLib/suber.h"

int main()
{
    printf("Hello World!\n");

    printf("The result of 2 + 2 is: %f\n", add(2,2));

    printf("The result of 10 - 4 is: %f\n", sub(10,4));

    return 0;
}
