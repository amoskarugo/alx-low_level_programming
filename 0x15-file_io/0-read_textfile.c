#include "main.h"

/**
*read_textfile - a function that reads a textfile and prints it to the
*POSIX standard output
*@filename: file to read from
*@letters: number of letters to print
*Return: return number of letters it could print, NULL if file is empty and
*0 if file cannot be opened or read or if it fails to print number of bytes
*expected
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char ch;

	fptr = fopen(filename, "r");
	if (!fptr)
		return (0);
	if (fptr == NULL)
		return (0);


	while ((ch = fgetc(fptr)) <= letters)
	{
		if (!(write(1, ch, letters)))
			return (0);

		else
			write(1, ch, letters);
	}
	return (letters);
}
