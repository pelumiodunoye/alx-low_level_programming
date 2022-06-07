#include <stdio.h>
#include <stdlib.h>

/*
 * This program prints a-z
 */

/**
 * print_alphabet - code  here
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar(' ');
}
