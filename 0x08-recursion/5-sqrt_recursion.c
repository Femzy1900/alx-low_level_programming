#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number were dealing with
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int x;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	x = _sqrt_recursion(n - 1);

	return ((x * x <= n) ? x : x - 1);
}
