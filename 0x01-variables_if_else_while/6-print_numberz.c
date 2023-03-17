#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
	putchar(i + '0');
	i++;
	}
	putchar('\n');
	return (0);
}
