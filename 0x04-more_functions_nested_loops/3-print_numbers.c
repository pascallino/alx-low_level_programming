#include <stdio.h>

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
putchar((char) i);
i++;
}
putchar((char)'\n');
}
