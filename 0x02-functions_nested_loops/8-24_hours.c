#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{

int i, j, k, l, m;

m = 9;
for (i = 0; i <= 2; i++)
{
if (i == 2)
{
m = 3;
}
for (j = 0; j <= m; j++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
}
