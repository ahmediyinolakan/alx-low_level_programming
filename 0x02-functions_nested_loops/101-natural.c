#include <stdio.h>
/**
* main - prints the sum of all the multiples
* of 3 or 5 below 1024.
*
* Return: on success, 0.
*/
int main(void)
{
	int n, sum;

	sum = 0;
	n = 3;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum = sum + n;
		n++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
