#include "main"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c!: The character to print
 * Return: 0 success
 * on error 1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
