#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: decimal value
 * @index: index at which to set
 *
 * Return: returns 1 if true and -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = ~(1 << index);

	*n &= bit;

	return (1);
}
