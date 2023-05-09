#include "main.h"

/**
 * append_text_to_file - Appends text at the tail of a file.
 * @filename: A pointer to the  file.
 * @text_content: The string to add to the tail of the file.
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wrt = write(fd, text_content, len);

	if (fd == -1 || wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
