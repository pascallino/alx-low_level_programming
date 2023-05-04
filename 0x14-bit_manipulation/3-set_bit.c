#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to ON
 * @n: A pointer
 * @index: The index to set the value at - indices start at 0.
 * Return: 1 else -1  If  error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* index is out of range*/
#ifdef DEBUG
		printf("Error: Index out of range\n");
#endif
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}

