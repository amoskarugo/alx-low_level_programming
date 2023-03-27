#include "main.h"

/**
*_strlen - returns the length of a string
* @s: string passed to the function
*Return: returns length as integer;
*/
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count++;
return (count);
}
