#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - the entry point
 * check some argument about the last digit of a function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 < 6 && n % 10 != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else if (n % 10 == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is greater than 5\n");
	}
	return (0);
}

