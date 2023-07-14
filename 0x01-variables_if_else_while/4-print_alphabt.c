#include <stdio.h>
/**
 * main - Entry point
 * Description: 'it will print the lowercase alphabet except e and q'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lk;

	for (lk = 97; lk <= 122; lk++)
	{
		if (lk == 101 || lk == 113)
		{
			continue;
		}
		else
		{
			putchar(lk);
		}
	}
	putchar('\n');
	return (0);
}
