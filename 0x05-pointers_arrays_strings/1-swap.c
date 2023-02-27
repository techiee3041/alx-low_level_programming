#include "main.h"


/**
 * swap_int - a function that swaps the value of two integers
 * @a: integer to swap with b
 * @b: value to swap with a
 *
 */


void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
