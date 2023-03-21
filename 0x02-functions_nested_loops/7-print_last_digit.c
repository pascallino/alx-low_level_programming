#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int n)
{
	int m;
if (n < 0)
{
n = n * -1;
m = n % 10;
return (m);
}
	if (n >= 0 && n <= 9)
	{
		return (0);
	}

m = n % 10;
_putchar(m + '0');
	return (m);
}
