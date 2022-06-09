#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks the code
 * @c: digit
 * Return: 1 if c is a digit and 0 if c is not a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c<= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
