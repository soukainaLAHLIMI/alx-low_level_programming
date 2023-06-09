#include "hash_tables.h"

/**
 *
 * @str
 *
 */

unsigned long int hash_djb2(const unsighned char *str)
{
	unsighed long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	/* hash * 33 + c */
	return (hash);
}
