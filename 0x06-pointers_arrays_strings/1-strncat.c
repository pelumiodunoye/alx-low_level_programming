#include <stdio.h>
#include <main.h>

/**
 * _strncat: concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: length
 *
 *
 * Return: returns the function dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i;
	int j;

	for (i = o; dest[i] != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			dest[i]=src[j];
			i++;
		}
	}
	dest[i]= '\0';
	return (dest);
}

