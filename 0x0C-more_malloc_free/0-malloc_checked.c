#include "main.h"

/**
 * *malloc_checked -- function that allocates memory to malloc
 * @b: size to be allocated
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
