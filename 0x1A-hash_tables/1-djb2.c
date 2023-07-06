#include "hash_tables.h"

/**
 * hash_djb2 - hash function
 * @str: string passed
 * Return: Return value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;  /* Initial hash value */

	while (*str != '\0')
	{
		hash = ((hash << 5) + hash) + *str;  /* djb2 hash calculation */
		str++; /* << 5 is equivalent to muliply by 32*/
	}

	return (hash);
}

