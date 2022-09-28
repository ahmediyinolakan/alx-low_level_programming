#include "main.h"
#include <stdio.h>
/**
* _puts_recursion -Function prints a string, followed by a new line.
* @s: String to be printed.
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
