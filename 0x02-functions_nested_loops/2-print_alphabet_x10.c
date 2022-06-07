#include <stdio.h>
#include <stdlib.h>


/**
 * prnt_alphabet_x10 - i have purposely removed a letter
 * Return: void
 */

void prnt_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
			putchar('\n');
		}
	}
}
