#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line.
 * @separator: string that need to be printed between each numbers.
 * @n: amount of integers that will be passed to the function.
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	va_start(valist, n);

	while (i < n)
	{
		printf("%d", va_arg(valist, int));
		
		if (separator && i < n - 1)
			printf("%s", separator);
		
		i++;
	}

	printf("\n");
	va_end(valist);
}
