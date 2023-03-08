#include "main.h"

/**
 * _strlen_recursion - function that finds the length of a string
 *
 * @s: string to find length
 *
 * Return: return the length
 *
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
