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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int digit = n % 10;

	if (digit > 5)
	{
	prinf("Last digit of %i is %i and is greater than 5", n, digit);
	}
	else if (digit == 0)
	{
	printf("Last digit of %i is %i and is 0", n, digit);
	}
	else
	{
	printf("Last digit of %i is %i and is less than 6 and not 0", n, digit);
	}
	return (0);
}
