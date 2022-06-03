#include <stdlib.h>
#include <stdio.h>

/**
 * main - this is thd main
 * Return: void
 */

int main(void)
{

	int d;
	int g;
	int j;

	for (d = '0'; d <= '9'; d++)
	{

		for (g = '0'; g <= '9'; g++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (d < g && g < j)
				{
					putchar(d);
					putchar(g);
					putchar(j);

					if (d != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
