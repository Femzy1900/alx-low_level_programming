#include <stdio.h>
/**
 * main - This is the entry point of this program
 *
 * Return: 0 Always success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; --letter)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
