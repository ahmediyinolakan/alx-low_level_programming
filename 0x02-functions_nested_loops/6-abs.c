#include "main.h"

/**
* _abs - computes absolute value
* @x: computes the absolute number
*
* Return: on success 0
*/
int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
	}
	else if (x == 0)
	{
		x = 0;
	}
	else if (x > 0)
	{
		x = x * 1;
	}
	return (x);
}
