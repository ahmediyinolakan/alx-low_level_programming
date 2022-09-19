#include "main.h"
/**
*  _puts - prints string.
* @str: points to the string of characters
*
* Return: nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
