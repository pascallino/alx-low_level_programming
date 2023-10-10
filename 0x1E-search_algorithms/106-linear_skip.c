#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list
 *               using linear skip.
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *jump = list;

    if (list == NULL)
        return (NULL);

    while (jump->next && jump->n < value)
    {
        node = jump;
        if (jump->express)
        {
            jump = jump->express;
            printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
        }
        else
        {
            while (jump->next)
                jump = jump->next;
        }
    }

    printf("Value found between indexes [%lu] and [%lu]\n", node->index, jump->index);

    while (node->index < jump->index && node->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        node = node->next;
    }

    printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

    return (node->n == value ? node : NULL);
}

