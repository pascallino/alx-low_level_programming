#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - print elements in a linked list
 * @h: pointer to head node
 * Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t  i = 0;
const listint_t *curr = h;

while (curr)
{
	i++;
	if (curr->n == 0)
		printf("0\n");
	else
		printf("%d\n", curr->n);

	curr = curr->next;
}
/*printf("-> %d elements\n", i);*/
return (i);
}
