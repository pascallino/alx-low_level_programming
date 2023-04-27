#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free allocsted space
 * @head: pointer to head node
 * Return: Number of nodes
 */

void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
