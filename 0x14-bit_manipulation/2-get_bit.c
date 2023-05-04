#include <stdio.h>

/**
 * get_bit - Gets the value at an  index.
 * @n: The integer.
 * @index: The index to get the value
 * Return: 1 else If an error occurs - -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
#ifdef DEBUG
		printf("Error: index out of range\n");
#endif
		return (-1);
	}

	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);

}
