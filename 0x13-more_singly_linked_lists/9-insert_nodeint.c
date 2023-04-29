#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: pointer to head node
 * @idx: ======
 * @n: =======
 * Return: N
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode;
	listint_t *curr;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL || idx < i)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
	newnode->next = *head;
	*head = newnode;
	return (newnode);
	}
	curr = *head;
	for (i = 0; i < idx - 1; i++)
	{
	if (curr == NULL || curr->next == NULL)
		return (NULL);		
	curr = (curr)->next;
	}

	newnode->n = n;
	newnode->next = (curr)->next;
	(curr)->next = newnode;

	return (newnode);
}
