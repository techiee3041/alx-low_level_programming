#include "main.h"

/**
 * *create_array - a fucntion that creates an array of chars
 * @size: size of array
 * @c: chars to enter
 * Return: returns array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
