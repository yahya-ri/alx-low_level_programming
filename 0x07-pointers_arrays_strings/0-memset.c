#include "main.h"

/**
 * _memset - gonna set a value to memory.
 * @s: character.
 * @b: character.
 * @n: integer.
 *
 * Return: always returning @s.
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	if (n == 0)
	{
		return (s);
	}

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
