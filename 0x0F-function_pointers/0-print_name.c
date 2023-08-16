#include "function_pointers.h"

/**
 * print_name - will print a name.
 * @name: a name.
 * @f: function pointer.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
