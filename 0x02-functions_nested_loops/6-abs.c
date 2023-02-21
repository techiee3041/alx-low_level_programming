#include "main.h"


/**
 * _abs - computes the value of an integer
 * @int: the value being tested
 * Return: when int < 0, returns int*-1, otherwise returns the value of integer
 */


int _abs(int x)
{

	if (x < 0)
		return (x * -1);
	else
		return (x);
}
