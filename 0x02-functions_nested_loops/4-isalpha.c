#include "main.h"

/**
 * _isalpha - Shows 1 if the input is c or C
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
