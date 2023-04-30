#include "lists.h"
/**
 * find_listint_loop - tortoise and hare speed comparism, but we need to find the loop
 * @head: Pointer to the head node
 * Return: address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow && fast)
			{
				if (slow == fast)
					return (slow);
				slow = slow->next;
				fast = fast->next;
			}
		}
	}
	return (NULL);
}
