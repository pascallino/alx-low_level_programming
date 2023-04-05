#include "main.h"
#include <string.h>
#include <stdio.h>

int checkpalindrome(int lenght, int size_n, char *s);

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

	return (checkpalindrome(0, size, s));
}

/**
 * checkpalindrome - Checks if a string is a palindrome.
 * Description: return value for palindrome
 * @s: The string to be checked.
 * @lenght: int len of strings
 * @size_n: int size
 * Return: If the string is a palindrome - 1.
 */

int checkpalindrome(int lenght, int size_n, char *s)
{
	int len = lenght;
	int size = size_n;

	if (*s != '\0')
	{
		if (s[len] != s[size - 1])
		{
			return (0);
		}
		else
		{
			if ((size - 1 - len == 1) || (size - 1 - len == 2))
			{
				return (1);
			}
		}
		size -= 1;
		return (checkpalindrome(len + 1, size, s));
	}
	return (1);
}
