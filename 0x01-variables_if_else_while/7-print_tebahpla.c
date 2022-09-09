#include <stdio.h>

/**
 * main - entry point
 * print alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

