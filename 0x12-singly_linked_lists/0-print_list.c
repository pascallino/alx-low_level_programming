#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements in a linked list
 * @h: pointer to head node
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
int i = 0;
const list_t *curr = h;
while (curr != NULL)
{
	if (curr->str == NULL)
	{
		printf("[0] %s\n", "(nil)");
		curr = curr->next;
	i++;
	continue;
	}
	printf("[%d] %s\n", curr->len, curr->str);
	curr = curr->next;
	i++;
}
/*printf("-> %d elements\n", i);*/
return (i);
}
