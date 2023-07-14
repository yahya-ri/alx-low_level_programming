#include <stdio.h>
/**
 * main - Entry point
 * Description: 'main function will print the lowercase alphabet'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lk;

	for (lk = 48; lk <= 57; lk++)
	{
		putchar(lk);
		if (lk == 57)
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
