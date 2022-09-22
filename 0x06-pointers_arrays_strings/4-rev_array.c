#include "main.h"
/**
* reverse_array - reverses the conten of an array of integers
* @a: an array of integers
* @n: number of elements in the array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int temp, counter;

	n  -= 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
