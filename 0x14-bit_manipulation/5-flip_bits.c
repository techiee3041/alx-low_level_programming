#include "main.h"

/**
 * flip_bits - function that checks the number of bits flipped
 * @n: integer to flip
 * @m: integer to flip
 * Return: return the total number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int count;

	flip = n ^ m;
	count = 0;

	while (flip)
	{
		count += flip & 1;
		flip >>= 1;
	}

	return (count);
}
