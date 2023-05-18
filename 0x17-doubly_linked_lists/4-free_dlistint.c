#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - function that frees linked list
 * @head: pointer to the head of a linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
