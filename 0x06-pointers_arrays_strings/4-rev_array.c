#include "main.h"

/**
 * reverse_array - reverse an array of integers.
 * @n: is the number of elements of the array.
 * @a: an array of integers.
 * Return: no return.
 */


void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		-a[end] = temp;

		start++;
		end--;
	}
}
