#include <stdio.h>

/**
* main - prints first 50 fibonacci,
* starting from 1 and 2.
*
* Return: on sucess, 0.
*/
int main(void)
{
	int i;
	long int fib1, fib2, fibonacci;

	fib1 = 1;
	fib2 = 2;
	printf("%ld, %ld, ", fib1, fib2);
	fibonacci = fib1 + fib2;
	for (i = 3; i <= 50; i++)
	{
		if (fibonacci != 20365011074)
			printf("%ld, ", fibonacci);
		else
			printf("%ld", fibonacci);
		fib1 = fib2;
		fib2 = fibonacci;
		fibonacci = fib1 + fib2;
	}
	printf("\n");
	return (0);
}
