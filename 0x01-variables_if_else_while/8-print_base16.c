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
	}
	for (lk = 97; lk <= 102; lk++)
	{
		putchar(lk);
	}
	putchar('\n');

	return (0);
}
