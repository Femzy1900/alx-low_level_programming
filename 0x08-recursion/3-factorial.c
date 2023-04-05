#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: start number
 * Return: -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
