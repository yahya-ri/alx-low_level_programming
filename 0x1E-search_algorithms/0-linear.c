#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - search for value's index.
 * @array: pointer to array of numbers.
 * @size: the size of the array.
 * @value: the value we are sarching for it is index.
 * Return: value's index or 1 if it didn't exist.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i <= size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);

		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
