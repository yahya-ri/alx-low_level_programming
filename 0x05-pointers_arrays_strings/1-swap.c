#include "main.h"

/**
 *
 *
 *
 */

void swap_int(int *a, int *b)
{
	int gu[2];
	gu[0] = *a;
	gu[1] = *b;

	*a = gu[1];
	*b = gu[0];

}
