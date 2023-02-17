#include <stdio.h>

/**
 * main - A program that writes two pairs of numbers
 *
 * Return: always returns (0)
 */
int main(void)
{
	int x;
	int y;
	int a;
	int b;

for (x = 0 ; x < 10; x++)
{
	for (y = 0 ; y <= 10 ; y++)
	{
		for (a = 0 ; a < 10 ; a++)
		{
			for (b = 0; b < 10 ; b++)
			{
				putchar('0' + x);
				putchar('0' + y);
				putchar(32);
				putchar('0' + a);
				putchar('0' + b);
				if (!(x == 9 && y == 8))
				{
					putchar(',');
					putchar(32);
				}
				b++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}

