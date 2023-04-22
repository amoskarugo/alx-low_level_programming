#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function to concatenates
 *             all the arguments
 *
 * @counter: argument counter
 * @agv: arguments
 *
 * Return: a pointer to a new string
 *         or NULL if it fails
*/

char *argstostr(int counter, char **agv)
{
	int i, j, k, len;
	char *str;

	if (counter == 0 || agv == NULL)
		return (NULL);

	/*find length of vector + '\0' which makes it a 2d array*/
	len = 0;
	for (i = 0; i < counter; i++)
	{
		for (j = 0; agv[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < counter; i++)
	{
		for (j = 0; agv[i][j] != '\0'; j++)
		{
			str[k] = agv[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
