#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	short com = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < ht->size; ++i)
	{
		node = ht->array[i];
		while (node)
		{
			if (com == 1)
				printf(", ");
			com = 1;
			printf("'%s': '%s'", (char *) node->key,
								(char *) node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
