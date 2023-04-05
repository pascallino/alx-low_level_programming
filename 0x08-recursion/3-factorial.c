#include "main.h"

/**
 * factorial - Returns the factorial of a given value
 * @n: The number to find the factorial of.
 * Return: If n > 0 - the factorial of /
 * If n < 0 - 1 to indicate an error.
 */


int factorial(int n)
{
	int store = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
store *=  factorial(n - 1);
return (store);
}
