#include "main.h"

/**
* print_rev - function that prints a string in reverse form
*
* @s: string to be reversed
*/

#include <stdio.h>

void print_rev(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		temp = s[i];
		_putchar(temp);
	}
	_putchar('\n');
}

