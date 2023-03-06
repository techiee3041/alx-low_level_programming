#include "main.h"

/**
* _strspn - Get the length of a prefix substring.
* @s: string to be searched.
* @accept: prefix to be measured.
*
* Return: The number of bytes in s inital segment,which
*         consist only of bytes from accept.
*/


unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				len++;
				break;
			}
		p++;
		}
		if (*p == '\0')
		{
			return (len);
		}
		s++;
	}
	return (len);
}

