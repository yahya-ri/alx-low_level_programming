#include "main.h"

/**
 * swap_int - swap *a and *b.
 * @a: is an integer.
 * @b: is an integer.
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int gu[2];
	
	gu[0] = *a;
	gu[1] = *b;

	*a = gu[1];
	*b = gu[0];

}
