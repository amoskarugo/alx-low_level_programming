#include<stdlib.h>
#include <stdio.h>

/**
*main - a program that prints all arguments
*
*@argc:
*@argv:
*
*Return: always return 0 (success)
*/


int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argv; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
