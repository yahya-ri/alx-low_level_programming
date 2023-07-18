#include "main.h"

/**
 * times_table - Print the 9 time
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, gt;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			gt = a * b;
			_putchar(44);
			_putchar(32);
			if (gt <= 9)
			{
				_putchar(32);
				_putchar(gt + 48);
			}
			else
			{
				_putchar ((gt / 10) + 48);
				_putchar ((gt % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
