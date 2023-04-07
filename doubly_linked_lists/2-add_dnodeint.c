#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * Return: the address of the new element, or NULL if it failed
 * @head: head of the list
 * @n: data of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t **temp = NULL;

	new_node->prev = NULL;
	new_node->next = *head;
	*temp = new_node;
	*head = temp;
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (&new_node);
	}
}
