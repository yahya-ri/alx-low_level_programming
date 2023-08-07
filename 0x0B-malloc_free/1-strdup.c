#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: Pointer to the input string to duplicate.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *duplicate;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
