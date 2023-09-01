#include "main.h"

/**
 * get_endianness - check the endianness.
 * Return: 0 if big endian 1 if little endian.
 */

int get_endianness(void)
{
	int n;
	char *byte_ptr;

	n = 1;
	byte_ptr = (char *) &n;

	return ((int)*byte_ptr);
}

