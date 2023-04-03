#include "lists.h"
#include <stdio.h>

/**
 * size_t print_listint - functions that prints all elements of listint_t list
 * @h: pointer to the head of the list
 *
 * Return: returns number of nodes in the list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
