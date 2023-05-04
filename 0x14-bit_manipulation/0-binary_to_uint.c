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
	int len = 0;
	if (b[len] == '\0')
		return (0);
	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}
	return (num);
}

