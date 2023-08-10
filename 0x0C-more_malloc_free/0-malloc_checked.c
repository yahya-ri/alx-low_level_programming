#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - will allocate memory.
 * @b: bytes.
 * Return: pointer to the allocated memory.
 * if the allocating fails will return 98.
 */

void *malloc_checked(unsigned int b)
{
	char *pointer_a;

	pointer_a = malloc(b);
	if (pointer_a == NULL)
	{
		exit(98);
	}
	else
	{
		return (pointer_a);
	}
}
