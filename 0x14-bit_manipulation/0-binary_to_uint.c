#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _pow - Returns the value of x raised to the power of y.
 * @x: The number to be raised
 * @y: The power
 * Return: The value of x raised to the power of y.
 */
int _pow(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result *= _pow(x, y - 1);
	return (result);
}

/**
 * binary_to_uint - binary to decimal
 * @b: binary
 * Description: binary conversion;
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			if (b[i] == '1')
				result = result | 1;
		}
		else
			return (0);
	}
	return (result);
}

