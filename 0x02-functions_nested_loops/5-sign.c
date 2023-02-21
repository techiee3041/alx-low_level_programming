#include "main.h"

/**
 * print_sign - function that prints sign of a number
 * @n: number to be tested
 * Return: returns 1 if n > 0, 0 when n=zero and -1 if n<0
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
