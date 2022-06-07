#include <stdio.h>
#include <stdlib.h>

/**
 *print_sign - this is the main
 * @n: this is the input
 * Return: void
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		putchar('0');
		return (0);
	}

	else
	{
		putchar('-');
		return (-1);
	}
}
