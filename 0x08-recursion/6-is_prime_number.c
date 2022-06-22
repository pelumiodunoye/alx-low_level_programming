#include <stdio.h>
/**
 * is_prime_number - checks if its a prime number
 * @n: number to be checked
 * Return: 1 if it's a prime number and 0 if its's not
 */

int is_prime_number(int n)
{
	int i = 4;

	if (n % i == 0)
		return (0);
	else if (i == n)
		return (1);
}

