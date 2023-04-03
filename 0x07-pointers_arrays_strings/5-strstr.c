#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring in an array
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: If the substring is located -
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0;
	int k = 0;
	int pos = 0;

	while (*(needle + k))
		k++;

	while (*(haystack))
	{
		j = 0;
		while (*(needle + j))
		{
			if (*haystack == ' ' && k != pos)
			{
				pos = 0;
		/*	flg = 0;*/
				break;
			}
			if (needle[j] == *haystack)
			{
				pos++;
			if (k == pos)
				{
		/*	flg = 1; */
			break;
				}
				return (haystack);
			}
			else
			{
				pos = 0;
				break;
			}
			j++;
		}
		haystack++;
	}
	return (NULL);
}
