#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a-z
 * Return: 0
 */
int main(void)
{
int i = 97;
while (i <= 122)
{
putchar((char) i);
i++;
}
putchar((char)'\n');
return (0);
}
