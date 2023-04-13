#include <stdlib.h>
#include <stdio.h>
/**
*str_concat - function to concatonate two strings
*
*@s1: first string
*@s2: second string
*Return: returns NULL or the new string @newStr
*/
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0;
	int i, j;

	char *newStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len_s1) != '\0')
		len_s1++;

	while (*(s2 + len_s2) != '\0')
		len_s2++;

	newStr = malloc((len_s1 * sizeof(char)) + ((len_s2 + 1) * sizeof(char)));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		newStr[i] = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		newStr[i] = *(s2 + j);
		i++;
	}

	newStr[i] = '\0';
	return (newStr);


}

