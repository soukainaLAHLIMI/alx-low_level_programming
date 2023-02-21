#include "main.h"

/**
 *_abc - computes the absolute value of integer.
 * Return: Absolute value 
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
