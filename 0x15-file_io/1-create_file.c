#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file
 * @text_content: content to be wrritten in the file
 * Return: 1 on succes, -1 whent it fails
 */
int create_file(const char *filename, char *text_content)
{
	int d, ans;
	size_t len = 0;
	mode_t md = S_IRUSR | S_IWUSR;

	if (!filename)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, md);
	if (d == -1)
	{
		perror("open");
		return (-1);
	}
	if (len > 0)
	{
		char *buffer = malloc(len * sizeof(char));

		if (!buffer)
		{
			perror("malloc");
			close(d);
			return (-1);
		}
		memcpy(buffer, text_content, len);
		ans = write(d, buffer, len);
		free(buffer);
	}
	else
	{
		ans = 1;
	}
	if (ans == -1)
	{
		perror("write");
		close(d);
		return (-1);
	}
	close(d);
	return (1);
}
