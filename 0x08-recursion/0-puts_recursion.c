#include "main.h"

/**
 * _puts_recursion - program to print a string
 * @s: This is the string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
