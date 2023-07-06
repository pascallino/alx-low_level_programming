#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count, len = 0;
	hash_node_t *data;
	int arr[1024] = {0};

	if (ht == NULL)
		return;

	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
			arr[len++] = count;
	}

	printf("{");
	for (i = 0; i < len; i++)
	{
		data = ht->array[arr[i]];
		while (data)
		{
			printf("'%s': '%s'", data->key, data->value);
			if (data->next != NULL)
				printf(", ");
			data = data->next;
		}
		if (i != len - 1)
			printf(", ");
	}
	printf("}\n");
}

