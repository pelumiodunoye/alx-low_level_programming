#include <stdio.h>
#include <stdlib.h>

/**
 * _islower - this is the main
 * @i: this is the input
 * Return: void
 */

int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
