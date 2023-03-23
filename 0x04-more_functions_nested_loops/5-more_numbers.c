#include <stdio.h>
#include "main.h"
/**
 * my_output - returns the 9 times table
 * Description: var print
 * @var: varholds the last digit
 * Description2: last digit
*/
void my_output(long var)
{
	if (var < 0)
	{
	var = var * -1;
	}
	if (var / 10)
		my_output(var / 10);
	_putchar(var % 10 + '0');
}

/**
 * more_numbers - prints the 10  times 15 numbers
 * Description: prints the 9 times table   * Return: void
 */

void more_numbers(void)
{
	int i, j, k;

k = 1;
while (k <= 10)
{
i = 0;
j = 48;
while (i <= 14)
{
if (j <= 57)
{
_putchar((char)j++);
}
else
{
my_output(i);
}
i++;
}
_putchar((char)'\n');
k++;
}
}
