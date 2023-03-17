#include <stdio.h>

/**
 * main - This is the entry point of the program
 *
 * Return: 0 Always a success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
