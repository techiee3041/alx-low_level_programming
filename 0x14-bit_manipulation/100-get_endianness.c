#include "main.h"

/**
 * get_endianness - this is a program that endianness
 * Return: return 0 if big endianness and 1 if little endianness
 */

int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
