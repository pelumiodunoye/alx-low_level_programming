#include <stdio.h>
#include <main.h>

/**
 * _strcat: concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: returns the function dest
 */

char *_strcat(char *dest, char *src);
{
	int i;
	int j;

	for (i = o; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i]=src[j];
			i++;
		}
	}
	dest[i]= '\0';
	return (dest);
}

