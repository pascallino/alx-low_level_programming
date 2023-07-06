#include "hash_tables.h"

/**
 * ht_CreateItem - hash table item
 * @key: item key
 * @value: item value
 * Return: Node
 */
hash_node_t *ht_CreateItem(const char *key, const char *value)
{
	hash_node_t *hash_node = NULL;
	char *valuecpy;

	valuecpy = strdup(value);
	if (valuecpy == NULL)
		return (NULL);
	free(valuecpy);
	if (key == NULL)
		return (NULL);
	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
	{
		return (NULL);
	}
	hash_node->key = strdup(key);
	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (NULL);
	}

	hash_node->value = strdup(value);
	hash_node->next = NULL;
	return (hash_node);

}
/**
 * hash_table_set - hash item added to table
 * @ht: hash tasble
 * @key: key
 * @value: value
 * Return: 1 or 0`
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *htnode = NULL;
	unsigned long int index, i;

	if (ht == NULL || value == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	htnode = ht_CreateItem(key, value);
	if (htnode == NULL)
		return (0);
	htnode->next = ht->array[index];
	ht->array[index] = htnode;
	return (1);

}
