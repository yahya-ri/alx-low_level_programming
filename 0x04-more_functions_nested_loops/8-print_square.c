#include "main.h"

/**
 * print_square - print a square
 * @size: is an int the size of the square.
 * Return: no return.
 */


void print_square(int size)
{
	int i, k;

	if (size == 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (k = 0; k < size; k++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}

}
