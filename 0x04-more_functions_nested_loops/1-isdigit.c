#include "main.h"

/**
 * _isdigit - checks whether the value given is a digit
 *
 * @c: value to be tested
 *
 * Return: returnns 1 if its a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
