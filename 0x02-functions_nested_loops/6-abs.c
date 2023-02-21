#include "main.h"


/**
 * _abs - computes the value of an integer
 * @x: the value being tested
 * Return: when integer is less 0, returns x*-1, else returns integer value
 */


int _abs(int x)
{

	if (x < 0)
		return (x * -1);
	else
		return (x);
}
