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
	int d, ans, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (!text_content)
	{
		while (text_content[len])
			len++;
	}
	d = open(filename, O_WRONLY | O_APPEND);
	if (d == -1)
	{
		return (-1);
	}
	while (len > 0)
	{
		if (len > 1024)
		{
			ans = write(d, text_content, 1024);
		}
		else
		{
			ans = write(d, text_content, len);
		}

		if (ans == -1)
		{
			close(d);
			return (-1);
		}

		len -= ans;
		text_content += ans;
	}

	close(d);
	return (1);
}
