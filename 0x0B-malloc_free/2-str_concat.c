#include "main.h"
#include <string.h>

/**
 * *str_concat - function to concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: returns concateated string
 */

char *str_concat(char *s1, char *s2)
{
	char *join;
	int copy = 0;
	int length = 0;
	int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	join = malloc(sizeof(char) * length);

	if (join == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		join[copy++] = s1[i];

	for (i = 0; s2[i]; i++)
		join[copy++] = s2[i];

	return (join);
}
