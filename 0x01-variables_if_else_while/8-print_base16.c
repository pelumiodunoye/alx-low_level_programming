#include <stdlib.h>
#include <stdio.h>



/**
 * main - This contains my code
 * Return: void
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
