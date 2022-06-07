#include <stdio.h>
#include <stdlib.h>

/**
 *print_sign - this is the main
 * @n: this is the input
 * Return: void
 */

int print_sign(int n)
{
	if (n > '48')
	{
		putchar('43');
		return (1);
	}

	else if (n == '48')
	{
		putchar('48');
		return (0);
	}

	else
	{
		putchar('45');
		return (-1);
	}
}
