#include "main.h"

/**
 * binary_to_uint - function that converts binary to decimal
 * @b: the binary in 0s and 1s to be converted
 * 
 * Return: returns the new decimal after conversion
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int total = 0;
	unsigned int decimal = 1;
	int i;
	unsigned int len = strlen(b);


	if (b == NULL)
	{
		return (0);
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total = total + decimal + '0';
		decimal = decimal * 2 + '0';
	}

	return (total);
}
