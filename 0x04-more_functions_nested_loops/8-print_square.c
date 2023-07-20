#include "main.h"

/**
 * print_square - print a square
 * @size: is an int the size of the square.
 * Return: no return.
 */


void print_square(int size)
{
	int i, k;

	for (k = 0; k < size; k++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar(35);
		}
		if (k != size - 1)
			_putchar('\n');
	}
	_putchar('\n');

}
