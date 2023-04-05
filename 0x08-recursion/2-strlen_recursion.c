#include "main.h"

/**
 * _strlen_recursion - Returns the size of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */


int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
len = len + _strlen_recursion(s + 1);
	}
return (len);
}
