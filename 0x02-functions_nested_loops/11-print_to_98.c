#include <stdio.h>
/**
* print_to_98 - prints number from n to 98
* @n: the number to print to 98.
*
* Return: nothing.
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	printf("\n");
}
