#include "variadic_functions.h"

/**
 * sum_them_all - get sum of giving numbers.
 * @n: arguments.
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	while (i < n)
	{
		sum += va_arg(valist, int);
		i++;
	}

	va_end(valist);

	return (sum);
}
