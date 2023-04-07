#include <stdio.h>

/**
 * get_bit - this function returns the value of a bit at a given index
 * @n: decimal to check
 * @index: index at which to check
 * Return: rturns the value or negative 1 if error
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
