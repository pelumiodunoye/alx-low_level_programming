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

	for (a = '0'; a <= '98'; a++)
	{

		for (b = '0'; b <= '99'; b++)
		{
			
			putchar(a);
			putchar(' ');
			putchar(b);
			
			if (a == '98' && b == '99')
				continue;
						
							putchar(',');
							putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
