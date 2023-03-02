#include "main.h"


/**
 * *_strncat - a function that concatenates two strings
 * @dest: pointer to destination tobe appended upon.
 * @src: pointer to string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: returns dest
 */


char *_strncat(char *dest, char *src, int n)
{
	char *arr = dest;
	int i;

	while (*arr)
	{
		arr++;
	}

	i = 0;

	while (*src && i < n)
	{
		*arr++ = *src++;

		i++;
	}
	*arr = '\0';

	return (dest);

}
