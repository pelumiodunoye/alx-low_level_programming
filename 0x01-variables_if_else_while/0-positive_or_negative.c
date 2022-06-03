#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
 * this program checks if a number is positive
 *  or negative and the number
 *  to be checked is generated at random
 */


/**
 * main - This contains all the main code
 * Return: void
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
