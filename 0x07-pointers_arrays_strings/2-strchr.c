#include "main.h"
#include <stddef.h>

/**
 * *_strchr - function that checks for a character in a string
 * @s: string to be checked
 * @c:character to be checked
 *
 * Return: returns s if it is a a character and NULL fi not
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	if (c == '\0')
	{
		return s;
	}
	return NULL;
}

