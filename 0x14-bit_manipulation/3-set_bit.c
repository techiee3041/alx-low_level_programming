#include "main.h"

/**
 * set_bit - function that sets a bit to 1 at a index
 * @n: decimal value
 * @index: index to set 1
 * Return: returns 1 if true and -1 if an error occurred
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = 1 << index;

	*n |= bit;

	return (1);

}
