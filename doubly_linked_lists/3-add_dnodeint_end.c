#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * Return: the address of the new element, or NULL if it failed
 * @head: head of the list
 * @n: data of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tail = *head;

	while (tail != NULL)
	{
		tail = tail->next;
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
	new_node->prev = NULL;
	}
	else
	{
	new_node->prev = tail;
	}
	*tail = new_node;
	return (new_node);
}
