#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description 'print_alphabet will print the lowercase alphabet'
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		int lk;

		for (lk = 97; lk <= 122; lk++)
		{
			_putchar(lk);
		}
		_putchar('\n');
	}

}
