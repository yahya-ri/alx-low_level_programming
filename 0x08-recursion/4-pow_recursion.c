#include "main.h"

/**
 * _pow_recursion - takes two arguments and returns
 * the power raised to the base number.
 * @x: base (integer).
 * @y: power (integer).
 * Return: the power raised to the base number.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
