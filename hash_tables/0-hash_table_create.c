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
	hash_node_t **arr = NULL;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);
	arr = malloc(sizeof(hash_node_t *) * size);
	if (!arr)
		return (NULL);
	for (; i < size; i++)
		arr[i] = NULL;
	h_table->size = size;
	h_table->array = arr;
	return (h_table);
}
