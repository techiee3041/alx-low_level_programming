#include "main.h"

/**
 * factorial - function that finds the factorial of a number
 *
 * @n: integer to find it's factorial
 *
 * Return: returns the factorial
 *
 */

int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		result = n * factorial(n - 1);
	}
	return (result);
}
