#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of money to make change for an amount.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	if (argc == 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		num_coins++;
	}

	printf("%d\n", num_coins);
	return (0);
}
