#include "main.h"
#include <string.h>
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int size = strlen(s);
	int len = 0;

	if (*s != '\0')
	{
		if (s[len] != s[size - len - 1])
		{
			return (0);
		}
		else
		{
			if (len == (size - 1))
			{
				return (1);
			}
		}
		len++;
	}
	len = len + is_palindrome(s + 1);
	if (len < (size - 1))
	{
		return (len);
	}
	else
		return (1);

}
