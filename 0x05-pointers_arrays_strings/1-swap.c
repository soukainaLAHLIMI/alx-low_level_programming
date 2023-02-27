#include <stdio.h>
/**
 * swap_int
 * @a: integer
 * @b: integer
 * Return: n
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
