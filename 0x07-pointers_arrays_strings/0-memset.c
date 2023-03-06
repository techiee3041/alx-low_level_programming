#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: refrest to the pointer to be filled
 * @b: this is the constant byte
 * @n: this is the number of bytes
 * Return: returns s
 *
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
