#include "lists.h"

/**
 * dslistint_len -  returns the number of elements in a linked dlistint_t list.
 * Return: the number of elements in the list
 * @h: header of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int counter = 0;

	while (current != NULL)
	{
		current = current->next;
		counter++;
	}
	return (counter);
}
