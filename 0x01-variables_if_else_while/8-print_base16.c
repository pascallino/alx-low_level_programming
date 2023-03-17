#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a-z
 * Return: 0
 */
int main(void)
{
int i = 48;
while (i <= 66)
{
if (i > 48 && i <= 57)
{
putchar((char) i);
}
else if (i  <= 66)
{
putchar((char) i);
}
i++;
}
putchar((char)'\n');
return (0);
}
