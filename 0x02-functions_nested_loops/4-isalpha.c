#include "main.h"

/**
 *_isalpha - function  detects if a number is an alphabet
 * @c: represents the character passed
 * Return: returns 1 when the character is an alphabet and 0 when not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	} else
		return (0);
}
