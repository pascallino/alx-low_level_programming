#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - free allocsted space
 * @head: pointer to head node
 * Return: Number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
