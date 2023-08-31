#include "main.h"

/**
 * get_bit - get the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 * Return: the value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

