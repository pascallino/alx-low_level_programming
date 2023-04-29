#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t linked list safely.
 * @h: pointer to the start of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	listint_t *visited[1024] = {NULL};
	size_t count = 0, i;

	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == visited[i])
			{
				*h = NULL;
				return (count);
			}
		}

		visited[count++] = *h;
		tmp = (*h)->next;
		free(*h);
		*h = tmp;

		if (count >= 1024)
		{
			exit(98);
		}
	}

	return (count);
}
