#include <stdlib.h>
#include <stdio.h>



/**
 * main - this is where the code goes
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
