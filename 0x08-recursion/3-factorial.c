#include "main.h"

/**
 * factorial - function to  factorial of given number.
 * @n: an integer.
 * Return: will return factorial.
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
