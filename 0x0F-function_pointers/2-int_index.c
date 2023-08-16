#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function to be used
 * to compare values.
 *
 * Return: eement's first index
 * cmp returns 0.
 * If no elements matches return -1.
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		while (i < size)
		{
			if (cmp(array[i]))
			{
				return i;
			}
			i++;
		}
	}
	return (-1);
}
