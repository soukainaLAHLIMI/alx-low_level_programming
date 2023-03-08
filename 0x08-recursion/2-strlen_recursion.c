#include "main.h"

/**
 * _print_rev_recursion
 * return:Always 0
 */

int _strlen_recursion(char *s)
{       
        int len = 0;

	if (*s)
        { 
                len++;
                len += _strlen_recursion(s + 1);
        }
}

