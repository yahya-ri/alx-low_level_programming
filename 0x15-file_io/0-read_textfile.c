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

	total = 0;

	if (!filename || letters == 0)
		return (0);

	cont = open(filename, O_RDONLY);
	if (cont == -1)
		return (0);

	buffer = (char *)malloc(letters);
	if (!buffer)
	{
		close(cont);
		return (0);
	}

	while ((idk = read(cont, buffer, letters)) > 0)
	{
		idk2 = write(STDOUT_FILENO, buffer, idk);
		if (idk2 == -1)
		{
			close(cont);
			free(buffer);
			return (0);
		}
		total += idk2;
	}

	close(cont);
	free(buffer);

	return (total);
}
