#include "main.h"

/**
 * print_diagonal - print \.
 * @n: times diagonal line is printed.
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
