#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializr,it with a specific char.
 * @size: array size
 * @c: char to initialize array with
 * Return: a pointer to array @a
*/


char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	int size_n;
	int i;
	char* s;
	size_n = size;
	
s = (char*)calloc(size, sizeof(char));

	if (size <= 0)
	{
		return (arr);
	}
	for (i = 0; i < size_n; i++)
	{
		s[i] = c;
	}
	arr = s;
	return (arr);


}
