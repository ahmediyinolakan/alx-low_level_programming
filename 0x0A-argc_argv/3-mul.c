#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: on success, 0.
* on failure, -1
*/
int main(int argc, char **argv)
{
	int m, n, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	mul = m * n;
	printf("%d\n", mul);
	return (0);
}
