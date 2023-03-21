#include "main.h"
#include <stdio.h>

/**
 * times_table - Entry point
 * Description: prints a-z
 * Return: 0
 */

void my_putchar(long var) {

	/* print '-' for negative numbers */
	if (var < 0) {
		_putchar('-');
		var = var * -1;
	}

	/* Print Zero */
	if (var == 0)
		_putchar('0');

	/* First remove the last digit of number and print 
	   the remaining digits using recursion, then print
	   the last digit
	   */
	if (var / 10)
		my_putchar( var / 10);

	_putchar(var%10 + '0');
}
void times_table(void)
{
int i, j, t;
long v;
t = 0;
for(i = 0; i <= 9; i++)
{
for(j = 0; j <= 9; j++)
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
int main(void)
{
	times_table();
	return (0);
}
