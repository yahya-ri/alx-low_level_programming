#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if the file exists and -1 if the file doesn't exist
 * or if it failed.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, cont, error_check;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (cont = 0; text_content[cont]; cont++)
		{
		}

		error_check = write(file, text_content, cont);

		if (error_check == -1)
			return (-1);
	}

	close(file);

	return (1);
}
