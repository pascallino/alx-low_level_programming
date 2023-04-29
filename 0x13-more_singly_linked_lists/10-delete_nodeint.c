#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete  node
 * @head: pointer to head node
 * @index: ========
 * Return: N
 */
int delete_nodeint_at_index(listint_t **head,
		unsigned int index)
{
	unsigned int i = 0;

	listint_t *curr = *head, *temp;

	if (index < i)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	curr = *head;
	for (i = 0; i < index - 1; i++)
	{

		if (curr->next == NULL)
			return (-1);

		curr = (curr)->next;
	}

	temp = curr->next;
	curr->next = temp->next;
	free(temp);
	return (1);
}
