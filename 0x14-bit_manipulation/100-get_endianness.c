#include "main.h"

/**
 * print binary
 * @n:number
 *
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*)&i;

	return (*c);
}
