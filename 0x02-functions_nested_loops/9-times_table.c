#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 *
 * my_putchar: prints the 9 times table
 * @var: varholds the last digit
 * Description2: last digit
 */

void my_putchar(long var)
{
	if (var < 0)
	{
		_putchar('-');
		var = var * -1;
	}
	if (var == 0)
		_putchar('0');
	if (var / 10)
		my_putchar(var / 10);
	_putchar(var % 10 + '0');
}
void times_table(void)
{

int i, j, t;
long v;
t = 0;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
v = i * j;
if (j == 0)
{
_putchar('0');
}
else if (v <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(v + '0');
}
else
{
_putchar(',');
_putchar(' ');
my_putchar(v);
}

}
_putchar('\n');
}
}

