#include <stdio.h>
#include <stdlib.h>


/**
 * print_alphabet_x10 - my code goes thus
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			putchar("%i", i);
			putchar('\n');
		}
	}
}
