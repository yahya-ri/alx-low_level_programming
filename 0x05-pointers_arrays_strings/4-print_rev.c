#include "main.h"
#include <stdio.h>
/**
 * print_rev - will reversed and print given string.
 * @str: an array of characters.
 * Return: no return.
 */

void print_rev(char *str)
{
	char reversed_string[100];
	int i, j;
	size_t siz = 0;

	while (str[siz] != '\0')
	{
		siz++;
	}
	j = siz - 1;

	for (i = 0; i < (int)siz; i++)
	{
		reversed_string[i] = str[j];
		j--;
	}

	reversed_string[i] = '\0';
	printf("%s\n", reversed_string);
}
