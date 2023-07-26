#include "main.h"
#include <string.h>
/**
 * _strncat - append 2 strings.
 * @dest: destination.
 * @src: source.
 * @n: is an integer.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
