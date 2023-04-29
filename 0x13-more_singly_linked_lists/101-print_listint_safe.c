#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to node start
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *visited[1024] = {NULL};
	size_t count = 0, i;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == visited[i])
			{
printf("-> [%p] %d\n", (void *)head, head->n);
				return (count);
			}
		}
		visited[count++] = head;
printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		if (count >= 1024)
		{

			exit(98);
		}
	}
	return (count);
}
