#include "main.h"
#include <stdio.h>
/**
 * print_last digit - Entry point
 * Description: checks for abeolute value
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int print_last_digit(int n)
{
	int m;
	if (n >= 0 && n <= 9)
	{
		return (0);
	}
	m = n % 10;
	if (m < 0 )
	{
		m = m * -1;
	}
_putchar(m + '0');
	return (m);
}
int main(void)
{
 print_last_digit(27);
 print_last_digit(19);
 print_last_digit(-23);
	return (0);
}
