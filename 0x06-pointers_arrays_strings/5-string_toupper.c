#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{

	int i;
	int ch;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' &&  str[i] <= 'z')
		{
			ch = (char)str[i];
			ch = ch - 32;
			str[i] = (char)ch;
		}
	}
	return (str);
}
