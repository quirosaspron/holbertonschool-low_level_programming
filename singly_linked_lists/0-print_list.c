#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * Return: The number of nodes
 * @h: List to print the elements of
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		printf("[%u] %s \n", current->len, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
