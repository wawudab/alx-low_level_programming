#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - print if the number is postive, zero, or negative
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)

	{
		printf("%i is negative\n", n);
	}
	return (0);
}

