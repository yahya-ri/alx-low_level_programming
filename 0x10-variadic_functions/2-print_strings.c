#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line.
 * @separator: string that will be printed between each numbers.
 * @n: amount of strings that will be passed to the function.
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *str;

	va_start(valist, n);

	while (i < n)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(valist);
}
