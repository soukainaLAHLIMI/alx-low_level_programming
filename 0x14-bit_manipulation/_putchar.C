#include <unistd.h>

/**
 * _putchar
 *
 * Return : 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
