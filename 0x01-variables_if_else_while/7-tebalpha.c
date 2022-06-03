#include <stdlib.h>
#include <stdio.h>



/**
 * main - all my code is in the main section
 * Return: void
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
