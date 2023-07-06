#include "hash_tables.h"

/**
 * hash_table_get - hash item added to table
 * @ht: hash tasble
 * @key: key
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *data;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	data = ht->array[index];
	while (data)
	{
		if (strcmp(data->key, key) == 0)
			return (data->value);
		data = data->next;
	}
	return (NULL);

}
