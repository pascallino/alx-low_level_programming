#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint22 - free allocsted space
 * @head: pointer to head node
 * Return: Number of nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp  = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
