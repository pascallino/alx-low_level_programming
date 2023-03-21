#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int i, j;
i = 97;
j = 1;
while (j <= 10)
{
while (i <= 122)
{
_putchar(i);
i++;
}
i = 97;
_putchar('\n');
j++;
}
}
