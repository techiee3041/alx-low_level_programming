#include "main.h"


/**
 * _islower - function explains whether a letter is lowercase
 * @c: the argument to be checked
 * Return: returns 1 if lowercase and 0 whn otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
		return (0);
}
