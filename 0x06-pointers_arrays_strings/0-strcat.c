#include "main.h"
#include <string.h>
/**
* _strcat - Concatenates 2 strings together
* @dest: string 1
* @src: string to be concatenated to string 1
*
* Return: on success, pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
