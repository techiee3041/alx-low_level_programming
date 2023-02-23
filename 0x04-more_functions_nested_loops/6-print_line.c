#include "main.h"


/**
 * print_line - prints a straight line
 *
 * @n: value to be tested
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n--)
		_putchar('_');
	_putchar('\n');
}
