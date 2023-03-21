#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a-z
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i, j;
i = 97;
j = 1;
while(j <= 10)
{
while(i <= 122)
{
_putchar(i);
i++;
}
i = 97;
_putchar('\n');
j++;
}
}
