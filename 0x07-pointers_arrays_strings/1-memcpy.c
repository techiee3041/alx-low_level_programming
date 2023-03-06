#include "main.h"


/**
 * *_memcpy - function that copies memeory data
 * @dest: pointer to receive the copied address
 * @src: pointer to be copied
 * @n: number of bytes to be copied
 *
 * Return: returns pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
