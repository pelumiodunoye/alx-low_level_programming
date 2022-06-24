#include <stdio.h>
#include <stdlib.h>

/**
 * _isalpha - this is the main
 * @i: this is the input
 * Return: void
 */

int _isalpha(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}
