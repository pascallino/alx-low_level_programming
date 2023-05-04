#include <stdio.h>
#include "main.h"
int set_bit(unsigned long int *n, unsigned int index) 
{
    if (index >= sizeof(unsigned long int) * 8) 
    {
        // index is out of range
        #ifdef DEBUG
        printf("Error: Index out of range\n");
        #endif
        return -1;
    }
    *n |= 1UL << index;
    return 1;
}

