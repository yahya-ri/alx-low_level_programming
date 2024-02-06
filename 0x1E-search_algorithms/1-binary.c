#include <stdio.h>
#include "search_algos.h"


/**
 * printarray - print array from specific index to another.
 * @array: pointer to an array of integers.
 * @start: the start index.
 * @end: the end index.
 */

void printarray(int *array, int start, int end);
void printarray(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%i", array[i]);
		if ((i) != end)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - binary search implementation.
 * @array: pointer to an array of integers.
 * @size: the size of the array.
 * @value: the value need to be found.
 * Return: the index of the value or -1 if didn't exist.
 */

int binary_search(int *array, size_t size, int value)
{
	int f, l, mid;

	f = 0;
	l = (int)size - 1;

	while (f <= l)
	{
		mid = (f + l) / 2;

		printarray(array, f, l);
		if (array[mid] < value)
		{
			f = mid + 1;
		}
		else if (array[mid] > value)
		{
			l = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
