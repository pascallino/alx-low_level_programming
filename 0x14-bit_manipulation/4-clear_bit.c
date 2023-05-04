#include <stdio.h>
#include "main.h"
/**
 * clear_bit - clear  the value of a bit
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 * Return: 1 else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
#ifdef DEBUG
		printf("Error: index out of range\n");
#endif
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}

