#include "main.h"
#include <stdio.h>
/**
 * print_rev - will reversed and print given string.
 * @str: an array of characters.
 * Return: no return.
 */

void print_rev(char *str)
{
	int siz = 0;

	while (count >= 0)
	{
		if (str[siz] == '\0')
			break;
		siz++;
	}
	for (siz--; siz >= 0; siz--)
		_putchar(s[siz]);
	_putchar('\n');
}
