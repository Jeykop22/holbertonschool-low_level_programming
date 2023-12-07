#include "hash_tables.h"
#include <stdlib.h>

/**
  * hash_table_create - Creates a hash table
  * @size: Size of the array
  *
  * Return: A pointer to the newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_t;

	n_t = malloc(sizeof(hash_table_t));
	if (size == 0)
		return (NULL);
	if (n_t == NULL)
		return (NULL);
	n_t->size = size;
	n_t->array = calloc(size, sizeof(hash_node_t *));
	return (n_t);
}
