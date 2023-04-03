#include "lists.h"
/*
 * print_list - Prints all the elements of a list_t list
 * Return: The number of nodes
 * @h: List to print the elements of
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;

	while (current != NULL)
	{
		_putchar(current -> str);
		current = current -> next;
	}
}
