#include <stdio.h>

/**
 * print_most_numbers - Entry point
 * Description: prints 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
int i = 48;
while (i <= 57)
{
if (i == 50 || i == 52)
{
	continue;
}
putchar((char) i);
i++;
}
putchar((char)'\n');
}
