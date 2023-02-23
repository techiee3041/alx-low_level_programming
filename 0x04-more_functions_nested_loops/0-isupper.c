#include "main.h"

/**
 *  _isupper - checks if a character is upper case
 *  @c: character to be tested
 *  Return: returns 1 if the character is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
