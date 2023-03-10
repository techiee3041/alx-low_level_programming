#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it, excludes program name
 * @argc: Argument count input
 * @argv: Argument vector , array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
