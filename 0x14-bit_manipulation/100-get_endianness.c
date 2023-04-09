#include "main.h"

/**
 * get_endianness - this is a program that endianness
 * Return: return 0 if big endianness and 1 if little endianness
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *c = (char *)&b;

	if (*c)
		return (1);
	return (0);
}
