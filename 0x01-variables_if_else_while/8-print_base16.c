#include <stdio.h>

/**
 * main - start point
 * Return: returns 0
 */

int main(void)
{
	char z;

	for (z = 0; z < 10; z++)
		putchar(z + '0');
	for (z = 'a'; z <= 'f'; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
