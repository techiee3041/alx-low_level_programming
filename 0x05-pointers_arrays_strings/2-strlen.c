#include "main.h"

/**
* _strlen - function that returns the length the length of a strength
* @s: string to discover the length
* Return: return the size of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

