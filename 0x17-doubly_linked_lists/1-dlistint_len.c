#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: returns number of elemets
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
