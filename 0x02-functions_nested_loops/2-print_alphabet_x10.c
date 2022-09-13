#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
*
*/
void print_alphabet_x10(void)
{
	int b;
	char c;

	b = 0;
	while (b < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
