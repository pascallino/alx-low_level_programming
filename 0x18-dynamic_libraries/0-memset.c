#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
