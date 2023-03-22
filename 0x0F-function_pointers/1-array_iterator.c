#include "function_pointers.h"

/**
 * array_iterator - executes a function give
 *                  as a parameter on each element of array
 * @array: array to execute
 * @size: size of array
 * @action: pointer to the function to execute
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

}
