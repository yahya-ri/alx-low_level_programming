#include "main.h"

/**
 * create_file - creates a file.
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it successed and -1 if it failed.
 */

int create_file(const char *filename, char *text_content)
{
	int file, error_check, bytes;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);


	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, permissions);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	bytes = 0;
	for (bytes = 0; text_content[bytes]; bytes++)
	{
	}

	if (bytes > 0)
	error_check = write(file, text_content, bytes);
	close(file);
	if (error_check == -1)
		return (-1);
	return (1);
}
