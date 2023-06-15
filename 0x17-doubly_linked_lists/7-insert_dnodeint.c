#include "lists.h"
dlistint_t *mallocNodeInt(dlistint_t *node, const int data);
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n);
/**
 * mallocNodeInt - ==========
 * @node: ===========
 * @data: ==========
 * Return: int
 */
dlistint_t *mallocNodeInt(dlistint_t *node, const int data)
{
	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
/**
 * insert_dnodeint_at_index - =================
 * @head: ===================
 * @idx: ===================
 * @n: =================
 * Return: =========
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	dlistint_t *curr = *head, *len = *head;
	dlistint_t *temp, *new = NULL;
	int i = 0, index = idx;

	while (len != NULL)
	{
		len = len->next;
		i++;
	}
	i--;
	if (index < 0 || index > i)
		return (NULL);
	new = mallocNodeInt(new, n);
	if (new == NULL)
		return (NULL);
	if (curr == NULL && index == 0)
	{
		*head = new;
		return (new);
	}
	if  (*head == NULL && index == 0)
	{
		*head = new;
		return (new);
	}
	else if  (*head != NULL && index == 0)
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	else
	{
	i = 0;
	while (curr != NULL && i < index)
	{
		temp = curr;
		curr = curr->next;
		i++;
	}
	new->prev = temp;
	new->next = curr;
	temp->next = new;
	curr->prev = new;
	return (new);
	}
	return (NULL);
}
