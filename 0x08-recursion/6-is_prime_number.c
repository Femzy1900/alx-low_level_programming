#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: This is the input number
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	int deci, decim, d, dec;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n > 2)
	{
		decim = n % 2;
		deci = n % 3;
		d = n % 5;
		dec = n % 7;

		if (decim != 0 && deci != 0 && dec != 0 && d != 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
