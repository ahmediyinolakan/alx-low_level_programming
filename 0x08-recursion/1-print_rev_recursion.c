#include "main.h"
#include <stdio.h>
/**
* _print_rev_recursion - Function prints a string in reverse.
* @s: String to be reversed.
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
