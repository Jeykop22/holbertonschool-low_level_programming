#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: function fails ? - NULL. Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *new_dup;

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
	new_dup->next = *head;

	*head = new_dup;
	return (new_dup);
}
