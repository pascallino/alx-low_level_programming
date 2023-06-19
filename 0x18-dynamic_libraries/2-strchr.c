#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched ..
 * @c: The character to be located ..
 *
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int track = 0;

	while (*s >= '\0')
	{
		if (*s == c)
		{
			track = 1;
			break;
		}
		s++;

	}
	if (track == 1)
	{
		s--;
		while (*s >= '\0')
		{
			return (s + 1);
			s++;
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
