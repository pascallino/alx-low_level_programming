#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a-z
 * Return: 0
 */
int main(void)
{
int i = 48;
while (i <= 57)
{
putchar((char)i);
if (i >= 56)
{
putchar(',');
putchar(' ');
}
i++;
}
return (0);
}
