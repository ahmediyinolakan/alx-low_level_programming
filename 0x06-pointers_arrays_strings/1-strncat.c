#include "main.h"

/**
* _strncat - specifies bytes to concatenate.
* @dest: string 1
* @src: string 2
* @n: the amount of bytes/words to be concatenated
*
* Return: on success, dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int length, j;
/* j is a counter for n bytes of src to be concatenated */
/* length: the length of the destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];

	}
	dest[length] = '\0';
	return (dest);
}
