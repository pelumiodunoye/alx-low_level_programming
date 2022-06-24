#include <stdlib.h>

/**
 * _isdigit - code in here
 * @c: this is the input
 * Return: 1 if true and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
