#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
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
	unsigned int num = 0;
	int n = 0, i = 0;
	unsigned int val;

	if (!b)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if  (b[i] < 48 b[i] > 49)
		{
			return (0);
		}
		i++;
	}
	i--;
	val = atoi(b);
	while (val  > 0)
	{
		num = num + ((val % 10)  *  _pow(2, n));
		val = val / 10;
		n++;
	}
	return (num);
}

