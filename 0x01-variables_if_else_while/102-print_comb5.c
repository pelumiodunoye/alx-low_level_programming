#include <stdlib.h>
#include <stdio.h>



/**
 * main - my code is here
 * Return: void
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	
	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
			if (a + b < c + d)
			putchar(',');
			putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
