#include "hash_tables.h"

/**
 *
 * @size
 *
 */

hash_table_t * hash_table_vreate(unsighned long int size)
{
	hash_table_t *ht;
	unsighned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) *size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->arrey[i] = NULL;

	return (ht);
}

