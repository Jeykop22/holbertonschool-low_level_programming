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
	hash_table_t *NewTable = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (NewTable == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	NewTable->size = size;
	NewTable->array = calloc(NewTable->size, sizeof(NewTable->array));
	if (!NewTable->array)
		return (NULL);
	return (NewTable);
}
