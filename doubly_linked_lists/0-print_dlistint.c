#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * Return: the number of nodes
 * @h: header of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int counter = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		counter++;
	}
	return (counter);
}
