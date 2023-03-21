#include "main.h"
/**
 * main - check the code
 * print_alphabet: using the print_albhabet to print all alphabets in lowercase
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints all the alphabets in lowercase
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
	_putchar(c);
	}

	_putchar('\n');
}
