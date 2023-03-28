#include "main.h"
/**
 * _puts - This program prints a string
 * @str: This is the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
