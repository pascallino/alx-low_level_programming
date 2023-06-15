#include "lists.h"
dlistint_t *malllocNodeend(dlistint_t *node, const int data);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/**
 * mallocNodeend - ==========
 * @node: ===========
 * @data: ==========
 * Return: int
 */
dlistint_t *mallocNodeend(dlistint_t *node, const int data)
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
 * add_dnodeint_end - =================
 * @head: ===================
 * @n: =================
 * Return: ===========
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *temp;
	dlistint_t *new = NULL;

	new = mallocNodeend(new, n);
	if (new == NULL)
		return (NULL);
	if (curr == NULL)
	{
		*head = new;
		return (*head);
	}
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
	}
	new->prev = temp;
	temp->next = new;
	return (new);
}
