#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */

/*Description: print_alphabet*/
void print_alphabet(void)
{

int i;
i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
