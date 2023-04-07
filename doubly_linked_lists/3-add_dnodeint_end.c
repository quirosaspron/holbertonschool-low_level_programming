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
	dlistint_t **temp = NULL;
	dlistint_t **tail = *head;

	while (*tail != NULL)
	{
		tail = tail->next;
	}

	new_node->prev = *tail;
	new_node->next = NULL;
	*temp = newnode;
	*tail = temp;

	if (new_node != NULL)
	{
		return (NULL);
	}

	else
	{
		return (&new_node);
	}
}
