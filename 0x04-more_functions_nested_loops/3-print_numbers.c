#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - code
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	putchar('\n');
}
