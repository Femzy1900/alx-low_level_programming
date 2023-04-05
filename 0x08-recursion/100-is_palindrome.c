#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: The string input
 * Return: 1 if it is 0 if not
 */
int is_palindrome(char *s)
{
	int *v;

	v = strrev(s);

	if (*s == *v)
		return (1);
	else if (*s == " ")
		return (1);
	else
		return (0);
}
