#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Entry point
 * Description: prints 0 to 9
 * Return: void
 */
void print_numbers(void)
{
int i = 48;
while (i <= 57)
{
_putchar((char) i);
i++;
}
_putchar((char)'\n');
}
