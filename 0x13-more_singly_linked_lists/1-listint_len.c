#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns number of elements in a linked list
 * @h: pointer to the first elemnt of the list
 *
 * Return: returns number of elements in the list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

