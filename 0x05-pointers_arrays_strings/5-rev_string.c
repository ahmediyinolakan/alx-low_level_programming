#include "main.h"

/**
* rev_string - reverse a string.
* @s: reversed string
*
* Return: void
*/
void rev_string(char *s)
{
	int i, j, k, revVal;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	k = 0;

	while (k < j)
	{
		revVal = s[k];
		s[k] = s[j];
		s[j] = revVal;
		k++;
		j--;
	}
}
