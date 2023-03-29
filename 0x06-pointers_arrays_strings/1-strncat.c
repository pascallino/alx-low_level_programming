#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	i = 0;
	j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] && j < n)
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}

