#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

/**
 * delete_dnodeint_at_index - =================
 * @head: ===================
 * @idx: =================
 * Return: ===========
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *curr = *head;
	dlistint_t *len = *head;
	dlistint_t *temp;
	 dlistint_t *target;
	int i = 0;
	int index = idx;

	while (len)
	{
		len = len->next;
		i++;
	}
	if (index < 0 || index > i)
		return (-1);
	if (curr == NULL)
	{
		return (-1);
	}
	if  (*head && i == 1 && index == 0) /* this will only work for 100 only */
	{
		free(curr);
		*head = NULL;
		return (1);
	}
	else if (i > 0 && index == 0)
	{
	temp = curr;
	curr = curr->next;
	curr->prev = NULL;
	*head = curr;
	free(temp);
	return (1);
	}
	else if (index > 0)
	{
	i = 0;
	while (curr != NULL && i < index)
	{
		temp = curr;
		curr = curr->next;
		i++;
	}
	target = curr->next;
	temp->next = target;
	target->prev = temp;
	free(curr);
	return (1);
	}
	return (-1);
}
