#include <stdio.h>

/**
 * main - This is the entry point of the program
 *
 * Return: 0 Always Success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');
	return (0);
}
