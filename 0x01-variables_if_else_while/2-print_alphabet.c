#include <stdio.h>

/**
 * main - the entry point
 * print alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

