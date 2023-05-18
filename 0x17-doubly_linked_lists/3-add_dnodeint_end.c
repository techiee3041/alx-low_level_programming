#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: pointer to the first node
 * @n: data to add
 * Return: returns address of new node =
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = newnode;
	newnode->prev = tail;
	return (newnode);
}
