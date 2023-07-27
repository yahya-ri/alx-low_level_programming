#include "main.h"
#include <stddef.h>

/**
 * _strncpy - append 2 strings.
 * @dest: destination.
 * @src: source.
 * @n: is an integer.
 * Return: the pointer to dest.
 */


char *_strncpy(char *dest, char *src, int n)
{

	int i;

	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
