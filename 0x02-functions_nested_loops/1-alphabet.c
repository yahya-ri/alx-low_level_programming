#include "main.h"
/**
 * main- Entry point
 * Description 'print_alphabet will print the lowercase alphabet'
 * Return: always 0
 */

void print_alphabet(void)
{
	int lk;

	for (lk = 97; lk <= 122; lk++)
	{
		_putchar(lk);
	}
	_putchar('\n');

}
