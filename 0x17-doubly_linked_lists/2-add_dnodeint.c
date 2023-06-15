#include "lists.h"
dlistint_t *mallocNode(dlistint_t *node, const int data);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/**
 * mallocNode - ==========
 * @node: ===========
 * @data: ==========
 * Return: int
 */
dlistint_t *mallocNode(dlistint_t *node, const int data)
{
	node = (dlistint_t *) malloc(sizeof(dlistint_t));
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
 * add_dnodeint - =================
 * @head: ===================
 * @n: =================
 * Return: ===========
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *new = NULL;

	new = mallocNode(new, n);
	if (new == NULL)
		return (NULL);
	if (curr == NULL)
	{
		*head = new;
		return (*head);
	}
	curr->prev = new;
	new->next = curr;
	*head = new;
	return (new);
}
