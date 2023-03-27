#include "main.h"
/**
 * _puts - output a string
 * @c: pointer parameter a
 * Description: length  pointer value
 * Return: integer
 */

void _puts(char *c)
{

	int i = 0;

for (; c[i] != '\0'; i++)
{
_putchar(c[i]);
}
_putchar('\n');
}
