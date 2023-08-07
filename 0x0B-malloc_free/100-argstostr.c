#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments into a string.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int i, total_length = 0, current_position = 0;
	char *arg, *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			total_length++;
			arg++;
		}
		total_length++;
	}


	result = (char *)malloc(total_length + 1);
	if (result == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			result[current_position] = *arg;
			current_position++;
			arg++;
		}
		result[current_position] = '\n';
		current_position++;
	}

	result[current_position] = '\0';
	return (result);
}
