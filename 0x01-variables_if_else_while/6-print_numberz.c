#include  <stdio.h>
/**
 * main - This is the entry point of the program
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
