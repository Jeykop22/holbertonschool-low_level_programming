#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: function fails, NULL. Otherwise, the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *new_dup, *last;

	new_dup = malloc(sizeof(list_t));
	if (new_dup == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_dup);
		return (NULL);
	}
	while (str[len])
		len++;
	new_dup->str = dup;
	new_dup->len = len;
	new_dup->next = NULL;
	if (*head == NULL)
		*head = new_dup;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_dup;
	}
	return (*head);
}
