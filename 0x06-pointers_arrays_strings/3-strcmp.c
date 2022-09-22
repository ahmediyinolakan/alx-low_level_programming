#include "main.h"

/**
* _strcmp - compares two strings
* @s1: string to be compared to
* @s2: string to be compared
*
* Return: 0, positive or negative value.
*/
int _strcmp(char *s1, char *s2)
{
	int counter;
	int compVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compVal = s1[counter] - s2[counter];
	return (compVal);
}
