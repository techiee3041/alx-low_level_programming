#include "main.h"

/**
 * array_range - Creates an array of integers ordered
 *               from min to max.
 * @min: The first array value
 * @max: The last value
 *
 * Return: Null If min > max or error, else
 *         a pointer to the new array
 */

int *array_range(int min, int max)
{
	int len = 0, i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		len++;
	}

	arr = malloc (sizeof(int) * len);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);


}
