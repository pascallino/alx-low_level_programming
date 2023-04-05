#include "main.h"

/**
 * strlen_no_wilds - Returns all  the length of a string,
 * ignoring wildcard characters.
 * @str: The string to be measured.
 *
 * Return: The length.
 */

int strlen_no_wilds(char *str)
{
	int len = 0;
	if (*str != '\0')
	{
		if (*str != '*')
		{
		len++;
		}
len = len + strlen_no_wilds(str + 1);
	}
return (len);
}
