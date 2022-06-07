#include <stdio.h>
#include <stdlib.h>


/**
 * print_alphabet - is right  here
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
