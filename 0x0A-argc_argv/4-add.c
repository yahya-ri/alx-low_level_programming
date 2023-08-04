#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int j, number;

	for (int i = 1; i < argc; i++)
	{
		bool valid_number = true;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				valid_number = false;
				break;
			}
		}

		if (valid_number)
		{
			number = atoi(argv[i]);
			if (number > 0)
				sum += number;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

