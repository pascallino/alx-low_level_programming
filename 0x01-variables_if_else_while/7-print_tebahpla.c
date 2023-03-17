#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a-z
 * Return: 0
 */
int main(void)
{
int i = 122;
while (i >= 97)
{
putchar((char) i);
i--;
}
putchar((char)'\n');
return (0);
}
