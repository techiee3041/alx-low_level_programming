#include "main.h"

/**
 * get_endianness - this is a program that endianness
 * Return: return 0 if big endianness and 1 if little endianness
 */

int get_endianness(void)
{
	int b;

	char *c;

	b = 1;

	c = (char *) &b;

	if (*c)
		return (1);
	else
		return (0);
}
