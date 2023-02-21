#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: value to be passed
 * Return: returns the value of the digit
 */


int print_last_digit(int x)
{
	int result;

	result = x % 10;
	if (x < 0)
		result *= -1;

	_putchar(result + '0');
		return (result);
}
