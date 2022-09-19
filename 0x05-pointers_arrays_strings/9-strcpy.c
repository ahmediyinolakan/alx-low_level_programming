#include "main.h"
/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* @dest: the destination of the copied string
* @src: the source of the copied string.
*
* Return: a pointer to the destination.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
