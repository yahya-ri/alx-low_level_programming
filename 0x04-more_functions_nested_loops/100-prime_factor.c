#include <stdio.h>

/**
 * main- look and print largest prime factor.
 * Return: ALways 0.
 */


int main(void)
{
	long int  num, num2;

	num = 612852475143;
	for (num2 = 2; num2 <= num; num2++)
	{
		if (num % num2 == 0)
		{
			num /= num2;
			num2--;
		}
	}
	printf("%ld\n", num2);
	return (0);
}
