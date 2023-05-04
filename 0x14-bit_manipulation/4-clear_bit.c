#include <stdio.h>
#include "main.h"
int clear_bit(unsigned long int *n, unsigned int index) 
{
    if (index >= sizeof(unsigned long int) * 8) 
    {
        #ifdef DEBUG
        printf("Error: index out of range\n");
        #endif
        return -1;
    }
    *n &= ~(1UL << index);
    return 1;
}

