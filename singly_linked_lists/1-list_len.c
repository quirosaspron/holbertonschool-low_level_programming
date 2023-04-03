#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * Return: The number of elements
 * @h: List to get the number of elements of
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			count++;
		}
		current = current->next;
	}
	printf("-> %d", count);
	return (count);
}
