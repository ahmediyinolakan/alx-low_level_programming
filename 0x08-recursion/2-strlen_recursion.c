#include "main.h"
/**
* _strlen_recursion - Function returns the length of a string.
* @s: String to be counted.
*
*Return: Length of string
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
