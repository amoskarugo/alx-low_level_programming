#include<stdio.h>
#include<stdlib.h>

/**
*_strdup - a program to duplicate a string
*@str: array of string passed
*Return: return null if the string is empty else return
*        a pointer to new array of string
*/


char *_strdup(char *str)
{
int len, i;
len = 0;

char *s;
while (*(str + len) != '\0')
	len++;
s = malloc(sizeof(char) * len);
if (s == NULL)
	return (NULL);

for (i = 0; i < len; i++)
	s[i] = *(str + i);


s[i] = '\0';
return (s);
}

