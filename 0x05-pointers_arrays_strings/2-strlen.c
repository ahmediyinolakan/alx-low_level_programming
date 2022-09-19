#include "main.h"

/**
* _strlen - the length of a string
* @s: string passed
*
* Return: lenth of the string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
