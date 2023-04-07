#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *
 *Return: The integer value of the comverted string.
 */
int _atoi(char *s)
{

	int sign = 1;
	int i = 0;
unsigned int res = 0;
int j = 0;


for (i = j; s[i] != '\0'; i++)
{
if ((res > 0) && (s[i] >= 'a' && s[i] <= 'z'))
{
	return (res);
}
if (((char)s[i] >= 48 && (char)s[i] <= 57) || s[i] == '-')
{
	if (s[i] == '-')
	{
	sign = sign * -1;
	continue;
	}
	res = res * 10 + s[i] - '0';
continue;
}
}
return (res * sign);
}
