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
	/**
	 * we initialize a helping variable
	 * to assist in returning one of
	 * our parameters pointers haystack
	*/
	char *h, *n;

<<<<<<< HEAD
	while (*(needle + k))
		k++;
if (*needle == 0 || *needle == '\0')
{
	return (NULL);
}
	while (*(haystack))
=======
	while (*haystack != '\0')
>>>>>>> 915ac206ace265f4139a800b35972f568c2b63d6
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
<<<<<<< HEAD
	return (haystack);
=======
	return ('\0');
>>>>>>> 915ac206ace265f4139a800b35972f568c2b63d6
}
