#include "main.h"
#include <math.h>
int _sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
* _sqrt - Finds the natural square root of an inputted number.
* @num: The number to find the square root of.
* @root: The root to be tested
*
* Return: If the number has a natural square root, the square root.
* If the number does not have a natural square root, -1
*/
int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - Returns natural square root of a number.
* @n: The number to return the square root of.
*
* Return: If n has has a natural square root, the natural square of n.
* If n does not have natural square root, -1.
*/
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, root));
}
