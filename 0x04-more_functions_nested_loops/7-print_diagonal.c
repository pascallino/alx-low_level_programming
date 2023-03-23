#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: checks is a character
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

void print_diagonal(int c)
{
	int i, j, size;

	size = c;

	if (!(size <= 0))
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
