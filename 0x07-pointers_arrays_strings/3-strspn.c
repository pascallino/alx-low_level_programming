#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets .the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number. of bytes in s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int scan = 0;
	int cntsubstring = 0;

	while (accept[cntsubstring] != '\0')
	{
		cntsubstring++;

	}
	while (*s != '\0')
	{

		if (*s == ' ' || !((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')))
		{
			scan = 0;
		}
		else
		{
			if (*s ==  accept[scan])
			{
				scan++;
				if (scan == cntsubstring)
				{
					return (cntsubstring);
				}
			}
		}
		s++;
	}
	return (0);
}
