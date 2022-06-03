#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is my code here
 * Return: void
 */

int main(void)
{

	int d;
	int g;

	for (d = '0'; d <= '9'; d++)
	{

		for (g = '0'; g <= '9'; g++)
		{
			if (d != g && d < g)
			{
				putchar(d);
				putchar(g);

				if (d != '6')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
