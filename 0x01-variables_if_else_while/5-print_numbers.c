#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a-z
 * Return: 0
 */
int main(void)
{
int i = 0;
while (i <= 9)
{
printf("%d", i);
i++;
}
putchar((char)'\n');
return (0);
}
