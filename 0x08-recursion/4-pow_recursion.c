#include "main.h"

/**
 * _pow_recursion - function that finds x to power y
 *
 * @x: base number
 * @y: exponential number
 *
 * Return: returns result
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		result = x * _pow_recursion(x, y - 1);
	}
	return (result);
}
