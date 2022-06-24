#include <stdio.h>

/**
 * main: prints the number of arguments
 * @argc: number of arguments present
 * @argv: string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc -1);
	argv[argc] = argv[argc];
	return (0);
}
