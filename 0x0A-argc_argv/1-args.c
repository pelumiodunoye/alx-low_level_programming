#include <stdio.h>

/**
 * main - prints arguments
 * @argc: number
 * @argv: string
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[argc] = argv[argc];
	return (0);
}
