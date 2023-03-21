#include "main.h"
/**
 * print_alphabet - This program prints a-z
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
