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
	char *conc;
	int sn1, sn2, n, i;

	sn1 = strlen(s1);
	sn2 = strlen(s2);
	n = sn1 + sn2 + 1;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	conc = malloc(n);

	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sn1; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < sn2; i++)
	{
		conc[i + sn1] = s2[i];
	}
	conc[n - 1] = '\0';

	return (conc);
}
