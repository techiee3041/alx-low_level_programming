#include "main.h"
#include <string.h>

/**
 * *_strdup- function that creates a copy to a new memory
 * @str: string to be copied
 * Return: returns new copy
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}
