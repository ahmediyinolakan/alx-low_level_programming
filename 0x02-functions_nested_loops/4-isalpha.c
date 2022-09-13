#include "main.h"

/**
* _isalpha - checks for alphabetic charcater.
* @c: any character
* Return: on success 1.
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
