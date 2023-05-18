#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer tgo the head of the linked list
 * @index: index to get the node
 * Return: returns the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	i = 0;
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	return (node);
}
