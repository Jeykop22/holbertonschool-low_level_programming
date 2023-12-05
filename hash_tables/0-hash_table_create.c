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
	unsigned int i = 0;
	hash_table_t *h_table = NULL;
	hash_node_t **array = NULL;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	h_table->size = size;
	h_table->array = array;
	return (h_table);
}
