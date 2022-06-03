#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is where the code is
 * Return: void
 */

int main(void)
{
	char c;
	     
	     for (c = 'a'; c <= 'z'; c++)
		     if (c != 'e')
			     if (c != 'q')
				     putchar(c);
	putchar('\n');

	return (0);
}
