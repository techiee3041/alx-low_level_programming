#include <stdio.h>

/**
 * main - Writes a program that prints all possible different numbers
 * Return: returns 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 0 ; x < 9 ; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar('0' + x);
			putchar('0' + y);
			if (x < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
