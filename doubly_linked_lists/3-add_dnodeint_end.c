#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	a = *head;
	if (a != NULL)
	{
		while (a->next != NULL)
			a = a->next;
		a->next = new_node;
	}
	else
		*head = new_node;
	new_node->prev = a;
	return (new_node);
}
