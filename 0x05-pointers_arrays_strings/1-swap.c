#include "main.h"
/**
 * swap_int
 * @a: integer
 * @b: integer
 * Return: n
 */
void swap_int(int *a, int *b);
{
	int m;
	m = *a;

	*a = *b;
	*b = m;
}
