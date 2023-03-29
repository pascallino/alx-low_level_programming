#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i;
	int ch;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1]  == '!' ||
				str[i - 1]  == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				i == 0)
		{
			if (str[i] >= 'a' &&  str[i] <= 'z')
			{
				ch = (char)str[i];
				ch = ch - 32;
				str[i] = (char)ch;
			}
		}
	}
	return (str);
}
