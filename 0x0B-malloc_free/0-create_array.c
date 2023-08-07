#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters.
 *
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: pointer of an array of chars.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
		array[i] = c;

	return (array);
}
