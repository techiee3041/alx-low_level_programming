#include <stdio.h>

/**
 * main - Writes a program that prints all possible different numbers
 * Return: returns 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = y + 1; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');

			if (x == 8 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
