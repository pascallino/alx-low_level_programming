#include "main.h"
/**
 * print_rev - reverse  string
 * @c: pointer parameter a
 * Description: reverse  value
 */

void print_rev(char *c)
{
	int i;
	int h = 0;

	while (c[h] != '\0')
	{
		h++;
	}
	for (i = h - 1; i >= 0; i--)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}

