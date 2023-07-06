#include "hash_tables.h"
/**
 * free_node - free items
 * @node: key value node
 */
void  free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}


/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];

		while (node != NULL)
		{
			tmp = node->next;
			free_node(node);
			node = tmp;
		}
		}
	}

	free(ht->array);
	free(ht);
}
