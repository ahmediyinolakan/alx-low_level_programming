#include <stdio.h>
/**
* main - prints the number of arguments passed into it.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: on success, 0.
*/
int main(int argc, __attribute__ ((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
