#include "main.h"
/**
 * print_rev - This program reverse a string
 * @s: This is the string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/*do nothing*/
	}
	--i;

	for ( ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
