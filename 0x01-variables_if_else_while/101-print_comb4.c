#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is where my code is preserved
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

			if (d != g != j && d < g < j)
			{
				putchar(d);
				putchar(g);
				putchar(j);

				if (d != '8')
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
