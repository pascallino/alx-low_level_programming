#include "lists.h"
void free_dlistint(dlistint_t *head);
/**
 * print_dlistint - ==========
 * @h: ===========
 * Return: int
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *temp = NULL;

	if (curr == NULL)
		return;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}
