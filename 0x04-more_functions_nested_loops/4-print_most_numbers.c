#include <stdio.h>
#include <stdlib.h>
/*
 * we are going to print the ten
 * digits and a new line
 */

/**
 * print_numbers - code
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c!= '4')
		{
		putchar(c);
		}

	putchar('\n');
}
