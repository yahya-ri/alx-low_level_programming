#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters.
 * @filename: file name.
 * @letters: numbers of characters printed.
 * Return: numbers of characters printed, 0 if it failed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int cont;
	char *buffer;
	ssize_t idk, idk2, total;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	cont = open(filename, O_RDONLY);
	if (cont == -1)
	{
		free(buffer);
		return (0);
	}
	total = read(cont, buffer, letters);
	if (total == -1)
	{
		free(buffer);
		return (0);
	}
	if (total > 0)
		idk = write(STDOUT_FILENO, buffer, total);
	if (idk < total)
	{
		free(buffer);
		return (0);
	}

	idk2 = close(cont);
	if (idk2 == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (total);
}
