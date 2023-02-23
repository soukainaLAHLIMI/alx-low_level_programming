#include "main.h"

/**
 * print line draws a straight line according to parameter.
 * @n: The number of lines to draw
 * Return: empty
 */

void print_line(int n)

{
        int x;

        for (n <= 0)
        {
        _putchar('\n');
        }
	else
	{
		for (x = 0; x < n; x++)
		{
        _putchar(95);
        }
        _putchar('\n');
        }
}
