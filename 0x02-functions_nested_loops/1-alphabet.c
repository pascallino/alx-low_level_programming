#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints a-z
 * Return: 0
 */
void print_alphabet(void)
{
int i ;
i = 97;
while(i <= 122)
{
_putchar(i);
i++;
}
_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
