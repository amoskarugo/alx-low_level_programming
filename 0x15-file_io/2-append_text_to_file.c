#include "main.h"

/**
 * append_text_to_file - adds text to a file
 * 
 * @filename: name of the file
 * @text_content: text content
 * 
 * Return: ALWAYS (1) ON SUCCESS, -1 ON A FAILURE.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int	d;
	int	j;

	if (filename == NULL)
		return (-1);
	d = open(filename, O_WRONLY | O_APPEND);
	if (d == -1)
		return (-1);
	if (text_content != NULL)
	{
		j = write(d, text_content, strlen(text_content));
		if (j == -1)
			return (-1);
	}
	close(d);
	return (1);
}
