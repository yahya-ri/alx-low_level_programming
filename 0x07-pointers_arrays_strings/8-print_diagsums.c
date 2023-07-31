#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagsums.
 * @a: integer.
 * @size: integer.
 * Return: no return.
 */


void print_diagsums(int *a, int size)
{
	int sum_primary = 0;
	int sum_secondary = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_primary += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_primary, sum_secondary);
}
