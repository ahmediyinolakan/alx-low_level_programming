#include "main.h"
/**
* swap_int - swaps 2the values of 2 integers
* @a: first integer
* @b: second integer
*
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int swap_a;
	int swap_b;

	swap_a = *a;
	swap_b = *b;

	*a = swap_b;
	*b = swap_a;
}
