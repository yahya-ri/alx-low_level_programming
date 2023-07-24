#include "main.h"
#include <stddef.h>

/**
 * _strlen - get length of string.
 * @str: is a string.
 * Return: returns the length.
 */

int _strlen(char *str)
{
	size_t siz = 0;

	while (str[siz] != '\0')
	{
		siz++;
	}

	return (siz);
}
