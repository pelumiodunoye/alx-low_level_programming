#include <stdio.h>
#include <main.h>

/**
 * _strncpy: copies the contents of two strings
 * @dest: first string
 * @src: second string
 * @n: length
 *
 *
 * Return: returns the function dest
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
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

